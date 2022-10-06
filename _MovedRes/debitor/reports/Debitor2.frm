.LinkForm 'DOLGOPL_01_ITOG2' Prototype is 'DOLGOPL'
.Group '������������ �� ��������'
.NameInList 'Droga ���� � ������᪮� ������������ �⮣��� � ����⠬� Excel'
.var
  KDolg:Double
  KPDolg:Double
  IDolg:Double
  IPDolg:Double
  npp:Comp
.endvar
.Create     view tRep as select * from ZKAUVED;
.fields
  CommonFormHeader
  DateToStr(dd3,'DD/MM/YYYY')
  '�� '+NameTypes+' �� ��ਮ� � '+DateToStr(dd1,'DD/MM/YYYY')+' �� '+DateToStr(dd2,'DD/MM/YYYY')
  Kontr
  DateToStr(DOpr,'DD/MM/YYYY')
  Dolg
  DateToStr(DOpl,'DD/MM/YYYY')
  Srok
  PDolg
  PrDn
  Manager
  KDolg
  KPDolg
  IDolg
  IPDolg
  tRep.ZKAUVED.CREC1
  tRep.ZKAUVED.KAUNAMED1
.endfields
.begin
  IDolg  :=0.0;
  IPDolg :=0.0;
  DELETE ALL ZKAUVED;
  INSERT ZKAUVED SET KAUNAMED1:='`'+DateToStr(dd3,'DD/MM/YYYY'),CREC1:=3h;
  INSERT ZKAUVED SET PSTRING1:=DateToStr(dd1,'DD/MM/YYYY'),PSTRING2:=DateToStr(dd2,'DD/MM/YYYY'), KAUNAMED1:='�� '+NameTypes+' �� ��ਮ� � '+DateToStr(dd1,'DD/MM/YYYY')+' �� '+DateToStr(dd2,'DD/MM/YYYY'),CREC1:=4h;
  npp:=0h;
end.
��^

                                      �����
                      � ������������ ����������� �������������
                                  �� @#@@@@@@@@

@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
��
���������������������������������������������������������������������������������������������Ŀ
����-�   ���   � �������������   �ப   �����窠� ����祭��� ������.�    �������� �  �
������ ���㧪� �   �� �����  �  ������  ����⥦� � ������������� ����   ������ ��������� �
�������������������������������������������������������������������������������������������Ĵ
�(1) �   (2)    �      (3)     �    (4)   �   (5)  �      (6)     �   (7)  �      (8)       �
�������������������������������������������������������������������������������������������Ĵ��
.{CheckEnter DKONTR
.begin
  KDolg  :=0.0;
  KPDolg :=0.0;
  npp:=npp+1;
  INSERT ZKAUVED SET KAUNAMED1:=Kontr, CREC11:=npp,CREC1:=1h;
end.
�����@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@���
�    ��������������������������������������������������������������������������������������Ĵ��
.{CheckEnter DKATSOPR
.begin
  INSERT ZKAUVED SET KAUNAMED1:=Kontr, CREC3:=NRECKS, CREC2:=npp,CREC1:=2h, PDOUBLE2:=double(Dolg), PDOUBLE3:=double(PDolg), PWORD2:=word(PrDn);
end.

���    �@#@@@@@@@@�&'&&&&&&&&&.&&�@#@@@@@@@@�&#&&&&  �&#'&&&&&&&&.&&�&#&&&&  �@#@@@@@@@@@@@@@@���
.{CheckEnter DKATSOPR1
.}
.begin
  KDolg  :=KDolg  + Dolg ;
  KPDolg :=KPDolg + PDolg;
end.
.}
���������������������������������������������������������������������������������������������Ĵ
����� ��������:   �����&'&&&&&&&&&.&&���          �        ���&#'&&&&&&&&.&&���        �                �
�������������������������������������������������������������������������������������������Ĵ��
.begin
  IDolg  :=KDolg  + IDolg ;
  IPDolg :=KPDolg + IPDolg;
end.
.}
���������������������������������������������������������������������������������������������Ĵ
����⮣�:         �����&'&&&&&&&&&.&&���          �        ���&#'&&&&&&&&.&&���        �                �
�����������������������������������������������������������������������������������������������
.{table 'tRep'
 ^  ^
.}
.begin
RunInterface('C_PARTNER::Debitor');
end.

.endform
