  // ��⠫��� KatKod
  cgKatKod_Kpp    =  6; // ��� ����� ������� �������
  cgKatKod_GNI    =  2; // �����
  cgKatKod_Bud    =  3; // ����
  cgKatKod_TPN    =  4; // ���� ���⥦��/���᫥���
  cgKatKod_Str    =  5; // ������� ��������� ���⮢
  cgKatKod_UNN    =  7; // �ਢ離� � ������� ����� �����⥫�
  cgKatKod_KBK    =  8; // ���� ��⭮� �����䨪�樨 ���
  cgKatKod_Tr     = 10; // ��ॢ� �� �������
  // ��⠫���, �� �⭮��騥�� � "������� ��������� ���⮢"
  cgKatKod_KppFRO =  1; // ��� ���㫥� ���, ����
  cgKatKod_Nazn   =101; // �ਢ離� � ������� ����� �����⥫�
  // ����⠭�� ��� ��⮯���⠭���� ����ࠣ��⮢
  cgKatKod_FitPl  = 20; // ��⮯���⠭���� ���⥫�騪�
  cgKatKod_FitPol = 21; // ��⮯���⠭���� �����⥫�

/*
  // ��⮬ ����
    cgPick_KatKod_Kpp    = 1;
    cgPick_KatKod_GNI    = 2;
    cgPick_KatKod_Bud    = 3;
    cgPick_KatKod_TPN    = 4;
    cgPick_KatKod_KppFRO = 5;
    cgPick_KatKod_Nazn   = 6;
    cgPick_KatKod_New    = 7;
    cgPick_ForAll        = 10;
*/
  // �஢�� ��ॢ�
  cgTaxStr_GNI = 1; // ���
  cgTaxStr_Tax = 2; // �����
  cgTaxStr_Bud = 3; // ����� ���
  cgTaxStr_TPN = 4; // ���
  cgTaxStr_Pol = 5; // �����⥫�
  cgTaxStr_Leaf = 5; //cgTaxStr_Pol; // ���⮢�� ������

  // ����� ��ॢ� ������� (��� �����६������ �⮡ࠦ����)
  cgTypeTaxStr_No       = 0; // ��� ��.㤠����� ���ਬ��
  cgTypeTaxStr_TaxStr   = 1;
  cgTypeTaxStr_TaxPlp   = 2; // ᯥ�䨪��� ���
  cgTypeTaxStr_TaxAkt   = 3; //              ��������� ��⮢

  cgSortRg_Kpp = 0; // ���
  cgSortRg_Nam = 1; // ������������
  cgSortRg_Pol = 2; // �����⥫� ���⥦�
  cgSortRg_For = 3; // ���⥦ ��
  cgSortRg_Atd = 4; // ���


  // ��� ���.���-�� ��௮�樨
  cgType_Leaf     = 1;
  cgType_Node     = 2;

  cgTree_Atd      = 1;
  cgTree_Filial   = 2;
  cgBrowse_Filial = 3;

  cgTree_Taxes    = 1;
  cgBrowse_Taxes  = 2;

  // ��� ���㧪� PlPor
  cgMarker_PlPor  = 'TaxPlPor';
  cgMarker_KatSopr= 'TaxKatSopr';

  cgTiDk_TaxPlp   = 37;   // ⨯ ��� ���
  cgTiDk_TaxAvI   = 38;   //         ��室�饥 ��������� �����
  cgTiDk_TaxAvV   = 39;   //         �室�饥 ��������� �����
  cgTiDk_TaxAkt   = 112;  //         ��������� ��⮢
  cgTiDk_AktSvr   = 113;  //         ��⮢ ᢥન

  cgTiSt_TaxPlp   =  37;  // ��� ����ᮢ
  cgTiSt_TaxAkt   = 100;  //
  cgTiSt_AktSvr   = 100;  //

  cgSpSopr_Akt     = 2;   // ᯥ�䨪��� � ��������� ��� ???
  cgSpSopr_TaxPlp  = 3;   // ᯥ�䨪��� ��� ���
  cgSpSopr_TaxAkt  = 4;   //              ��� ��������� ��⮢
  cgSpSopr_TaxSum  = 5;   // ��.��� �࠭���� �㬬

  // ������ ���������� ���⥦���� ����祭��
  cgStTaxPlp_OFORM   = 0;
  cgStTaxPlp_ISPOLN  = 1;
  cgStTaxPlp_ZAKRYT  = 2;
  // ������ ���������� ���
  cgStTaxAkt_OFORM   = 0;
  cgStTaxAkt_ISPOLN  = 1;
  cgStTaxAkt_PRIOST  = 2;
  cgStTaxAkt_OTMENEN = 3;
  cgStTaxAkt_ZAKRYT  = 4;
  // ������ ��� ᢥન
  cgStAktSvr_OFORM   = 0;
  cgStAktSvr_ISPOLN  = 1;
  cgStAktSvr_PRIOST  = 2;
  cgStAktSvr_OTMENEN = 3;
  cgStAktSvr_ZAKRYT  = 4;

  // ����஫� ����㯠 � ���㬥�⠬
  cgDostupPl      = 1;
  cgDostupKs      = 1;

  cgSim_TaxPlp    = ' � ';
  cgSim_TaxAvI    = '�_�';
  cgSim_TaxAvV    = '�_�';

  // ��� 䨫����
  cgFilial_Org       = 0; // � �࣠����樥�
  cgFilial_Podr      = 1; // � ���ࠧ��������

  // ⨯� ���譨� ��ਡ�⮢ (��७��� � �������� ����⠭��)
 // mike - 㦥 ��७��

  // ��ਡ��� ��� ���㬥�⮢ �����
  cgTaxAttr_Per   = '�������� ��ਮ�';
  cgTaxAttr_Osn   = '�᭮����� ���⥦�';
  cgTaxAttr_Num   = '������⥫� ����� ���㬥��';
  cgTaxAttr_Dat   = '������⥫� ���� ���㬥��';
