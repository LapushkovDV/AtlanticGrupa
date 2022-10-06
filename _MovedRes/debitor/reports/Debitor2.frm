.LinkForm 'DOLGOPL_01_ITOG2' Prototype is 'DOLGOPL'
.Group 'Задолженности по накладным'
.NameInList 'Droga Отчет о дебиторской задолженности итоговый с оборотами Excel'
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
  'по '+NameTypes+' за период с '+DateToStr(dd1,'DD/MM/YYYY')+' по '+DateToStr(dd2,'DD/MM/YYYY')
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
  INSERT ZKAUVED SET PSTRING1:=DateToStr(dd1,'DD/MM/YYYY'),PSTRING2:=DateToStr(dd2,'DD/MM/YYYY'), KAUNAMED1:='по '+NameTypes+' за период с '+DateToStr(dd1,'DD/MM/YYYY')+' по '+DateToStr(dd2,'DD/MM/YYYY'),CREC1:=4h;
  npp:=0h;
end.
 Б^

                                      ОТЧЕТ
                      О ПРОСРОЧЕННОЙ ДЕБИТОРСКОЙ ЗАДОЛЖЕННОСТИ
                                  НА @#@@@@@@@@

@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 Б
 И┌────┬──────────┬──────────────┬──────────┬────────┬──────────────┬────────┬────────────────┐
│Дол-│   Дата   │ Задолженность│   Срок   │Отсрочка│ Просроченная │Просроч.│    Менеджер и  │
│жник│ отгрузки │   по оплате  │  оплаты  │платежа │ задолженность│ дней   │номер накладной │
├────┼──────────┼──────────────┼──────────┼────────┼──────────────┼────────┼────────────────┤
│(1) │   (2)    │      (3)     │    (4)   │   (5)  │      (6)     │   (7)  │      (8)       │
├────┴──────────┴──────────────┴──────────┴────────┴──────────────┴────────┴────────────────┤ И
.{CheckEnter DKONTR
.begin
  KDolg  :=0.0;
  KPDolg :=0.0;
  npp:=npp+1;
  INSERT ZKAUVED SET KAUNAMED1:=Kontr, CREC11:=npp,CREC1:=1h;
end.
 И│ Б@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Б│
│    ┌──────────┬──────────────┬──────────┬────────┬──────────────┬────────┬────────────────┤ И
.{CheckEnter DKATSOPR
.begin
  INSERT ZKAUVED SET KAUNAMED1:=Kontr, CREC3:=NRECKS, CREC2:=npp,CREC1:=2h, PDOUBLE2:=double(Dolg), PDOUBLE3:=double(PDolg), PWORD2:=word(PrDn);
end.

 И│    │@#@@@@@@@@│&'&&&&&&&&&.&&│@#@@@@@@@@│&#&&&&  │&#'&&&&&&&&.&&│&#&&&&  │@#@@@@@@@@@@@@@@│ И
.{CheckEnter DKATSOPR1
.}
.begin
  KDolg  :=KDolg  + Dolg ;
  KPDolg :=KPDolg + PDolg;
end.
.}
 И├────┴──────────┼──────────────┼──────────┼────────┼──────────────┼────────┼────────────────┤
│ БПо должнику:    Б│ Б&'&&&&&&&&&.&& Б│          │        │ Б&#'&&&&&&&&.&& Б│        │                │
├───────────────┴──────────────┴──────────┴────────┴──────────────┴────────┴────────────────┤ И
.begin
  IDolg  :=KDolg  + IDolg ;
  IPDolg :=KPDolg + IPDolg;
end.
.}
 И├───────────────┬──────────────┬──────────┬────────┬──────────────┬────────┬────────────────┤
│ БИтого:          Б│ Б&'&&&&&&&&&.&& Б│          │        │ Б&#'&&&&&&&&.&& Б│        │                │
└───────────────┴──────────────┴──────────┴────────┴──────────────┴────────┴────────────────┘ И
.{table 'tRep'
 ^  ^
.}
.begin
RunInterface('C_PARTNER::Debitor');
end.

.endform
