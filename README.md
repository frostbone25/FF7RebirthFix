# Final Fantasy VII Rebirth Fix
[![Patreon-Button](https://raw.githubusercontent.com/Lyall/FF7RebirthFix/refs/heads/master/.github/Patreon-Button.png)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/FF7RebirthFix/total.svg)](https://github.com/Lyall/FF7RebirthFix/releases)

This is a work-in-progress ASI plugin for for Final Fantasy VII Rebirth that adds ultrawide support and more.

## Features

### Ultrawide
- Support for any aspect ratio with corrected FOV.
- Centered 16:9 HUD.

## Installation
- Grab the latest release of FF7RebirthFix from [here.](https://github.com/Lyall/FF7RebirthFix/releases)
- Extract the contents of the release zip in to the the game folder.
(e.g. "**steamapps\common\FINAL FANTASY VII REBIRTH**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **FF7RebirthFix.ini** to adjust settings.

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.<br />
[Dumper-7](https://github.com/Encryqed/Dumper-7) for dumping the SDK.
