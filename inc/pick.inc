//------------------------------------------------------------------------------
//                                                      (c) ��௮��� �����⨪�
// �����⨪� 5.80 - ����� "���⥦�� ���������"
// ����⠭�� ��� Pick.wList
//------------------------------------------------------------------------------

//  �. \TIP&STAT\PICK.TXT - ���� ��७��� �

  cgPick_ForAll       =     0;  // �� 㬮�砭��
  cgPick_KlVal        =     1;  // �����
  cgPick_GroupMC      =     2;  // GroupMC
  cgPick_SP           =     3;  // SP
  cgPick_GroupSch     =     4;  // GroupSch
  cgPick_GroupUsl     =     5;  // GroupUsl
  cgPick_Org   	      =     6;  // KatOrg
  cgPick_MC           =     7;  // KatMC
  cgPick_MOL          =     8;  // KatMOL
  cgPick_Party        =    10;  // KatParty
  cgPick_Sklad        =    11;  // KatPodr
  cgPick_Usl          =    12;  // KatUsl
  cgPick_PlatVed      =    18;  // ���⥦�� ��������
  cgPick_PodotPers    =    19;  // Persons
  cgPick_GoNewPer     =    20;  // �����⨥ ��⮢
  cgPick_KatSopr      =    22;  // �������� (KatSopr)
  cgPick_MBP          =    23;  // �롮� ᯥ�᭠�⪨
  cgPick_MBPIn        =    24;  // ��室� ���
  cgPick_KatOs        =    27;  // KatOs
  cgPick_BaseDoc      =    32;  // �롮� ���㬥�⮢-�᭮�����
  cgPick_VedDepon     =    37;  // �������� ������஢����  VedDeponir
  cgPick_PlPorDoc     =    39;  // �롮� ���㬥�⮢ PlPor
  cgPick_GroupSFO     =    44;  // ��㯯���� �롮� ��㯯 ���
  cgPick_Val          =    44;  // ⮦� word(44). ��� ⠡���� Valut
  cgPick_PersCard     =    45;  // ��㯯���� �롮� �� ��� ���
  cgPick_NormRash     =    46;  // �롮� ��� ��室�� (NormRash)
  cgPick_MBPSpis      =    46;  // ������⢥��� �롮� ��稭 ᯨᠭ�� (���� � �������� ���/���)
  cgPick_ReqDate      =    52;  // ���
  cgPick_SFO          =    53;  // �롮� ���
  cgPick_Post         =    54;  // �������� � ���
  cgPick_Norm         =    55;  // ���� ���
  cgPick_MBPWrite     =    56;  // ������⢥��� �롮� ��⮤�� ᯨᠭ��
  cgPick_DC           =    57;  // ��㯯���� �롮� � ����஢ ᢮��� �� (6.0)
  cgPick_FPCO         =    58;  // FPCO (業��� �⢥��⢥�����)
  cgPick_Rank         =    61;  // ������ � ���
  cgPick_MnfForm      =    66;  // ������
  cgPick_GrOs         =   110;  // GrOs
  cgPick_Drag         =   112;  // KatDragMet
  cgPick_IspOs        =   111;  // IspOs
  cgPick_KlassOs      =   113;  // KlassOs
  cgPick_KodOKOF      =   114;  // Kodokof
  cgPick_NastrOs      =   115;  // NastrOs
  cgPick_VidNorm      =   116;  // VidNorma (��:��⠫�� ����� � ��� ����⨧�樨)
  cgPick_PrSb         =   118;  // PrSb (��:�ਧ��� ᮡ�⢥�����)
  cgPick_KatNalGr     =   119;  // KatNalGr
  cgPick_KatOs120     =   120;  // KatOs
  cgPick_KatOs127     =   127;  // KatOs (��������� �������� ���室� �� �. ��ਮ�)
  cgPick_KatOsTir     =   150;  // KatOs (��:��ࠦ�஢����)
  cgPick_RashDoc      =   191;  // RashDoc
  cgPick_Drag200      =   200;  // KatDragMet
  cgPick_AlgTables    =   201;  // �롮� ⠡��� ��� �����⬠ � �����⬠� (��)
  cgPick_AlgFields    =   202;  // �롮� ����� ⠡��� ��� �����⬠ � �����⬠� (��)
  cgPick_UserDeskRep  =   449;  // �롮� ����஥� ���⮢ �� ⠡���� UserDeskRep
  cgPick_CodeOp       =   450;  // �롮� ����� ����権 �� ���� ���� �த��/���㯮�

  cgPick_ExClassName  =   632;  // ����� (������ �����䨪���)
  cgPick_ExClassSegm  =   633;  // �������� (������ �����䨪���)

// *****************************************************************************
// ��⠫��� KATKOD.VIP (Tolya)
// *****************************************************************************
  cgPick_KatKod_Kpp     = 20001;
  cgPick_KatKod_GNI     = 20002;
  cgPick_KatKod_Bud     = 20003;
  cgPick_KatKod_TPN     = 20004;
  cgPick_KatKod_KppFRO  = 20005;
  cgPick_KatKod_Nazn    = 20006;
  cgPick_KatKod_New     = 20007;
  cgPick_KatKod_KBK     = 20008;
  cgPick_KatKod_StatPl  = 20009;
  cgPick_KatKod_VD      = 20011;
  cgPick_KatKod_OPN     = 20018;
  cgPick_KatKod_UIN     = 20019;
  cgPick_KatKod_KVO     = 20020;  // ��� ����⭮� ����樨
// ����⠭�� ��� ��⭮�� ���⥦���� ����祭��
  cgPick_KatKod_KlasGlv = 20012; // �����䨪��� ����
  cgPick_KatKod_KlasUNK = 20013; // �����䨪��� ����� ����஢ �����祩�⢠
  cgPick_KatKod_KlasVid = 20014; // �����䨪��� ��室�� �� �����
  cgPick_KatKod_KlasPar = 20015; // �����䨪��� ��室�� �� ��ࠣ�䠬
  cgPick_KatKod_KlasPro = 20016; // �ணࠬ��� �����䨪��� ��室��
  cgPick_KatKod_KlasEco = 20017; // ��������᪨� �����䨪��� ��室��

!  cgPick_ForAll        = 20010;

// *****************************************************************************
// ���
// *****************************************************************************
  cgPick_StBud          = 20101; // �롮� ��⥩ ���
! cgPick_BudVar         = 20102; // �롮� ����� ��ਠ�⮢ ���

// *****************************************************************************
// M_TPP 20121 - 20130
// *****************************************************************************
  cgPick_AlgKatmarsh      = 20121; // Alg Regl Katmarsh
  cgPick_AlgHDR_PS        = 20122; // Alg Regl HDR_PS

  cgPick_KatPodr_Smet     = 20123; // �롮� KatPodr �� ���� ᬥ�
  cgPick_KatPodr_Balans   = 20124; // �롮� KatPodr �� �ନ஢���� ������
  cgPick_KatPodr_Smet_BP  = 20133; // �롮� KatPodr �� ���� ᬥ� ��� ���筨�� ������ - ���. �஢����

  cgPick_DDHierBeforeArch = 20125; // ����祭�� DistDocHier � ०��� �।���⥫쭮� ����⪨
  cgPick_DistDocPS        = 20126; // ����祭�� DistDoc ��
  cgPick_DistDocKS        = 20127; // ����祭�� DistDoc ��
  cgPick_DistDocMK        = 20128; // ����祭�� DistDoc ��
  cgPick_DistDocArch      = 20129; // ����祭�� DistDoc � ०��� ��㯯����� �����祭��/����� � ��娢
  cgPick_DDHierArch       = 20130; // ����祭�� DistDocHier � ��ॢ� ��娢�
  cgPick_DDHierPS         = 20131; // ����祭�� DistDocHier ��
  cgPick_DDHierMK         = 20132; // ����祭�� DistDocHier ��


// *****************************************************************************
// ��⠫��� ...
// *****************************************************************************

  cgPick_IskiFiltr =  559;
  // �� parViewMode = cgiOfp_Multi
  cgPick_FOb       = 2004; // ᮤ�ন� ��� ��� �롮� �� OFPjournal
  cgPick_SvFOb     = 2005; // ᮤ�ন� ��� ��� �롮� �� OFPjournal
  cgPick_PlpFOp    = 2006; // ��࠭�� ��� ��� ��⮏����� � �������
  cgPick_Prior     = 2007; // ��࠭�� �ਮ���� ��� (��, )
