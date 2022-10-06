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

echo �������������������������������������������������������������������������������
echo ��������� %2 � ����� %OutputResourceDir%\%~n2%Build%.res

%CompilerPath% %2 /c:"%ConfigDir%vip.cfg" /r:"%OutputResourceDir%\%~n2_%Build%.res" /compilers.writelistingto:"%log%"

if not "%mode%"=="quiet" (
  type %log%
  echo.
  echo.
  echo �������������������������������������������������������������������������������
)

findstr �訡�� %log% > %tmp%

for /f "delims=" %%x in (%tmp%) do if not %%x == "" goto :error
goto :success

:error
  echo.
  echo ��������� %2 �����襭� � �訡����:
  echo.
  findstr �訡�� %log%
  echo.
  echo ����� ���: %log%
  echo.
  goto :end

:success
  echo.
  echo ��������� %2 �����襭� �ᯥ譮
  echo.

:end
  call %ConfigDir%clear.cmd
