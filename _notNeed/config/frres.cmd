@echo off

rem ��������� ������ �� fastreport
rem ��ࠬ����:
rem 1: �������� ����� � ���䨣���
rem 2: �������� �஥�� ��� ���७�� - ��� ��।������ ������������ ����᭨��, � ����� ���� ����������� fr-�����
rem 3: ���� � fr-���⠬ ��� �������樨 (����� ��� 䠩�)

set ConfigDir=%~dp0
set ConfigSubDir=%1
call %ConfigDir%%ConfigSubDir%\sets.cmd
for /f "delims=" %%x in (version) do set Build=%%x
%FrresPath% /to /r:%OutputResourceDir%\%~n2_%Build%.res /source:%3

call %ConfigDir%clear.cmd
