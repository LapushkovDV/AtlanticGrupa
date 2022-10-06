@echo off

rem Компиляция отчетных форм fastreport
rem Параметры:
rem 1: название папки с конфигами
rem 2: название проекта без расширения - для определения наименования ресурсника, в который будут компилиться fr-отчеты
rem 3: путь к fr-отчетам для компиляции (папка или файл)

set ConfigDir=%~dp0
set ConfigSubDir=%1
call %ConfigDir%%ConfigSubDir%\sets.cmd
for /f "delims=" %%x in (version) do set Build=%%x
%FrresPath% /to /r:%OutputResourceDir%\%~n2_%Build%.res /source:%3

call %ConfigDir%clear.cmd
