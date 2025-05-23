//------------------------------------------------------------------------------
// !!!��������!!! ��� 䠩� ࠧ�࠭祭 � 5.8x
// �᫨ ������ ����� ���������, �� ���뢠�� �ࠢ��� � ⠬
//                               (�᫨ ���� ����筮 :)
//------------------------------------------------------------------------------

// �।��।������ ��⥬�� ⨯� ��� ��⥩ ����� � ��ந⥫��⢥.
  cgStZatr_SMR     = 0; // ��ந⥫쭮-��⭠��� ࠡ���.
  cgStZatr_Oborud  = 1; // ����㤮�����.
  cgStZatr_PIR     = 2; // �஥�⭮-���᪠⥫�᪨� ࠡ���.
  cgStZatr_Prochie = 3; // ��稥 ������.

// ����� ��� ��⮮��������� KatKau
  verKauTable      = 720;
//------------------------------------------------------------------------------

// ����⠭�� ���樠����樨 ��ꥪ⮢ (����⭮)
//  cgInit_Kau       = 1;
  cgInit_Hash      = 2;
  cgInit_TXO       = 4;
  cgInit_FPP       = 8;
  cgInit_FPR       = 16;

// ����⠭�� cFirstKAU, cLastKAU ��ࢮ�� � ��᫥����� ����஢ ��� ��६�饭� � GalNet.inc � GalConst.pas

  cgMaxKauFP       = 5;

// ����⠭�� ���祭�� ���
  cKauNRecForOthers = 1;     // ��稥               comp(1)
  cKauNRecNotDefine = 0;     // �� ��।�����        comp(0)

  SetDefKau         = 0;     // ��� �� 㬮�砭�� - �뫠 ����⠭� � ��᪠��
  SetDefKodeKau     = 0;     // ��� �� 㬮�砭�� - �뫠 �㭪�� � ��᪠��

// ����⠭�� ��� �㭪樨 GetAnyKau ��ࠬ��� wMode ( �⥫��� �� ��ॢ��� �� ��⮢�� ����, �� ⠪ 㦥 ᫮������)
  cgAkSimple          = 0;  // ���� ��ᢥ�� ������������
  cgAkOther           = 1;  // cKauNRecForOthers ������� �� "��稥"
  cgAkOtherOrNoDef    = 2;  // � "��稥" � "�� ��।�����"
  cgAkNoDef           = 3;  // cKauNRecNotDefine ������� �� "�� ��।�����"

// ����⠭�� ��� �㭪樨 GivenAnName
// �. ⠪�� Tip&Stat\KauTable.xls
  cgAnName   = 1; // ������������ ���
  cgAnStrKod = 2; // ��⥬�� String(NRec), ���� SpKau.Code
  cgAnStrKey = 3; // ���� ��� ���஢�� � �����, ��।������ �� ����ன��� (StrName+StrKod) (StrKod+StrName)
  cgAnNode   = 4; // ��ப���� �।�⠢����� cNode (������饣� �������)
  cgAnAbbr   = 5; // 㭨����� ��ப��� ID ��� �ᯮ�짮����� � ��㫠� (!!!�� ���������!!!)
  cgAnCode   = 6; // ���, ��� �ࠢ��� ��� ���஢�� � ��⠫����; ����� ��������, ����� ���� ��㭨�����
  cgAnSort   = 7; // ��ப� ��� ���஢��, �� �� ��� ��㯯�஢��

// ���� ��� (KatKau.SysNum)
  cgKatKau_Table    = 0;      // ��⥬��
  cgKatKau_User     = 1;      // ���짮��⥫�᪨�
  cgKatKau_Set      = 2;      // ������
  cgKatKau_Enum     = 3;      // ����饭��
  cgKatKau_Interval = 4;      // ���ࢠ��
  cgKatKau_Synonym  = 5;      // ᨭ����� /���� ����� �� ॠ�������� 09.10.2003 Gera/
  cgKatKau_System   = 100;    // ��⥬�� ��⠫��� �� ��騥�� �����⨪��
  cgKatKau_Trash    = 200;    // �����४�� �����⨪�
  cgKatKau_Error    = 65000;  // �訡�� ��� �㭪権 GetSysNum � GetKauSysNum

// ��⮢� ����� �������� ����䥩� GetKauTable, ����� �㦭� ������
  cgKatKau_BuhDisabled = 28; // = 4 or 8 or 16         // �����⨪� � ��劮����
  cgKatKau_SynDisabled = 32;                           // ��������
  cgKatKau_FPDisabled  = 28; // = 4 or 8 or 16         // �����⨪� ��� FP
  cgKatKau_AllDisabledWithoutUser  = 61; // = 1 or 4 or 8 or 16 or 32       //�⮡ࠦ��� ⮫쪮 ���짮��⥫���� �����⨪�

// ��砫� �㬥�樨 �����⨪ (�஬� ��⥬���) [KatKau.KodGroup]
  cgKatKau_StartNum = 10000;
  //----------------------------------------------------------------------------
  cgFirst_UsKau     = 10000;  // �������� 㤠�����, �� �ᯮ�짮���� !!!
  //----------------------------------------------------------------------------

// ��� ���ᨬ��쭮�� �������� ��� (��� ������஢���� ���)
  cgMax_KauBit     = 16384;

// ����⠭�� ��� �������⥫��� ��ਡ�⮢ ��� (���)
  cgDas_NoFor_SD   = 1;
  cgDas_NoFor_SK   = 2;
  cgDas_NoFor_OD   = 4;
  cgDas_NoFor_OK   = 8;

//��ࠬ���� ������ ����䨪�樮���� ��⠫���� (���஥���� ����䥩ᮢ)
  cgRecordView    = 0;      //��ᬮ��
  cgRecordEdit    = 1;      //।���஢����
  cgRecordInsert  = 2;      //��⠢��
  cgRecordDelete  = 3;      //㤠�����
  cgRecordEditEn  = 4;      //।���஢���� � �롮஬
  cgRecordActiv   = 5;      //��ॢ�� � ��⨢��/�᪫�祭��
  cgRecordHide    = 6;      //���⨥

// ����⠭�� ࠧ����� (��稭�� � 7.1)
  cgRazdel_First  = 1;   // ���� ���⥪��
  cgRazdel_FP     = 1;   // 䨭.�����஢����
  cgRazdel_PP     = 2;   // �ந�����⢥���� �����஢����
  cgRazdel_MC     = 3;   // ��� ��
  cgRazdel_Usl    = 4;   // ��� ��� - ��稭�� � 7_11
  // ������������� ������ ��������� cgRazdel_End ��� ���������� ��������
  cgRazdel_End    = 4;   // ��᫥���� ���⥪��
  cgRazdel_Error_NotFound = 1 ; //�訡�� ���᪠ ࠧ����

//��㯯� �����⨪ � ᫮� ������⥫�� �� ࠧ����� ��� (Sloj.Razdel)
  cgSloj_RazdelFP  = 1;      //䨭.�����஢����
  cgSloj_RazdelPP  = 2;      //�ந�����⢥���� �����஢����

//��㯯� �����⨪ � ᫮� ������⥫�� (Sloj.SysNum)
  cgSloj_Group     = 1;      //��㯯� �����⨪
  cgSloj_Sloj      = 2;      //᫮� �����⨪
  cgSloj_GrSloj    = 3;      //��㯯� ᫮�� �����⨪

//��㯯� �����⨪ � ᫮� ������⥫�� (Sloj.isActive)
  cgActivSloj      = 0;
  cgDeletedSloj    = 1;

// ��⮢� ��᪨ �������⥫��� ��権 �� ࠡ�� � �����⨪����
  cgOpt_None       = 0;
  cgOpt_P1         = 1;
  cgOpt_P2         = 2;
  cgOpt_P3         = 4;

//------------------------------------------------------------------------------
// ����⠭�� ��� (��⠫���� �������᪮�� ���)
//------------------------------------------------------------------------------
  cgKau_KatOrg        = 1;   // �࣠����樨
  cgKau_KatPodr       = 2;   // ���ࠧ�������
  cgKau_Persons       = 3;   // ����㤭��� �।�����
  cgKau_KatMC         = 4;   // ���ਠ��� 業����
  cgKau_KatUsl        = 5;   // ��㣨
  cgKau_BaseDoc       = 6;   // ���㬥���-�᭮�����
  cgKau_Zakaz         = 7;   // �ந�����⢥��� ������. � 5.8 � 7.1 ࠧ�� ⠡����
  cgKau_GroupMC       = 8;   // ��㯯� ��
  cgKau_GroupUsl      = 9;   // ��㯯� ���
  cgKau_KatParty      = 10;  // ���⨨ ��
  cgKau_GroupParty    = 11;  // ��㯯� ���⨩ ��
  cgKau_GroupSch      = 12;  // ��㯯� ��/������஢
  cgKau_Zatr          = 13;  // ���� ����� (�ந�����⢮)
  cgKau_Dogovor       = 14;  // ��������
  cgKau_OS            = 15;  // �᭮��� �।�⢠
  cgKau_NMA           = 16;  // �����ਠ��� ��⨢�
  cgKau_AppVeks       = 17;  // ���ᥫ� � 業�� �㬠��
  cgKau_VidNor1       = 18;  // ���� �᭮���� �।��
  cgKau_VidNor2       = 19;  // ���� �����ਠ���� ��⨢��
  cgKau_FpStBud       = 20;  // ���� ������ (��⮢)
  cgKau_FpPeriod      = 21;  // ��ਮ�� �����஢����
  cgKau_FpCO          = 22;  // ������ �⢥��⢥�����
  cgKau_ObjRem        = 23;  // ����㤮����� (� 5.8 ��ꥪ�� ६���)
  cgKau_KatMarsh      = 24;  // �������� �����
  cgKau_HDR_PS        = 25;  // �ந�����⢥��� ᯥ�䨪�樨
  cgKau_Indent        = 26;  // ���\������
  cgKau_Grafik        = 27;  // ��䨪�
  cgKau_MnPlan1       = 28;  // �ந�����⢥��� �����
  cgKau_MnPlan2       = 29;  // ���� ᭠������
  cgKau_MnPlan3       = 30;  // ���� ���
  // 31
  cgKau_GroupOfp      = 32;  // cgKatKau_System: ��㯯� 䨭��ᮢ�� ��易⥫���
  // 33
  cgKau_FinSource     = 34;  // ���筨�� 䨭���஢����
  cgKau_TechOp        = 35;  // ��孮�����᪨� ����樨
  cgKau_Profes        = 36;  // ����ᨨ
  cgKau_NeedMt        = 37;  // ���ॡ����� � ���ਠ���
  cgKau_NeedTr        = 38;  // ���ॡ����� � ��㤮��� ������
  cgKau_NeedEq        = 39;  // ���ॡ����� � �ந�����⢥���� ��魮���� (����㤮�����)
  cgKau_ObjBuild      = 40;  // ��쥪�� ��ந⥫��⢠.
  cgKau_HDR_KS        = 41;  // ���������᪨� ᯥ�䨪�樨
  cgKau_VidRem        = 42;  // ���� ६���
  cgKau_KatKodKpp     = 43;  // ���� ��稭 ���⠭���� �� ���
  cgKau_KatKodBud     = 44;  // ���� ���⮢ � ���
  cgKau_KatKodTpn     = 45;  // ���� ���⥦��-���᫥���
  cgKau_KatCompl      = 46;  // H����� ��
  cgKau_GrObjRem      = 47;  // ��㯯� ����㤮�����
  cgKau_KaWork        = 48;  // ���� ࠡ��
  cgKau_CorpoNeed     = 49;  // ��௮�⨢�� ���ॡ����
  cgKau_CorpoDelivery = 50;  // ��௮�⨢�� ����� ���⠢��
  cgKau_CorpoManuf    = 51;  // ��௮�⨢�� ����� �ந�����⢠
  cgKau_CorpoBalance  = 52;  // ������� �������� �த�樨
  cgKau_VariaPl       = 53;  // ��ਠ�� �����஢����
  cgKau_AmortGr       = 54;  // ����⨧�樮��� ��㯯� (��)
  cgKau_GrPlat        = 55;  // ���⥦�� �।�⢠
  cgKau_IspOs         = 56;  // �ਧ���� �ᯮ�짮����� ��
  cgKau_IspNMA        = 57;  // �ਧ���� �ᯮ�짮����� ���
  cgKau_GrOs          = 58;  // ��㯯� ��
  cgKau_KatNazna      = 59;  // �����祭�� ᮯ஢���⥫��� ���㬥�⮢
  cgKau_KatMOL        = 60;  // ���ਠ�쭮-�⢥��⢥��� ���
  cgKau_Marsh_Sp      = 61;  // ����樨 ��������� ����
  cgKau_PS_Lines      = 62;  // ����樨 �ந�����⢥���� ᯥ�䨪�権
  cgKau_KS_Lines      = 63;  // ����樨 ���������᪨� ᯥ�䨪�権
  cgKau_TypStroy      = 64;  // ���� ��ந⥫��⢠
  cgKau_VidStroy      = 65;  // ���� ��ந⥫��⢠
  cgKau_Otrasl        = 66;  // ���᫨ ��ந⥫��⢠
  cgKau_KatVidD       = 67;  // ���� ������஢/ᮣ��襭��
  cgKau_GrOrg         = 68;  // ��㯯� �࣠����権
  cgKau_Katego        = 69;  // ��⥣�ਨ
  cgKau_Brigad        = 70;  // �ਣ���
  cgKau_Credit        = 71;  // �।���
  cgKau_ATD           = 72;  // ���������⨢��-����ਠ�쭮� �������
  cgKau_StZatr        = 73;  // ���� ����� ��ꥪ⮢ ��ந⥫��⢠
  cgKau_ClassObj      = 74;  // ������ ��ꥪ⮢ ��ந⥫��⢠
  cgKau_KlVal         = 75;  // cgKatKau_System: ������
  cgKau_GrObj         = 76;  // ��㯯� ��ꥪ⮢ ६��⮢
  cgKau_TipObj        = 77;  // ���� ��ꥪ⮢ ६��⮢
  cgKau_VidObj        = 78;  // ���� ��ꥪ⮢ ६��⮢
  cgKau_SchFact       = 79;  // ���-䠪����
  cgKau_KatSopr       = 80;  // ��������/����
  cgKau_GrPodr        = 81;  // ��㯯� ���ࠧ�������
  cgKau_KlVidOpl      = 82;  // ���� �����
  cgKau_Normas        = 83;  // ���ਠ��� ���� ��
  cgKau_TCV           = 84;  // ����� ⠡��� ����
  cgKau_SpTCV         = 85;  // ����䨪��� ⠡��� ����
//------------------------------------------------------------------------------
// �� ���ﭨ� �� 09.10.2003
//
// !!! � 5.8 ��⥬��� �����⨪ ����� ���� ���ᨬ� 99
//
// !!! ������ �� 100 �� 5000 ������
//     ��१�ࢨ஢���� ��� ���짮��⥫�᪨� �����⨪,
//     ᪮�����஢����� �� ���ᨩ �� 7.1
//
// !!! �᫨ �����⨪� �� ���������� �ᯮ�짮���� � ���ᨨ 5.8x,
//     �� ����������� ᫥��� ��������� � �������� ��᫥ 5000
//------------------------------------------------------------------------------
  cgKau_PlanOper     = 5001; // ������樮��� �����
  cgKau_PlanSvod     = 5002; // ������ �����
  cgKau_MarkaTS      = 5003; // ��ન �࠭ᯮ���� �।��
  cgKau_DirectInvest = 5004; // ���ࠢ����� ������権
  cgKau_KlPrice      = 5005; // �ࠩ�-�����
  cgKau_PrSbOs       = 5006; // �ਧ���� ᮡ�⢥����� ��
  cgKau_PrSbNMA      = 5007; // �ਧ���� ᮡ�⢥����� ���
  cgKau_TypeMC       = 5008; // ���� ���業���⥩
  cgKau_SmetaStroy   = 5009; // ������� ᬥ��
  cgKau_QPHead       = 5010; // ��ᯮ�� ����⢠
  cgKau_NVariant     = 5011; // ��ਠ��� ����⮢�����
  cgKau_MarPunkt     = 5012; // �㭪�� ��������
  cgKau_Transp       = 5013; // �࠭ᯮ��� �।�⢠
  cgKau_STS          = 5014; // ����ﭨ� �࠭ᯮ���� �।��
  cgKau_MarDvi       = 5015; // �������� ��������
  cgKau_KatB         = 5016; // �����
  cgKau_KaElem       = 5017; // �������� �����
  cgKau_Smet         = 5018; // ����樮��� ᬥ��
  cgKau_PlPor        = 5019; // ���⥦�� ���㬥���
  cgKau_TypeTS       = 5020; // ���� �࠭ᯮ���� �।��
  cgKau_VidRabMC     = 5021; // ���� ࠡ��/��
  cgKau_CalPlan      = 5022; // �㭪�� ���������� ������
  cgKau_CardSN       = 5023; // ��਩�� �����
  cgKau_RashodBP     = 5024; // ����窨 ��室�� ����� ��ਮ���
  cgKau_WorkTheme    = 5025; // �����. �����
  cgKau_WorkStage    = 5026; // �⠯ ������. �����

  // �祡�� �����
  cgKau_Curriculum     = 5027; // ������ �祡�� �����
  cgKau_StudPlan       = 5028; // ����� ���祭��
  cgKau_StudGroup      = 5029; // ��㯯� ��㤥�⮢
  cgKau_StudCategory   = 5030; // ��⥣�ਨ ��㤥�⮢
  cgKau_EduVid         = 5031; // ���� ��ࠧ������
  cgKau_Speciality     = 5032; // ���樠�쭮��
  cgKau_Specialization = 5033; // ���樠����樨
  cgKau_Qualification  = 5034; // �����䨪�樨
  cgKau_EduStruct      = 5035; // �������� ���ࠧ������� (�������� ������� ��⭮�� �ᯨᠭ��)
  cgKau_Citizenship    = 5036; // �ࠦ����⢮

  cgKau_KatState       = 5037; // ���㤠��⢮
  cgKau_SpSopr         = 5038; // ����䨪�樨 ��⮢/���������
  cgKau_Vagon          = 5039; // ���������஦�� ������
  cgKau_KlassifTS1     = 5040; // �����䨪��� �� �� ��ࢮ�� 楫����� �ਧ����
  cgKau_KlassifTS2     = 5041; // �����䨪��� �� �� ��஬� 楫����� �ਧ����
  cgKau_KlassifTSVid   = 5042; // �����䨪��� �� �� ����
  cgKau_KlassifTSEng   = 5043; // �����䨪��� �� �� ⨯� �᭮����� �����⥫�
  cgKau_KlassifTSTrl   = 5044; // �����䨪��� �� �� ������ ��楯�
  cgKau_KlassifTSPark  = 5045; // �����䨪��� �� �� ���� ���
  cgKau_KatRsvOper     = 5046; // ��ୠ�� १�ࢨ஢���� ��������� 䮭�� ��
  cgKau_KatPersons     = 5047; // ��⠫�� ��� �롮� : ����㤭��� �।�����
  cgKau_KatMBP         = 5048; // ����窨 ᯥ�᭠�⪨

  cgKau_ClaimPrimDecl        = 5049;  // ������� ��ࢨ筠� ��� ��⥫�
  cgKau_ClaimPrimCurator     = 5050;  // ������� ��ࢨ筠� ��� �����
  cgKau_ClaimPrimFinancier   = 5051;  // ������� ��ࢨ筠� ��� �������⮢
  cgKau_BudgetYearPurch      = 5052;  // ������� ��� ���㯮�
  cgKau_JournalConsolidated  = 5053;  // ���᮫���஢���� ��ୠ�
  cgKau_ClaimConsolidated    = 5054;  // ���᮫���஢����� ���
  cgKau_Standards            = 5055;  // ��ଠ⨢�
  cgKau_TEO                  = 5056;  // ���
  cgKau_Kit                  = 5057;  // ���������/������
  cgKau_OPZ                  = 5058;  // ����⨢��� ��ࢨ筠� ���
  cgKau_GrNal                = 5059;  // ��㯯� �������
  cgKau_BGarant              = 5060;  // ������᪠� ��࠭��
  cgKau_BGOperation          = 5061;  // ������ �� ������᪮� ��࠭⨨
  cgKau_VidRashod            = 5062;  // ��� ��室� ��� ��室�� ����� ��ਮ���
  cgKau_BuhSchet             = 5063;  // ��� ��壠���᪮�� ���
  cgKau_KatBank              = 5064;  // ������᪨� ���
  cgKau_OsReserv             = 5065;  // ����� ��
  cgKau_DogPodr              = 5066;  // ������� ����鸞
  cgKau_ExtCU                = 5068;  // �������⥫�� �����⨪� ��
  cgKau_IGK                  = 5073;  // ���㤠��⢥��� ����ࠪ�
//------------------------------------------------------------------------------
// !!! ��� ���������� ����஥��� ������᪨� ���⮢ ��������
// cg-����⠭�� �� �����⨪�
// � PAS\reptree.pas,
// � PAS\TXO\servkau.pas : GetKauCoTable, GetKauTabBuf
//------------------------------------------------------------------------------
