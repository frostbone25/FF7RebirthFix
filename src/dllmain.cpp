#include "stdafx.h"
#include "helper.hpp"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <inipp/inipp.h>
#include <safetyhook.hpp>

#define spdlog_confparse(var) spdlog::info("Config Parse: {}: {}", #var, var)

HMODULE exeModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Fix details
std::string sFixName = "FF7RebirthFix";
std::string sFixVersion = "0.0.6";
std::filesystem::path sFixPath;

// Ini
inipp::Ini<char> ini;
std::string sConfigFile = sFixName + ".ini";

// Logger
std::shared_ptr<spdlog::logger> logger;
std::string sLogFile = sFixName + ".log";
std::filesystem::path sExePath;
std::string sExeName;

// Aspect ratio / FOV / HUD
std::pair DesktopDimensions = { 0,0 };
const float fPi = 3.1415926535f;
const float fNativeAspect = 1.7777778f;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDWidthOffset;
float fHUDHeight;
float fHUDHeightOffset;
float fHUDScale;

// Ini variables
bool bFixAspect;
bool bFixHUD;
bool bFixMovies;
float fFramerateLimit = 120.00f;
bool bGlobalFOVMulti;
float fFOVMulti;
bool bAutoVignette;
float fVignetteStrength;
float fHUDResScale;

// Variables
int iCurrentResX;
int iCurrentResY;
int iCompositeLayerX = 1920;
int iCompositeLayerY = 1080;
int iPrevCompositeLayerX;
int iPrevCompositeLayerY;
bool bConsoleIsOpen = false;
bool bMovieIsPlaying = false;
int iScreenMode;
bool bHUDNeedsResize = false;

void Logging()
{
    // Get path to DLL
    WCHAR dllPath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, dllPath, MAX_PATH);
    sFixPath = dllPath;
    sFixPath = sFixPath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(exeModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // Spdlog initialisation
    try {
        logger = spdlog::basic_logger_st(sFixName.c_str(), sExePath.string() + sLogFile, true);
        spdlog::set_default_logger(logger);
        spdlog::flush_on(spdlog::level::debug);

        spdlog::info("----------");
        spdlog::info("{:s} v{:s} loaded.", sFixName.c_str(), sFixVersion.c_str());
        spdlog::info("----------");
        spdlog::info("Log file: {}", sFixPath.string() + sLogFile);
        spdlog::info("----------");
        spdlog::info("Module Name: {0:s}", sExeName.c_str());
        spdlog::info("Module Path: {0:s}", sExePath.string());
        spdlog::info("Module Address: 0x{0:x}", (uintptr_t)exeModule);
        spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(exeModule));
        spdlog::info("----------");
    }
    catch (const spdlog::spdlog_ex& ex) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        FreeLibraryAndExitThread(thisModule, 1);
    }  
}

void Configuration()
{
    // Inipp initialisation
    std::ifstream iniFile(sFixPath / sConfigFile);
    if (!iniFile) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVersion.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sFixPath.string().c_str() << std::endl;
        spdlog::error("ERROR: Could not locate config file {}", sConfigFile);
        spdlog::shutdown();
        FreeLibraryAndExitThread(thisModule, 1);
    }
    else {
        spdlog::info("Config file: {}", sFixPath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Parse config
    ini.strip_trailing_comments();
    spdlog::info("----------");

    // Load settings from ini
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bFixHUD);
    inipp::get_value(ini.sections["Fix HUD"], "ResScale", fHUDResScale);
    inipp::get_value(ini.sections["Fix Movies"], "Enabled", bFixMovies);
    inipp::get_value(ini.sections["Framerate"], "FPS", fFramerateLimit);
    inipp::get_value(ini.sections["FOV"], "Global", bGlobalFOVMulti);
    inipp::get_value(ini.sections["FOV"], "Multiplier", fFOVMulti);
    inipp::get_value(ini.sections["Vignette"], "Auto", bAutoVignette);
    inipp::get_value(ini.sections["Vignette"], "Strength", fVignetteStrength);

    // Clamp settings to avoid breaking things
    if (fHUDResScale != 0.00f)
        fHUDResScale = std::clamp(fHUDResScale, 0.00f, 5.00f);
    fVignetteStrength = std::clamp(fVignetteStrength, 0.00f, 1.00f);

    // Log ini parse
    spdlog_confparse(bFixAspect);
    spdlog_confparse(bFixHUD);
    spdlog_confparse(fHUDResScale);
    spdlog_confparse(bFixMovies);
    spdlog_confparse(fFramerateLimit);
    spdlog_confparse(bGlobalFOVMulti);
    spdlog_confparse(fFOVMulti);
    spdlog_confparse(bAutoVignette);
    spdlog_confparse(fVignetteStrength);

    spdlog::info("----------");
}

void CalculateAspectRatio(bool bLog)
{
    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // Log details about current resolution
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("Current Resolution: Resolution: {:d}x{:d}", iCurrentResX, iCurrentResY);
        spdlog::info("Current Resolution: iScreenMode: {}", iScreenMode);
        spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
        spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
        spdlog::info("----------");
    }

    // Signal for HUD resize
    bHUDNeedsResize = true;
}

void CalculateHUD(bool bLog)
{
    const int MAX_RENDER_TARGET_SIZE = 8192;
    float ResScale = 1.00f;

    if (fHUDResScale == 0.00f) {
        // Calculate a suggested resolution scale
        if (fAspectRatio > fNativeAspect)
            ResScale = fAspectMultiplier;
        else if (fAspectRatio < fNativeAspect)
            ResScale = 1.00f / fAspectMultiplier;
    }
    else {
        // Apply user-defined resolution scale
        ResScale = fHUDResScale;
    }

    // Set render target dimensions
    if (fAspectRatio > fNativeAspect) {
        iCompositeLayerX = iCurrentResX;
        iCompositeLayerY = static_cast<int>(iCurrentResX / fNativeAspect);
    }
    else if (fAspectRatio < fNativeAspect) {
        iCompositeLayerX = static_cast<int>(iCurrentResY * fNativeAspect);
        iCompositeLayerY = iCurrentResY;
    }

    // Apply resolution scale
    iCompositeLayerX = static_cast<int>(iCompositeLayerX * ResScale);
    iCompositeLayerY = static_cast<int>(iCompositeLayerY * ResScale);

    // Don't allow resolution of render target to exceed 8192 on X/Y axis so that people don't kill performance and thrash VRAM
    if (iCompositeLayerX > MAX_RENDER_TARGET_SIZE || iCompositeLayerY > MAX_RENDER_TARGET_SIZE) {
        float scaleFactorX = static_cast<float>(MAX_RENDER_TARGET_SIZE) / iCompositeLayerX;
        float scaleFactorY = static_cast<float>(MAX_RENDER_TARGET_SIZE) / iCompositeLayerY;

        float clampedResScale = std::min(scaleFactorX, scaleFactorY);

        iCompositeLayerX = static_cast<int>(iCompositeLayerX * clampedResScale);
        iCompositeLayerY = static_cast<int>(iCompositeLayerY * clampedResScale);
    }

    // Calculate HUD size and offsets to position HUD within render target
    if (fAspectRatio > fNativeAspect) {
        fHUDWidth = std::ceilf((static_cast<float>(iCompositeLayerX) / fAspectRatio) * fNativeAspect);
        fHUDHeight = std::ceilf(static_cast<float>(iCompositeLayerX) / fAspectRatio);

        fHUDWidthOffset = (static_cast<float>(iCompositeLayerX) - fHUDWidth) / 2.00f;
        fHUDHeightOffset = (static_cast<float>(iCompositeLayerY) - fHUDHeight) / 2.00f;
    }
    else if (fAspectRatio < fNativeAspect) {
        fHUDWidth = std::ceilf(static_cast<float>(iCompositeLayerY) * fAspectRatio);
        fHUDHeight = std::ceilf((static_cast<float>(iCompositeLayerY) * fAspectRatio) / fNativeAspect);

        fHUDWidthOffset = (static_cast<float>(iCompositeLayerX) - fHUDWidth) / 2.00f;
        fHUDHeightOffset = (static_cast<float>(iCompositeLayerY) - fHUDHeight) / 2.00f;
    }

    // Calculate HUD scale
    fHUDScale = std::round(fHUDHeight * (1.00f / 1080.00f) * 10000.00f) / 10000.00f;

    // Log details about current HUD size
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("HUD: Resolution: {}x{} - ResScale: {}", iCompositeLayerX, iCompositeLayerY, ResScale);
        spdlog::info("HUD: fHUDWidth: {}", fHUDWidth);
        spdlog::info("HUD: fHUDHeight: {}", fHUDHeight);
        spdlog::info("HUD: fHUDWidthOffset: {:.2f}", fHUDWidthOffset);
        spdlog::info("HUD: fHUDHeightOffset: {:.2f}", fHUDHeightOffset);
        spdlog::info("HUD: fHUDScale: {:.5f}", fHUDScale);
        spdlog::info("----------");
    }

    // Signal that HUD resize is done
    bHUDNeedsResize = false;
}

void CurrentResolution()
{
    // Grab desktop resolution
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();

    // Replace 3840x2160 windowed option with desktop resolution
    std::uint8_t* WindowedResListScanResult = Memory::PatternScan(exeModule, "C7 ?? ?? ?? 00 0F 00 00 C7 ?? ?? ?? 70 08 00 00");
    if (WindowedResListScanResult) {
        spdlog::info("Windowed Resolution List: Address is {:s}+{:x}", sExeName.c_str(), WindowedResListScanResult - (std::uint8_t*)exeModule);
        Memory::Write(WindowedResListScanResult + 0x4, DesktopDimensions.first);
        Memory::Write(WindowedResListScanResult + 0xC, DesktopDimensions.second);
    }
    else {
        spdlog::error("Windowed Resolution List: Pattern scan failed.");
    }

    // Get current resolution
    std::uint8_t* CurrentResolutionScanResult = Memory::PatternScan(exeModule, "89 ?? ?? ?? ?? ?? 8B ?? 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? C6 ?? ?? ?? ?? ?? 00 E8 ?? ?? ?? ??");
    if (CurrentResolutionScanResult) {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), CurrentResolutionScanResult - (std::uint8_t*)exeModule);
        static SafetyHookMid CurrentResolutionMidHook{};
        CurrentResolutionMidHook = safetyhook::create_mid(CurrentResolutionScanResult,
            [](SafetyHookContext& ctx) {
                // Read resolution
                int iResX = static_cast<int>(ctx.rsi);
                int iResY = static_cast<int>(ctx.rdi);

                iScreenMode = static_cast<int>(ctx.rbx);

                // If using borderless, use the desktop resolution
                if (iScreenMode == 1) {
                    iResX = DesktopDimensions.first;
                    iResY = DesktopDimensions.second;
                }

                // Log resolution
                if (iResX != iCurrentResX || iResY != iCurrentResY) {
                    iCurrentResX = iResX;
                    iCurrentResY = iResY;
                    CalculateAspectRatio(true);
                }
            });
    }
    else {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }
}

void AspectRatioFOV()
{
    if (bFixAspect || bGlobalFOVMulti) {
        // Aspect ratio / FOV
        std::uint8_t* AspectRatioFOVScanResult = Memory::PatternScan(exeModule, "C5 FA ?? ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ?? 0F B6 ?? ?? ?? ?? ?? 33 ?? ?? 83 ?? 01");
        if (AspectRatioFOVScanResult) {
            spdlog::info("Aspect Ratio/FOV: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(AspectRatioFOVScanResult,
                [](SafetyHookContext& ctx) {
                    // Fix vert- FOV when wider than 16:9
                    if (bFixAspect && fAspectRatio > fNativeAspect)
                        ctx.xmm1.f32[0] = atanf(tanf(ctx.xmm1.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                    
                    if (bGlobalFOVMulti)
                        ctx.xmm1.f32[0] *= fFOVMulti;
                });

            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioFOVScanResult + 0xB,
                [](SafetyHookContext& ctx) {
                    if (bFixAspect && !bMovieIsPlaying)
                        ctx.rax = *(uint32_t*)(&fAspectRatio);
                });
        }
        else {
            spdlog::error("Aspect Ratio/FOV: Pattern scan failed.");
        }

        // White screen bug with TAA
        // TODO: This is kind of a hack solution. NSight/RenderDoc for more info?
        std::uint8_t* WhiteScreenBugScanResult = Memory::PatternScan(exeModule, "C7 45 ?? 38 04 00 00 48 8D ?? ?? ?? ?? ?? 75 ?? 48 8D ?? ?? ?? ?? ?? 45 33 ??");
        if (WhiteScreenBugScanResult) {
            spdlog::info("White Screen Bug: Address is {:s}+{:x}", sExeName.c_str(), WhiteScreenBugScanResult - (std::uint8_t*)exeModule);
            Memory::PatchBytes(WhiteScreenBugScanResult + 0x3, "\x39", 1);
            spdlog::info("White Screen Bug: Patched instruction.");
        }
        else {
            spdlog::error("White Screen Bug: Pattern scan failed.");
        }
    }

    if (bAutoVignette || fVignetteStrength != 1.00f) {
        // Vignette 
        std::uint8_t* VignetteScanResult = Memory::PatternScan(exeModule, "4C 89 ?? ?? ?? ?? ?? 4C 89 ?? ?? ?? ?? ?? 4C 89 ?? ?? ?? ?? ?? 44 89 ?? ?? ?? ?? ?? C5 FA ?? ?? ?? ?? ?? ?? 4C 89 ?? ?? ?? ?? ??");
        if (VignetteScanResult) {
            spdlog::info("Vignette: Address is {:s}+{:x}", sExeName.c_str(), VignetteScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid VignetteMidHook{};
            VignetteMidHook = safetyhook::create_mid(VignetteScanResult,
                [](SafetyHookContext& ctx) {
                    if (!bAutoVignette)
                        *reinterpret_cast<float*>(ctx.rbx + 0x464) = fVignetteStrength;
                    else if (bAutoVignette && fAspectRatio > fNativeAspect)
                        *reinterpret_cast<float*>(ctx.rbx + 0x464) = 1.00f / fAspectMultiplier;
                });
        }
        else {
            spdlog::error("Vignette: Pattern scan failed.");
        }
    }

    if (!bGlobalFOVMulti && fFOVMulti != 1.00f) {
        // Gameplay FOV
        std::uint8_t* GameplayFOVScanResult = Memory::PatternScan(exeModule, "C5 FA ?? ?? ?? ?? ?? ?? C5 FA ?? ?? ?? ?? ?? ?? C5 CA ?? ?? ?? ?? ?? ?? C5 FA ?? ?? ?? ?? ?? ?? C5 FA ?? ?? ?? C5 FA ?? ?? ?? ?? ?? ?? 45 ?? ??");
        if (GameplayFOVScanResult) {
            spdlog::info("Gameplay FOV: Address is {:s}+{:x}", sExeName.c_str(), GameplayFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid GameplayFOVMidHook{};
            GameplayFOVMidHook = safetyhook::create_mid(GameplayFOVScanResult,
                [](SafetyHookContext& ctx) {
                    ctx.xmm0.f32[0] *= fFOVMulti;
                });
        }
        else {
            spdlog::error("Gameplay FOV: Pattern scan failed.");
        }

        // Chocobo FOV
        std::uint8_t* ChocoboFOVScanResult = Memory::PatternScan(exeModule, "89 ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 44 ?? ?? ?? 75 ?? E8 ?? ?? ?? ??");
        if (ChocoboFOVScanResult) {
            spdlog::info("Gameplay FOV: Chocobo: Address is {:s}+{:x}", sExeName.c_str(), ChocoboFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid ChocoboFOVMidHook{};
            ChocoboFOVMidHook = safetyhook::create_mid(ChocoboFOVScanResult,
                [](SafetyHookContext& ctx) {
                    float fov = *reinterpret_cast<float*>(&ctx.rax);
                    fov *= fFOVMulti;
                    ctx.rax = *(uint32_t*)&fov;
                });
        }
        else {
            spdlog::error("Gameplay FOV: Chocobo: Pattern scan failed.");
        }
    }
}

void HUD()
{
    if (bFixHUD) {
        // HUD Composite Layer
        std::uint8_t* HUDCompositeLayerScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? ?? ?? ?? 48 8D ?? ?? ?? ?? ?? C5 ?? ?? ?? ?? ?? ?? ?? 8B ?? ?? ?? ?? ?? 4C 8D ?? ?? 48 89 ?? ?? 41 ?? 01 00 00 00");
        if (HUDCompositeLayerScanResult) {
            spdlog::info("HUD: Composite Layer: Address is {:s}+{:x}", sExeName.c_str(), HUDCompositeLayerScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDCompositeLayerMidHook{};
            HUDCompositeLayerMidHook = safetyhook::create_mid(HUDCompositeLayerScanResult,
                [](SafetyHookContext& ctx) {
                    if (ctx.rbx + 0x200 && !bMovieIsPlaying && fAspectRatio != fNativeAspect) {
                        // Calculate new HUD size if resolution changed
                        if (bHUDNeedsResize)
                            CalculateHUD(true); 

                        // Set render target dimensions. 
                        *reinterpret_cast<int*>(ctx.rbx + 0x200) = iCompositeLayerX;
                        *reinterpret_cast<int*>(ctx.rbx + 0x204) = iCompositeLayerY;
                    }
                });
        }
        else {
            spdlog::error("HUD: Composite Layer: Pattern scan failed.");
        }

        // Extra Composite Layer BG
        std::uint8_t* ExtraCompositeLayerBackgroundScanResult = Memory::PatternScan(exeModule, "4C 8D ?? ?? ?? ?? ?? BE 01 00 00 00 48 8D ?? ?? ?? 40 88 ?? ?? ?? 66 89 ?? ?? ?? C6 44 ?? ?? 00");
        if (ExtraCompositeLayerBackgroundScanResult) {
            spdlog::info("HUD: Extra Composite Layer: Background: Address is {:s}+{:x}", sExeName.c_str(), ExtraCompositeLayerBackgroundScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid ExtraCompositeLayerBackgroundMidHook{};
            ExtraCompositeLayerBackgroundMidHook = safetyhook::create_mid(ExtraCompositeLayerBackgroundScanResult,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        // Set render target dimensions. 
                        ctx.rdx = (static_cast<uintptr_t>(iCompositeLayerY) << 32) | (static_cast<uintptr_t>(iCompositeLayerX) & 0xFFFFFFFF);
                    }
                });
        }
        else {
            spdlog::error("HUD: Extra Composite Layer: Background: Pattern scan failed.");
        }

        // Extra Composite Layer FG
        std::uint8_t* ExtraCompositeLayerForegroundScanResult = Memory::PatternScan(exeModule, "4C 8D ?? ?? ?? ?? ?? BE 01 00 00 00 48 8D ?? ?? ?? 40 88 ?? ?? ?? 66 89 ?? ?? ?? C6 44 ?? ?? 00");
        if (ExtraCompositeLayerForegroundScanResult) {
            spdlog::info("HUD: Extra Composite Layer: Foreground: Address is {:s}+{:x}", sExeName.c_str(), ExtraCompositeLayerForegroundScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid ExtraCompositeLayerForegroundMidHook{};
            ExtraCompositeLayerForegroundMidHook = safetyhook::create_mid(ExtraCompositeLayerForegroundScanResult,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        // Set render target dimensions. 
                        ctx.rdx = (static_cast<uintptr_t>(iCompositeLayerY) << 32) | (static_cast<uintptr_t>(iCompositeLayerX) & 0xFFFFFFFF);
                    }
                });
        }
        else {
            spdlog::error("HUD: Extra Composite Layer: Foreground: Pattern scan failed.");
        }

        // Extra Composite Layer Rect
        std::uint8_t* ExtraCompositeLayerRectScanResult = Memory::PatternScan(exeModule, "C5 ?? ?? ?? ?? C7 ?? ?? 00 00 80 3F 48 ?? ?? ?? ?? ?? ?? 48 ?? ?? E8 ?? ?? ?? ??");
        if (ExtraCompositeLayerRectScanResult) {
            spdlog::info("HUD: Extra Composite Layer: Rect: Address is {:s}+{:x}", sExeName.c_str(), ExtraCompositeLayerRectScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid ExtraCompositeLayerRectMidHook{};
            ExtraCompositeLayerRectMidHook = safetyhook::create_mid(ExtraCompositeLayerRectScanResult + 0x5,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        *reinterpret_cast<float*>(ctx.rcx + 0x10) = fHUDWidthOffset;                    // Left
                        *reinterpret_cast<float*>(ctx.rcx + 0x14) = fHUDHeightOffset;                   // Top
                        *reinterpret_cast<float*>(ctx.rcx + 0x1C) = fHUDWidth + fHUDWidthOffset;        // Right
                        *reinterpret_cast<float*>(ctx.rcx + 0x20) = fHUDHeight + fHUDHeightOffset;      // Bottom
                    }
                });
        }
        else {
            spdlog::error("HUD: Extra Composite Layer: Rect: Pattern scan failed.");
        }

        // HUD Size
        std::uint8_t* HUDSizeScanResult = Memory::PatternScan(exeModule, "C5 FA 11 ?? ?? ?? ?? ?? ?? C5 FA 11 ?? ?? ?? ?? ?? ?? C5 FA ?? ?? ?? ?? C5 FA ?? ?? ?? ?? C5 FA ?? ?? ?? ?? E8 ?? ?? ?? ??");
        if (HUDSizeScanResult) {
            spdlog::info("HUD: Size: Address is {:s}+{:x}", sExeName.c_str(), HUDSizeScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDSizeMidHook{};
            HUDSizeMidHook = safetyhook::create_mid(HUDSizeScanResult,
                [](SafetyHookContext& ctx) {
                    if (!bMovieIsPlaying) {
                        if (fAspectRatio != fNativeAspect) {
                            *reinterpret_cast<float*>(ctx.rsp + 0x78) = fHUDScale;
                            *reinterpret_cast<float*>(ctx.rsp + 0x7C) = fHUDWidthOffset;
                            *reinterpret_cast<float*>(ctx.rsp + 0x80) = fHUDHeightOffset;
                        }
                    }
                });
        }
        else {
            spdlog::error("HUD: Size: Pattern scan failed.");
        }

        // Menu Highlights
        std::uint8_t* HUDMenuHighlightsScanResult = Memory::PatternScan(exeModule, "C5 FA ?? ?? ?? ?? C4 E2 ?? ?? ?? ?? ?? 8B ?? ?? ?? ?? ?? 48 8D ?? ?? C5 ?? ?? ?? C5 ?? ?? ?? C5 FA ?? ?? ?? ??");
        if (HUDMenuHighlightsScanResult) {
            spdlog::info("HUD: Menu Highlights: Address is {:s}+{:x}", sExeName.c_str(), HUDMenuHighlightsScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDMenuHighlightsWidthMidHook{};
            HUDMenuHighlightsWidthMidHook = safetyhook::create_mid(HUDMenuHighlightsScanResult,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        ctx.xmm0.f32[0] -= fHUDWidthOffset;
                        ctx.xmm4.f32[0] = 1.00f / fHUDScale;
                    }
                });

            static SafetyHookMid HUDMenuHighlightsHeightMidHook{};
            HUDMenuHighlightsHeightMidHook = safetyhook::create_mid(HUDMenuHighlightsScanResult + 0x25,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        ctx.xmm0.f32[0] -= fHUDHeightOffset;
                    }
                });
        }
        else {
            spdlog::error("HUD: Menu Highlights: Pattern scan failed.");
        }

        // Map
        std::uint8_t* HUDMapScanResult = Memory::PatternScan(exeModule, "E8 ?? ?? ?? ?? C5 FA ?? ?? ?? ?? C5 FA ?? ?? 48 8B ?? ?? ?? ?? ?? C5 FA ?? ?? ?? C5 FA ?? ?? C5 FA ?? ?? ?? 68");
        if (HUDMapScanResult) {
            spdlog::info("HUD: Map: Address is {:s}+{:x}", sExeName.c_str(), HUDMapScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDMapMidHook{};
            HUDMapMidHook = safetyhook::create_mid(HUDMapScanResult + 0x5,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        ctx.xmm0.f32[0] = fHUDScale;
                    }    
                });
        }
        else {
            spdlog::error("HUD: Map: Pattern scan failed.");
        }

        // QTE Prompts
        // TODO: This still isn't right as they move up and down with the camera, but at least they're visible now.
        std::uint8_t* QTEPromptsScanResult = Memory::PatternScan(exeModule, "C5 C2 ?? ?? ?? ?? ?? ?? C5 FC ?? ?? ?? ?? ?? ?? ?? C5 FC ?? ?? ?? ?? ?? ?? C5 FC ?? ?? ?? ?? ?? ?? ??");
        if (QTEPromptsScanResult) {
            spdlog::info("HUD: QTE Prompts: Address is {:s}+{:x}", sExeName.c_str(), QTEPromptsScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid QTEPromptsOffsetMidHook{};
            QTEPromptsOffsetMidHook = safetyhook::create_mid(QTEPromptsScanResult,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        ctx.xmm6.f32[0] += fHUDWidthOffset * 2.00f;
                        ctx.xmm7.f32[0] += fHUDHeightOffset * 2.00f;
                    }
                });

            static SafetyHookMid QTEPromptsScaleMidHook{};
            QTEPromptsScaleMidHook = safetyhook::create_mid(QTEPromptsScanResult + 0x52,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio > fNativeAspect)
                        *reinterpret_cast<float*>(ctx.rsp + 0x4C) = 0.20f / fHUDScale;
                    else if (fAspectRatio < fNativeAspect)
                        *reinterpret_cast<float*>(ctx.rsp + 0x50) = 0.20f / fHUDScale;
                });
        }
        else {
            spdlog::error("HUD: QTE Prompts: Pattern scan failed.");
        }

        // Fades
        std::uint8_t* HUDFadesScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? ?? ?? ?? ?? 48 89 ?? ?? ?? 48 8B ?? E8 ?? ?? ?? ?? 48 8B ?? ?? ?? 48 8B ?? ?? ?? 48 8B ?? ?? ??");
        if (HUDFadesScanResult) {
            spdlog::info("HUD: Fades: Address is {:s}+{:x}", sExeName.c_str(), HUDFadesScanResult - (std::uint8_t*)exeModule);
            std::uint8_t* HUDFadesFunc = Memory::GetAbsolute(HUDFadesScanResult + 0x11);
            spdlog::info("HUD: Fades: Function: Address is {:s}+{:x}", sExeName.c_str(), HUDFadesFunc - (std::uint8_t*)exeModule);

            static SafetyHookMid HUDFadesSizeMidHook{};
            HUDFadesSizeMidHook = safetyhook::create_mid(HUDFadesFunc + 0x1B9,
                [](SafetyHookContext& ctx) {
                    if (!bMovieIsPlaying) {
                        if (fAspectRatio > fNativeAspect) {
                            ctx.xmm0.f32[0] = (ctx.xmm0.f32[1] * fAspectRatio) + 64.00f;
                            ctx.xmm0.f32[1] += 64.00f;
                        }
                        else if (fAspectRatio < fNativeAspect) {
                            ctx.xmm0.f32[0] += 64.00f;
                            ctx.xmm0.f32[1] = (ctx.xmm0.f32[0] / fAspectRatio) + 64.00f;
                        }
                    }
                });

            static SafetyHookMid HUDFadesOffsetMidHook{};
            HUDFadesOffsetMidHook = safetyhook::create_mid(HUDFadesFunc + 0x1C8,
                [](SafetyHookContext& ctx) {
                    if (!bMovieIsPlaying) {
                        if (fAspectRatio > fNativeAspect)
                            ctx.xmm0.f32[0] = 0.00f;
                        else if (fAspectRatio < fNativeAspect)
                            ctx.xmm0.f32[1] = 0.00f;
                    }
                });
        }
        else {
            spdlog::error("HUD: Fades: Pattern scan failed.");
        }
    }

    if (bFixMovies) {
        // Movies
        std::uint8_t* HideMovieScanResult = Memory::PatternScan(exeModule, "E8 ?? ?? ?? ?? EB ?? 33 ?? 48 39 ?? ?? ?? ?? ?? 74 ?? C3");
        std::uint8_t* ShowMovieScanResult = Memory::PatternScan(exeModule, "E8 ?? ?? ?? ?? 48 8B ?? ?? ?? 48 83 ?? ?? 5F C3 E8 ?? ?? ?? ?? EB ?? 33 ?? 48 39 ?? ?? ?? ?? ?? 74 ?? C3");
        if (HideMovieScanResult && ShowMovieScanResult) {
            spdlog::info("HUD: Movie: Hide: Address is {:s}+{:x}", sExeName.c_str(), HideMovieScanResult - (std::uint8_t*)exeModule);

            static SafetyHookMid HideMovieMidHook{};
            HideMovieMidHook = safetyhook::create_mid(Memory::GetAbsolute(HideMovieScanResult + 0x1),
                [](SafetyHookContext& ctx) {
                    #ifdef _DEBUG
                    spdlog::info("EndMenu.HideMovie()");
                    #endif
                    bMovieIsPlaying = false;
                });

            spdlog::info("HUD: Movie: Show: Address is {:s}+{:x}", sExeName.c_str(), ShowMovieScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid ShowMovieMidHook{};
            ShowMovieMidHook = safetyhook::create_mid(Memory::GetAbsolute(ShowMovieScanResult + 0x1),
                [](SafetyHookContext& ctx) {
                    #ifdef _DEBUG
                    spdlog::info("EndMenu.ShowMovie()");
                    #endif
                    bMovieIsPlaying = true;
                });
        }
        else {
            spdlog::error("HUD: Movie: Pattern scan(s) failed.");
        }
    }
}

void Framerate()
{
    if (fFramerateLimit != 120.00f) {
        // Replace 120 fps option with desired framerate limit
        std::uint8_t* FramerateLimitScanResult = Memory::PatternScan(exeModule, "C5 F8 ?? ?? E9 ?? ?? ?? ?? B3 01 E9 ?? ?? ?? ?? B3 01 E9 ?? ?? ?? ??");
        if (FramerateLimitScanResult) {
            spdlog::info("Framerate Limit: Address is {:s}+{:x}", sExeName.c_str(), FramerateLimitScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid FramerateLimitMidHook{};
            FramerateLimitMidHook = safetyhook::create_mid(FramerateLimitScanResult,
                [](SafetyHookContext& ctx) {
                    // 120 fps option
                    if (ctx.rbp == (int)8) {
                        ctx.xmm6.f32[0] = fFramerateLimit;
                        #ifdef _DEBUG
                        spdlog::info("Framerate Limit: Set 120 fps option to {:.4f} fps", fFramerateLimit);
                        #endif
                    }
                });
        }
        else {
            spdlog::error("Framerate Limit: Pattern scan failed.");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    Configuration();
    CurrentResolution();
    AspectRatioFOV();
    HUD();
    Framerate();

    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH: {
        thisModule = hModule;

        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle) {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST);
            CloseHandle(mainHandle);
        }
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}