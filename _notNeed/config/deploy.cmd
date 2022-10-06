@echo off
set ConfigDir=%~dp0
set ConfigSubDir=%1
call %ConfigDir%%ConfigSubDir%\sets.cmd
for /f "delims=" %%x in (version) do set Build=%%x

set Name=%~2
if [%~3] == [] (set Resource=%OutputResourceDir%%~n1%Build%.res) else (set Resource=%~3_%Build%.res)
if [%~4] == [] (set Group=) else (set Group=%~4)
if [%~5] == [] (set Priority=CP_USER) else (set Priority=%~5)
if [%~6] == [] (set System=galnet) else (set System=%~6)

set tmp=%TmpDir%tmp.prj
set res=%TmpDir%tmp.res
set lot=%TmpDir%tmp.lot

echo #addcomponent name="%Name%", resource="%Resource%", priority=%Priority%, system="%System%", version="%Build%", group="%Group%"; > %tmp%
%CompilerPath% %tmp% /c:"%ConfigDir%vip.cfg" /r:"%res%"

echo update components where (('%Name%' == name)) set version:='%Build%', resource:='%Resource%'; > %lot%
%CompilerPath% %lot% /c:"%ConfigDir%vip.cfg" /r:"%res%"

if exist %tmp% del /F %tmp%
if exist %res% del /F %res%
if exist %lot% del /F %lot%

call %ConfigDir%clear.cmd
