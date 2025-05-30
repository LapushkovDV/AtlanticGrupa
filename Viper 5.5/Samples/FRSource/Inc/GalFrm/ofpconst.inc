//------------------------------------------------------------------------------
//                                                      (c) ��௮��� �����⨪�
// �����⨪� 5.80 - ����� "���⥦�� ���������"
// ����⠭�� ��� ( �� )
//------------------------------------------------------------------------------

  // -> � ����� ���� ᢮�
  cgFlViewPos_KatOrg  =  5;
  cgFlViewPos_FpStBud =  6;
  cgFlViewPos_FpCO    =  7;
  cgFlViewPos_Persons =  8;
  cgFlViewPos_Dogovor =  9;
  cgFlViewPos_BaseDoc = 10;
  cgFlViewPos_GroupOfp= 11;

  // ��� = _nFilter =
  cgFilter_KatOrg  =  5;
  cgFilter_FpStBud =  6;
  cgFilter_FpCO    =  7;
  cgFilter_Persons =  8;
  cgFilter_Dogovor =  9;
  cgFilter_BaseDoc = 10;
  cgFilter_GroupOfp= 11;
  // ��� �ࠧ��᪨ �� ����� �ਮ���/�����/Initer(�� �㬬� ��� �� ��業��)
  _wVxodim_BegPos   = 0;
  _wVxodim_Long     = 1;
  _wPrior_BegPos    = _wVxodim_Long;
  _wPrior_Long      = 2; // �ࠢ��� ����� � dPrior_Sum
  _wIniter_BegPos   = _wVxodim_BegPos + _wVxodim_Long + _wPrior_Long;
  _wIniter_Long     = 1; //

  // ⨯� ���⮢
  nrepPAY_CALENDAR = 701;
  nrepPAY_CALMODEL =1701;
  nrepFIN_REGISTER = 704;
  nrepREQ_REGISTER = 705;
  nrepOFP_PRIHOD   = 706;
  nrepOFP_ARCHIVE  = 707;
  nrepOFP_JOURNAL  = 708;
  cgReport_OfpSaldo= 709;

  // ⨯� ���㬥�⮢
  // � �� ��諨 ��祬� � ��: 93, 501, 919
  tFIN_OBLIGATION  =   0; // �����ᮢ� ��易⥫��⢠';
  tDOLG_SALE       =  90; // �������� �த��� �����';
  tDOLG_BYE        =  91; // �������� ���㯪� �����';
  tDOLG_USTUPKA    =  92; // ���㯪� ᮡ�⢥����� �����';
  tDOLG_BYE2       =  93; // �������� ���㯪� ����� - 2-�� ��; ????!!!
  tBASE_BYE        = 101; // �᭮����� �� ���㯪�';
  tBASE_GETCONSIG  = 102; // �᭮����� ��� �ਥ�� �� ���ᨣ����';
  tBASE_BYE_AVANS  = 111; // �᭮����� �� �।������ ���㯮�';
  tBASE_SALE       = 201; // �᭮����� �� �த���';
  tBASE_PUTCONSIG  = 202; // �᭮����� ��� ���᪠ �� ���ᨣ����';
  tBASE_SALE_AVANS = 211; // �᭮����� �� �।������ �த��';
  tDOG_CALPLAN     = 403; // �㭪�� �������୮�� �����
  tREQ_SERVICE     = 510; // ��� �� �ࢨ᭮� ���㦨�����';
  tDOG_PERERAB     = 520; // �������� �� ���ࠡ��� �����';
  tREQ_RASHOD      = 801; // ���室������ �।��';
  tREQ_PRIHOD      = 804; // ��室������ �।��';
  tTRq_MTO_Ent     = 805; // ����饭��� ��� ��� (���� ᭠������) ';
  tREQ_PRDRASHOD   = 802; // ��ਮ���᪮� ��室������ �।��';
  tREQ_PRDPRIHOD   = 810; // ������᪨� ��室
  tREQ_GETCREDIT   = 803; // ����祭�� �।��';
  tCREDIT_PUT      =  85; // �뤠��� �।��
  tCREDIT_GET      =  86; // ����祭�� �।��
  tEND             = tREQ_PRDPRIHOD; // ��᫥���� ����⠭�

  cgDefDocReq      = 800; // cgOfp_Req- ����⠭��
  cgDefAktOfp      = 820; // cgOfp_Akt- ����⠭��
  cgTiDkGal_Fop    = 823;

  // ⨯� �� ���譨� ���㫥�
  tSECURITY        =  83;
  tVEKSL           =  81;
  tAVISO_OUT       =  21; // ��室�饥 ����� (advice)
  tAVISO_IN        =  22; // �室�饥 ����� (advice)

  // ⨯� �᭮�����
  rsFIN_OBLIGATION =   0; // ��.�� ���������� ���� �� �� ��
  rsDOGOVOR        =   1; // �᭮����� - �㭪� �������୮�� �����
  rsBASEDOC        =   2; // ��
  rsREQUEST        =   3; // ��� ���筠�
  rsREQUEST_PRD    =   4; // ��� �� ��ਮ���᪨� ��室/��室
  rsGRAFKRED       =   5; // ��䨪 ����祭��/�뤠�/����襭�� �।��
  rsTRq_MTO_Ent    =   6; // ����饭��� ��� ��� (���� ᭠������) '
  rsUNKNOWN        =  10; // ��� ��⪨ else

  // ⨯ 䨭.����樨
  ctNODEF          =   0; // ����।������
  ctTRANS_PS       =   1; // ��।�� ��
  ctVZAIM_MASTER   =   2; // ����������
  ctCONVERT        =   3; // ���������
  ctVZAIM_SLAVE    =   4; // ����������
  // ⨯ ��� ��� �������樨
  ctOWN_SECURITY   =  31; // ��襭�� ᮡ.業.�㬠�
  ctOWN_VEKSL      =  32; // ��襭�� ᮡ.���ᥫ�
  ctALIEN_SECURITY =  33; // ��襭�� ��஭.業.�㬠�
  ctALIEN_VEKSL    =  34; // ��襭�� ��஭.���ᥫ�
  ctVAL_BYE        =  35; // ���㯪� ������
  ctVAL_SELL       =  36; // �த��� ������
  ctVAL_CONVERT    =  37; // ��������� ������
  ctTRANSFER       =  38; // ��ॢ�� �����


  // ⨯ ���⥦���� �।�⢠
  mtNOTDEFINED     =   0; // �� ��।���� (��� ������ �� �㭪樨)
  mtKASSA          =   1; // ������ � ����
  mtKASSA_VAL      =  10; // ����� � ����
  mtACCOUNT        =   2; // ���죨 �� �/�
  mtACCOUNT_VAL    =   3; // ���죨 �� �/�
  mtSECURITY       =   4; // 業�� �㬠��
  mtVEKSL          =   5; // ���ᥫ�
  mtAVISO          =   6; // ����� (advice)
  mtZADOLJ         =   7; // �������������
  mtZADOLJ_DEBET   =   8; // �/� - ��� �����. ��ॢ쥢 (mtZADOLJ + dirPRIHOD)
  mtZADOLJ_CREDIT  =   9; // �/� - ��� �����. ��ॢ쥢 (mtZADOLJ + dirRASHOD)
  mtEND            = mtZADOLJ_CREDIT; // ��᫥���� ����⠭�

//!!DEL �.cgOfpTP_-����⠭��
  // ⨯ ���⥦� �� 䨭.��易⥫����
//  tpREGLAMENT      =   0; // ॣ�������
//  tpAVANS          =   1; // ����ᮢ�
//  tpSHTRAF         =   2; // ����� ᠭ�樨
//  tpCONVERT        =   3; // ��������� (�� - ��� ���. ��� ��.)

  // ����⠭�� ��� ��।������ �����
  wFld_TypePlat = 200;  // ��� ���⥦�
  dFld_dDoc     = 201;  // ��� ���

  // ���祭�� �� 㬮�砭��
  defCLEAR_TYPE    =   1; // ⨯ ��� - ��।�� ��
  defMEAN_TYPE     =   2; // ��� �� - ���죨 �� ��
  defAKT_PRIOR     =   1; // �ਮ��� ��易⥫��⢠
  defREQ_PRIOR     =   1; // �ਮ��� ���
  defAKT_VER       = 100; // ����⭮��� ������
  defAKT_TIPMONEY  =   1; // ⨯ �� �� � ����� (�㡫���)

  // ����� 䨭.����樨
  stINACTIVE       =   0; // ����⨢���
  stACTIVE         =   1; // ��⨢���
  stINVERT         =   2; // ��� �롮� ����� - �������� �� ��⨢��������

  // ����� 䨭.��易⥫��⢠
  stOFORM          =   0; // ��ଫ塞��
  stISPOLN         =   1; // �ᯮ��塞��
  stOTLOJEN        =   2; // �⫮������
  stOTMENEN        =   3; // �⬥������
  stZAKRYT         =   4; // �����⮥
  stNOTDEFINED     = 100; // < �� ��।���� >

  // ���ࠢ����� ��
  dirNULL          =   0; // ��� ��祣�
  dirPRIHOD        =   1; // ��室
  dirRASHOD        =   2; // ��室
  cgOfpDir_Conv1   =   2; // ���ࠢ����� ���孥� ��� �������樨
  cgOfpDir_Conv2   =   1; // ���ࠢ����� ������  ��� �������樨

  //-------------------------------------------------------
  // �஢�� ��㯯�஢��
  lALL             =   0; // ��
  lDATE            =   1; // ��� ����襭��
  lDO              =   2; // �O'
  lFO              =   3; // �����ᮢ�� ��易⥫��⢮'
  lPURPOSE         =   4; // �����祭�� ��易⥫��⢠'
  lKONTR           =   5; // ����ࠣ���'
  lSTATUS          =   6; // �����'
  lCURATOR         =   7; // �����'
  lCENTER          =   8; // ����� �⢥��⢥�����'
  lSTBUD           =   9; // ����� ���'
  lPLATMEAN        =  10; // ���⥦��� �।�⢮'
  lPRIOR           =  11; // �ਮ���'
  lVALUTA          =  12; // �����'
  lDIAPASON        =  13; // ��������� �㬬'
  lDOGOVOR         =  14; // �������'
  lAKTGROUP        =  15; // ��㯯� ��
  lAKTSUM          =  16; // ������ ��
  lDIRECT          =  17; // ���ࠢ����� �����
  lDATE_INPUT      =  18; // ��� ᮧ����� (��)
  lVID_PLATMEAN    =  19; // ��� �� (mt-����⠭��)
  lVALUTA_AKT      =  20; // ����� �� - ��� ��
  lUSER_PLATMEAN   =  21; // ��㯯� ��
  lDOTYPE          =  22; // ��� �᭮����� ��
  lDOVID           =  23; // ��� �᭮����� �� (��, ���, �।���...)
  lCATZADOLJ       =  24; // ��⥣�ਨ ������������ __OFP_FOFIRSTDATE__
  // �஢�� ��� �����⮣� ���
  lFACT            =  25; // 䠪�
  lUNREQ           =  26; // ���믮������ ��� (��� ��-��)
  lUNAKT           =  27; // ���믮������ ��-�� ����ࠣ��⮢
  lPRIHOD          =  28; // ��室 (��ࠧ��ᥭ�� ��� ������᪨�)

  lPERIOD          =  30; // �஢�� � ��ਮ��� (���-�� - � ���.�� ࠧ�����)
  lPLATMEAN_PRIHOD =  31; // ���⥦��� �।�⢮ (��� ��室�)
  lPLATMEAN_SALDO  =  32; // ���⥦��� �।�⢮ (��� ᠫ줮)

  lDIRECT_AKT      =  40; // ���ࠢ����� �� (��� ��ୠ�� ��)
  lDIAPASON_AKT    =  41; // �������� �㬬 �� (��� ��ୠ�� ��)
  lITOGO           =  42; // �⮣� (��� ���⮢)
  lSTBUDAN         =  43; // �����⨪� �� ����� ��� (��� ��ୠ�� ��)

  lDATE_BEGIN      =  44; // ��砫쭠� ��� ����襭�� ��
  lTIDKGAL         =  45; // ⨯ ���㬥��
  lOFPPERIOD       =  46; // ��� ��ਮ�� (�������/�������)
  lDATE_AKT        =  47; // ��� ����襭�� �� (��� ��)
  lCLEARTYPE       =  48; // ��� ����樨
  lTYPEPLAT        =  49; // ��� ���⥦�

  //� <> cgTreeNew_lKatOrgDescr = 99

  lBEGIN_PLATMEAN  = 100;
  lEND_PLATMEAN    = lBEGIN_PLATMEAN + mtEND; // 109
  lBEGIN_DO        = lEND_PLATMEAN + 1; // 110
  lEND_DO          = lBEGIN_DO + tEND;  // 110 + 810 = 920

  // ���஢�� � ��, ॥����
  // ���
  cgOfpSort_FopDate   = 1; // ���
  cgOfpSort_FopSumma  = 2; // �㬬�
  cgOfpSort_FopDirect = 3; // ���ࠢ�����
  cgOfpSort_FopStatus = 4; // �����
  // ��
  cgOfpSort_FoDate    = 101; // ���
  cgOfpSort_FoNoDoc   = 102; // �����
  cgOfpSort_FoPrior   = 103; // �ਮ���
  cgOfpSort_FoSumma   = 104; //
  cgOfpSort_FoDirect  = 105; //
  cgOfpSort_FoStatus  = 106; //
  // ���
  cgOfpSort_ReqDate   = 201; //
  cgOfpSort_ReqNoDoc  = 202; //
  cgOfpSort_ReqPrior  = 203; //
  cgOfpSort_ReqSumma  = 204; //
  cgOfpSort_ReqDirect = 205; //
  cgOfpSort_ReqStatus = 206; //

//  cgOfpRep_SortVal    = 6; // �����
  //-------------------------------------------------------


  // ⨯ ���㬥�� �� �⭮襭�� � �����
  tipRUB           =   1; // �㡫���
  tipVALRUB        =   2; // ����⭮-�㡫���
  tipVAL           =   3; // ������

  // ���� ����⠭��
  ccNULL           =   0; // word(0) comp(0) ...
  ccMARK           = ''#251;

  // pick - ����⠭�
  pickPLP          =2001; // ᮤ�ন� ��� ��� �ନ஢���� ����.���

  // ��ਮ��筮��� ���⥦� ��� DocReq
  perDAY           =   0;
  perWEEK          =   1;
  perTENDAYS       =   2;
  perMONTH         =   3;
  perQUARTER       =   4;
  perYEAR          =   5;

  // ������
  iconNone         =   0; // ��� ������
  iconLClPaid      =   1; // ����祭� ���
  iconLCanSetClStatus= 2; // ����� ������ ����� ���
  iconLCantSetClStatus=3; // ����� ������ ����� ���
  iconOClosedDay   =   4; // ������� ���� (����� �����)
  iconCClosedDay   =   5; // ������� ���� (������ �����)
  iconODeficit     =   6; // ���� �����  (����� �����)
  iconCDeficit     =   7; // ���� �����  (������ �����)
  iconONotDeficit  =   8; // ��� �����  (����� �����)
  iconCNotDeficit  =   9; // ��� �����  (������ �����)

  // OfpSaldo.RecType (������ ⮫쪮 � �������樥�)
  rtBEG_ARCHIVE    =  20;
  rtEND_ARCHIVE    =  21;
  rtBEG_CLOSED     =  10;
  rtEND_CLOSED     =  11;
  rtBEG_PLAN       =   0;
  rtEND_PLAN       =   1;
  rtSaldoOnDay     = 100; // ᠫ줮, ���������� �� ��।������ ����
  rtUnRegOborot    = 1010; // ����⥭�� ������ �� ��।������ ����

  cgOfpDay_Null    =   0;  // ����।������
  cgOfpDay_Arvd    =   1;
  cgOfpDay_Clsd    =   2;
  cgOfpDay_Plan    =   3;
  cgOfpDay_All     =   0;  // �� ��ਮ��

  // ��� �� (�����, �/�...) ��� ⨯ �� (����1, �/�1...)
  cgOfpPsVid       =   0; // OfpSaldo.Leaf = 0;
  cgOfpPsTip       =   1; // OfpSaldo.Leaf = 1;

  // ⠡���� �����
  cgOfpTable_ALL       =   0;
  cgOfpTable_Clearing  =   1;
  cgOfpTable_OfpPrihod =   2;
  cgOfpTable_OfpSaldo  =   3;
  cgOfpTable_AktOfp    =   4;
  cgOfpTable_DocReq    =   5;
  cgOfpTable_BaseDoc   =  11;
  cgOfpTable_GrafKred  =  12;

  // ������ �㬬 䠪�
  shNOT_PAID      =   0;
  shPAID          =   1;
  shALL           =   2;

  // ०��� ��� ��
  cgMode_KeepOld  = 0;
  cgMode_MakeNew  = 1;


  // N �㬬 ��� ��
  cgSum_OfpBase   = 0; // �㬬� ��� �᭮���� ������
  cgSum_OfpComp   = 1; //       ��� �ࠢ-��� ������

  cgOld           = 1; // ��� ��।�� �-� � ���.��ࠬ���
  cgNew           = 2; //

  // ----------- !!! �� ���뢠�� ��������� ListName   

  ceNoError            = 0; // ��� �訡��
  ceWarningWithCorrect = 1; // �।�०����� ��� ���뢠��� (ᠬ���४��)
  ceWarningNoCorrect   = 2; // �।�०����� ��� ���뢠��� (�ய�᪠��� ��� ���४樨)
  ceWarningWithBreak   = 4; // �।�०����� � ���뢠����  (����᪮�)
  ceError              = 5; // �訡�� (����᪮� � ��⠭�����)
  // ----------- !!! �� ���뢠�� ��������� ListName   

  // ��᫥����⥫쭮�� ��� ��ୠ�� ���-���
  cgLogsType_Compare   = 1; // �ࠢ����� �������
  // ----------- !!! �� ���뢠�� ��������� ���.� aOfpLogs.GetListName   

  cgLogsChange_Change  = 1; // ��������� ����
  cgLogsChange_Delete  = 2; // 㤠����� �����
  cgLogsChange_Insert  = 3; // ���������� �����
  cgLogsChange_Error   = 4; // ᮮ�饭�� �� �訡��
  // ----------- !!! �� ���뢠�� ��������� ���.� aOfpLogs.GetChangeName 

  // �㬬� ��� ������� ��
  cgSums_All      =  0; // �� �㬬� - ��� ������
  cgSPrih_PRIH    =  2; // ������
  cgSPrih_FACT    =  9; // 䠪�
  cgSPrih_PLAN    =  7; // ����
  cgSPrih_PRIHval = 12;
  cgSPrih_FACTval = 19;
  cgSPrih_PLANval = 17;

  cgSRash_RASH    =  3; // ������
  cgSRash_FACT    = 10; // 䠪�
  cgSRash_PLAN    =  8; // ����
  cgSRash_RASHval = 13;
  cgSRash_FACTval = 20;
  cgSRash_PLANval = 18;

  cgSPrRs_Diff    =  1; // ��室(��室) - 䠪�
  cgSPrRs_Diffval =  4; // ... � �����
  cgSPrRs_POTOK   =  6; // ���.��⮪
  cgSPrRs_POTOKval= 14; // ... � �����

  cgSPrRs_SALIN   = 11; // ��.ᠫ줮  ... � �����
  cgSPrRs_SALOUT  = 15; // ���.ᠫ줮 ... � �����
  cgSPrRs_DEFICIT = 16; // �����    ... � �����
  cgSPrRs_DEFflag =  5; // �ਧ��� ����� (��� ����)

  cgSPrRs_MDLflag = 21; // �ਧ��� �⫨�� ��� �� �ࠢ-��� ������ (��� ����)
  cgSPrRs_FixInFlag  = 22; // �ਧ��� 䨪�஢������ ᠫ줮
  cgSPrRs_FixOutFlag = 22; // �ਧ��� 䨪�஢������ ᠫ줮

  cgSumPK_MAX     = 22; // !!! �� ���뢠�� ������ �� ���祭��


//GAL7_1
  // ���ࠢ����� ��� �ਮ���
  cgDir_FORWARD = 1; // ��אַ�   (����訩 N - ����訩 �ਮ�.)
  cgDir_REVERSE = 2; // ���⭮� (����訩 N - ����訩 �ਮ�.)
  // ��⠫��� �ਮ��⮢
  cgPrior_OFP      = 1; // ��� ���⥦���� ���������
  cgPriorNum_OTHER = 10; // �᫮ �஢��� ��� ��⠫��� ��⠫����
  cgPriorNum_MAX   = 1000; // ᠬ�� ���ᨬ��쭮� �᫮ �ਮ��⮢
//

  // ���ᨬ��쭠� ��� � ��⥬�
  cgMAX_DATE      = '01/01/2100';
  cgVersion       = 810;
  cgDO_sWasDelete = '< �᭮����� 㤠���� >';

  // �������騥 �� �� �ନ஢���� �� ���� � ��
  cgTuneExFo_Ask    = 0; // �� ������
  cgTuneExFo_Skip   = 1; // �ய�᪠��
  cgTuneExFo_Remake = 2; // ��������

  // ����⠭� �� pick.inc
//  cgPick_StBud         = 20101; // �롮� ��⥩ ���

  // ��� �� �� �ନ஢����
  cgOfpDate_FromDO     =  0; // �� ��
  cgOfpDate_PayTill    =  1; // �� �� - ������� ��
  cgOfpDate_Setted     =  2; // 㪠������
  // �ய�᪠�� �� ��, �᫨ ��� ��� - ������� ����
  cgCurDO_No           =  0; // ���� �� ������
  cgCurDO_Yes          =  1; // ��
  cgCurDO_YesAll       =  2; // �� ��� ���
  cgCurDO_Exit         =  3; // ��室
  // ᯮᮡ ��।������ ���� ���
  cgFopCourse_DateFO   =  0; // �� ��� ᮧ��������� ��
  cgFopCourse_DateDO   =  1; // �� ��� ��
  cgFopCourse_FromDO   =  2; // �� 㪠������� � ��
  cgFopCourse_PrcDO    =  4; // � ��⮬ ��業� � �����

  // ����������� (��� 䨫��஢)
  cgLicv_High = 1; // ��᮪��
  cgLicv_Low  = 2; // ������

  // ���������� ���ᨢ�� ��� �롮� �� ᯨ᪠ ��
  cgOfpMT_FopTrans = 1; // ��।�� �।��
  cgOfpMT_FopVzaim = 2; // ����������
  cgOfpMT_FopConvt = 3; // ��������� - ������ ��� ��� ������
  cgOfpMT_FopConvtDnForKassa = 31; // ��������� - ������ ���, ����� ������ ����
  cgOfpMT_FopConvtDnForVekCb = 32; // ��������� - ������ ���, ����� ������ ���ᥫ� ��� �/�
  cgOfpMT_LicvHigh = 4; // �� ��᮪�� ����������
  cgOfpMT_LicvLow  = 5; // �� ������ ����������
  cgOfpMT_All      = 6; // �� �� - ��� 䨫���

  // ��� ���⥦� ��
  cgOfpTP_Reglament = 0; //'ॣ�������'
  cgOfpTP_Avans     = 1; //'����ᮢ�'
  cgOfpTP_Shtraf    = 2; //'����� ᠭ�樨'
  cgOfpTP_Convert   = 3; //'���������'

  // �㦥� �� ������ ���⪮� (��᫥ �������/������ ���, ��७�� � ��娢)
  cgOfpPeriod_NeedRecount = 'cgOfpPeriod_NeedRecount';

  // Clearing.Attr (���� �ᯮ���� Clearing.cChainClearing)
  cgOfpAttr_No      = 0;
  cgOfpAttr_Paid    = 1; // ����祭�� (�ᯮ������)
  //-------------------------------------------------------
  // ��������� �����������
  //-------------------------------------------------------
  // ��ࠬ��� parViewMode ����䥩� OfpJournal
  cgiOfp_No         =  0; // �� ����樮��஢�����
  cgiOfp_WinEditFO  =  1; // �������� ���� ।���஢���� ��
  cgiOfp_WinEditFop =  2; //  ���
  cgiOfp_Archive    =  4; // ��娢
  cgiOfp_GoToFO     =  8; // ���� ᯮ��樮��஢����� �� ��
  cgOfp_RecORP      =  0; // �᭮���� ࠡ�祥 ����
  cgOfp_PeriodNotExists = 1; // ��ਮ� �� �������
  cgiOfp_Multi      = 16; // ������⢥��� �롮�
  cgiOfp_Pick       = 32; // ०�� �롮� (�������) (���� �� ॠ�����)


  // ofpsald.vip
  cgOfpSald_Default   = 0; // �� 㬮�砭��
  cgOfpSald_OFPSaldR  = 1; // ��������
  cgOfpSald_OFPLimV   = 2; //
  cgOfpSald_OFPSaldoD = 3; //
  cgOfpSald_OFPPrihod = 4; //
  cgOfpSald_OFPUnRegOborot = 5; //
  // aGetSopr.vip
  cgExFilter_NoFop       =   1; // �����.�� ���.�� ���

  cgiOfp_RegPlan    =  0; // �ନ஢���� �����
  cgiOfp_RegAll     =  1; // ����⠭�������� ������ ���

  // ������� ��� OfpOut.vip
  cgCom_SoprHozInsert = 1;          // ���������� �����
  cgCom_SoprHozUpdate = 2;          // ���������� �����
  cgCom_SoprHozDelete = 3;          // 㤠����� �����
  cgCom_SoprHozChangeSumma = 4;     //��������� �㬬� 宧���-�樨
  cgCom_SoprHozChangeOfpPrihod = 5; // ��������� ��ࠧ��ᥭ-���� ��室�
  cgCom_SoprHozAddOnRest = 6;       // ����� �� �� ���⮪ �� �ਢ離� �� � ��
  cgCom_SoprHozChangeSummaBeforeDivision = 7; //  ��������� �㬬� 宧����樨 ��। �� ࠧ�������� (�� �ਢ離� � ��)
  cgCom_SoprHozSxlop = 8;           // �嫮�뢠��� ��������� � 1
  cgCom_SH_NewOwner  = 9;           // ���� ������� ��� AktPerf( bufSoprHoz.nRec -> bufSoprHoz.cPredOplDO )

  cgCom_BaseDocInsert = 11;         // ���������� �����
  cgCom_BaseDocUpdate = 12;         // ���������� �����
  cgCom_BaseDocDelete = 13;         // 㤠����� �����
  cgCom_BaseDocRecalc = 14;         // ������ �㬬
  cgCom_BaseDocMakeFO = 15;         // �ନ஢���� ��

  cgCom_TRq_MTO_Insert       = 20;  // ���������� �����  ����樨_�����_���
  cgCom_TRq_MTO_Delete       = 21;  // 㤠����� �����    ����樨_�����_���
  cgCom_TRq_MTO_GetNameFob   = 22;  // ���� � ������ ��� �易����� ��� ��� ����樨_�����_���

  // ���� Param ��� ��
  cgOfp_ParamNotDef   =  0;
  cgOfp_ParamLevForPS =  1;
  // ���������
  cgOfpRep_FOTitle   = '������ 䨭��ᮢ�� ��易⥫���';
  cgOfpRep_ReqTitle  = '������ ���';
  cgOfpRep_OfpTitle  = '���⥦�� ���������';
  // ��� ��㧥� ��
  cgOfp_SymDoc = '+'; // �ᯮ������ ����� 0
  cgOfp_SymIsp = 'x'; // ...��ନ஢��� �� ��� �㬬�
  cgOfp_SymOpl = '$'; // ... � ����祭�

  // ���஥��� �������� - ०���
  cgOfp_InsNotDef   = 0; // ����।���� (�� ���樠����樨)
  cgOfp_InsPK       = 1; // ��
  cgOfp_InsJournFO  = 2; // ��ୠ� �� - ���楯�� �� ��
  cgOfp_InsJournFop = 3; // ��ୠ� �� - ���楯�� �� ���
  cgOfp_InsRep      = 4; // �����
  cgOfp_InsDO       = 5; // �� (operfinp)
  cgOfp_InsSaldR    = 6; // ��� �� ᠫ줮
  cgOfp_InsAktSum   = 7; // �� �� ᢮����� ��

  //-------------------------------------------------------
  // ofpansee.vip

  // ०��� ��
  cgRegim_NotModel = 1; // �� ������஢����
  cgRegim_Together = 2; // ������஢���� � ������ �����
  cgRegim_FirstMod = 3; // ������஢���� � ��ࢠ� ������
  cgRegim_SecndMod = 4; // ������஢���� � ���� ������

  // ������� ��
  cgOfp_comChangeDate  =  1; // ��७�� ����
  cgOfp_comChangePS    =  2; // ������ ��
  cgOfp_comChangeStat  =  3; // ���.����� ���
  cgOfp_comFormPlatDoc =  4; // ��.����.���-�
  cgOfp_comRecountSaldo=  5; // ������ ���⪮�
  cgOfp_comCloseDay    =  6; // �����⨥ ���/�⪠�
  cgOfp_comMoveToArc   =  7; // ��७�� � ��娢
  cgOfp_comCompare     =  8; // �ࠢ����� � �������
  cgOfp_comCompareOld  =  9; // �ࠢ����� � ��� (���� ��ਠ��)
  cgOfp_comChangeModel = 10; // ���室 �� ��.������

  // ����ன�� � ��
  // ����� ࠡ����
  cgNoWork_FirstModel = 1; // � ��ࢮ� �������
  cgNoWork_SecndModel = 2; // � ��ன �������
  // �吝�� �த�������
  cgGoBound_FirstModel = 1; // �� ��ࢮ� ������
  cgGoBound_SecndModel = 2; // �� ��ன ������

  // �ᯮ������� �������
  cgPanelsOrder_Together    = 0;
  cgPanelsOrder_LeftToRight = 1;
  cgPanelsOrder_TopToDown   = 2;
  //-------------------------------------------------------
  // ��� ��।�� � ����⢥ ��ࠬ���
  cgNoMessage   = 0; // ᮮ�饭�� �����뢠��
  cgMessage     = 1; // �� �����뢠��

  //-------------------------------------------------------
  // ��������
  //-------------------------------------------------------
  cgOp_FopChangePs     =  0; // ��������� ��
  cgOp_FopChangeDate   =  1; //   ����
  cgOp_FopChangeStatus =  2; //   �����
  cgOp_FopMakeDocs     =  3; // ����.����
  //ifdef__OFP_ByFpOborot__
  cgOp_FopUnion        =  4; // ��ꥤ������ ���
  cgOp_FopDivision     =  5; // ࠧ������� ���
  //
  cgOp_FopRecount      = 20;
  cgOp_Fop_Link_Bud    = 34;

  cgOp_FoRecount       = 21;
  cgOp_FoMakeDocs      = 22;
  cgOp_FoUnArchive     = 23;
  cgOp_FoChangeDate    = 24;
  cgOp_FoChangeStatus  = 25;
  cgOp_FoChangePrior   = 26;
  cgOp_FoRecountByCourse = 27;
  cgOp_FoRecountDFirst = 28;
  cgOp_FoPrint         = 29;
  cgOp_FoPrintReqToPay = 30;
  cgOp_FoDelete        = 31;
  cgOp_FoMakePlan      = 32;
  cgOp_Fo_Link_Bud       = 33;
!  cgOp_Fop_Link_Bud= 34;

  cgOp_ReqPMakeFo      = 51; // �ନ஢���� �� �� ���
  cgOp_ReqMakeFo       = 52; //
  cgOp_ReqChangeStatus = 53; //
  cgOp_ReqChangePrior  = 54; //
  cgOp_ReqDelete       = 55; // ��஥ cgOp_DelReq
  cgOp_ReqPrint        = 56; // ��஥ cgOp_PrintDocReq

  cgOp_DoMakeFo        = 91; // �ନ஢���� �� �� ��
  cgOp_CrtMakeFo       = 92; // �� ����-��䨪� ��� �।��

  //-------------------------------------------------------
  // ��������� ������
  //-------------------------------------------------------
  // ��⮬���᪮� �ନ஢���� ��易⥫���
  //   �� �ਢ離� �� � ���⥦��� ���㬥��� (UPRFIN.OFP.AutoByDO)
  //   ������ ᫥���騩 ��ਠ�� ����砥� �।��騩 (���뢠�� � ��ࠡ�⪥)
  cgTuneAutoByDO_No      = 0; // �� �ନ஢���
  cgTuneAutoByDO_FindFop = 1; // �᪠�� ���室���� 䨭������
  cgTuneAutoByDO_AddFop  = 2; // �ନ஢��� 䨭������, �᫨ ���� ��ନ஢����� ��
  cgTuneAutoByDO_AddFO   = 3; // �ନ஢��� �� � 䨭������, �᫨ �� ������� ��
  cgTuneAutoByDO_ByStBud = 4; // �।������ ��।������ �� ����� ��� �� �ନ஢���� ��
  // ���������� ��
  cgCoFill_ByDefault            = 0; // ���祭��� �� 㬮�砭��
  cgCoFill_ByDogovor            = 1; // �� ��������
  cgCoFill_ByBase               = 2; // �� �᭮�����
  // ���ଠ�� � ��ନ஢����� ���⥦��� ���㬥���
  cgTuneOfp_PerfReport_No       = 0; // �� �뢮���� � ����
  cgTuneOfp_PerfReport_Print    = 1; // �⮡ࠧ��� � ���⭮� �ଥ
  cgTuneOfp_PerfReport_Edit     = 2; // �⮡ࠧ��� � ����
  // ��ࢮ��砫쭠� ��� �� �� ����
  cgTuneOfp_AktDateFirst_DateDO = 0; // ��� ��
  cgTuneOfp_AktDateFirst_NaSrok = 1; // ��� �� + "�� �ப"
  cgTuneOfp_AktDateFirst_OplDo  = 2; // ��� �� "������� ��"
//ifdef __OFP_FopByStBud__
  // ��ନ஢���� �㬬 � ���
  cgTuneOfp_BudgetNo            = 0; // �� �������
  cgTuneOfp_BudgetByFO          = 1; // �� ��
  cgTuneOfp_BudgetByFop         = 2; // �� ���

  cgTuneOfp_BudAsNo             = 0; // �� �������
  cgTuneOfp_BudAsSumma          = 1; // �㬬��� � �����
  cgTuneOfp_BudAsFpOb           = 2; // ����஢������ �� ���������

  // "����� 䨭�஢���� ������� �� ���㬥�⠬" ���/��/����
  // GetTune_Budget_ByDocs
  cgTuneOfp_BudByFop            = 1;
  cgTuneOfp_BudByAkt            = 2;
  cgTuneOfp_BudByReq            = 4;


//end //__OFP_FopByStBud__

  // ������ 䨭����樨 �� �ਢ離� ���⥦�� �� � ��
  cgTuneOfp_IspDoToFop_FindSome = 0; // 1 - �᪠�� ���室����
  cgTuneOfp_IspDoToFop_FindMake = 1; // 2 - �᫨ �� ������� - ᮧ������
  cgTuneOfp_IspDoToFop_MakeNew  = 2; // 3 - �ᥣ�� ᮧ������ �����
  // �㬬� �ନ஢���� �� �� ��
  cgTuneOfp_SumFoByDo_All       = 0; // ��� �㬬�
  cgTuneOfp_SumFoByDo_NotOpl    = 1; // ������祭��� �㬬� ��
  cgTuneOfp_SumFoByDo_OtgNotOpl = 2; // ���㦥��, �� �� ����祭�
  cgTuneOfp_SumFoByDo_Nakl      = 3; // �㬬� �� �������� (���㧪�/���⠢��)
  cgTuneOfp_SumFoByDo_UserAlg   = 4; // ���짮��⥫�᪨� �����⬮� (�� �����)

//ifdef __OFP_ByFpOborot__
  // ��������� �ᯮ������ 䨭����権 ���⥦���� ���������
  cgTuneOfp_RegFactFop_ByHO     = 0; // �� 宧������
  cgTuneOfp_RegFactFop_Manual   = 1; // ��⮭����
//end

  //-------------------------------------------------------
  // ������ aHistory
  //-------------------------------------------------------
  cgHist_OfpTitle = '����� ��᫥���� ����権';
  // ��� aLogs
  cgHistType_Ok    = 0;
  cgHistType_Error = 1;
  cgHistType_Break = 2;
  cgHistType_Inform= 3; // � �ந������ ⥪�⮬
  cgHistType_sOk    = '< ������ �����襭� �ᯥ譮 >'; // ����� �� �⮡ࠦ���
  cgHistType_sError = '< �訡�� �� ��᫥���� ����樨 >';
  cgHistType_sBreak = '< ������ ��ࢠ�� ���짮��⥫�� >';
  cgHistType_sNoError = '< �訡�� �� �����㦥�� >';
//�� ����������
//  cgHistType_cOk    = 0;
//  cgHistType_cError = ColorError;
//  cgHistType_cBreak = ColorSysGreen;
  // ���� ��� aHist
  cgHistCode_OfpOp   = 1; // ��: �� ����樨
//  cgHistCode_OfpPlat = 2; // ��: �ନ஢���� ���⥦��
//  cgHistCode_OfpFo   = 3; // ��: �ନ஢���� ��
  cgHistCode_OfpCheck= 4; // �஢�ઠ ⠡���
//  cgHistCode_OfpOpOne= 5; // ������� ����樨

//  cgHistLevel_01 = 1;
//  cgHistLevel_02 = 2;
//  cgHistLevel_03 = 3;
//  cgHistLevel_04 = 4;
//  cgHistLevel_05 = 5;

  cgOfpLog_SoprHoz = 11111;

  cgDefPrecision: double = 0.005;

  // ��ࠬ��� ����䥩� OfpClDay
  cgiOfpClDay_ClsOpn  = 0;
  cgiOfpClDay_Archive = 1;

  //-------------------------------------------------------
  // ������
  //-------------------------------------------------------
  // �ଠ�� �㬬 ��� doubletostr
  // sums_m.inc - ᮮ⢥�����騥 ������ ��� �ᯮ�짮����� � �ଠ� ����
  TSummaNdeSign   = '\2p[|-]36`666`666`666`667.88'; // �ଠ� ���ᨬ��쭮� �㬬� � ��� (ࠧ��஬ [17.2])
  TSummaNdeNoSign = '\2p6`666`666`666`667.88';      // ����������
  TSummaValSign   = '\2p[|-]36`666`666`667.88';     // �ଠ� ���ᨬ��쭮� �㬬� � ����� (ࠧ��஬ [14.2])
  TSummaValNoSign = '\2p6`666`666`667.88';          // ����������
  //-------------------------------------------------------
  // �����, �� ���ண� ��ନ஢��� ��� �� ���.�।��
  cgModulN_Ofp         =  0; // ��
  cgModulN_Dog         =  1; // �ࠢ����� ������ࠬ�
  cgModulN_Bye         =  2; // ᭠�������
  cgModulN_Sel         =  3; // ��⮬

//!!DEL
  // ��� ��ନ஢��� ��� �� ��室������
  cgModul_Ofp          =  0;
  cgModul_Dog          =  1;
  cgModul_Snab         =  2;
  cgModul_Sbyt         =  3;
  //-------------------------------------------------------

  cgOfp_CheckConvert = '���������';
  //-------------------------------------------------------
  // �������� �� (bookmarks)
  cgOfpBM_FOBrws  =  1;
  cgOfpBM_FopBrws =  2;
  cgOfpBM_PrfBrws =  4;
  cgOfpBM_NpBrws  =  8;
  cgOfpBM_BudBrws = 16;

  // �롮� �������/�����饣� ᮣ��襭��
  // ��㤠 �맢���: 1 - ������� 2 - ᮣ��襭�� 4 - ��������� ����
  cgOfpDog_Dogovor    =  1;
  cgOfpDog_AppDogovor =  2;
  cgOfpDog_CalPlan    = 32; // bdrip3.VPP
                                     // ��㤠 �맢���:
                                     // 1 - �������
                                     // 2 - ᮣ��襭��
                                     // 4 - ��������� ���� ⮢���
                                     // 16 - ��������� ���� 䨭��ᮢ�
                                     // 32 - ��������� ���� ��
  //-------------------------------------------------------
  // ����ன�� ���⮢
  //-------------------------------------------------------
  // �����
  cgOfpRepVal_Nde = 0; // ���
  cgOfpRepVal_Tar = 1; // ����� ���⮢
  cgOfpRepVal_Def = 2; // ��㣠� (��࠭���) �����

  //-------------------------------------------------------
