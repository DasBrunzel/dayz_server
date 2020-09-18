@echo off
cls
set watch=DayZ-Expansion Livonia
title %watch% Watchdog
cd "Z:\DayZServer_Livonia"
:watchdog
echo (%time%) %watch% started.
start "DayZ-Expansion Server" /wait "DayZServer_x64.exe" -config=serverDZ.cfg -port=2402 "-mod=mods\@CF;mods\@Community-Online-Tools;mods\@DayZ-Expansion;mods\@DayZ-Expansion-Licensed;mods\@Trader;mods\@TraderWalletCollection" -profiles=.\ServerProfile -netlog -adminlog -enableHT -malloc=tbbmalloc 
echo (%time%) %watch% wurde beendet! DayZ Server wird neu gestartet...
goto watchdog