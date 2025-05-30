//------------------------------------------------------------------------------
//                                                      (c) ��௮��� ���������
//------------------------------------------------------------------------------
// �����⨪� - ���
// ����⠭�� ����ந⥫� ������᪨� ���⮢
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// !!! �������� !!!, �� 䠩� ������砥��� � ��᪠�� � ����.
// �� �ᯮ���� ����� ���ப�������� (Define � �.�.)
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// �����⠭�� �� TrConst.vpp
  TablesInGrouping = 10;  // ���ᨬ��쭮� ������⢮ �஢��� ��㯯�஢��
  SumsOnLevel      = 60;  // ���ᨬ��쭮� ������⢮ �㬬 �� �஢��

  // [R]eport[S]tyle
  rsNodeReport     = 1;   // �᫨ ��� 䫠� ��⠭����� � �� �஢�� �����
                          // ���ᨭ���묨 ������ ��饬� �஢��, ����� �� ������
  rsShowStat       = 2;   // ��᫥ �ନ஢���� ���� ��ନ஢��� ����⨪�
                          // � 䠩�� TreeRep.log
  rsNoSortTempIer  = 4;   // �� �ந������� ���஢�� TempIer �� �ନ஢����
                          // ����. �᫨ ��⠭�����, ���� �㤥� ᠬ����⥫쭮
                          // �맢��� MakeSortsInTempIer

  // �����⢠ �஢��� ��㯯�஢��
  tsKauLevel       = 1;   // ����뢠�� �� � ��, �஢��� ���� �����⨪�� �
                          // �஢���� (⮫쪮 ��� ��壠��ਨ)
  tsNoExpand       = 2;   // �᫨ ��⠭����� �ਭ㦤��� �� ���뢠�� ������
                          // �� ������᪮�� �ࠢ�筨��, � ���� ᥡ� ⠪
                          // ��� ��� �ࠢ�筨� ��������᪨�
  tsNoPrefix       = 4;   // �᫨ ��⠭�����, � �� �������� ��䨪� �
                          // ������������ ��㯯�
  tsSwitchTable    = 8;   // ������ �� ���ன �ந�室�� ��㯯�஢�� ����
                          // ��४��砥��� (����� �������� � ����ᨬ��� ��
                          // ᮤ�ঠ��� �����) - ⠡��� �� ���뢠���� � ��
                          // ����뢠���� � ��ꥪ� TTreeRep � TRepTree
  tsMayBeSkip      = 16;  // �஢��� ������ ���� �ய�饭 �� �������� �᫮����
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// ����⠭�� � �᭮���� ��� ���ࠪ⨢���� ���� �� ����� �஢���� � ᠫ줮

  cgRepNumGroups = 20; // �᫮ ࠧ����� ��㯯 ��� ��壠���᪮�� ����

  cgGrpSch       =  1; // ���
  cgGrpSub       =  2; // �����
  cgGrpKau1      =  3; // �����⨪� 1
  cgGrpKau2      =  4; // �����⨪� 2
  cgGrpKau3      =  5; // �����⨪� 3
  cgGrpPodr      =  6; // ���ࠧ�������
  cgGrpSchKor    =  7; // ��� ����ᯮ������騩
  cgGrpSubKor    =  8; // ����� ����ᯮ������騩
  cgGrpFilial    =  9; // ������                                   �� ࠡ�稩 ?!
  cgGrpKlVal     = 10; // �����
  cgGrpKau4      = 11; // �����⨪� 4
  cgGrpKau5      = 12; // �����⨪� 5
  cgGrpKau6      = 13; // �����⨪� 6
  cgGrpKauK1     = 14; // �����⨪� ����. ��� 1
  cgGrpKauK2     = 15; //                   -*- 2
  cgGrpKauK3     = 16; //                   -*- 3
  cgGrpKauK4     = 17; //                   -*- 4
  cgGrpKauK5     = 18; //                   -*- 5
  cgGrpKauK6     = 19; //                   -*- 6
  cgGrpPodrK     = 20; // ���ࠧ������� ����. ���
  cgGrpKau7      = 21;
  cgGrpKau8      = 22;
  cgGrpKau9      = 23;
  cgGrpKau10     = 24;
  cgGrpKau11     = 25;
  cgGrpKau12     = 26;
  cgGrpKauK7     = 27;
  cgGrpKauK8     = 28;
  cgGrpKauK9     = 29;
  cgGrpKauK10    = 30;
  cgGrpKauK11    = 31;
  cgGrpKauK12    = 32;

  // ⨯� ��㯯�஢�� ��� ���ࠪ⨢���� �������᪮�� ����
  cgTreeGroupNoGroup =  0;  // ����㯯�஢���� �����
  cgTreeGroupSchetO  =  1;  // ��� �᭮����
  cgTreeGroupSubSchO =  2;  // ����� �᭮����
  cgTreeGroupKau1O   =  3;  // �����⨪� 1 �᭮����� ���
  cgTreeGroupKau2O   =  4;  // �����⨪� 2 �᭮����� ���
  cgTreeGroupKau3O   =  5;  // �����⨪� 3 �᭮����� ���
  cgTreeGroupKau4O   =  6;  // �����⨪� 4 �᭮����� ���
  cgTreeGroupKau5O   =  7;  // �����⨪� 5 �᭮����� ���
  cgTreeGroupKau6O   =  8;  // �����⨪� 6 �᭮����� ���
  cgTreeGroupPodrO   =  9;  // ���ࠧ������� �᭮����� ���
  cgTreeGroupSchetK  = 10;  // ��� ����ᯮ������騩
  cgTreeGroupSubSchK = 11;  // ����� ����ᯮ������騩
  cgTreeGroupKau1K   = 12;  // �����⨪� 1 ����ᯮ������饣� ���
  cgTreeGroupKau2K   = 13;  // �����⨪� 2 ����ᯮ������饣� ���
  cgTreeGroupKau3K   = 14;  // �����⨪� 3 ����ᯮ������饣� ���
  cgTreeGroupKau4K   = 15;  // �����⨪� 4 ����ᯮ������饣� ���
  cgTreeGroupKau5K   = 16;  // �����⨪� 5 ����ᯮ������饣� ���
  cgTreeGroupKau6K   = 17;  // �����⨪� 6 ����ᯮ������饣� ���
  cgTreeGroupPodrK   = 18;  // ���ࠧ������� ����ᯮ������饣� ���
  cgTreeGroupValut   = 19;  // �����
  cgTreeGroupDescr   = 20;  // ���ਯ�� ���짮��⥫�
  cgTreeGroupDoc     = 21;  // ���㬥��
//cgTreeGroupYear    = 22;  // ��ਮ� - ���
//cgTreeGroupQuarter = 23;  // ��ਮ� - ����⠫
//cgTreeGroupMonth   = 24;  // ��ਮ� - �����
//cgTreeGroupDay     = 25;  // ��ਮ� - ����
  cgTreeGroupPeriod  = 26;  // ��ਮ� (� ����ࠨ������ ��⠫���樥�)
  cgTreeGroupObType  = 27;  // ⨯ �஢���� (��筠�/��⮬���᪠�)
  cgTreeGroupFilial  = 28;  // 䨫���
  cgTreeGroupTiDk    = 29;  // ⨯ ���㬥��
  cgTreeGroupTXO     = 30;  // ���
  cgTreeGroupStatus  = 31;  // �����
  cgTreeGroupDesGr   = 32;  // ��㯯� ���ਯ�஢
  cgTreeGroupCorrespondO   = 33;  // ��㯯� ᮮ⢥��⢨� �����⨪� �᭮����� ���
  cgTreeGroupCorrespondK   = 34;  // ��㯯� ᮮ⢥��⢨� �����⨪� ����. ���
  cgTreeGroupSodr    = 35;  // ᮤ�ঠ��� �஢����
  cgTreeExtElem1     = 36;
  cgTreeExtElem2     = 37;

  cgTreeGroupTotal   = 65000; // �⮣� �� ����� (�� ������ ���ᥪ����� � ������ �����⨪)

  // �㬬� ��� TempDescr.Sum[]
  cgSumNdeDebet  =  1; // �����
  cgSumDocDebet  =  2; // ����� � ���.�����
  cgSumRepDebet  =  3; // ����� � ���.���⮢

  cgSumNdeCredt  =  4; // �।��
  cgSumDocCredt  =  5; // �।�� � ���.�����
  cgSumRepCredt  =  6; // �।�� � ���.���⮢

  cgSumSVhNdeDb  =  7; // ᠫ줮 �室�饥 �����
  cgSumSVhDocDb  =  8; //
  cgSumSVhRepDb  =  9; //

  cgSumSVhNdeKr  = 10; // ᠫ줮 �室�饥 �।��
  cgSumSVhDocKr  = 11; //
  cgSumSVhRepKr  = 12; //

  cgSumSIshNdeDb = 13; // ᠫ줮 ��室�饥 �����
  cgSumSIshDocDb = 14; //
  cgSumSIshRepDb = 15; //

  cgSumSIshNdeKr = 16; // ᠫ줮 ��室�饥 �।��
  cgSumSIshDocKr = 17; //
  cgSumSIshRepKr = 18; //

                       // ������⢮:
  cgSumSVhKolDb  = 19; //   ᠫ줮 �室�饥 �����
  cgSumSVhKolKr  = 20; //   ᠫ줮 �室�饥 �।��
  cgSumKolDebet  = 21; //   ������ �����
  cgSumKolCredt  = 22; //   ������ �।��
  cgSumSIshKolDb = 23; //   ᠫ줮 ��室�饥 �����
  cgSumSIshKolKr = 24; //   ᠫ줮 ��室�饥 �।��

  // TempDescr.Param - ��⮢�� ��᪠
                        // ��஥ ������������
  cgNodeUsual     = 0;  // cgParUsualKau      ����� 㧥�
  cgNodeLastApKau = 1;  // cgParLastApKau     ��᫥���� ��� �� �-� ����
  cgNodeNotLastAp = 2;  // cgParOpndKau       �� ��᫥���� ��� �� �-� ���� (ࠧ����⮥ ���)
  cgNodeRolled    = 4;  // cgParNotDef        ᢥ��⮥ ᠫ줮 (���筮 �� ��᫥���� �஢�� ��� �� �-� ����)
  cgNodeSpecial   = 8;  //                    �஢��� ����஥� �� ����⥫쭮� ����娨
                        //                      (����. coKatOrgDescr) - �ᮡ����� ᢥ�⪠
  cgNotValidRec   = 16;  // ��� ⠪��� 㧫� ������������ "���祭�� �� ��।�����" �㤥� ����������
  cgRollSubSchet  = 32; // ����⪠ � � � ����⮢ �� �� ���� ��� �������⥫쭮� ᢥ�⪨

  coBuhSchetSub  =  61502; // �ᯮ������ � CheckIer.vpp, RepTree.pas, TreeRep.pass

  // ��࠭���� ���� �� ��室� (���� fNeedSaveRep � treerep.pas)
  cgRepSave_Yes  =  1; // ��
  cgRepSave_No   =  2; // ���
  cgRepSave_Req  =  3; // �� ������

  // ᮮ�饭��
  cgRepMes_Save   = '���࠭��� ���� ��� ��᫥���饣� ��ᬮ�� ?';
  cgRepMes_NoData = '��� ������ ��� �⮡ࠦ����!';
//------------------------------------------------------------------------------
