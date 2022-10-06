@echo off
set ConfigDir=%~dp0
set ConfigSubDir=%1
set Mode=%3
call %ConfigDir%%ConfigSubDir%\sets.cmd

set tmp=%TmpDir%tmp
set log=%TmpDir%Build.%2.log
if exist %log% del /F %log%
if exist %TmpDir%*.res del /F %TmpDir%*.res

for /f "delims=" %%x in (version) do set Build=%%x

echo ───────────────────────────────────────────────────────────────────────────────
echo Компиляция %2 в ресурс %OutputResourceDir%\%~n2%Build%.res

%CompilerPath% %2 /c:"%ConfigDir%vip.cfg" /r:"%OutputResourceDir%\%~n2_%Build%.res" /compilers.writelistingto:"%log%"

if not "%mode%"=="quiet" (
  type %log%
  echo.
  echo.
  echo ───────────────────────────────────────────────────────────────────────────────
)

findstr Ошибка %log% > %tmp%

for /f "delims=" %%x in (%tmp%) do if not %%x == "" goto :error
goto :success

:error
  echo.
  echo Компиляция %2 завершена с ошибками:
  echo.
  findstr Ошибка %log%
  echo.
  echo Полный лог: %log%
  echo.
  goto :end

:success
  echo.
  echo Компиляция %2 завершена успешно
  echo.

:end
  call %ConfigDir%clear.cmd
