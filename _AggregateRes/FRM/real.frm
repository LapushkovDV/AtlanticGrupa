.linkForm 'REP_BS_310b21' Prototype is 'REP_BS'
.group 'S0M'
.nameInList 'âç¥â ¯® à¥ «¨§ æ¨¨ ¨â®£®¢ë© (EXCEL)'
.F 'Nul'
.var
 npp:comp;
 recMC:string;
.endVar
.create view tRep as select * from ZKAUVED;
.fields
 StrNastr
 CommonFormHeader
 head1
 head2
 otfilter
 otfilter1
 otfilter2
 otfilter3
 head4
 vtarsim
 a0
 NameGroup
 NRECMC
 NomenklN
 NameMC
 NameUchEd
 TovKol
 TovMassa
 TovVolume
 TovCostKupl
 TovNaim
 TovNalKol
 TovSum
 a6
 GroupKol
 GroupMassa
 GroupVolume
 GroupCostKupl
 GroupNaim
 GroupNalKol
 GroupSum
 TotKol
 TotMassa
 TotVolume
 TotCostKupl
 TotNaim
 TotNalKol
 TotSum
.endfields
.{CheckEnter PARNASTR
^
.}
.begin
  DELETE ALL ZKAUVED;
  INSERT ZKAUVED SET KAUNAMED1:=head1,KAUNAMED2:=head2,KAUNAMED3:=otfilter,KAUNAMEK1:=otfilter1,KAUNAMEK2:=otfilter2,KAUNAMEK3:=otfilter3,CREC1:=1h;
  INSERT ZKAUVED SET KAUNAMED1:=head4,KAUNAMED2:=vtarsim,CREC1:=2h;
  npp:=0h;
end.

^

ÿ                     ’—…’ ‘ ‘“ŒŒ€Œˆ  Œ…Š‹€’“…
@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ÿ
ÿ
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
  ®¬. ­®¬¥à  ³ @~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ ³ …¤. ¨§¬¥à¥­¨ï ³  Š®«¨ç¥áâ¢®  ³    Œ áá      ³    ¡ê¥¬     ³ ‘ã¬¬  ¢ @@@@@@@
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÿ
.{
.begin
 npp++;
 INSERT ZKAUVED SET KAUNAMED1:=a0,KAUNAMED2:=NameGroup,CREC11:=npp,CREC1:=3h;
end.
ÿ^^ÿ

.{
.{
.{
.{
.}
.}
.{
.}
.}
.begin
 recMC:=string(NRECMC,22,0);
 INSERT ZKAUVED SET PSTRING2:=recMC,KAUNAMED1:=NomenklN,KAUNAMED2:=NameMC,KAUNAMED3:=NameUchEd,PDOUBLE1:=double(TovKol),PDOUBLE2:=double(TovMassa),PDOUBLE3:=double(TovVolume),PDOUBLE4:=double(TovCostKupl),CREC2:=npp,CREC1:=4h;
end.
ÿ ^ @@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@ &'&&&&&&&&&&&& &#'&&&&&&&&&&& &#'&&&&&&&&&&& &'&&&&&&&&&&&&&&ÿ
.{
.begin
 INSERT ZKAUVED SET PSTRING2:=recMC,KAUNAMED1:=TovNaim,PDOUBLE1:=double(TovNalKol),PDOUBLE2:=double(TovSum),CREC2:=npp,CREC1:=5h;
end.
ÿ                                             &&&&&&&&&&&&&&&&&&&&                 &#'&&&&&&&&&&&                               &#'&&&&&&&&&&&&&ÿ
.}
.{
.}
.}
.begin
  INSERT ZKAUVED SET KAUNAMED1:=a6,PDOUBLE1:=double(GroupKol),PDOUBLE2:=double(GroupMassa),PDOUBLE3:=double(GroupVolume),PDOUBLE4:=double(GroupCostKupl),CREC2:=npp,CREC1:=6h;
end.
ÿÿ    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   &'&&&&&&&&&&&& &#'&&&&&&&&&&& &#'&&&&&&&&&&& &'&&&&&&&&&&&&&&ÿÿ
.{
.begin
  INSERT ZKAUVED SET KAUNAMED1:=GroupNaim,PDOUBLE1:=double(GroupNalKol),PDOUBLE2:=double(GroupSum),CREC2:=npp,CREC1:=7h;
end.
ÿ                                             &&&&&&&&&&&&&&&&&&&&                 &#'&&&&&&&&&&&                               &#'&&&&&&&&&&&&&ÿ
.}
.}
.begin
 INSERT ZKAUVED SET PDOUBLE1:=double(TotKol),PDOUBLE2:=double(TotMassa),PDOUBLE3:=double(TotVolume),PDOUBLE4:=double(TotCostKupl),CREC1:=8h;
end.
ÿ
ÿ    ˆ’ƒ §  ¯¥à¨®¤                                                               &'&&&&&&&&&&&& &#'&&&&&&&&&&& &#'&&&&&&&&&&& &'&&&&&&&&&&&&&&ÿÿ
.{
.begin
 INSERT ZKAUVED SET KAUNAMED1:=TotNaim,PDOUBLE1:=double(TotNalKol),PDOUBLE2:=double(TotSum),CREC1:=9h;
end.
ÿ                                             &&&&&&&&&&&&&&&&&&&&                 &#'&&&&&&&&&&&                               &#'&&&&&&&&&&&&&ÿ
.}
.begin
 runInterface('droga::real');
end.
.endform