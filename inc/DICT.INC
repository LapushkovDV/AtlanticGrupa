{$IFDEF __type__}
{ÍÍÍÍÍÍÍÍÍÍÍÍÍ ’ ¡«¨æ  : DICT "DICT" ÍÍÍÍÍÍÍÍÍÍÍÍÍÍ}
type
  String20        = String[20];
  String99        = String[99];
  String254        = String[254];
  String40        = String[40];
  String65        = String[65];
  String8        = String[8];
  String95        = String[95];
  pDICT = ^tDICT;
  tDICT = record   { - DICT }
    DATATYPE       : Word;       { DATATYPE                              }
    XEsATTR        : Word;       { €’ˆ“’›                              }
    XEsCODE        : Word;       { ŠŽ„ Ž‹Ÿ                              }
    XEsDATATYPE    : Byte;       { ’ˆ Ž‹Ÿ                              }
    XEsDEC         : Byte;       { ŠŽ‹. „…‘Ÿ’ˆ—›• ‡€ŠŽ‚ Ž‘‹… ’Ž—Šˆ    }
    XEsFILECODE    : Word;       { ŠŽ„ ’€‹ˆ–›                           }
    XEsNAME        : String20;   { ˆ„…’ˆ”ˆŠ€’Ž Ž‹Ÿ                    }
    XEsOFFSET      : Word;       { ‘Œ…™…ˆ… ‚ ‡€ˆ‘ˆ                     }
    XEsRESERVED    : String99;   { ‡€…‡…‚ˆŽ‚€Ž                       }
    XEsSIZE        : Word;       { €‡Œ… Ž‹Ÿ                           }
    XEsSTRTYPE     : String254;  { XE$STRTYPE                            }
    XEsTITLE       : String40;   { ‡€ƒŽ‹Ž‚ŽŠ Ž‹Ÿ                        }
    XFsATTR        : Word;       { €’ˆ“’› ”€‰‹€                        }
    XFsCHECKSUM    : LongInt;    { ŠŽ’Ž‹œ€Ÿ ‘“ŒŒ€ ‡€ƒŽ‹Ž‚Š€           }
    XFsCODE        : Word;       { ŠŽ„ ’€‹ˆ–›                           }
    XFsFLAGS       : Word;       { ”‹€ƒˆ                                 }
    XFsFORMAT      : Byte;       { ”ŽŒ€’ ”€‰‹€                          }
    XFsLOC         : String65;   { ˆŒŸ ”€‰‹€ („ˆ‘ŠŽ‚Ž…)                  }
    XFsLOC2        : String65;   { ˆŒŸ ”€‰‹€-Ž„Ž‹†…ˆŸ                 }
    XFsNAME        : String20;   { ˆŒŸ ’€‹ˆ–›                           }
    XFsOWNERNAME   : String8;    { ˆŒŸ ‚‹€„…‹œ–€ (€Ž‹œ)                }
    XFsPAGESIZE    : Word;       { €‡Œ… ‘’€ˆ–›                       }
    XFsRECORDFIXED : Word;       { €‡Œ… ”ˆŠ‘ˆŽ‚€Ž‰ —€‘’ˆ ‡€ˆ‘ˆ     }
    XFsRECORDSIZE  : Word;       { Ž‹›‰ €‡Œ… ‡€ˆ‘ˆ                  }
    XFsRESERVED    : String95;   { ‡€…‡…‚ˆŽ‚€Ž                       }
    XFsTITLE       : String40;   { ‡€ƒŽ‹Ž‚ŽŠ ’€‹ˆ–›                     }
    XIsAUTOINC     : Byte;       { €‚’ŽŒ€’ˆ—…‘Šˆ‰ (AUTOINC)              }
    XIsDATATYPE    : Byte;       { ’ˆ „€›• ‘…ƒŒ…’€ (Ž‹Ÿ)            }
    XIsFIELDCODE   : Word;       { ŠŽ„ Ž‹Ÿ                              }
    XIsFILECODE    : Word;       { ŠŽ„ ’€‹ˆ–›                           }
    XIsFLAGS       : Word;       { ”‹€ƒˆ                                 }
    XIsNAME        : String20;   { ˆŒŸ ˆ„…Š‘€                           }
    XIsNUMBER      : Word;       { ŽŒ… ˆ„…Š‘€                         }
    XIsOFFSET      : Word;       { ‘Œ…™…ˆ… Ž‹Ÿ ‚ ‡€ˆ‘ˆ                }
    XIsPART        : Word;       { ŽŒ… ‘…ƒŒ…’€                        }
    XIsRESERVED    : String99;   { ‡€…‡…‚ˆŽ‚€Ž                       }
    XIsSEGLENGTH   : Word;       { €‡Œ… ‘…ƒŒ…’€                       }
  end;

type
    prDICT = pDICT;
{$ENDIF}
{$IFDEF __CONSTANTS__}
const
    TNXssFIELDS=2;
    TNXsFIELDS=3;
    TNXsFILES=0;
    TNXsINDEXES=1;
    TCSTANDARD=39;
    FNDATATYPE=0;
    FNXEsATTR=35;
    FNXEsCODE=28;
    FNXEsDATATYPE=1;
    FNXEsDEC=34;
    FNXEsFILECODE=29;
    FNXEsNAME=30;
    FNXEsOFFSET=32;
    FNXEsRESERVED=36;
    FNXEsSIZE=33;
    FNXEsSTRTYPE=2;
    FNXEsTITLE=31;
    FNXFsATTR=11;
    FNXFsCHECKSUM=15;
    FNXFsCODE=3;
    FNXFsFLAGS=9;
    FNXFsFORMAT=10;
    FNXFsLOC=7;
    FNXFsLOC2=8;
    FNXFsNAME=4;
    FNXFsOWNERNAME=5;
    FNXFsPAGESIZE=12;
    FNXFsRECORDFIXED=13;
    FNXFsRECORDSIZE=14;
    FNXFsRESERVED=16;
    FNXFsTITLE=6;
    FNXIsAUTOINC=26;
    FNXIsDATATYPE=22;
    FNXIsFIELDCODE=18;
    FNXIsFILECODE=17;
    FNXIsFLAGS=25;
    FNXIsNAME=19;
    FNXIsNUMBER=20;
    FNXIsOFFSET=23;
    FNXIsPART=21;
    FNXIsRESERVED=27;
    FNXIsSEGLENGTH=24;
{$ENDIF}
{$IFDEF __Type__}
type
   prDICTDICT = pDICT;
{$endif}
