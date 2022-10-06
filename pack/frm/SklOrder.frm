.LinkForm 'SKORDER_03' Prototype is 'SKORDER'
.Group 'Складской ордер'
.NameInList 'СТАНДАРТНЫЙ СКЛАДСКОЙ ОРДЕР'
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
  'в '+RublSimv
  'в '+RublSimv
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


                            @@@@@@@@@ ОРДЕР №  ^
                               от ^
.if SKLORDER01
   Основание  : ^
.if SKLORDER02
.else
.end
.else
.end
   Склад      : @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
   ^
 Ш──────────────┬─────────────────────────────┬─────────┬──────────────────┬───────────────┬─────────────────
Номенклатурный│    Материальные  ценности   │ Единица │    Количество    │     Цена      │    Стоимость
    номер     │                             │измерения│                  │ @~@@@@@@@@@@@ │  @~@@@@@@@@@@@
──────────────┴─────────────────────────────┴─────────┴──────────────────┴───────────────┴─────────────────
.{
.{
&&&&&&&&&&&&&& @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@ &'&&&&&&&&&&&&&&&& &&&&&&&&&&&&&&& &'&&&&&&&&&&&&&&&
.}
.}
───────────────────────────────────────────────────────────────────────────────────────────────────────────
    БИтого :                                                                                &&&&&&&&&&&&&&&&& Б
.begin
   pagebreak:='';
  localSklOrder.GetFirst SklOrder where ((SklOrderRec == SklOrder.nRec));
  if (localSklOrder.SklOrder.vidOrder = 0) // приходный
  {
    sender := Mol;
    Senderpost := mol_post;
  }
  if (localSklOrder.SklOrder.vidOrder = 1) // расходный
  {
    recipient := Mol;
    RecipientPost := mol_post;
  }
end.

   Принял:  Д@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д  Д              Д  Д@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д
                    должность              подпись           расшифровка подписи
   Сдал :   Д@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д  Д              Д  Д@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д
                    должность              подпись           расшифровка подписи

.{
.}
 Ш ^
.}
.endform
