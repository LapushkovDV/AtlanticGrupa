@echo off
set IncludesDir=%~dp0..
call :normalise "%IncludesDir%"

if exist tmp del /F tmp
dir %IncludesDir% /s /b /a:d >> tmp

if exist includes.inc del /F includes.inc
for /f "delims=" %%x in (tmp) do call :addinclude %%x

del /F tmp

:normalise
set IncludesDir=%~f1
goto :EOF

:addinclude
set s=%1
call set rslt=%%s:%IncludesDir%\=%%
if %rslt:~0,4% equ .git goto :EOF
set rslt=%rslt:\=/%
echo /i:"../%rslt%" >> includes.inc
goto :EOF
