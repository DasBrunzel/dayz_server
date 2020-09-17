@echo off
@rem http://media.steampowered.com/installer/steamcmd.zip
SETLOCAL ENABLEDELAYEDEXPANSION
 :: DEFINE the following variables where applicable to your install
 SET STEAMLOGIN=xxx xxx
 SET DayZserverBRANCH=223350
 :: For stable use 233780 -beta
 :: For Dev use 233780 -beta development
 :: Note, the missing qotation marks, these need to be wrapped around the entire "+app_data......"
 :: There is no DEV branch data yet for Arma 3 Dedicated Server package !!!
 SET DayZserverPath=Z:\DayZServer_Livonia\
 SET STEAMPATH=Z:\steamcmd\
:: _________________________________________________________
echo.
echo You are about to update DayZ server
echo Dir: %DayZserverPath%
echo Branch: %DayZserverBRANCH%
echo.
echo Key "ENTER" to proceed
pause
%STEAMPATH%\steamcmd.exe +login %STEAMLOGIN% +force_install_dir %DayZserverPath% +"app_update %DayZserverBRANCH%" validate +quit
echo .
echo Your DayZ server is now up to date
echo key "ENTER" to exit
pause