{
 浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?
 ?    ??痰ガ?: ｯ????┘ 痰????珥???? 甄???瑙 (?≒???皋腑瓷?? ?キム?罔?)  ?
 ?    ?ム瓱? : 51                                                        ?
 ?    ????   : 03.11.04                                                  ?
 ?    ??Л?腑?┘: ?矗礫矣爿襯 ? 瓱痰ガ?襯 ??゛?肓                        ?
 藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?
}
{様様様様様様様様様様様様様様?<DICT>様様様様様様様様様様様様様様様様様様様?}
CONST
  DictVer        = 55;   {?ム瓱? 甄???瑙}
  coXSDictionary = 0;
{様様様様様様? ??゛??? : X$FILES "??゛??? ??????" 様様様様様様様}
const
  coXsFILES = 1;
  diXsFILESName = 'X$FILES';
const
  diXsFILESFile : String[8] = 'File.adf';
type
  pXsFILESR = ^tXsFILESR;
  tXsFILESR = record   { - ??゛??? ?????? }
    XFsCODE        : Word;            { ??? ??゛?肓                           }
    XFsNAME        : String[20];      { ??? ??゛?肓                           }
    XFsOWNERNAME   : String[8];       { ??? ←?ぅ?趾? (??牀??)                }
    XFsTITLE       : String[40];      { ??????〓? ??゛?肓                     }
    XFsLOC         : String[65];      { ??? ????? (え瓷?〓?)                  }
    XFsLOC2        : String[65];      { ??? ?????-?牀ぎ?Ε???                 }
    XFsFLAGS       : Word;            { ?????                                 }
    XFsFORMAT      : Byte;            { ??爼?? ?????                          }
    XFsATTR        : Word;            { ?矗─竄? ?????                        }
    XFsPAGESIZE    : Word;            { ??Кム 痰????肓                       }
    XFsRECORDFIXED : Word;            { ??Кム 筥?瓱牀?????? ??痰? ????瓱     }
    XFsRECORDSIZE  : Word;            { ????覃 ??Кム ????瓱                  }
    XFsCHECKSUM    : LongInt;         { ???矗??讚?? 痺??? ??????→?           }
    XFsPRIMARYKEYNO: Byte;            { ???ム ?ム※膈??? ??鈑?                }
    XFsCOMPONENT   : String[20];      { ??? ??????キ??                        }
    XFsFLAGS2      : LongInt;         { ???????皀?讚襯 筰???                  }
  end;
const
  tiFILEBYCODE           = 0;  { XFsCODE(Un M)                           }
  tiFILEBYNAME           = 1;  { XFsNAME(M Up)                           }
  tiFILEBYTITLE          = 2;  { XFsTITLE(M Up)                          }
  tiFILEBYLOC            = 3;  { XFsLOC(M Up)                            }
  tiFILEBYLOC2           = 4;  { XFsLOC2(M Up)                           }
  tiFILEBYCOMPONENT      = 5;  { XFsCOMPONENT(Un M Up) + XFsCODE         }
  tiFILEBYCOMPBYNAME     = 6;  { XFsCOMPONENT(Un M Up) + XFsNAME(Up)     }
  tiFILEBYCOMPBYTITLE    = 7;  { XFsCOMPONENT(Un M Up) + XFsTITLE(Up)    }

{様様様様様様? ??゛??? : X$FIELDS "??゛??? ???ォ" 様様様様様様様}
const
  coXsFIELDS = 2;
  diXsFIELDSName = 'X$FIELDS';
const
  diXsFIELDSFile : String[9] = 'Field.adf';
type
  pXsFIELDSR = ^tXsFIELDSR;
  tXsFIELDSR = record   { - ??゛??? ???ォ }
    XEsCODE        : Word;            { ??? ????                              }
    XEsFILECODE    : Word;            { ??? ??゛?肓                           }
    XEsNAME        : String[20];      { ?ぅ?皋筥??皰? ????                    }
    XEsTITLE       : String[40];      { ??????〓? ????                        }
    XEsDATATYPE    : Byte;            { ?┓ ????                              }
    XEsOFFSET      : Word;            { ??ラキ┘ ? ????瓱                     }
    XEsSIZE        : Word;            { ??Кム ????                           }
    XEsPREC        : Byte;            { ??┃? ???皋瘁?                        }
    XEsDEC         : Byte;            { ???. ぅ瘴皋膈諷 Л???? ??甄? 皰腦?    }
    XEsATTR        : Word;            { ?矗─竄?                              }
  end;
const
  tiFIELDBYFILEBYCODE    = 0;  { XEsFILECODE(Un M) + XEsCODE             }
  tiFIELDBYFILEBYNAME    = 1;  { XEsFILECODE(Un M) + XEsNAME(Up)         }
  tiFIELDBYFILEBYTITLE   = 2;  { XEsFILECODE(M) + XEsTITLE(Up)           }
  tiFIELDBYNAME          = 3;  { XEsNAME(M Up)                           }
  tiFIELDBYTITLE         = 4;  { XEsTITLE(M Up)                          }

{様様様様様様? ??゛??? : X$INDEXES "??゛??? ┃ぅ?甌?" 様様様様様様様}
const
  coXsINDEXES = 3;
  diXsINDEXESName = 'X$INDEXES';
const
  diXsINDEXESFile : String[9] = 'Index.adf';
type
  pXsINDEXESR = ^tXsINDEXESR;
  tXsINDEXESR = record   { - ??゛??? ┃ぅ?甌? }
    XIsFILECODE    : Word;            { ??? ??゛?肓                           }
    XIsFIELDCODE   : Word;            { ??? ????                              }
    XIsNAME        : String[20];      { ??? ┃ぅ???                           }
    XIsNUMBER      : Word;            { ???ム ┃ぅ???                         }
    XIsPART        : Word;            { ???ム 瓮??キ??                        }
    XIsDATATYPE    : Byte;            { ?┓ ????諷 瓮??キ?? (????)            }
    XIsOFFSET      : Word;            { ??ラキ┘ ???? ? ????瓱                }
    XIsSEGLENGTH   : Word;            { ??Кム 瓮??キ??                       }
    XIsFLAGS       : Word;            { ?????                                 }
    XIsAUTOINC     : Byte;            { ?≒???皋腑瓷┤ (autoinc)              }
    XIsFLAGS2      : LongInt;         { ???????皀?讚襯 筰???                  }
  end;
const
  tiINDEXBYFILEBYNUMBERBYPART= 0;{ XIsFILECODE(Un M) + XIsNUMBER + XIsPART }
  tiINDEXBYFILEBYNAMEBYPART= 1;{ XIsFILECODE(M) + XIsNAME(Up) + XIsPART  }

{様様様様様様? ??゛??? : X$ATTR "??゛??? ?矗─竄??" 様様様様様様様}
const
  coXsATTR = 4;
  diXsATTRName = 'X$ATTR';
const
  diXsATTRFile : String[8] = 'Attr.adf';
type
  pXsATTRR = ^tXsATTRR;
  tXsATTRR = record   { - ??゛??? ?矗─竄?? }
    XAsFILECODE    : Word;            { ??? ??゛?肓                           }
    XAsFIELDCODE   : Word;            { ??? ????                              }
    XAsCLASS       : Word;            { ?┓ ?矗─竄?                          }
  end;
const
  tiATTRBYFILEBYFIELDBYCLASS= 0;{ XAsFILECODE(Un M) + XAsFIELDCODE + XAsCLASS }

{様様様様様様? ??゛??? : X$RESOURCES "???讌???皀?赱?┘ 爛痺珀?" 様様様様様様様}
const
  coXsRESOURCES = 5;
  diXsRESOURCESName = 'X$RESOURCES';
const
  diXsRESOURCESFile : String[12] = 'Resource.ast';
type
  pXsRESOURCESR = ^tXsRESOURCESR;
  tXsRESOURCESR = record   { - ???讌???皀?赱?┘ 爛痺珀? }
    ATL_NREC       : Comp;            { ??＝癶キ?覃 ???ム ????瓱              }
    ATL_LASTDATE   : Date;            { ???? ??甄イ?ォ ??え筥??罔?            }
    ATL_LASTTIME   : Time;            { ?爛?? ??甄イ?ォ ??え筥??罔?           }
    ATL_LASTUSER   : Comp;            { ??? ???讌???皀??                      }
    ATL_ORIGINOFFICE: Word;           { ???ム ?筥??, ? ??皰牀? ???メキ? ????瘡 }
    ATL_OWNER      : Comp;            { ??? ←?ぅ?趾? ????瓱                  }
    XRsTYPE        : Word;            { ?┓ 爛痺珀?                           }
    XRsNAME        : String[59];      { ??━キ????┘ 爛痺珀?                  }
    XRsCODE        : Comp;            { ??? ←?ぅ?趾? 爛痺珀?                 }
  end;
const
  tiRESOURCESBYTYPE      = 0;  { XRsTYPE(M)                              }
  tiRESOURCESBYNAME      = 1;  { XRsTYPE(M) + XRsNAME(Up)                }
  tiRESOURCESBYCODE      = 2;  { XRsTYPE(M) + XRsCODE                    }
  tiRESOURCESID          = 3;  { ATL_NREC(J Sur Un nM)                   }
  tiRESOURCESLM          = 4;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiRESOURCESLU          = 5;  { ATL_LASTUSER(M)                         }

{様様様様様様? ??゛??? : X$USERS "???讌???皀??" 様様様様様様様}
const
  coXsUSERS = 6;
  diXsUSERSName = 'X$USERS';
const
  diXsUSERSFile : String[8] = 'User.adf';
type
  pXsUSERSR = ^tXsUSERSR;
  tXsUSERSR = record   { - ???讌???皀?? }
    ATL_NREC       : Comp;            { ??＝癶キ?覃 ???ム ????瓱              }
    ATL_LASTDATE   : Date;            { ???? ??甄イ?ォ ??え筥??罔?            }
    ATL_LASTTIME   : Time;            { ?爛?? ??甄イ?ォ ??え筥??罔?           }
    ATL_LASTUSER   : Comp;            { ??? ???讌???皀??                      }
    ATL_ORIGINOFFICE: Word;           { ???ム ?筥??, ? ??皰牀? ???メキ? ????瘡 }
    ATL_OWNER      : Comp;            { ??? ←?ぅ?趾? ????瓱                  }
    XUsUSEROFFICE  : Word;            { ?筥? ???讌???皀??                     }
    XUsFULLNAME    : String[60];      { ??? ???讌???皀??                      }
    XUsLOGINNAME   : String[47];      { ?ぅ?皋筥??皰? ???讌???皀??            }
    XUsUSERMACRO   : String[8];       { ???腑?┘ ?ムガキ??? %USER%            }
    XUsPASSWORD    : String[64];      { ??牀?? ???讌???皀??                   }
    XUsPASSDATE    : Date;            { ???? 竅????→? ??牀??                 }
    XUsPASSPERIOD  : Word;            { ?爛?? ぅ?痰※? ??牀??                 }
    XUsPASSWARN    : Word;            { ?? 瓷??讓? きォ ?爛ゃ?爛Δ?碎         }
    XUsBEGTIME     : Time;            { ?爛?? ??оヨキ?? √??? ? 瓱痰ガ?      }
    XUsENDTIME     : Time;            { ?爛?? ???爛薀??? √??? ? 瓱痰ガ?      }
    XUsTYPE        : Byte;            { ?┓ ???讌???皀??                      }
    XUsFLAG        : Word;            { ????? ???讌???皀??                    }
    XUsSECURITYLEVEL: Byte;           { ?牀▲?? ．М??甅?痰? ???讌???皀??     }
    XUsFLAGEXT     : LongInt          { ???????皀?讚襯 筰??? ???讌???皀??     }
  end;
const
  tiUSERBYLOGINNAME      = 0;  { XUsUSEROFFICE(Un M) + XUsLOGINNAME(Up)  }
  tiUSERBYTYPE           = 1;  { XUsTYPE(M) + ATL_NREC                   }
  tiUSERBYLOGINNOOFF     = 2;  { XUsLOGINNAME(M Up)                      }
  tiUSERBYFULLNAME       = 3;  { XUsFULLNAME(M Up)                       }
  tiUSERSID              = 4;  { ATL_NREC(J Sur Un nM)                   }
  tiUSERSLM              = 5;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiUSERSLU              = 6;  { ATL_LASTUSER(M)                         }

{様様様様様様? ??゛??? : X$RIGHTS "????? ???讌???皀?ォ" 様様様様様様様}
const
  coXsRIGHTS = 7;
  diXsRIGHTSName = 'X$RIGHTS';
const
  diXsRIGHTSFile : String[9] = 'Right.adf';
type
  pXsRIGHTSR = ^tXsRIGHTSR;
  tXsRIGHTSR = record   { - ????? ???讌???皀?ォ }
    ATL_NREC       : Comp;            { ??＝癶キ?覃 ???ム ????瓱              }
    ATL_LASTDATE   : Date;            { ???? ??甄イ?ォ ??え筥??罔?            }
    ATL_LASTTIME   : Time;            { ?爛?? ??甄イ?ォ ??え筥??罔?           }
    ATL_LASTUSER   : Comp;            { ??? ???讌???皀??                      }
    ATL_ORIGINOFFICE: Word;           { ???ム ?筥??, ? ??皰牀? ???メキ? ????瘡 }
    ATL_OWNER      : Comp;            { ??? ←?ぅ?趾? ????瓱                  }
    XRsUSERCODE    : Comp;            { ??? ???讌???皀??                      }
    XRsFILECODE    : Word;            { ??? ??゛?肓                           }
  end;
const
  tiRIGHTBYUSERCODEBYFILECODE= 0;{ XRsUSERCODE(Un M) + XRsFILECODE       }
  tiRIGHTSID             = 1;  { ATL_NREC(J Sur Un nM)                   }
  tiRIGHTSLM             = 2;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiRIGHTSLU             = 3;  { ATL_LASTUSER(M)                         }

{様様様様様様? ??゛??? : X$RELATE "?瘠??膈?? 罐??痰??痰?" 様様様様様様様}
const
  coXsRELATE = 8;
  diXsRELATEName = 'X$RELATE';
const
  diXsRELATEFile : String[10] = 'Relate.adf';
type
  pXsRELATER = ^tXsRELATER;
  tXsRELATER = record   { - ?瘠??膈?? 罐??痰??痰? }
    XPsPFILECODE   : Word;            { ??? ??爿ア?? ??゛?肓                  }
    XPsPINDEXCODE  : Word;            { ???ム ┃ぅ??? ? ??爿ア?? ??゛?罐      }
    XPsFFILECODE   : Word;            { ??? ??ゆク?錺??? ??゛?肓              }
    XPsFINDEXCODE  : Word;            { ???ム ┃ぅ??? ? ??ゆク?錺??? ??゛?罐  }
    XPsINSERTRULE  : Byte;            { 踸 Insert                            }
    XPsUPDATERULE  : Byte;            { 踸 UpDate                            }
    XPsDELETERULE  : Byte;            { 踸 Delete                            }
    XPsFLAGS       : Byte;            { ?????                                 }
    XPsSWITCHFIELDOFS: Word;          { ??ラキ┘ ????-?ムオ?鈑?皀?? ? ????瓱  }
    XPsSWITCHVALUE : Word;            { ???腑?┘ ????-?ムオ?鈑?皀??           }
    XPsOBJINDEXCODE: Word;            { ?ギ?皋?├?牀????覃 ???ム ┃ぅ??? ? ??爿ア?? ??゛?罐 }
    XPsOBJREF      : String[80];      { ｡螢?皚?? 瘁覊??                      }
  end;
const
  tiRELATEBYPFILECODE    = 0;  { XPsPFILECODE(M) + XPsPINDEXCODE         }
  tiRELATEBYFFILECODE    = 1;  { XPsFFILECODE(M) + XPsFINDEXCODE         }
  tiRELATEBYPFILECODEBYFFILECODE= 2;{ XPsPFILECODE(M) + XPsFFILECODE     }
  tiRELATEBYSWITCHBYVALUE= 3;  { XPsFFILECODE(Un M) + XPsFINDEXCODE + XPsSWITCHFIELDOFS +  }
                               { XPsSWITCHVALUE                          }
  tiRELATEBYOBJREF       = 4;  { XPsOBJREF(M Up)                         }

{様様様様様様? ??゛??? : X$OWNERS "??゛??? ??え牀????? ??????" 様様様様様様様}
const
  coXsOWNERS = 9;
  diXsOWNERSName = 'X$OWNERS';
const
  diXsOWNERSFile : String[9] = 'Owner.adf';
type
  pXsOWNERSR = ^tXsOWNERSR;
  tXsOWNERSR = record   { - ??゛??? ??え牀????? ?????? }
    ATL_NREC       : Comp;            { ??＝癶キ?覃 ???ム ????瓱              }
    ATL_LASTDATE   : Date;            { ???? ??甄イ?ォ ??え筥??罔?            }
    ATL_LASTTIME   : Time;            { ?爛?? ??甄イ?ォ ??え筥??罔?           }
    ATL_LASTUSER   : Comp;            { ??? ???讌???皀??                      }
    ATL_ORIGINOFFICE: Word;           { ???ム ?筥??, ? ??皰牀? ???メキ? ????瘡 }
    ATL_OWNER      : Comp;            { ??? ←?ぅ?趾? ????瓱                  }
    XOsFILECODE    : Word;            { ??? ?????                             }
    XOsOWNER       : String[64];      { ??? ←?ぅ?趾?                         }
    XOsFLAGS       : Word;            { ?????                                 }
  end;
const
  tiOWNERBYFILECODE      = 0;  { XOsFILECODE(M)                          }
  tiOWNERBYOWNER         = 1;  { XOsOWNER(M Up)                          }
  tiOWNERSID             = 2;  { ATL_NREC(J Sur Un nM)                   }
  tiOWNERSLM             = 3;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiOWNERSLU             = 4;  { ATL_LASTUSER(M)                         }

{様様様様様様? ??゛??? : X$SURRKEYS "??甄イ?┘ Л?腑??? 痺玻???皚諷 ??鈑ォ" 様様様様様様様}
const
  coXsSURRKEYS = 10;
  diXsSURRKEYSName = 'X$SURRKEYS';
const
  diXsSURRKEYSFile : String[12] = 'SurrKeys.adf';
type
  pXsSURRKEYSR = ^tXsSURRKEYSR;
  tXsSURRKEYSR = record   { - ??甄イ?┘ Л?腑??? 痺玻???皚諷 ??鈑ォ }
    TABLECODE      : Word;            { ??? ??゛?肓 ├ 甄???瑙                }
    KEYNO          : Word;            { ???ム ┃ぅ??? 痺玻???皚??? ??鈑?      }
    LASTKEYVALUE   : Comp;            { ??甄イ?ゥ Л?腑?┘ ??鈑?              }
    RESERVED       : String[254];     { Reserved                              }
  end;
const
  tiSURRKEYSBYTABLECODEBYKEYNO= 0;{ TABLECODE(Un M) + KEYNO              }

{様様様様様様? ??゛??? : X$ACTIVEUSERS "??皋↓襯 ???讌???皀??" 様様様様様様様}
const
  coXsACTIVEUSERS = 11;
  diXsACTIVEUSERSName = 'X$ACTIVEUSERS';
const
  diXsACTIVEUSERSFile : String[12] = 'ActUsers.ast';
type
  pXsACTIVEUSERSR = ^tXsACTIVEUSERSR;
  tXsACTIVEUSERSR = record   { - ??皋↓襯 ???讌???皀?? }
    USERCODE       : Comp;            { ??? ???讌???皀??                      }
    NOVELLNAME     : String[48];      { ?モア?? ━? ???讌???皀??              }
    NOVELLADDRESS  : String[15];      { ?クム? ?むメ ?ムゥ??? ? Reserver      }
    COUNTORNAME    : String[7];       { ??? ??皋↓??? ???矣??                 }
    COMPONENTNAME  : String[39];      { ??? ??皋↓??? ??????キ??              }
    SESSIONID      : Comp;            { ?ぅ?皋筥??皰? 瓮瘁┬                  }
    START_DATE     : Date;            { ???? ┃?罔??├?罔? 甄???瑙            }
    START_TIME     : Time;            { ?爛?? ┃?罔??├?罔? 甄???瑙           }
    RESERVED       : String[31];      { ? 〓? Гメ? ?ウ?? 瓮皀〓? ?むメ       }
    DBSESSIONID    : String[24];      { ???矮?爼キ????※瓱?覃 ┐キ皋筥??皰? 瓮瘁┬ }
  end;
const
  tiACTIVEUSERSBYUSERCODE= 0;  { USERCODE(M)                             }
  tiUSERBYNOVELLNAME     = 1;  { NOVELLNAME(M Up)                        }
  tiUSERBYSESSIONID      = 2;  { SESSIONID(Sur Un M)                     }
  tiUSERBYSTARTDATETIME  = 3;  { START_DATE(M) + START_TIME              }

{様様様様様様? ??゛??? : X$SEMAFORS "?ガ?筮琺" 様様様様様様様}
const
  coXsSEMAFORS = 12;
  diXsSEMAFORSName = 'X$SEMAFORS';
const
  diXsSEMAFORSFile : String[12] = 'Semafors.ast';
type
  pXsSEMAFORSR = ^tXsSEMAFORSR;
  tXsSEMAFORSR = record   { - ?ガ?筮琺 }
    USERCODE       : Comp;            { ??? ???讌???皀??, 竅????※∵ィ? 瓮??筮? }
    DATEBEG        : Date;            { ???? ?諱??→? 瓮??筮??                }
    TIMEBEG        : Time;            { ?爛?? ?諱??→? 瓮??筮??               }
    SESSION        : Comp;            { ??? 瓮瘁┬ ???讌???皀??               }
    TITLE          : String[39];      { ??????〓? 瓮??筮??                    }
    FLAG           : Byte;            { ???? 瓮??筮??                         }
    INFO           : String[39];      { 踸?ョ????                            }
  end;
const
  tiSEMAFORSBYTITLEBYUSERCODE= 0;{ TITLE(M Up) + USERCODE                }
  tiSEMAFORSBYSESSION    = 1;  { SESSION(M)                              }
  tiSEMAFORSBYDATEBEGBYTIMEBEG= 2;{ DATEBEG(M) + TIMEBEG                 }
  tiSEMAFORSBYTITLEBYMODE= 3;  { TITLE(M Up) + FLAG                      }

{様様様様様様? ??゛??? : X$JOURNALCONFIG "??痰牀??? 瓱痰ガ? ?窶????牀?????" 様様様様様様様}
const
  coXsJOURNALCONFIG = 13;
  diXsJOURNALCONFIGName = 'X$JOURNALCONFIG';
const
  diXsJOURNALCONFIGFile : String[12] = 'JourConf.adf';
type
  pXsJOURNALCONFIGR = ^tXsJOURNALCONFIGR;
  tXsJOURNALCONFIGR = record   { - ??痰牀??? 瓱痰ガ? ?窶????牀????? }
    ATL_NREC       : Comp;            { ??＝癶キ?覃 ???ム ????瓱              }
    ATL_LASTDATE   : Date;            { ???? ??甄イ?ォ ??え筥??罔?            }
    ATL_LASTTIME   : Time;            { ?爛?? ??甄イ?ォ ??え筥??罔?           }
    ATL_LASTUSER   : Comp;            { ??? ???讌???皀??                      }
    ATL_ORIGINOFFICE: Word;           { ???ム ?筥??, ? ??皰牀? ???メキ? ????瘡 }
    ATL_OWNER      : Comp;            { ??? ←?ぅ?趾? ????瓱                  }
    OFFICENO       : Word;            { ???ム 皀?竕ィ? ?筥??                  }
    NAME           : String[40];      { ??━キ????┘ 皀?竕ィ? ?筥??           }
    OFFICESTRID    : String[10];      { ?矗????覃 ??? 皀?竕ィ? ?筥??          }
    TYPEJOURNAL    : Byte;            { ?┓ ?窶????牀?????                    }
    TYPELIMIT      : Byte;            { ?┓ ??????腑??? ?? ?窶???             }
    LIMIT          : LongInt;         { ????腑痰〓 か? ??????腑???            }
    OPSTATUS       : Byte;            { 踸Л?? ??皋↓?痰? ???? Status ?窶???? }
  end;
const
  tiJOURNALCONFIGBYOFFICENO= 0;{ OFFICENO(Un M)                          }
  tiJOURNALCONFIGID      = 1;  { ATL_NREC(J Sur Un nM)                   }
  tiJOURNALCONFIGLM      = 2;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiJOURNALCONFIGLU      = 3;  { ATL_LASTUSER(M)                         }

{様様様様様様? ??゛??? : X$REGISTERTABLES "?ィ?痰??罔? ??゛?? か? ?窶????牀?????" 様様様様様様様}
const
  coXsREGISTERTABLES = 14;
  diXsREGISTERTABLESName = 'X$REGISTERTABLES';
const
  diXsREGISTERTABLESFile : String[12] = 'RegTable.adf';
type
  pXsREGISTERTABLESR = ^tXsREGISTERTABLESR;
  tXsREGISTERTABLESR = record   { - ?ィ?痰??罔? ??゛?? か? ?窶????牀????? }
    TABLECODE      : Word;            { ??? ??゛?肓 ├ 甄???瑙                }
    FORCORPO       : Byte;            { ??゛??? か? 竄┼?硅 Corpo             }
    FORPERSONS     : Byte;            { ??゛??? か? 竄┼?硅 Journal           }
    FORREPAIR      : Byte;            { ??゛??? か? 竄┼?硅 Repair            }
  end;
const
  tiREGISTERTABLESBYTABLECODE= 0;{ TABLECODE(Un M)                       }
  tiREGISTERTABLESBYFORCORPO= 1;{ FORCORPO(M)                            }
  tiREGISTERTABLESBYFORPERSONS= 2;{ FORPERSONS(M)                        }
  tiREGISTERTABLESBYFORREPAIR= 3;{ FORREPAIR(M)                          }

{様様様様様様? ??゛??? : X$JOURNAL "?窶??? 爛??痰??罔? ├?キキ┤" 様様様様様様様}
const
  coXsJOURNAL = 15;
  diXsJOURNALName = 'X$JOURNAL';
const
  diXsJOURNALFile : String[11] = 'Journal.adf';
type
  pXsJOURNALR = ^tXsJOURNALR;
  tXsJOURNALR = record   { - ?窶??? 爛??痰??罔? ├?キキ┤ }
    NREC           : Comp;            { ???ム ????瓱                          }
    TABLECODE      : Word;            { ??? ??゛?肓, ? ??皰牀? ?牀├▲?? ├?キキ┘ }
    TABLENREC      : Comp;            { ???ム ????瓱 ├ ????? ??゛?肓         }
    USERCODE       : Comp;            { ??? ???讌???皀??, 瓩カ?∵ィ? ├?キキ┘ }
    LASTDATE       : Date;            { ???? ├?キキ??                        }
    LASTTIME       : Time;            { ?爛?? ├?キキ??                       }
    OFFICENO       : Word;            { ???ム ?筥??, ? ??皰牀? ?牀├▲?? ├?キキ┘ }
    STATUS         : Byte;            { ???矣? ????瓱                         }
    OPERATION      : Byte;            { ???? ??ム?罔?                         }
    TRANSNO        : Comp;            { ???ム 矗?????罔?                      }
  end;
const
  tiJOURNALBYNREC        = 0;  { NREC(Sur Un M A)                        }
  tiJOURNALBYLASTMODIFICATION= 1;{ STATUS(M) + TABLECODE + TABLENREC + NREC }
  tiJOURNALBYRECORDID    = 2;  { TABLECODE(Un M) + TABLENREC + NREC      }
  tiJOURNALBYSTATUSBYNREC= 3;  { STATUS(Un M) + NREC                     }
  tiJOURNALBYUSER        = 4;  { USERCODE(M) + NREC                      }
  tiJOURNALBYSTATUSBYLASTDATEBYLASTTIME= 5;{ STATUS(M) + LASTDATE + LASTTIME }
  tiJOURNALBYTRANSNOBYNREC= 6; { TRANSNO(Un M) + NREC                    }
  tiJOURNALBYTABLECODE   = 7;  { TABLECODE(M) + NREC                     }

{様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様}
CONST
  diDictTables : set of byte = [1,2,3,4,8];{ ?????爿襯 ??゛?肓}
  diLastSystemTable    = coXsJournal;      { ???ム ??甄イ?ォ 瓱痰ガ??? ??゛?肓 }
  diFirstDataTable     = 200;              { ???ム ?ム〓? ??゛?肓 ? ????覓?      }
{様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様}
