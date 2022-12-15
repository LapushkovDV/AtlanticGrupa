'---------------------------------------------------------------------
' ������ ��� ������� ���������� ����������
'
'
' ���������:
'   sPathCompSrc - ���� �� �������� ����
'---------------------------------------------------------------------

'---------------------------------------------------------------------
' ��������������� �������
'---------------------------------------------------------------------

'�������� ������������� �����
function FileExists(FileName)
  dim objFs
  set objFs = CreateObject("Scripting.FileSystemObject")
  FileExists = objFs.FileExists(FileName)
end function

'�������� ������������� �����
function DirExists(DirName)
  dim objFs
  set objFs = CreateObject("Scripting.FileSystemObject")
  DirExists = objFs.FolderExists(DirName)
end function

'���������� backslash'
function AddBackslash(DirName)
  if Right(DirName, 1) <> "\" then
    AddBackslash = DirName & "\"
  else
    AddBackslash = DirName
  end if
end function

sub ShowMessage(Text)
  MsgBox Text, vbCritical, "������ �������"
end sub

'---------------------------------------------------------------------
' ������
'---------------------------------------------------------------------

sub Main(FileName)
  const sPathCompSrc = "\Src\CompSrc" '������������ ����������

  if not DirExists(sPathCompSrc) then
    ShowMessage("����� � ����������� �� �������")
    exit sub
  end if

  dim sFile
  sFile = InputBox("������� ��� ����������", "���������� ����������", "")

  if Trim(sFile) = "" then
    ShowMessage("�������� ����")
    exit sub
  end if

  dim sPrj
  sPrj = AddBackslash(sPathCompSrc) & Mid(sFile, 1, 1) & "\" & sFile & "\" & sFile & ".prj"

  if not FileExists(sPrj) then
    ShowMessage("�� ������ ������������� ����:" & vbCrLf & sPrj)
    exit sub
  end if

  Documents.Open false, sPrj, false '�������� �����
  ActiveDocument.AddToCompile       '���������� � ������
  ActiveDocument.Compile            '������ ����������
end sub
