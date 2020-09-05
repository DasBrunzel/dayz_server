@echo off
cls
set watch=DayZ-Expansion Server
title %watch% Watchdog
cd "F:\Eigenen Dateien\Desktop\dayz"
:watchdog
echo (%time%) %watch% started.
start "DayZ-Expansion Server" /wait "DayZServer_x64.exe" -config=serverDZ.cfg -port=2302 "-mod=@CF;@Community-Online-Tools;@DayZ-Expansion;@DayZ-Expansion-Licensed" -profiles=.\ServerProfile -netlog -adminlog -enableHT -malloc=tbbmalloc 
echo (%time%) %watch% wurde beendet! DayZ Server wird neu gestartet...
goto watchdog