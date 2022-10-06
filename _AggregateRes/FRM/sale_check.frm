.autoform check_price(d1, d2: date)
.var cur_channel: string; .endvar
.create view v01 as select * from check_tbl;
.fields
 datetostr(d1, 'DD.MM.YYYY') datetostr(d2, 'DD.MM.YYYY')
 v01.check_tbl.channel
 v01.check_tbl.name
 v01.check_tbl.dbeg
 v01.check_tbl.dend
 v01.check_tbl.group
.endfields
Проверка пересечения прайс-листов с ^ по ^

прайс                              начало     окончание  группа
.{table 'v01.check_tbl'
.{?internal; (cur_channel <> v01.check_tbl.channel);
.begin cur_channel := v01.check_tbl.channel; end.
Канал сбыта: ^
.}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@ @@@@@@@@@@ ^
.}
.endform