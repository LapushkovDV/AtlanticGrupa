// !!! �������� !!!, �� 䠩� ������砥��� � ��᪠�� � ����.
// �� �ᯮ���� ����� Defin-�


//------------------------------------------------------------------------------
// [c]har [c]onst

  ccMarked = 'V';
  ccTerm   = ''#255;

//------------------------------------------------------------------------------
// [c]onst [s]tring
  csPerehodNevozmozhen = '���室 ����������, ⠪ ��� �� �������� ���㬥��';

//-----------------------------------------------
// ����� ࠡ��� ����䥩�
  cgiNo               =     0;          //-����� ०��
  cgiPick             =     1;          //-०�� �롮� ������
  cgiMulti            =     2;          //-�롮� ������ ������⢥���
  cgiNotEdit          =     4;          //-�᫨ ��� ������ ����� ।���஢���
  cgiNotClear         =     8;          //-�� ����� ��થ� �롮�
  cgiPickNode         =    16;          //-�롨��� ⮫쪮 ᠬ� ����
  cgiPickLeaf         =    32;          //-�롨��� ⮫쪮 ����
  cgiPickExt          =    64;          //-�������⥫�� ��࠭ � ���祭��� "��稥"
  cgiPickKau          =   128;          //-��१�ࢨ஢��� ��� ᯥ樠���� ��砥� �롮� ���
                                        //-�� �롨��� �� "��稥" �� "�� ��।������" ���
  cgiPickSub          =   256;          //-�롮� ����⮢ (� ⮫쪮 ��)
  cgiPickSch          =   512;          //-�롮� ��⮢ (� ⮫쪮 ��)
  cgiSingleEdit       =  1024;          //-����� ���� ।���஢���� ��� ��� ⥪�饩 �����, ��� ���������� ��६������ �� ������
  cgiSetFilter        =  2048;          //-��⠭�������� 䨫��� �� ����᪥
  cgiPickAlone        =  4096;          //-�롮� ������ ������� �� ������ ��� ᯥ樠��� ��砩 �롮�
                                        // ���� �ᯮ������ ⮫쪮 � Vip\Fin\Kau\3PickKau
  cgiAddNewRec        =  8192;          //-����� ���� ।���஢���� ��� ᮧ����� ����� �����
  cgiMultiEdit        = 16384;          //-����� ���� ।���஢���� ��� ��� ⥪�饩 �����, � ������������ ��६������ �� ������

//��� �ᯮ��㥬� �������樨 ����⠭� �맮�� ����䥩�
  cgiPickMult         =     3;          //-cgiPick or cgiMulti;
                                        //   �᫨ ������� �� 3, � cgiPick or cgiMulti, � �� �㤥�
                                        //   ��������, �� �� word
//-----------------------------------------------
//���� ����⠭��
  // ���� (�ᯮ������� �����)
  cgBitNo             =     0; // �� ���� ��� �� ��⠭�����
  cgBit00             =     1;
  cgBit01             =     2;
  cgBit02             =     4;
  cgBit03             =     8;
  cgBit04             =    16;
  cgBit05             =    32;
  cgBit06             =    64;
  cgBit07             =   128;
  cgBit08             =   256;
  cgBit09             =   512;
  cgBit10             =  1024;
  cgBit11             =  2048;
  cgBit12             =  4096;
  cgBit13             =  8192;
  cgBit14             = 16384;
  cgBit15             = 32768;
  // ����� �ᯮ�짮����� word(0), word(1)
  cgNoLeaf            =  0;
  cgIsLeaf            =  1;
  cgNoKau             =  0;
  cgIsKau             =  1;
  // NRec, ������ ��� (����� comp(0) - comp(cgNRec0) - ⠪ ����⭥�)
  cgNRec0             =  0;
  // ०��� �믮������ 祣�-����
  cgMakeAuto          =  1;          // ��⮬���᪨
  cgMakeManual        =  2;          // ������
  // ���ࠢ����� ���⥦��� ���㬥�⮢ � �� ⮫쪮 ��
  cgDirNotDef         =  0;          // �� ��।�����
  cgDirPrihod         =  1;          // ��室
  cgDirRashod         =  2;          // ��室
  cgDirPrihodOrRashod =  3;          // ��室 ��� ��室 (��� 䨫���)

//-----------------------------------------------
//०�� ࠡ��� ����䥩ᮢ � �㭪権 (����!)
// ���� �㤥� �������� �� cg-����⠭��!
  cgiNoMessage        =  0;          // ࠡ�� ��� �뢮�� ᮮ�饭��
  cgiWarningMessage   =  1;          // ࠡ�� � �뢮��� �।�०�����
  cgiErrorMessage     =  2;          // ࠡ�� � �뢮��� ᮮ�饭�� �� �訡���
  cgiMessage          =  3;          // 1 + 2 - �뢮���� �� ᮮ�饭��

//-----------------------------------------------
// ०��� ���㠫���樨
  cgiNoVisualisation  =  0;          // �� ���㠫���஢���
  cgiVisualisation    =  1;          // �⠭���⭠� ���㠫�����

//-----------------------------------------------
//०��� ����᪠ ����䥩ᮢ, �ᯮ������ ����ன�� �� ࠧ��� ���㫥�
  cgSetFPTuneDefault  =  1;       // ���� ����ன�� ��� FP
  cgSetOFPTuneDefault =  2;       // ���� ����ன�� ��� OFP
  cgSetFATuneDefault  =  3;       // ���� ����ன�� ��� FA
  cgSetUksTuneDefault =  4;       // ���� ����ன�� ��� ������� (#ifdef __UKS__)
  cgSetTxPTuneDefault =  5;       // ���� ����ன�� ��� �����஭��� ���⭮��

//-----------------------------------------------
// ����� ������᪨� ���⮢
  cgPrint_All         =  1; // �� ��ॢ�
  cgPrint_Group       =  2; // ⥪.��㯯�
  cgPrint_Inside      =  3; // �� ࠧ�����
  cgPrint_ToLevel     =  4; // �� �.�஢��
  cgPrint_NoLeaves    =  5; // ⮫쪮 㧫�� (��� ����쥢)
  cgPrint_GroupAsIs   =  6; // �� ⥪�饩 ����� �� ࠧ���稢�� ��㯯�
  // ��-��� ����⢨� �� ���� ������᪨� ���⮢
  cgTreeP_TITLE       =  0; // ��������
  cgTreeP_HEADER      =  1; // ���������
  cgTreeP_BASE        =  2; // �᭮�����
  cgTreeP_BOTTOM      =  3; // ��������
  cgTreeP_SHOW        =  4; // ����� १����
  cgTreeP_EXIT        =  5; // �����।��� ��室 �� �ନ஢���� ����
  cgTreeP_BeforeAnaliz= 10; // ᮡ�⨥ ��। �������� ��ॢ�

//-----------------------------------------------
// ����ன�� ����� � ���㬥�⠬ (Doc.Visible) �� ���ਯ���
  cgDocVisible_All    =  0; // '�� �ࠢ�'
  cgDocVisible_MySelf =  1; // '⮫쪮 � ᢮�� ���ਯ�஬'
  cgDocVisible_GrRead =  2; // '᢮�-���������, �� ��㯯� - �⥭��'
  cgDocVisible_GrAll  =  3; // '�� �ࠢ� � ࠬ��� ��㯯�'
  cgDocVisible_OwnModifAllRead = 4; // '᢮�-���������, �� - �⥭��'
  cgDocVisible_GrpModifAllRead = 5; // '�� �ࠢ� � ࠬ��� ��㯯�, �� - �⥭��'
//-----------------------------------------------
// ���� CashBank.Razdel
  cgCash_NotDef       =  0; // �� ��।����
  cgCash_Kassa        =  1; // ����
  cgCash_RS           =  2; // ������ ���
  cgCash_ValRS        =  3; // ������
  cgCash_BuhSpr       =  4; // ���.�ࠢ��
  // ⨯ ���㬥�� �� �⭮襭�� � �����
  cgTipMoney_RUB      =  1; // �㡫���
  cgTipMoney_VALRUB   =  2; // ����⭮-�㡫���
  cgTipMoney_VAL      =  3; // ������
  // ��� ��ꥪ� aAttrib.vih
  cgDoc_OutAttrib     =  1; // ���譨� ��ਡ���
  cgDoc_OutClassf     =  2; // ������ �����䨪���
//-----------------------------------------------
  // ��� ���譨� ��ਡ�⮢
  cgAttrType_Str      =  0;   // 0 -  STRING
  cgAttrType_Dbl      =  1;   // 1 -  DOUBLE
  cgAttrType_Date     =  2;   // 2 -  DATE
  cgAttrType_Time     =  3;   // 3 -  TIME
  cgAttrType_Memo     =  4;   // 4 -  MEMO
  cgAttrType_Comp     =  5;   // 5 -  Comp
  cgAttrType_Switch   =  6;   // 6 -  ��४���⥫�, ����㯥� ⮫쪮 ��� ���䨣����
//-----------------------------------------------
// ��� ����祭�� ��ࠬ��஢ �裡 � DDE �ࢥ஬
  DDE_ServerName   = 0;
  DDE_Service      = 1;
  DDE_Topic        = 2;
  DDE_MacroCommand = 3;

  //-------------------------------------------------------
  // ���� ���� ModeDoc (PlPor.ModeDoc, SoprHoz.ModeDoc)
  //-------------------------------------------------------
  cgModeDoc_VhSum     = cgBit00; // 0=�室��/1=�� �室�� � �㬬�
  cgModeDoc_Org       = cgBit01; // 0=������/1=�� ������ �� �/�����
  cgModeDoc_Tip       = cgBit02; // 0=���⥦��/1=ᮯ஢���⥫��

  cgModeDoc_PrShtraf  = cgBit03; // ����� ᠭ�樨 (BaseFin.prShtraf)
  //cgModeDoc_NotUse    = cgBit04; // �� ��᪮�쪨� ���㬥�⠬

  // ��� ��� �ᯮ������� ��� ���ᠭ�� ���ﭨ� ࠧ��᪨/
  // ����祭���� ���㬥��0 - ���㬥�� �� ࠧ��ᥭ �� ᯥ�䨪�樨,
  // �� ����祭 (SoprHoz �� KatSopr)
  // cgBit05 - ���㬥�� �ਢ易� � ��, �� �� ࠧ��ᥭ �� ᯥ�䨪�樨
  // (SoprHoz �� ���⥦��)
  // cgBit06 - ���㬥�� ࠧ��ᥭ ���筮 (SoprHoz �� PlPor)
  // , ��� ����祭 ���筮(SoprHoz �� KatSopr)
  // cgBit05 or cgBit06 - ���㬥�� ࠧ��ᥭ, ����祭 ���������"
  cgModeDoc_DO        = cgBit05;
  cgModeDoc_Spec      = cgBit06;

  // ���ࠢ�����
  cgModeDoc_DirPrihod = cgBit10; // �த���
  cgModeDoc_DirRashod = cgBit11; // ���㯪�
  cgModeDoc_DirNotDef = cgBit12; // �� ��।�����
  //-------------------------------------------------------

//------------------------------------------------------------------------------
// [�]ountry [c]odes (���� ��࠭�)
//------------------------------------------------------------------------------
  ccRus = 0; // �����
  ccBel = 1; // ��������
  ccUkr = 2; // ��ࠨ��
  ccKaz = 3; // ������⠭
  ccMld = 4; // �������
  ccUzb = 5; // �������⠭
//------------------------------------------------------------------------------
// ��� ᡮન ����
//------------------------------------------------------------------------------
// �� �����ন����� ॣ����
  ccAllRegions = ccRussia + ccBelarus + ccUkraine + ccKazakhstan + ccUzbekistan + ccMoldavia;
//------------------------------------------------------------------------------
// �஢�� ����娨 ������ �����
//------------------------------------------------------------------------------
  pnYear   = 0;
  pnRazdel = 1;
  pnPunkt  = 2;
//------------------------------------------------------------------------------
// ��� {Get|Set}ColumnSorting
// [c]olumn [s]orting
//------------------------------------------------------------------------------
// ��� ���஢��
  csNone  = 0;
// ���஢�� �� �����⠭��
  csUp    = 1;
// ���஢�� �� �뢠���
  csDown  = -1;


// ���祭�� ��� �㭪樨 OpenLink
  cgOpenLinkDefault       =  0; //��㧥� �� 㬮�砭�� �� ����樮���� ��⥬� 
  cgOpenLinkChromeifSetup =  1; //��㧥� Chrome �᫨ ���, � Internet Explorer
  cgOpenLinkOnlyChrome    =  2; //���쪮 ��㧥� Chrome
  cgOpenLinkOnlyIE        =  3; //���쪮 ��㧥� Internet Explorer
