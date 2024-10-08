const
  FReportDllName = 'FReport' + {$ifdef Win64}'64x' +{$endif} '.dll';
  FREditorExeName = 'FREditor' + {$ifdef Win64}'64x' +{$endif} '.exe';

  // ��������� ��� TreeManager.
  tmtNoTree  = 0; // �� ������ ��� �� ���������� � ���������� ������.
  tmtManager = 1; // ����, � ������� ����� ����������� ������.
  tmtLevel   = 2; // �������� ������� ������� ������.
  tmtPicture = 3; // �������� �������� ����� ��� ����.

  // ��������� ���� ��������.
  frExportBIFF       = 0;
  frExportXML        = 1;
  frExportRTF        = 2;
  frExportPDF        = 3;
  frExportODS        = 4;
  frExportODT        = 5;
  frExportHTML       = 6;
  frExportCSV        = 7;
  frExportDBF        = 8;
  frExportBMP        = 9;
  frExportJPEG       = 10;
  frExportTIFF       = 11;
  frExportGIF        = 12;
  frExportSimpleText = 13;
  frExportTXT        = 14;
  frExportXLSX       = 15;
  frExportFP3        = 20;
  frPrintParams      = 21;
  frMailParams       = 22;
  frEmbeddedID       = 30;
  frInternalParams   = 64; // ��� �������� ���������� ����������.

  // ��������� ���� �������� ��� �������.
  frcShowReport     = 1000;
  frcExportReport   = 1001;
  frcSendMailReport = 1002;
  frcPrintReport    = 1003;
  frcDesignReport   = 1004;
  frcPrepareReport  = 1005;
  frcCreateReport   = 1006;

  frDelimiter = WideChar($2605);
  frGroupsDelimiter = ',';
  // ������ frGroupsDelimeter �� frDelimeter ��������� � ���������������, �.�. ����������� �������� ������ ����� � Variables ������ "GalaxyGroupList" (���������� ����� ������������ � ������ ����������� ��� �������������).
  // ���������� �� ������� ��������� ���������� ������ frres.pas (����������� ��� ������� �� frres.exe) � ������� RunFReportByGroup.
  // � ����� ������������������ ��� VIP ������� RunFReportByGroup.
  frParamsDelimiter = ';';

  csFRDestroy = 1;
  csDestroyAfterClosePreview = 2;

type
  PgfrHeaderInfo = ^TgfrHeaderInfo;
  TgfrHeaderInfo = record
    Index       : LongInt;     // ����� �� �������
    Width       : LongInt;     // ������ �������
    Align       : LongInt;     // ������������ � ������: saLeft, saRight, saCenter
    TreeManager : LongInt;     // ��������� ��� ������
    AtlType     : LongInt;     // ��� ������ ���������
    IsPicture   : WordBool;    // �������� �� ���� ���������
    AutoSize    : WordBool;    // ���� "�������������� �������"
    Name        : ShortString; // ��� ���� � DataSet-�
    Title       : ShortString; // ��������� ������� � BROWSE ��� TREE
    ViewFormat  : ShortString; // ������ ����������� ������ �������
  end;
