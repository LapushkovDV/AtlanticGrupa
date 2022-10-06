//параметры диалога настройки выгрузки
const etDefault          = 7;
const etWinTitle         = 1;
const etColTitle         = 2;
const etGrid             = 4;


const efBlack          = 0;         // $00000000
const efWhite          = 16777215;  // $00FFFFFF
const efRed            = 255;       // $000000FF
const efGreen          = 65280;     // $0000FF00
const efBlue           = 16711680;  // $00FF0000
const efYellow         = 65535;     // $0000FFFF
const efPink           = 16646398;  // $00FE00FE
const efCyan           = 16776960;  // $00FFFF00
const efTurquoise      = efCyan;
const efDarkRed        = 128;       // $00000080
const efDarkGreen      = 32768;     // $00008000
const efDarkBlue       = 9109504;   // $008B0000
const efNavy           = 8388608;   // $00800000
const efOlive          = 32896;     // $00008080
const efPurple         = 8388736;   // $00800080
const efTeal           = 8421376;   // $00808000
const efSilver         = 12632256;  // $00C0C0C0
const efGray25pct      = efSilver;
const efGray           = 8421504;   // $00808080
const efGrey           = efGray;
const efGray50pct      = efGray;
const efGray10pct      = 15132390;  // $00E6E6E6
const efGrey10pct      = efGray10pct;
const efGray20pct      = 13421772;  // $00CCCCCC
const efGrey20pct      = efGray20pct;
const efPeriwinkle     = 16751001;  // $00FF9999
const efPlum           = 6697881;   // $00663399
const efIvory          = 13434879;  // $00CCFFFF
const efLightTurquoise = 16777164;  // $00FFFFCC
const efDarkPurple     = 6684774;   // $00660066
const efCoral          = 8421631;   // $008080FF
const efOceanBlue      = 13395456;  // $00CC6600
const efIceBlue        = 16764108;  // $00FFCCCC
const efSkyBlue        = 16763904;  // $00FFCC00
const efLightGreen     = 13434828;  // $00CCFFCC
const efLightYellow    = 10092543;  // $0099FFFF
const efPaleBlue       = 16764057;  // $00FFCC99
const efRose           = 13408767;  // $00CC99FF
const efLavander       = 16751052;  // $00FF99CC
const efTan            = 10079487;  // $0099CCFF
const efLightBlue      = 16737843;  // $00FF6633
const efAqua           = 13421619;  // $00CCCC33
const efLime           = 52377;     // $0000CC99
const efGold           = 52479;     // $0000CCFF
const efLightOrange    = 39423;     // $000099FF
const efOrange         = 26367;     // $000066FF
const efBlueGray       = 10053222;  // $00996666
const efBlueGrey       = efBlueGray;
const efGray40pct      = 9868950;   // $00969696
const efDarkTeal       = 6697728;   // $00663300
const efSeaGreen       = 6723891;   // $00669933
const efVeryDarkGreen  = 13056;     // $00003300
const efOliveGreen     = 13107;     // $00003333
const efBrown          = 13209;     // $00003399
const efIndigo         = 10040115;  // $00993333
const efGray80pct      = 3355443;   // $00333333
const efGrey80pct      = efGray80pct;
const efDarkBrown      = 2970272;   // $002D52A0
const efBeige          = 14480885;  // $00DCF5F5
const efWheat          = 11788021;  // $00B3DEF5


//-------------TsCellBorder------------------
const cbTop            = 1; //cbNorth
const cbLeft           = 2; //cbWest
const cbRight          = 4; //cbEast
const cbBottom         = 8; //cbSouth
const cbAll            = 15;
const cbDiagUp         = 16;
const cbDiagDown       = 32;

//-------------TsFillStyle-------------------
const fsNoFill              = 0;
const fsSolidFill           = 1;
const fsGray75              = 2;
const fsGray50              = 3;
const fsGray25              = 4;
const fsGray12              = 5;
const fsGray6               = 6;
const fsStripeHor           = 7;
const fsStripeVert          = 8;
const fsStripeDiagUp        = 9;
const fsStripeDiagDown      = 10;
const fsThinStripeHor       = 11;
const fsThinStripeVert      = 12;
const fsThinStripeDiagUp    = 13;
const fsThinStripeDiagDown  = 14;
const fsHatchDiag           = 15;
const fsThinHatchDiag       = 16;
const fsThickHatchDiag      = 17;
const fsThinHatchHor        = 18;

//-------------TsLineStyle-------------------
const lsThin                = 0;
const lsMedium              = 1;
const lsDashed              = 2;
const lsDotted              = 3;
const lsThick               = 4;
const lsDouble              = 5;
const lsHair                = 6;

//-------------TsFontStyle-------------------
const fssBold               = 1;
const fssItalic             = 2;
const fssStrikeOut          = 4;
const fssUnderline          = 8;

//-------------TsHorAlignment----------------
const haDefault             = 0;
const haLeft                = 1;
const haCenter              = 2;
const haRight               = 3;

//-------------TsVertAlignment---------------
const vaDefault             = 0;
const vaTop                 = 1;
const vaCenter              = 2;
const vaBottom              = 3;
//-------------TsTextRotation----------------
const rtHorizontal                       = 0;
const rt90DegreeClockwiseRotation        = 1;
const rt90DegreeCounterClockwiseRotation = 2;
const rtStacked                          = 3;