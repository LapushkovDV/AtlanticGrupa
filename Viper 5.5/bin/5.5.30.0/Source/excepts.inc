const

ExVip      = 1000;          { �� �᪫�祭�� VIP'� }
  ExFieldNotValid         = 1001;   { ���������� ���� }
  ExUserBreak             = 1002;   { ���짮��⥫� ᤥ��� break � NextVisual'� }
  ExArrayRangeError       = 1003;   { ��室 �� �࠭��� ���ᨢ� }
  ExInternalError         = 1004;   { ������� ����७��� �訡�� }
  ExToolBarNotFound       = 1005;   { Toolbar �� ������ }
  ExWindowNotExist        = 1006;   { ���� �� ������� }
  ExBadFieldType          = 1007;   { ���� �����室�饣� ⨯� }
  ExBadFieldTypeFatal     = 1008;   { �����室�騩 ⨯ ���� }
  ExIncompatibleFieldData = 1009;   { ��ᮢ���⨬� ⨯� ������ � ����� }
  ExFieldNoFound          = 1010;   { ���� �� ������� }
  ExIncompatiblePositionField = 1011; {����⪠ ��᢮���� �� ᮢ���⨬�� ����権}
  ExDebugAssertion        = 1012;   { Assert ��� �⫠�稪� }
  ExPopPosEmptyStack      = 1013;   { ���⮩ ���� ����権 �� �맮�� poppos }
  ExLoadMenuError         = 1014;   { �訡�� �� ����㧪� ���� �� ����� }
  ExRunMenuError          = 1015;   { �訡�� �� ����᪥ ����㦥����� ���� }
  ExAddMenuItemError      = 1016;   { �訡�� �� ���������� �㭪� ���� }
  ExFormatIDError         = 1017;   { ���������騩 �����䨪��� �ଠ� }
  ExArrayFieldNotValid    = 1018;   { ���� �� ���� ���ᨢ�� }
  ExMenuItemStateError    = 1019;   { �訡�� �� ����⪥ ��⠭����� ����� �㭪� ���� }
  ExConstEvaluation       = 1020;   { ����⪠ ��᢮���� ����⠭� }
  ExStringOverflow        = 1021;   { ����� ��ப� ��ࠦ���� ����� ����� १����  }
  ExInconsistentResource  = 1022;   { ��ᮮ⢥��⢨� ������⮢ ��⠢���� ����� }

  ExMath     = 1300;          { �� ��⥬���᪨� �᪫�祭�� }
  ExLogError      = 1301;   { �訡�� �� ���᫥��� �����䬠 }
  ExDivToZero     = 1302;   { division by zero }
  ExNumberConvert = 1304;   { �᪫�祭�� �� �������樨 ��ப� � �᫮ }
  ExMathOverflow  = 1305;   { ��९������� }

{$I berror.inc}

ExDataBase = 1400;          { �� �᪫�祭�� ���� ������ }
  ExDbNotFound                   = tsFileNotOpen;
  ExDbDuplicateKey               = tsDuplicateKey;
  ExDbModifiableKeyValueError    = tsModifiableKeyValueError;
  ExDbTransactionError           = tsTransactionError;
  ExDbTransactionIsActive        = tsTransactionIsActive;
  ExDbInvalidRecordAddress       = tsInvalidRecordAddress;
  ExDbLockError                  = tsLockError;
  ExDbRecordInUse                = tsRecordInUse;
  ExDbSurrKeyZero                = tsSurrKeyZero;
  ExDbInvalidIndexNumber         = tsInvalidIndexNumber;
  ExDbNoPosition                 = tsNoPosition;
  ExDbInvalidRelation            = tsInvalidRelation;
  ExDbAccessToFieldDenied        = tsAccessToFieldDenied;
  ExDbFileInTransaction          = tsFileInTransaction;
  ExDbSemaphorNotExist           = tsSemaphorNotExist;
  ExDbSemaphorIsBusy             = tsSemaphorIsBusy;
  ExDbSemaphorModeError          = tsSemaphorModeError;
  ExDbSemaphorError              = tsSemaphorError;
  ExDbInvalidField               = tsFieldNotFound;

ExOle = 1900;                { �᪫�祭�� OLE-��ꥪ⮢ }
  ExOleCantCreateObject          = 1901;
  ExOleBadHandle                 = 1902;
  ExOleEventNotExist             = 1903;
  ExOleRecursiveCall             = 1904;
  ExOleBadCall                   = 1905;
  ExOleNoDriver                  = 1906;

ExFile = 2000;          { �� �᪫�祭�� �� ࠡ�� � 䠩���� }
  ExFileNotFound                 = ExFile +   2; { ���� �� ������ }
  ExPathNotFound                 = ExFile +   3; { ���� �� ������ }
  ExTooManyHandlers              = ExFile +   4; { ���誮� ����� ������� 䠩��� }
  ExFileAccessDenied             = ExFile +   5; { ����� ����饭. }
  ExBadFileHandler               = ExFile +   6; { �����४�� ��� 䠩�� }
  ExDriveNotFound                = ExFile +  15; { ������ ���������騩 ��� }
  ExCannotDeleteCurDir           = ExFile +  16; { ���������� 㤠���� ⥪���� ��४��� }
  ExDiskIsWriteProtected         = ExFile +  19; { ����⪠ ����� �� ���饭�� �� ����� ��� }
  ExDriveNotReady                = ExFile +  21; { ��� �� ��⮢ }
  ExFileWriteError               = ExFile +  29; { �訡�� ����� }
  ExFileReadError                = ExFile +  30; { �訡�� �⥭�� }
  ExFileSharingViolation         = ExFile +  32; { ����襭�� ࠧ������� 䠩�� }
  ExFileIsLocked                 = ExFile +  33; { ����襭�� �����஢�� 䠩�� }
  ExFileAlreadyExist             = ExFile +  80; { ���� 㦥 ������� }
  ExCannotCreateDirectory        = ExFile +  82; { �訡�� ᮧ����� ��४�ਨ }
  ExFileUniversalErrors          = ExFile +  90; { ��騥 �訡�� ࠡ��� � 䠩���� }
  ExNetworkError                 = ExFile +  91; { �訡�� �� ࠡ�� � ���� }
  ExNullFileName                 = ExFile +  92; { ���⮥ ��� 䠩�� }
  ExFileNotOpened                = ExFile +  93; { ����� �� ����� }

ExAQA = 2200; {�� �᪫�祭�� AQA}
  ExAQAResynch                   = ExAQA  + 1; {���ᨭ�஭�����}
  ExAQAAbort                     = ExAQA  + 2; {�믮������ ��ࢠ��}

ExRef = 2400;      { �᫪�祭�� �� ࠡ�� � ��뫪��� }
  ExObjIfcNoInit                 = 2401;   { ��뫪� �� ����䥩� �� �ந��樠����஢��� }
  ExObjIfcNoLoad                 = 2402;   { Vip-����䥩� �� ����� ���� ����㦥� }
  ExObjIfcNoImpl                 = 2403;   { VipInterface �� ॠ����� ObjInterface }
  ExObjIfcBadVar                 = 2404;   { ��६����� ⨯� ��뫪� �� ᮮ⢥����� ����襭��� ����樨}
  ExCantActivateEmbedded         = 2405;   { �訡�� ��⨢���樨 ���� ����䥩� }
  ExAbstractMethodCall           = 2406;   { �맮� ����ࠪ⭮�� ��⮤� }
  ExVipIfcNoParent               = 2407;   { VipInterface ��� � ����娨 }
  ExIfcBrokenLink                = 2408;   { ����䥩� ���㦥�, ��� ��뫪� �� ���� ��⠫��� }
  ExIfcBadCheckSum               = 2409;   { �� ᮢ������ ����஫쭠� �㬬� ����䥩� }
  ExDelegateNotOwnLink           = 2410;   { ������஢���� �㦮� ��뫪� }
  ExPanelNotEmbedded             = 2411;   { ������ �� ����� ᮤ�ঠ�� ���஥���� ����䥩ᮢ }

ExDataStream = 2500;
  ExDSErrorId                    = 2501;   { ����� ID ���� �ॢ���騩 �� �᫮ � �����}
  ExDSErrorFormatID              = 2501;   { ��������� ID ���� }

ExExcel = 2600;
  ExcelInvalidObject             = ExExcel + 1; { �訡�� ᮧ����� ��ꥪ� ��� ࠡ��� � Excel }
  ExcelNotLoadDll                = ExExcel + 2; { �訡�� ����㧪� ��� }
  ExcelNotFoundFunction          = ExExcel + 3; { �� ������� �㭪�� }
  ExcelInternalError             = ExExcel + 4; { �訡�� ᮧ����� 䠩�� }