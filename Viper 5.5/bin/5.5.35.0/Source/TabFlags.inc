const ttyDefault     =     0;
const ttyData        =     1;  // $0001 - ���筠� ⠡��� � ����묨
const ttySyst        =     2;  // $0002 - ���⥬��� ⠡���
const ttyMemo        =     4;  // $0004 - �ਧ��� ������⢨� ����-����
const ttyNRec        =     8;  // $0008 - �ਧ��� ������⢨� NREC'a
const ttyDict        =    16;  // $0010 - �����ୠ� (������ୠ�) ⠡���
const ttyCreateUser  =    32;  // $0020 - ������ ᮧ���� ���짮��⥫��
const ttyCurrentJ    =    64;  // $0040 - ������ � ����� ������ ��ୠ������� (���⠢����� ⮫쪮 �� ࠡ��)
const ttyAutoInc     =   128;  // $0080 - �ਧ��� ������⢨� ���� autoinc
const ttyTemporary   =   256;  // $0100 - �६����� ⠡���
const ttyHeader      =   512;  // $0200 - ������ � ����������
const ttyJournal     =  1024;  // $0400 - ������ ����� ��ୠ��஢�����
const ttyCorpo       =  2048;  // $0800 - ������ ����� ���⢮���� � ������
const ttyNoProtect   =  4096;  // $1000 - ������ �� ���頥��� PROTECT'��
const ttyBranched    =  8192;  // $2000 - ������ ������ � 䨫���쭮��
const ttyUser        = 16384;  // $4000 - ���짮��⥫�᪠� ⠡���
const ttyShared      = 32768;  // $8000 - ������ ࠧ���塞� (���⠢����� ⮫쪮 �� ࠡ��)

// X$FILES.XF$FLAGS2 , ��� 䫠��� ��� � TableDef
const tf2_PublicBranched = 2; // ���� ⠡��� (ࠡ�� ����� ��� 䨫���쭮�� 䨫���)
const tf2_MonoBranched = 4; // ������ �� ࠡ�� � 1 䨫���� ����� ⮫쪮 �� �⮣� 䨫����

const tmffHasMemo = 1;
const tmffMemoNoHeader = 2;

// ������ ᥣ���⮢ �����ᮢ
const kmDup          =     1;  // $0001
const kmModif        =     2;  // $0002
const kmBin          =     4;  // $0004
const kmNull         =     8;  // $0008
const kmMoreSeg      =    16;  // $0010
const kmAlter        =    32;  // $0020
const kmDesc         =    64;  // $0040
const kmSup          =   128;  // $0080
const kmExtType      =   256;  // $0100
const kmSurrogate    =   512;  // $0200
const kmExpr         = 16384;  // $4000 - ᥣ���� ��� ᬥ饭��, ����塞�� ��ࠦ����

const kmVarLength    =     1;  // $0001
const kmBlankTrunc   =     2;  // $0002
const kmCompress     =     8;  // $0008
const kmRepeatDup    =   128;  // $0080
const kmUseVAT       =  2048;  // $0800 
const kmIndexDropped = 16384;  // $4000 - ������ �६���� 㤠��� 

const kmJournal      =  1024;  // $0400 - ���� ��� ��ୠ����樨
const kmString       =  2048;  // $0800 - exact "string" type (for OFFSET)
const kmChar         =  4096;  // $1000 - segment attribute "String"|"Char"
const kmCreateUser   =  8192;  // $2000 - ����砥� ���� ��� ������ ��� ���짮�⥫�᪮�
const kmWReplace     = 16384;  // $4000 - table attribute "WithReplace"
const kmAutoinc      = 32768;  // $8000 - segment attribute "Autoinc"

const kmBtrvAttr     =   511;  // $01FF - Mask for ALL btrieve attrib.
const kmAny          = 65535;  // $FFFF
const kmUpCase       = kmAlter; // attribute "Upcase" same as "Alter"

// x$indexes.xi$flags2
const kmBranched     = 1;   // 㭨���쭮��� � ࠬ��� 䨫���� (���� ᪢�����). ��� ��㭨������ �����ᮢ ��䨣
                            // 䫠� ���������� � ᠯ���� �� ���� ������
const kmActualBranchFirst = 4; // � �������饣� ������ ᥣ���� 䨫���쭮�� � ��砫�, � � �⨬ ���� ������� �� ������樨!
                               // ��䨣, �� �� �ࠢ���� ������ ������ ���� ��㣮�, ��� ��� �� ��稭���
                               // ��� 䫠� ���������� ��᫥ ᮧ����� ������ � ����


// � ��ࢠ���� ⠪�� 䫠� � ��᫥����� ᥣ���� ������ ������, �� �� ���� �� �⮣���� ����� ������ 255
// ����� ���� �������� ⮫쪮 �� ��᫥���� ᥣ����, � ⮫쪮 �᫨ �� ��ப���, � ⮫쪮 �᫨ ��� ���� ����� �뫠 ����� 255
const kmPartial     =   512;


// ����� ����� (������ kmCreateUser)
const ffUpcase = 1; // � PSQL-���ᠭ�� ���� ����砥�, �� �� ���� �ࠢ�������� CASE INSENSITIVE
const ffACS = 4; // � PSQL-���ᠭ�� ���� ����砥�, �� �ࠢ����� �����⢫���� ᮣ��᭮ NLS-⠡���, �ਫ����饩�� � ⠡���

// ��樨 �ࠢ�����
const TDCmpOpt_Fields = 1;
const TDCmpOpt_Indexes = 2;
const TDCmpOpt_All = 65535;
