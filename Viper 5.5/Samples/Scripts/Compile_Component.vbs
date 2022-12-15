'---------------------------------------------------------------------
' Скрипт для быстрой компиляции компоненты
'
'
' параметры:
'   sPathCompSrc - путь на исходные коды
'---------------------------------------------------------------------

'---------------------------------------------------------------------
' вспомогательные функции
'---------------------------------------------------------------------

'проверка существования файла
function FileExists(FileName)
  dim objFs
  set objFs = CreateObject("Scripting.FileSystemObject")
  FileExists = objFs.FileExists(FileName)
end function

'проверка существования папки
function DirExists(DirName)
  dim objFs
  set objFs = CreateObject("Scripting.FileSystemObject")
  DirExists = objFs.FolderExists(DirName)
end function

'добавление backslash'
function AddBackslash(DirName)
  if Right(DirName, 1) <> "\" then
    AddBackslash = DirName & "\"
  else
    AddBackslash = DirName
  end if
end function

sub ShowMessage(Text)
  MsgBox Text, vbCritical, "Ошибка скрипта"
end sub

'---------------------------------------------------------------------
' скрипт
'---------------------------------------------------------------------

sub Main(FileName)
  const sPathCompSrc = "\Src\CompSrc" 'расположение исходников

  if not DirExists(sPathCompSrc) then
    ShowMessage("Папка с исходниками не найдена")
    exit sub
  end if

  dim sFile
  sFile = InputBox("Введите имя компоненты", "Компиляция компоненты", "")

  if Trim(sFile) = "" then
    ShowMessage("Неверный ввод")
    exit sub
  end if

  dim sPrj
  sPrj = AddBackslash(sPathCompSrc) & Mid(sFile, 1, 1) & "\" & sFile & "\" & sFile & ".prj"

  if not FileExists(sPrj) then
    ShowMessage("Не найден компилируемый файл:" & vbCrLf & sPrj)
    exit sub
  end if

  Documents.Open false, sPrj, false 'открытие файла
  ActiveDocument.AddToCompile       'добавление в сборку
  ActiveDocument.Compile            'запуск компиляции
end sub
