//------------------------------------------------------------------------------
//                                                      (c) ��௮��� �����⨪�
// �����⨪� 7.12 - ��壠���᪨� ������
// ��離� � ���८��⮬
//------------------------------------------------------------------------------

type TFReportWndParam = record
  IsAutoPeriod  : word;
  AutoBeginDate : date;
  AutoEndDate   : date;
  AutoBaseDate  : date;
  ForceCount    : word;
  NumFmtMode    : word;
  NumFmtScope   : word;      // ����⠡ ���祭��
  NumFractPart  : word;      // ���㣫��� �஡��� ���� �� NumFractPart ������
  NumSeparator  : string[1]; // ������-ࠧ����⥫� �����
  NumDecComa    : string[1]; // ������-ࠧ����⥫� �஡��� ���
  NumZeroSymbol : string[3]; // ����� �㫥� ������
  PrepareMode   : word;
  SavePath      : string;
  TestMode      : boolean;
end;
