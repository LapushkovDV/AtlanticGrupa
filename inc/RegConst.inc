//============================================================================================
// �����䨪��� ��⥬��� � ���짮��⥫�᪨� ���㬥�⮢ (KatDoc)
//
// ��饥 �ࠢ��� ��� ⨯�� ���㬥��:
//  1) �����⥬�� ���� ���㬥�⮢ (TiDkGal) ������ ���� � ���ࢠ��:
//               ( 1 <= TiDkGal < cgTiDk_FirstUsers )
//
//     - ChKatDoc.vip �ନ஢���� ��⠫��� ���㬥�⮢
//
//  2) ���짮��⥫�᪨� ���� (TiDkUsers) ������ ���� � ���ࢠ��:
//          ( cgTiDk_FirstUsers <= TiDkUsers <= cgTiDk_LastUsers )
//
//  3) ����� ����� ���㬥�⮢ ������ ���� > cgTiDk_LastUsers
//
  cgTiDk_FirstUsers = 10000;
  cgTiDk_LastUsers  = 50000;
//
// ����ன�� ���㬥�� `������� 宧��⢥���� �����` ���� (KatDoc.Account)
//  - ������� �᫨ ����祭� �����⥬��� ����ன�� '������쭠� �ਢ離� ��� �� ॣ���ࠬ ���'
//    �.�. boGetTune('TProv.UseMagOper')=ture
//
  cgDoc_NoUseMagOper  = 0;  // ��� ᪢�����
  cgDoc_UseMagOper    = 1;  // ��� ࠧ���쭠� �� ॣ���ࠬ ���

//--------------------------------------------------------------------------------------------
// PickDoc.vip
//
// load presets

  cgPickDoc_AllKatDoc  = 0; // �� ���㬥��� �� KatDoc
  cgPickDoc_BySoprHoz  = 1; // ���㬥���, ��� ������ ���� SoprHoz
  cgPickDoc_PlatDoc    = 2; // ���⥦�� ���㬥���
  cgPickDoc_BaseFinDoc = 3; // ���㬥��� �� ����� ᮧ������ basefin
  cgPickDoc_BaseDoc    = 4; // ���㬥���-�᭮�����, ��ࠡ��뢠��� � "���⠢騪��/�����⥫��", "����������"
  cgPickDoc_OSMCUsl    = 5; // ���㬥���, ��� ��।������ ��� (��/���)
  cgPickDoc_isCU       = 6; // ���㬥��� � 楫��� ��⮬
  cgPickDoc_isKS       = 7; // ᮯ஢���⥫�� ���㬥���

// ����ன�� ���㬥�� `����⨢�� ���� ᠫ줮 ����ࠣ��⮢` ���� (KatDoc.Attr)
//  - ������� �᫨ ����祭� �����⥬��� ����ன�� '����⨢�� ���� ᠫ줮 ����ࠣ��⮢'
//    �.�. boGetTune('Oper.AutoCalcBalance')=true
//
  cgDoc_NoUseInRecalcSaldo = 0;  // �� ������ � ����
  cgDoc_UseInRecalcSaldo   = 1;  // ������ � ����

//==============================================================================
// ����� ��⠫��� ॣ���஢ ���
  verRegUch              = 2;

//==============================================================================
// ॣ����� ��� � ����� (�����䨪��� PlansSch)

  cgReg_FirstLeaf        = 100;       // �� ���⮢� ॣ����� ���

  cgReg_Main             =   0;       // ����� : "�����⥬�� ॣ����� (����㠫쭠�)"

  cgReg_Buh              =   1;       // ����� : "��壠���᪨� ��� (����� ��⮢)"
    cgReg_BuhPSUsers     = 351;       // ����� ��⮢ ���짮��⥫�

  cgReg_Adm              =   4;       // �����: "��ࠢ����᪨� ���"
    cgReg_AdmFPPlan      = 150;       // ����
    cgReg_AdmFPFact      = 151;       // 䠪�
    cgReg_AdmFPRezerv    = 152;       // १��
    cgReg_AdmFPBuh       = 153;       // �� ����� ��壥���᪮�� ���

//============================================================================================
// ��뫪�, �ࠢ�, ��� ࠧ��� ��⠫���� (����⠭�� ��� ⠡���� ��뫮� RefTable)
// ���: RefTable.wAccount -��� ���,
//                       =[cgReg_Main, cgReg_Buh, cgReg_Oper, cgReg_Adm]
//      RefTable.wMain    -⨯ ��뫮�, �痢� (����⠭�� �.�. ����)
//                       =[cgSel_TXODoc, cgSel_TFODoc, cgSel_RegDoc � �.�.]
//      RefTable.wSub     -���⨯ ��뫮�, �痢� (����⠭�� �.�. ����)
// ���ਬ��  cgReg_Adm   == RefTable.wAccount and
//           cgSel_TForm == RefTable.wMain and
//           word(0)     == RefTable.wSub
//           ��।���� ���祭� ����㯭�� ⨯���� ��
//
//===================== �� 㦥 ��१�ࢨ஢��� =====================================================
// | RefTable.wAccount | RefTable.wMain    | RefTable.wSub  | ���ᠭ��
// |___________________|___________________|________________|________________________________________
// | cgReg_Adm         | cgSel_TForm       | 0              | ����㯭� ⨯��� ���(Sanny)
// | cgReg_Adm         | cgSel_CO          | 0              | ����㯭� ��(Sanny)
// | cgReg_Adm         | cgSel_Budget      | 0              | ����㯭� ����(Sanny)
// | cgReg_Adm         | cgViewSel_TForm   | 0              | ����㯭� ⨯��� ���(Sanny)
// | cgReg_Adm         | cgViewSel_CO      | 0              | ����㯭� ��(Sanny)
// | cgReg_Adm         | cgViewSel_Budget  | 0              | ����㯭� ����(Sanny)
// | cgReg_Adm         | cgSel_SysOfpDocs  | 0              | ����.���� (Tolya)
// | cgReg_Adm         | cgSel_SysOfpDates | 0              | ��� ��㯯: ����� �� ���.����� �� �.��� (Tolya)
// | cgReg_Adm         | cgSel_StBud       | 0              | ����㯭� ���� ��⮢(Sanny)
// | cgReg_Adm         | cgSel_StBud       | 1              | ����㯭� ���� ��⮢ ��� 楫����� ���
// | cgReg_Adm         | cgSel_Area        | 0              | ����㯭� ������ �������� ��⮢(Sanny)
// | cgReg_Adm         | cgSel_Variant     | 0              | ����㯭� ��ਠ��� ��⮢(Sanny)
// | cgReg_Adm         | cgSel_BudProc     | 0              | ����㯭� ���� ������(Sanny)
// | cgReg_Adm         | cgSel_OsRealDocs  | 0              | ���㬥��� �� �㭪樨 ��������� ����樨 ���⨥ ��/���/ (Tolya)
// | cgReg_Adm         | cgSel_OSPodr      | 0              | ����㯭� ���ࠧ������� � ��-��
// | cgReg_Adm         | cgSel_NMAPodr     | 0              | ����㯭� ���ࠧ������� � ���
// | cgReg_Adm         | cgSel_MBPRealDocs | 0              | ���㬥��� �� �㭪樨 ��������� ��� �� ᯨᠭ�� ᯥ�᭠�⪨/���
// | cgReg_Adm         | cgSel_CashFlowCO  | 0              | ���᮪ �� ���� (Sanny)
// | cgReg_Adm         | cgSel_RegUch      | 0              | ����㯭� ॣ����� ��� (����� ��⮢)
// | cgReg_Adm         | cgSel_TranspPodr  | 0              | ����㯭� ���ࠧ�������  � ����⥪�� ��
// | cgReg_Adm         | cgSel_MBPPodr     | 0              | ����㯭� ���ࠧ������� � ����᭠�⪥/���
// | cgReg_Adm         | cgSel_MBPMol      | 0              | ����㯭� ��� � ����᭠�⪥/���
// | cgReg_Adm         | cgSel_SysReqDates | 0              | ����� �� ��������� ��� �� 㪠������ ��� (���⥦�� ���������)
// | cgReg_Adm         | cgSel_ReqStBud    | 0              | ����஫� ������� �� ����� ��� � ���� (���⥦�� ���������)
// | cgReg_Adm         | cgSel_FobStBud    | 0              | ����஫� ������� �� ����� ��� � ��� (���⥦�� ���������)
// |___________________|___________________|________________|________________________________________
// | cgReg_Main        | cgSel_RegDoc      | KatDoc.TiDkGal | ��� ���-⮢ � ॣ���஢ ��� (Larin)
// | cgReg_Main        | cgSel_CloSch      | 0              | ��� ����஥� ������� ��⮢ � ����ࠢ�� (Luda)
// | cgReg_Main        | cgSel_Controll    | 0              | ��� ��ਠ�� ����㫨஢���� � ����ࠢ�� (Olegb)
// | cgReg_Main        | cgSel_PrnBarCode  | KatDoc.TiDkGal | ��� ���㬥�⮢ � ����ன��� �ନ஢���� ���� ���� (��������� c_ArchiveLink Kolosej)
// | cgReg_Main        | cgSel_UserDocRgh  | 0              | ����ன�� ����㯠 ���짮��⥫� � ����� ���㬥�⮢ �� ���� ����� (��������� c_ArchiveLink Larin)
// | cgReg_Main        | cgSel_StatusDocRgh| KatDoc.TiDkGal | ������ ���㬥�⮢ ��ன�� ��⥣��� (��������� c_Integrator Michailov)
// |___________________|___________________|________________|________________________________________
// | cgReg_Buh         | cgSel_AvizoDoc    | 0              | ��室�騥 �����, ��� ������ ����� ���� ᮧ����
// |                   |                   |                | ���� ���䨫����� �室�騥 ����� (RusLAN)
// |                   |                   |                |
//===================================================================================================

  cgSel_TXODoc         =  1; //���-��, ����� ����� ࠧ������ �� ���
  cgSel_TFODoc         =  2; //���-��, ����� ����� ࠧ������ �� ���
  cgSel_RegDoc         =  3; //��� ���-⮢ � ॣ���஢ ���
  cgSel_TForm          =  4; //����㯭� ⨯��� ��� (fpTForm)
  cgSel_CO             =  5; //����㯭� �� (fpCO)
  cgSel_Budget         =  6; //����㯭� ���� (fpBudget)
  cgViewSel_TForm      =  7; //����㯭� ⮫쪮 ��� ��ᬮ�� ⨯��� ��� (fpTForm)
  cgViewSel_CO         =  8; //����㯭� ⮫쪮 ��� ��ᬮ�� �� (fpCO)
  cgViewSel_Budget     =  9; //����㯭� ⮫쪮 ��� ��ᬮ�� ���� (fpBudget)
  cgSel_SysOfpDocs     = 10; //����.����, �ନ�㥬� ⮫쪮 �� ����� ��
  cgSel_SysOfpDates    = 11; //��� ��㯯: ����� �� ��������� ����� �� �. ���
  cgSel_StBud          = 12; //����㯭� ���� ��⮢ (fpStBud)
  cgSel_Area           = 13; //����㯭� ������ �������� ��⮢ (fpArea)
  cgSel_Variant        = 14; //����㯭� ��ਠ��� ��⮢ (fpVarian)
//ifdef __YUKOS_OSSP__
  cgSel_OsRealDocs     = 15; //���㬥��� �� �㭪樨 ��������� ����樨 ���⨥ ��/���/
//end
  cgSel_CloSch         = 16; //����ࠢ��, ����뢠�騥 ��� � ����ன�� ������� ��⮢
  cgSel_Controll       = 17; //����ࠢ��, �ନ�㥬� �� ����஫�����
  cgSel_SysOfpDefDocs  = 18; //����.���� �� 㬮�砭�� � ���㫥 ��
  cgSel_SysOfpDirStBud = 19; //���ࠢ����� ��� ��⥩ � ���㫥 ��
  cgSel_TxoOborotClass = 20; //��뫪� �� ������ �����䨪��� 蠡���� �஢����
  cgSel_MBPRealDocs    = 21; //���㬥��� �� �㭪樨 ��������� ��� �� ᯨᠭ�� ᯥ�᭠�⪨/���
  cgSel_AvizoDoc       = 22; //��室�騥 �����, ��� ������ ����� ���� ᮧ���� ���� ���䨫����� �室�騥 �����
  cgSel_BudProc        = 23; //����㯭� ���� ������ (FpBudProcces)
  cgSel_OSPodr         = 24; //����㯭� ���ࠧ������� ��� ���짮��⥫� � ��-��
  cgSel_NMAPodr        = 25; //����㯭� ���ࠧ������� ��� ���짮��⥫� � ���
  cgSel_CashFlowCO     = 26; //ᯨ᮪ �� ��� ���� ����
  cgSel_PkDocs         = 27; //���� ����ன�� ����������⢨� ����� "���⥦�� ���������" � ���㬥�⠬� ��⥬�
  cgSel_OSMU           = 28; // ����㯭� �� ��� ���짮��⥫� � ��-��
  cgSel_NMAMU          = 29; // ����㯭� �� ��� ���짮��⥫� � ���
  cgSel_RegUch         = 30; // ����㯭� ��� ���짮��⥫� ॣ����� ��� (����� ��⮢)
  cgSel_PrnBarCode     = 31; // ��� ���㬥�⮢ � ����ன��� �ନ஢���� ���� ���� (��������� c_ArchiveLink)
  cgSel_UserDocRgh     = 32; // ����ன�� ����㯠 ���짮��⥫� � ����� ���㬥�⮢ �� ���� ����� (��������� c_ArchiveLink)
  cgSel_StatusDocRgh   = 33; // ������ ���㬥�⮢ ��ன�� ��⥣��� (��������� c_integrator)
  cgSel_TranspPodr     = 34; // ����㯭� ���ࠧ������� ��� ���짮��⥫� � ����⥪�� ��
  cgSel_MBPPodr        = 35; // ����㯭� ���ࠧ������� ��� ���짮��⥫� � ����᭠�⪥/���
  cgSel_OfpGroup       = 36; // ����㯭� ��㯯� 䨭��ᮢ�� ��易⥫���
  cgSel_OfpCO          = 37; // ����㯭� ��
  cgSel_OfpPS          = 38; // ����㯭� ���⥦�� �।�⢠
  cgSel_MBPMol         = 39; // ����㯭� ��� ��� ���짮��⥫� � ����᭠�⪥/���
  cgSel_SysReqDates    = 40; // ����� �� ��������� ��� �� 㪠������ ��� (���⥦�� ���������)
  cgSel_ReqStBud       = 41; // ����஫� ���������� ������஢ � ���� �� ����� ��� (���⥦�� ���������)
  cgSel_FobStBud       = 42; // ����஫� ���������� ������஢ � ��� �� ����� ��� (���⥦�� ���������)
