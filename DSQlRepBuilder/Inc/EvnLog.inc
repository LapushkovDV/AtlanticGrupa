
//******************************************************************************
// ????⠭?? ??? ??ࠡ?⪨ ࠧ?????? ?????権
// 0 - ?? ?ᯮ?짮????

//******************************************************************************
// ????⠭?? ??ꥪ⮢, ॣ??????????? ?????樨
// 001..250 - ??१?ࢨ஢??? ??? ?????஢???? (???????? ?ᯮ?짮????? ????⠭? tpXXX)
// 251..350 - ??१?ࢨ஢??? ??? ᯥ??䨪?権 ?த??⮢
// 351..450 - ??१?ࢨ஢??? ??? ????஫?????
// 451..550 - ??१?ࢨ஢??? ??? ????? ? ?ந?????⢥

// ??? ?????஢???? (001..250):
   eoAlg02    = 02;
   eoAlg05    = 10;
   eoAlg305   = 11;
   eoAlg03    = 12;
   eoAlg07    = 13;
   eoAlg12    = 14;
   eoAlg13    = 15;
   eoAlg14    = 16;
   eoAlg15    = 17;
   eoAlg17    = 18;
   eoAlg18    = 19;
   eoAlg22    = 20;
   eoAlg313   = 21;
   eoAlg31    = 22;
   eoAlg33    = 23;
   eoAlg34    = 24;
   eoAlg36    = 25;
   eoAlg37    = 26;
   eoAlg38    = 27;
   eoAlg39    = 28;
   eoAlg41    = 29;
   eoAlg44    = 30;
   eoAlg47    = 31;
   eoAlg48    = 32;
   eoAlg04    = 33;
   eoAlg401   = 34;
   eoAlg403   = 35;
   eoAlg405   = 36;
   eoAlg409   = 37;
   eoAlg410   = 38;
   eoAlg35    = 39;
   eoAlg45    = 40;
   eoAlg06    = 41;
   eoAlg10    = 42;
   eoAlg49    = 43;
   eoAlg43    = 44;
   eoAlg54    = 54;
   eoAlg56    = 45;
   eoAlg57    = 46;
   eoAlg58    = 47;
   eoAlg50    = 48;
   eoAlg60    = 49;
   eoAlg61    = 50;
   eoAlg53    = 51;
   eoAlg62    = 52;
   eoAlg64    = 64;
   eoAlg65    = 65;
   eoAlg66    = 66;

   eoIntSys43 = 67;

   eoAlg90    = 68;
   eoAlg68    = 69;
   eoAlg32    = 70;
   eoAlg91    = 71;
   eoAlg72    = 72;
   eoAlg73    = 73;
   eoAlg74    = 74;
   eoAlg76    = 76;
   eoAlg77    = 77;
   eoAlg78    = 78;
   eoAlg79    = 79;
   eoAlg80    = 80;
   eoAlg81    = 81;
   eoAlg82    = 82;
   eoAlg83    = 83;
   eoAlg84    = 84;
   eoAlg85    = 85;
   eoAlg86    = 86;
   eoAlg87    = 87;
   eoAlg88    = 88;
   eoAlg23    = 89;
   eoAlg93    = 90;
   eoAlg125   = 101;
	 eoAlg126   = 103;
   eoAlg102   = 102;
   eoAlg104   = 104;
   eoAlg105   = 105;
	 eoAlg106   = 106;
   eoAlg107   = 107;
	 eoAlg108   = 108;
   eoAlg109   = 109;
   eoAlg113   = 113;
	 eoAlg114		= 114;
   eoAlg117   = 117;
	 eoAlg118   = 118;
	 eoAlg119   = 119;
   eoAlg120   = 120;
   eoAlg121   = 121;
   eoAlg122   = 122;
   eoAlg92    = 123;
   eoAlg89    = 124;
   eoAlg94    = 125;
   eoAlg123   = 126;
   eoAlg124   = 127;
   eoAlg127   = 128;
   eoAlg128   = 129;
   eoAlg130   = 130;
	 eoAlg271   = 131;
   eoAlg272   = 132;
   eoAlg134   = 134;
	 eoAlg139   = 139;
   eoAlg140   = 140;
	 eoAlg145   = 145;
   eoAlg165   = 165;
   eoAlg167   = 167;
   eoAlg150   = 150;
	 eoAlg151   = 151;
     eoAlg154   = 154;
	 eoAlg161   = 161;
	 eoAlg162   = 162;
	 eoAlg163   = 163;
	 eoAlg164   = 164;
	 eoAlg169   = 169;
	 eoAlg136   = 136;
   eoAlg171   = 171;
   eoAlg172   = 172;
   eoAlg180   = 180;
   eoAlg182   = 182;
   eoAlg226   = 226;
// ??? ᯥ??䨪?権 ?த??⮢ (251..350):
   eoBOMCheck  = 251;
   eoPotrGt    = 252;
   eoCopyNorm  = 253;
   eoPotrGtRes = 254;
   eoNoteBene  = 255;
   eoPlanLevel = 256;
   eoGetExData = 257;
   eoMCSetToPS = 258;

// ??? ????? ? ?ந?????⢥ (451..550):
   eoAlg270       = 451;
   eoAlg215       = 452;
   eoAlg225       = 453;

   eoCrtBasByPlan    = 454;
   eoTestRela        = 455;
	 eoCrtMGCardByPlan = 456;

//******************************************************************************
// ????⠭?? ⨯?? ?????権
   etFatalError     = 1; // ?????筠? ?訡??, ?த??????? ??????????
   etError          = 2; // ?訡??
   etWarning        = 3; // ?।??०?????
   etWarrning       = 3; // ?।??०????? (???? ??? ?ࠢ????)
   etInformation    = 4; // ????ଠ???
   etDopInformation = 5; // ???????⥫쭠? ????ଠ???
