//------------------------------------------------------------------------------
//                                                      (c) ��௮��� �����⨪�
// �����⨪� 7.12 - ���殤����
// ����⠭��, �ᯮ��㥬� � ࠧ����� ����䥩�� ����� "���殤����"
//------------------------------------------------------------------------------

Const

  CustDate = date(1, 11, 1992);
  MaxDate  = date(31, 12, 2100);

  cgRealNeed = 1;
  cgForShow  = 2;
  cgNormKol  = 4;

  // ������⢮ ��ࠬ��஢ ࠧ��஢ ������ ���㤭���,
  // ���஥ ����� ���� �������� � �ᯮ�짮���� � ��⥬�.
  MaxPrizn    = 9;
  MaxRazSFO   = 8; // � ���㫥 ���殤����
  MaxRazCtm   = 9; // � ���㫥 ��饢�� �����⢮

  szHRost = 1; // ���� ࠧ��஢ ���㤭���
  szWear1 = 2;
  szWear2 = 3;
  szObuv1 = 4;
  szGUbor = 5;
  szPerch = 6;
  szIndSZ = 7;
  szPogon = 8;
  szObuv2 = 9;

  rfUnConfReq = 0; // ����� ࠧ��ᥭ���� �ॡ������ �� �뤠��.
  rfConfReq   = 1;
  rfFrozenReq = 2;

  rfInHandle  = 1; // �ਧ���� - �ॡ������ ࠧ������.
  rfNtHandle  = 0;

                     // ������ ����� ����祪 ��� ���.
  crdNormal   = 1;   // �������
  crdClosed   = 0;   // ������
  crdMoving   = 2;   // ��ॢ��
  crdMoved    = 3;   // ��ॢ����
  crdArchive  = 100; // ��娢

                 // ������ �뤠� � ��.
  sfoInUse  = 0; // � ��᪥
  sfoBacked = 1; // �����饭�
  sfoLost   = 2; // ���ﭮ
  sfoSpis   = 3; // ���ᠭ�
  sfoCmps   = 4; // �믫�祭� ���������
  sfoMove   = 5; // ��।��� ��㣮�� ࠡ�⭨��
  sfoSell   = 6; // ���ᠭ� ��� ॠ����樨

  SizeDelim = '/';  // ���� �� ⠪

  sfoReqDoc = 1; // ���� ���㬥�⮢ ��� (ᮮ⢥�����騥 宧����樨 - �� ���)
  sfoOutDoc = 2;
  sfoUvlDoc = 3;
  sfoRetDoc = 4;
  sfoAttDoc = 5;
  sfoReglSp = 6;
  sfoGrpOut = 7;
  sfoReqLst = 8;
  sfoGrpReq = 9;

//-------------------------------------------------------------------------
// ���浪��� ����� ����� ⠡���� MBPOut ��� �஢�ப ���४⭮��

  fldPersSFO_cPersCard =  1;
  fldPersSFO_cPersSpec =  2;
  fldPersSFO_cSpReqSFO =  3;
  fldPersSFO_cDocMBPIn =  4;
  fldPersSFO_cCurMBPIn =  5;
  fldPersSFO_cMBPOut   =  6;
  fldPersSFO_cMBPMove  =  7;
  fldPersSFO_cGroupSFO =  8;
  fldPersSFO_cKatMBP   =  9;
  fldPersSFO_cPersSFO  = 10;
  fldPersSFO_giveDate  = 11;
  fldPersSFO_operDate  = 12;
  fldPersSFO_giveNom   = 13;
  fldPersSFO_explDate  = 14;
  fldPersSFO_Srok      = 15;
  fldPersSFO_docKol    = 16;
  fldPersSFO_curKol    = 17;
  fldPersSFO_endDate   = 18;
  fldPersSFO_spisNom   = 19;
  fldPersSFO_specFlag  = 20;
  fldPersSFO_Status    = 21;
  fldPersSFO_cDopRec   = 22;

  PersSFOFld_Count = 22;

// end;
