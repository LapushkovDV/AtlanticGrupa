Var
   CurDSE   : Comp;         //⥪��� ���業�����
   pCurType : Comp;         //⥪�騩 ⨯ ��
   pCurGroup: Comp;         //⥪��� ��㯯�
   CurTech  : Comp;         //⥪�騩 ������
   CurVariant  : Comp;      //⥪�騩 ��ਠ�� ����� ���᪠

   Filter: Byte;            //���祭�� 䨫��� �롮� ���業���⥩
                            //�㬬� �����ன �������樨 ����⠭�
                            //���ਬ��, Filter := BuyDSE+Manuf+Ready+Material

   pCurName: String;        //⥪�饥 ������������ ���業����
   CurBegName: String;      //��砫�� �㪢� ������������ ���業���⥩
                            //�㦨� ��� �롮� ����� ���業���⥩ �� ���.�㪢��

   CurNova: Byte;           //� ���ᨨ 5.50 �� �ᯮ������
   pCurKodGroup: String;    //��� ⥪�饩 ��㯯� ���業���⥩
   LengthGroup: Byte;       //����� ���� ��㯯� ���業���⥩
   pCurPodr: Comp;          //⥪�饥 ���ࠧ�������
   tDate: Word;             //�㦨� ��� ����������� ����

   pCurYear: Word;          //��� �� 㬮�砭��    (������� �� ����ன�� )
   pCurMonth: byte;         //����� �� 㬮�砭��  (�� ��� � �����       )
   pCurDate: Date;          //��� �� 㬮�砭��
   pCurKvart: Byte;         //����⠫ �� 㬮�砭��
   pCurDay: Byte;           //���� ����� �� 㬮�砭��
   pCurDoW: Byte;           //���� ������ �� 㬮�砭��
   FirstDate : Date;        //��� �� 1-� �᫮ ����� �� 㬮�砭��
                            //��� ���, � ���ன ᬮ���� ��������� �-� 業

   TodayYear: word;         //⥪�騩 ���   (������� ⮫쪮 ��        )
   TodayMonth: Byte;        //⥪�騩 ����� (��⥬��� ���� ��������)


                       //��६���� ��� ��।�� ��ࠬ��஢
   CurCeh :   Comp;         //⥪�騩 ��
   MainCeh:   Longint;      //=1 ��� �ந�����⢥���� �㭪樨 ��� �客 �᭮����� �ந�����⢠
   HelpCeh:   Longint;      //=2 ��� �ந�����⢥���� �㭪樨 ��� �客 �ᯮ����⥫쭮�� �ந�����⢠
   CurEdNorm: Double;       //������ ��ନ஢���� �� 㬮�砭�� (��ꥬ ��� ��ନ஢����)
   VolPart:   Double;       //��ꥬ ���⨨ �� 㬮�砭��
   pCurZakaz: Comp;         //⥪�騩 �ந�����⢥��� �����
   pCurSmeta: Word;         //⥪��� ᬥ�
   CurPF:     Byte;         //⥪�饥 ���祭�� ��४���⥫� ����/䠪�
   CurItem:   Byte;         //��ਠ�� �롮� ��������� ���業���⥩ (⨯,��㯯�,����)
   PickDate:  Byte;         //��࠭��� ���
   FlagSale:  Boolean;      //�ਧ��� �த��������
   FlagOut:   Byte;         //��ਠ�� �뤠� ���⮢
   FlagVol:   Byte;         //��ਠ�� �롮� ��ꥬ�
   Flag1:     Byte;         //䫠��-�ਧ����
   Flag2:     Byte;         //
   FlagCasePdrz: Byte;      //�ਧ���: 0-�� �।�����; 1-�� �堬
   MaxSimbol:  Byte;      //���ᨬ��쭮� ������⢮ ᨬ����� ���⪨ ��� ���⮢
   Detail:     Byte;        //
   Detail2:    Byte;        //
   Stratagy:   Byte;        //���⥣�� ���� �������-����� 業
   Julian:     Date;        //��࠭��� ⥪��� ���
   BegJulian:  Date;        //���, � ���ன ᬮ���� ���������
   MaxLevel:   word;        //��㡨�� ࠧ㧫������ (����.�᫮ �஢��� �宦�����)
   DebugFlag: Byte;         //�ਧ��� ०��� �⫠��� (��� �뤠� ᮮ�饭��)
   Scale: String;           //������������ ���.�������� �������
   SumIsPlan: Boolean;      //�����뢠�� � ����� ���㫥 ��室����: ��� ��� ���
   MaxDepNum: Byte;         //
   ProtIsOutp: Boolean;     //�ਧ��� �뤠� ��⮪��� �� ���� ᥡ��⮨����
   UserOutpStrLenSup: Byte; //
   TPPMode: Byte;           //�ਧ���, �� ��室���� � ���㫥 ���
   CurEdIzm: Comp;          //������ ����७�� �� 㬮�砭��
