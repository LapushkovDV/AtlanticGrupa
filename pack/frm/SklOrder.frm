.LinkForm 'SKORDER_03' Prototype is 'SKORDER'
.Group '�����᪮� �थ�'
.NameInList '����������� ��������� �����'
.var
  Sender:String
  senderpost:String
  Recipient:String
  RecipientPost:String
  pageBreak:String
.endvar
.Create   view localSklOrder
from
  SklOrder
;
.fields
  CommonFormHeader
  OrdName
  nOrder
  dOrder
  Osnov
  Sklad
  Prim
  '� '+RublSimv
  '� '+RublSimv
  NNomer
  MC
  ED
  Kol
  Price
  Summ
  Itogo
  Senderpost
  Sender
  RecipientPost
  Recipient
  pageBreak
.endfields
.{
 ^


                            @@@@@@@@@ ����� �  ^
                               �� ^
.if SKLORDER01
   �᭮�����  : ^
.if SKLORDER02
.else
.end
.else
.end
   �����      : @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
   ^
�������������������������������������������������������������������������������������������������������������
�����������멳    ���ਠ���  業����   � ������ �    ������⢮    �     ����      �    �⮨�����
    �����     �                             �����७��                  � @~@@@@@@@@@@@ �  @~@@@@@@@@@@@
�����������������������������������������������������������������������������������������������������������
.{
.{
&&&&&&&&&&&&&& @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@ &'&&&&&&&&&&&&&&&& &&&&&&&&&&&&&&& &'&&&&&&&&&&&&&&&
.}
.}
�����������������������������������������������������������������������������������������������������������
   ���⮣� :                                                                                &&&&&&&&&&&&&&&&&��
.begin
   pagebreak:='';
  localSklOrder.GetFirst SklOrder where ((SklOrderRec == SklOrder.nRec));
  if (localSklOrder.SklOrder.vidOrder = 0) // ��室��
  {
    sender := Mol;
    Senderpost := mol_post;
  }
  if (localSklOrder.SklOrder.vidOrder = 1) // ��室��
  {
    recipient := Mol;
    RecipientPost := mol_post;
  }
end.

   �ਭ�: ��@@@@@@@@@@@@@@@@@@@@@@@@@@@@�� ��             �� ��@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@��
                    ���������              �������           ����஢�� ������
   ���� :  ��@@@@@@@@@@@@@@@@@@@@@@@@@@@@�� ��             �� ��@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@��
                    ���������              �������           ����஢�� ������

.{
.}
�� ^
.}
.endform
