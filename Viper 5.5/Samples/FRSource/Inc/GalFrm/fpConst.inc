//------------------------------------------------------------------------------
//                                                      (c) ��௮��� �����⨪�
// �����⨪� 5.80 - ����� "��ࠢ����� ��⮬"
// ����⠭�� ࠡ��� � ���㫥� "��ࠢ����� ��⮬"
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// ����⠭�� ��ਮ��� �����஢����
  // ������� ����७��
  cgFpTPerEd_Day           = 0;  // ����
  cgFpTPerEd_Week          = 1;  // ������
  cgFpTPerEd_Month         = 2;  // �����
  cgFpTPerEd_Quater        = 3;  // ����⠫
  cgFpTPerEd_HalfYear      = 4;  // ���㣮���
  cgFpTPerEd_Year          = 5;  // ���

  // ��� ��ਮ��
  cgFpTPerVidPer_Std       = 0;  // �⠭�����
  cgFpTPerVidPer_User      = 1;  // ���짮��⥫�᪨�

  // ��ࠢ�������
  cgFpTPerTypeAlign_Not    = 0;  // �� ��ࠢ������
  cgFpTPerTypeAlign_Week   = 1;  // �� ���� ������
  cgFpTPerTypeAlign_Month  = 2;  // �� �᫮ �����
  cgFpTPerTypeAlign_Year   = 3;  // �� ���� � ����� ����

  // �� ����� ��ਮ�
  cgFpTPerPartPer_NotUnite = 0;  // �� ��ꥤ�����
  cgFpTPerPartPer_Unite    = 1;  // ��ꥤ�����
  cgFpTPerPartPer_AutoU    = 2;  // ��⮬���᪨
// ����⠭�� ��ਮ��� �����஢����
//------------------------------------------------------------------------------

// ���� ��⠫����, �ᯮ��㥬� � ⠡��� fpSpAttr "����䨪��� ��ਡ�⮢"
  cgKat_NotDef     =  0;     // ����।������� ���祭�� (��� ��ࠬ��஢)
  cgKat_AktOFP     =  1;     // ��⠫�� 䨭 ��易⥫���
  cgKat_FpRasp     =  2;     // ��⠫�� ��� ��।������
  cgKat_FpTForm    =  3;     // ��⠫�� ⨯���� �� ��⮢
  cgKat_FpStBud    =  4;     // ��⠫�� ��⥩ ��⮢
  cgKat_FpPeriod   =  5;     // ��⠫�� ��ਮ��� �����஢����
  cgKat_FpCO       =  6;     // ��⠫�� ��
  cgKat_DocReq     =  7;     // ��⠫�� ��� ����� ��
  cgKat_HashAn     =  8;     // ��⠫�� HashAn
  cgKat_FpRaspR    =  9;     // ��⠫�� ����権 ��� ��।������
  cgKat_FpSpAttr   = 10;     // ��⠫�� ᯥ�䨪�樨 ��ਡ�⮢
  cgKat_FpFilter   = 11;     // ���짮��⥫�᪨� 䨫���� ��� FpOborot
  cgKat_FpKatImp   = 12;     // ��⠫�� ᮮ⢥��⢨� ��� ��ᯮ��-������ FpKatImp
  cgKat_FpState    = 13;     // ������ ��� FpState
  cgKat_FpTiDKRelOb= 14;     // ��� 䨭����権 � ��⮬ (⨯� ���㬥�⮢)
  cgKat_Clearing   = 15;     // 䨭����樨 (� �� ��� ��䠩��� __OFP_FopByStBud__)
  cgKat_BudAn      = 16;     // ��ਡ��� �����⨪ ���஢����
  cgKat_TypoTPer   = 17;     // ��⠫�� ⨯������ ��ਮ���
  cgKat_FpSpAnSet  = 18;     // ����䨪��� ����஢ ���祭�� �����⨪�

// ��⮢� �������樨 ��� ����/䠪�/१��
  cgRegBit_No        = cgBitNo;    // ���
  cgRegBit_Plan      = cgBit00;    // ����
  cgRegBit_Fact      = cgBit01;    // 䠪�
  cgRegBit_Rezerv    = cgBit02;    // १��

// ����⠭�� ��� �㭪権 �஢�ન ��⠫����
  cgFpKatH_Check_IsDel     = 1;
  cgFpKatH_Check_IsCorrect = 2;

// ����⠭�� ��� �㭪権 �஢�ન �ࠢ ����㯠
  cgFpGetAvailableList_TFMode = 0;
  cgFpGetAvailableList_COMode = 1;
  cgFpGetAvailableList_StBudMode = 2;
  cgFpGetAvailableList_VariantMode = 3;
  cgFpGetAvailableList_AreaMode = 4;
  cgFpNotAvailable  = 0;
  cgFpViewAvailable = 1;
  cgFpEditAvailable = 2;

// ����⠭�� ��� ���㣫����
  cgFp_NoRound      = 0;
  cgFp_NormalRound  = 1;
  cgFp_GreaterRound = 2;

// ��ਡ��� ���� ���
  cgStBud_Valut  =   1;
  cgStBud_EdIzm  =   2;
  cgStBud_VTCh   =   4;
  cgStBud_Saldo  =   8;
  cgStBud_VnOb   =  16;
  cgStBud_SpecR  =  32;

// �������쭮� ���祭�� ������⥫� � ���
  cgFp_MinSumma = 0.00000000001;

// �ਧ��� ��⨢���� ��ਠ�� ���
  cgFp_ActivBudVar = 1;

// �����䨪��� �ᥩ �� ����������
  wAxis1Id = 1;  // ��� � __����ﬨ__
  wAxis2Id = 2;  // ��㣠� ��� :)
// �����䨪��� �ᥩ �� �ᯮ�������
  wAxisY   = 1;  // ��� ��ப   (���⨪��쭠�)
  wAxisX   = 2;  // ��� ������� (��ਧ��⠫쭠�)

// ��� ���� AttrSys ⠡���� fpValues
  fpValues_AttrSys_Cell_Is_Fixed = 1;      // ���祭�� 䨪�஢���
  fpValues_AttrSys_Cell_Is_Limit = 2;      // ���祭�� ���� ����⮬
  fpValues_AttrSys_Cell_Have_Prim = 4;     // ���祭�� ����� ������਩

//  ������ ����஥��� ��ꥪ� MultiAgr.THierContainer
  Hier_IsFPMeanInMem  =  1; // 0001h;      // ⠡��� FpMeanTF, �ᯮ������ ��� ��
//  ��� ��᪨ �祩�� � �ନ��� MultiAgr
  Cell_IsAgregat    =    1; // 0001h;      // ��ॣ�� �� ᬥ� (����+�����⨪�) � ��ਮ���
  Cell_IsReal       =    2; // 0002h;
  Cell_IsAgregatTF  =    4; // 0004h;      // ��ॣ�� �� ��� (��ਧ��⠫쭮� � ���⨪��쭮�)
  Cell_IsMayEnter   =    8; // 0008h;
  Cell_IsModified   =   16; // 0010h;
  Cell_IsToSave     =   32; // 0020h;
  Cell_IsFormula    =   64; // 0040h;
  Cell_IsAllOne     =  128; // 0080h;
// �᫨ ���� �� ��ࠬ���� ��� �࠭���� ����� ����娩 - Need more size Mask !!!
//Cell_IsFree       =  256; // 0100h;
//Cell_IsFree       =  512; // 0200h;
//Cell_IsFree       = 1024; // 0400h;
// �������⥫쭠� ���ଠ�� �� �祩�� ��� ��ᢥ⪨ � ।���஢���� ���
  Cell_IsCalcAgrSt  = 2048; // 0800h;      // �����, ���ன ���稭��� �祩��, � ������ �᫮����, ���� ����塞��, ���� ��ॣ��㥬��
  Cell_IsAgregatSt  = 4096; // 1000h;      // �����, ���ன ���稭��� �祩��, ���� ��ॣ�⮬
  Cell_IsAgregatPer = 8192; // 2000h;      // ��ਮ�, ���஬� ���稭��� �祩��, ���� ��ॣ�⮬
// ���樠��� ���ਡ��� �祩��
  Cell_IsFixed     = 16384; // 4000h;      // ���祭�� � �祩�� 䨪�஢���.  Old: wFlagFix   = 4000h;
  Cell_IsLimit     = 32768; // 8000h;      // ���祭�� � �祩�� ������㥬��. Old: wFlagLimit = 8000h;

// ��� ᯮᮡ� ����祭�� ���� ������
  CursByFirstDate  = 0;
  CursByLastDate   = 1;
  CursByMiddleDate = 2;
  CursByAverage    = 3;

// ���� ����� 䨭��ᮢ�� ����権
  CursByFpOborotDate    = 0;
  CursByFpOborotPeriod  = 1;

// �ਧ��� �����᫥��� ���� �� ��ਠ�� � ��
  NoFormulaForVariant = '###';

// �������� ᨭ⠪�� �����䨪��஢ ��� ���⮢ � ��
  IdChar        = '%';  // 37
  IdCurrent     = '=';  // 61
  IdPrev        = '<';  // 60
  IdWithoutAn   = '^';  // 94

// ����⠭�� ��� ���஢����
  FpNo_Cash       = 0;
  FpNormal_Cash   = 1;
// ����⠭�� ��ࠬ��஢ ����᪠ ��⠫��� �����⨪� ���஢����
  FpAccess_ctForm   = 1;
  FpAccess_KodGrKau = 2;

// ����⠭�� ��� ⠡��� � ����� (��।����� � ��ꥪ� ObjFpMemoryTablesID)
  co_BudgetPeriod    = 1;
  co_ListBudget      = 2;
  co_PeriodRelations = 3;
  co_ListTForm       = 4;
  co_ListSheet       = 5;
  co_SessionSemaphor = 6;
  co_MtFpImpRel      = 7;
  co_MtFpKatImp      = 8;

// ����⠭�� ��ࠬ��஢ ����᪠ EditListBudget (FpLBud.vip)
  cgiFpLBud_ShowMBudName        = 1;
  cgiFpLBud_ShowMVarName        = 2;
  cgiFpLBud_ShowMBudVarName     = 4;
  cgiFpLBud_ShowMBudVarNpp      = 8;
  cgiFpLBud_ShowMBitReg         = 16;
  cgiFpLBud_ShowMDataStatus     = 32;

  cgiFpLBud_ShowSBudName        = 64;
  cgiFpLBud_ShowSVarName        = 128;
  cgiFpLBud_ShowSBudVarName     = 256;
  cgiFpLBud_ShowSBudVarNpp      = 512;
  cgiFpLBud_ShowSBitReg         = 1024;
  cgiFpLBud_ShowSDataStatus     = 2048;

  cgiFpLBud_ShowDelMode         = 4096;
  cgiFpLBud_ShowOrder           = 8192;

// ����⠭�� ��ࠬ��஢ ����᪠ FpOborot
  cgiFpOborot_AllOborot         = 0; // ��
  cgiFpOborot_DocOborot         = 1; // �� ���㬥���
  // ---------------------------------------------------------------------------
  // ������ ��� ����ᮬ - �㦭� �� � �ᯮ������� ��
  cgiFpOborot_DocAndSpDocOborot = 2; // ���㬥��+ᯥ�䨪���
  cgiFpOborot_SpDocOborot       = 3; // ⮫쪮 ᯥ�䨪���
  // ---------------------------------------------------------------------------
  cgiFpOborot_SoprHozOborot     = 4; // �� SoprHoz
  cgiFpOborot_DocSpOborot       = 5; // �� ����樨 ᯥ�䨪�樨 ���㬥��

// Embedded FpOborot (FpEmbOb.Vih)
  cgiFpOborot_BrowseFull        = 0; // browse � ������ ������� ���.���ଠ樨
  cgiFpOborot_ScreenFull        = 1; // ����让 screen
  cgiFpOborot_BrowseShort       = 2; // browse ��� ������ ������ � ���.���ଠ樥�
  cgiFpOborot_ScreenShort       = 3; // �����쪨� screen
  cgiFpOborot_BrowseDocOb       = 4; // browse ��� 䨭����権 ���㬥�⮢

// ����⠭�� ��ࠬ��஢ ����᪠ GetKauValues (GTKAUVAL.VIP)
  cgiFpKauValues_BaseMode            = 0;
  cgiFpKauValues_NotEditAnalitDoc    = 1;
  cgiFpKauValues_NotEditAnalitBud    = 2;
  cgiFpKauValues_NotShowAnalitDoc    = 4;
  cgiFpKauValues_NotShowAnalitBud    = 8;

// ����⠭�� ��ࠬ��஢ ����᪠ Budget (Budget.vip)
  cgiBudget_GetSingle        = 0;
  cgiBudget_GetArg           = 1;
  cgiBudget_GetConsolidate   = 2;

// ����⠭�� ��ࠬ��஢ ����᪠ EditFpAgrSet (FpAgrSet.Vip )
  cgiEditFpAgrSet_ParamRule = 0;
  cgiEditFpAgrSet_TFormRule = 1;

// �����䨪���� ��魮�⥩ ��ꥪ� tObjFpAddFldObjInterface
  FpAreaEntity   = 1;
  FpBudVarEntity = 2;
  BuhRepEntity   = 3;
  FpTFormEntity  = 4;
  FpStateEntity  = 5;
  CulcFpObEntity           = 6;
  GetMRaspCOEntity         = 7;
  ReCalcBudgetEntity       = 8;
  GrBudgetCopyEntity       = 9;
  FpBudgetAggrEntity       = 10;
  FpImportXLSBudgetEntity  = 11;
  FpImportDBFBudgetEntity  = 12;
  FpExportBudgetEntity     = 13;
  FpCompBudgetTuneEntity   = 14;
  FpModulAdmin             = 15;
  FaImportEntity           = 16;
  FpDecompByPeriodEntity   = 17;
  FpClearBudgetEntity      = 18;
  FpCreateBudgetEntity     = 19;
  OsChgParEntity           = 20; // ���, ᯨ᮪ ��� ���-஢ � �������
  FpMRTuneEntity           = 21;
  GetKatImpRelEntity       = 22;
  ObjFpGrEditAnMeanOborotEntity = 23;
  FpImportXLSFpOborotEntity= 24;
  RunFpBudAlgEntity        = 25;
  RunFpStatAlgEntity       = 26;
  RunFpMTGExpDbfEntity     = 27;
  ObjFpPaymentTemplEntity  = 28;
  ObjFpPlPorPayTemplEntity = 29;
  ObjFpEMailPayTemplEntity = 30;
  RunFpPaymentEntity       = 31;
  EditFpImpTemplaterEntity = 32;
  RunnerFpImportEntity     = 33;
  FpParamCO_A              = 34; //��ࠬ��� �� ஫� �
  FpParamCO_B              = 35; //��ࠬ��� �� ஫� �
  FpParamPer_A             = 36; //��ࠬ��� ��ਮ� ஫� �
  FpParamPer_B             = 37; //��ࠬ��� ��ਮ� ஫� �
  FpParamSt_A              = 38; //��ࠬ��� ४������ ����� ஫� �
  FpParamSt_B              = 39; //��ࠬ��� ४������ ����� ஫� �
  FpParamKodReg_A          = 40; //��ࠬ��� ॣ���� ��� ஫� �
  FpParamKodReg_B          = 41; //��ࠬ��� ॣ���� ��� ஫� �
  FpParamTForm_A           = 42; //��ࠬ��� ⨯���� �ଠ ஫� �
  FpParamTForm_B           = 43; //��ࠬ��� ⨯���� �ଠ ஫� �
  FpParamList_A            = 44; //��ࠬ��� ᯨ᮪ ��⮢ ஫� �
  FpParamList_B            = 45; //��ࠬ��� ᯨ᮪ ��⮢ ஫� �
  FpMailTuneEntity         = 46;
  FpCreateBudgetEntityUsr  = 47; // ��魮��� ��� ����䥩� ᮧ����� ��⮢ � ������������ ���ᮭ�䨪�樨 ����஥�
  FpClearBudgetEntityUsr   = 48; // ��魮��� ��� ����䥩� ���⪨ ��⮢ � ������������ ���ᮭ�䨪�樨 ����஥� 
  CulcFpObEntityUsr        = 49; // ��魮��� ��� ����䥩� ����㧪� 䨭����権 � ������������ ���ᮭ�䨪�樨 ����஥� 
  FpBudgetAggrEntityUsr    = 50; // ��魮��� ��� ����䥩� ��ॣ�樨 � ������������ ���ᮭ�䨪�樨 ����஥� 
  FpDecompByPeriodEntityUsr= 51; // ��魮��� ��� ����䥩� ���������樨 � ������������ ���ᮭ�䨪�樨 ����஥� 
  GrBudgetCopyEntityUsr    = 52; // ��魮��� ��� ����䥩� ����஢���� � ������������ ���ᮭ�䨪�樨 ����஥� 
  GetMRaspCOEntityUsr      = 53; // ��魮��� ��� ����䥩� ������� ��।������ � ������������ ���ᮭ�䨪�樨 ����஥� 
  ReCalcBudgetEntityUsr    = 54; // ��魮��� ��� ����䥩� ������ ��⮢ � ������������ ���ᮭ�䨪�樨 ����஥� 
  RunnerFpImportEntityUsr  = 55; // ��魮��� ��� ����䥩� ������ ����⮢ ������ � ������������ ���ᮭ�䨪�樨 ����஥� 
  FpImportXLSBudgetEntityUsr   = 56; // ��魮��� ��� ����䥩� ������ ��⮢ �� Excel � ������������ ���ᮭ�䨪�樨 ����஥� 
  FpImportDBFBudgetEntityUsr   = 57; // ��魮��� ��� ����䥩� ������ ��⮢ �� DBF � ������������ ���ᮭ�䨪�樨 ����஥� 
  FpImportXLSFpOborotEntityUsr = 58; // ��魮��� ��� ����䥩� ������ 䨭����権 �� Excel � ������������ ���ᮭ�䨪�樨 ����஥� 
  FpExportBudgetEntityUsr      = 59; // ��魮��� ��� ����䥩� ��ᯮ�� ��⮢ � ������������ ���ᮭ�䨪�樨 ����஥� 
  RunFpPaymentEntityUsr        = 60; // ��魮��� ��� ����䥩� �ନ஢���� ���⥦��� ���㬥�⮢ � ������������ ���ᮭ�䨪�樨 ����஥�
  RunFpStatAlgEntityUsr        = 61; // ��魮��� ��� ����䥩� �믮������ ������᪨� �����⬮� � ������������ ���ᮭ�䨪�樨 ����஥�   
  FpReplaceParam_A             = 62; // ��ࠬ��� ०�� ������ ஫� �
  FpReplaceParam_B             = 63; // ��ࠬ��� ०�� ������ ஫� B
  FpLinkScenarioEntity         = 64; // ��魮��� ��� ��뫮� �� �業�ਨ � ����� ������
  FpBudVarAttrEntity           = 65; // ��魮��� ��� ����䥩� ��⠭���� ��ਡ�⮢
  FpBudVarAttrEntityUsr        = 66; // ��魮��� ��� ����䥩� ��⠭���� ��ਡ�⮢ � ������������ ���ᮭ�䨪�樨 ����஥�
  FpUserParam_A                = 67; // ��ࠬ��� ���짮��⥫� ஫� �
  FpUserParam_B                = 68; // ��ࠬ��� ���짮��⥫� ஫� B
  ImportRelationEntity         = 69; // ��魮��� ��� ����䥩� ᮮ⢥��⢨� �����⨪

// �����䨪���� ��魮�⥩ � FP
  cgFpEntity_Budget  = 1;
  cgFpEntity_BudVar  = 2;
  cgFpEntity_BudProt = 3;
  cgFpEntity_KatExpr = 4;
  cgFpEntity_ProtExpEMail = 5;

// �����䨪���� ����㠫��� ��⠫���� � FP �� UserDeskRep
  cgReport_KatFpRelObBud       = 717; // cgReport_717
  cgReport_KatFpCompBudgetTune = 718; // cgReport_718
  cgReport_KatOfpLimitTune     = 720; // cgReport_720
  cgReport_KatFpAlgSetTune     = 721; // cgReport_721
  cgReport_KatFpStatAlgTune    = 722; // cgReport_722

  cgAnaliz_FpBudget  = 0; // ������ ��⮢ ��
  cgAnaliz_OfpLimit  = 1; // ������ ����⮢ ��
  cgAnaliz_FpAlgSet  = 2; // ������� ����
  cgAnaliz_FpStatAlg = 3; // ������� ���� ������᪨�

// ����⠭�� ��ꥪ� ObjFpCulcCompBudget
  lcFpCompMaxColCount = 250;

// ����⠭�� ��ꥪ� iObjFpLockValues
  fpcgBudVarLock = 1;
  fpcgKodRegLock = 2;
  fpcgStBudLock  = 4;
  fpcgPeriodLock = 8;

  fpcgActiveSem  = 1;
  fpcgAgrSegSem  = 2;

// ���ﭨ� ���㬥�⮢ 䨭����権
  cgFpOb_ActionState   = 0;
  cgFpOb_NoActionState = 1;

// ���㬥��� 䨭����権
  cgFpOb_HDOk       = 0;
  cgFpOb_HDNotFound = 1;

// ���ॢ�� ����� �஢�ઠ�� �� ����䨪��� ����ᥩ � ⠡��� (ᥪ㭤)
  cMinTimeChange = 5;

// �ࠢ��� �����஢�� ��⥩ ⨯���� ��� � ����䥩� "������஢���� ���"
  cgBudEditPreLockStBudRule_AllLock = 1;
  cgBudEditPreLockStBudRule_NotLock = 2;
  cgBudEditPreLockStBudRule_Default = 0;

// ०��� ��ᯮ��/������
  cgiFpImpExp_Import = 0; // ������
  cgiFpImpExp_Export = 1; // ��ᯮ��
  cgiFpImpExp_IEMail = 2; // ������  EMail
  cgiFpImpExp_EEMail = 3; // ��ᯮ�� EMail

