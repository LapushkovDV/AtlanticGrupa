{
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║    Система: Описание стандартного словаря (автоматическая генерация)  ║
 ║    Версия : 51                                                        ║
 ║    Дата   : 03.11.04                                                  ║
 ║    Назначение: Структурные и системные таблицы                        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
}
{═════════════════════════════<DICT>═══════════════════════════════════════}
CONST
  DictVer        = 55;   {Версия словаря}
  coXSDictionary = 0;
{═════════════ Таблица : X$FILES "Таблица файлов" ══════════════}
const
  coXsFILES = 1;
  diXsFILESName = 'X$FILES';
const
  diXsFILESFile : String[8] = 'File.adf';
type
  pXsFILESR = ^tXsFILESR;
  tXsFILESR = record   { - Таблица файлов }
    XFsCODE        : Word;            { Код таблицы                           }
    XFsNAME        : String[20];      { Имя таблицы                           }
    XFsOWNERNAME   : String[8];       { Имя владельца (пароль)                }
    XFsTITLE       : String[40];      { Заголовок таблицы                     }
    XFsLOC         : String[65];      { Имя файла (дисковое)                  }
    XFsLOC2        : String[65];      { Имя файла-продолжения                 }
    XFsFLAGS       : Word;            { Флаги                                 }
    XFsFORMAT      : Byte;            { Формат файла                          }
    XFsATTR        : Word;            { Атрибуты файла                        }
    XFsPAGESIZE    : Word;            { Размер страницы                       }
    XFsRECORDFIXED : Word;            { Размер фиксированной части записи     }
    XFsRECORDSIZE  : Word;            { Полный размер записи                  }
    XFsCHECKSUM    : LongInt;         { Контрольная сумма заголовка           }
    XFsPRIMARYKEYNO: Byte;            { Номер первичного ключа                }
    XFsCOMPONENT   : String[20];      { Имя компонента                        }
    XFsFLAGS2      : LongInt;         { Дополнительные флаги                  }
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

{═════════════ Таблица : X$FIELDS "Таблица полей" ══════════════}
const
  coXsFIELDS = 2;
  diXsFIELDSName = 'X$FIELDS';
const
  diXsFIELDSFile : String[9] = 'Field.adf';
type
  pXsFIELDSR = ^tXsFIELDSR;
  tXsFIELDSR = record   { - Таблица полей }
    XEsCODE        : Word;            { Код поля                              }
    XEsFILECODE    : Word;            { Код таблицы                           }
    XEsNAME        : String[20];      { Идентификатор поля                    }
    XEsTITLE       : String[40];      { Заголовок поля                        }
    XEsDATATYPE    : Byte;            { Тип поля                              }
    XEsOFFSET      : Word;            { Смещение в записи                     }
    XEsSIZE        : Word;            { Размер поля                           }
    XEsPREC        : Byte;            { Длина мантиссы                        }
    XEsDEC         : Byte;            { Кол. десятичных знаков после точки    }
    XEsATTR        : Word;            { Атрибуты                              }
  end;
const
  tiFIELDBYFILEBYCODE    = 0;  { XEsFILECODE(Un M) + XEsCODE             }
  tiFIELDBYFILEBYNAME    = 1;  { XEsFILECODE(Un M) + XEsNAME(Up)         }
  tiFIELDBYFILEBYTITLE   = 2;  { XEsFILECODE(M) + XEsTITLE(Up)           }
  tiFIELDBYNAME          = 3;  { XEsNAME(M Up)                           }
  tiFIELDBYTITLE         = 4;  { XEsTITLE(M Up)                          }

{═════════════ Таблица : X$INDEXES "Таблица индексов" ══════════════}
const
  coXsINDEXES = 3;
  diXsINDEXESName = 'X$INDEXES';
const
  diXsINDEXESFile : String[9] = 'Index.adf';
type
  pXsINDEXESR = ^tXsINDEXESR;
  tXsINDEXESR = record   { - Таблица индексов }
    XIsFILECODE    : Word;            { Код таблицы                           }
    XIsFIELDCODE   : Word;            { Код поля                              }
    XIsNAME        : String[20];      { Имя индекса                           }
    XIsNUMBER      : Word;            { Номер индекса                         }
    XIsPART        : Word;            { Номер сегмента                        }
    XIsDATATYPE    : Byte;            { Тип данных сегмента (поля)            }
    XIsOFFSET      : Word;            { Смещение поля в записи                }
    XIsSEGLENGTH   : Word;            { Размер сегмента                       }
    XIsFLAGS       : Word;            { Флаги                                 }
    XIsAUTOINC     : Byte;            { Автоматический (autoinc)              }
    XIsFLAGS2      : LongInt;         { Дополнительные флаги                  }
  end;
const
  tiINDEXBYFILEBYNUMBERBYPART= 0;{ XIsFILECODE(Un M) + XIsNUMBER + XIsPART }
  tiINDEXBYFILEBYNAMEBYPART= 1;{ XIsFILECODE(M) + XIsNAME(Up) + XIsPART  }

{═════════════ Таблица : X$ATTR "Таблица атрибутов" ══════════════}
const
  coXsATTR = 4;
  diXsATTRName = 'X$ATTR';
const
  diXsATTRFile : String[8] = 'Attr.adf';
type
  pXsATTRR = ^tXsATTRR;
  tXsATTRR = record   { - Таблица атрибутов }
    XAsFILECODE    : Word;            { Код таблицы                           }
    XAsFIELDCODE   : Word;            { Код поля                              }
    XAsCLASS       : Word;            { Тип атрибута                          }
  end;
const
  tiATTRBYFILEBYFIELDBYCLASS= 0;{ XAsFILECODE(Un M) + XAsFIELDCODE + XAsCLASS }

{═════════════ Таблица : X$RESOURCES "Пользовательские ресурсы" ══════════════}
const
  coXsRESOURCES = 5;
  diXsRESOURCESName = 'X$RESOURCES';
const
  diXsRESOURCESFile : String[12] = 'Resource.ast';
type
  pXsRESOURCESR = ^tXsRESOURCESR;
  tXsRESOURCESR = record   { - Пользовательские ресурсы }
    ATL_NREC       : Comp;            { Собственный номер записи              }
    ATL_LASTDATE   : Date;            { Дата последней модификации            }
    ATL_LASTTIME   : Time;            { Время последней модификации           }
    ATL_LASTUSER   : Comp;            { Код пользователя                      }
    ATL_ORIGINOFFICE: Word;           { Номер офиса, в котором занесена запись }
    ATL_OWNER      : Comp;            { Код владельца записи                  }
    XRsTYPE        : Word;            { Тип ресурса                           }
    XRsNAME        : String[59];      { Наименование ресурса                  }
    XRsCODE        : Comp;            { Код владельца ресурса                 }
  end;
const
  tiRESOURCESBYTYPE      = 0;  { XRsTYPE(M)                              }
  tiRESOURCESBYNAME      = 1;  { XRsTYPE(M) + XRsNAME(Up)                }
  tiRESOURCESBYCODE      = 2;  { XRsTYPE(M) + XRsCODE                    }
  tiRESOURCESID          = 3;  { ATL_NREC(J Sur Un nM)                   }
  tiRESOURCESLM          = 4;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiRESOURCESLU          = 5;  { ATL_LASTUSER(M)                         }

{═════════════ Таблица : X$USERS "Пользователи" ══════════════}
const
  coXsUSERS = 6;
  diXsUSERSName = 'X$USERS';
const
  diXsUSERSFile : String[8] = 'User.adf';
type
  pXsUSERSR = ^tXsUSERSR;
  tXsUSERSR = record   { - Пользователи }
    ATL_NREC       : Comp;            { Собственный номер записи              }
    ATL_LASTDATE   : Date;            { Дата последней модификации            }
    ATL_LASTTIME   : Time;            { Время последней модификации           }
    ATL_LASTUSER   : Comp;            { Код пользователя                      }
    ATL_ORIGINOFFICE: Word;           { Номер офиса, в котором занесена запись }
    ATL_OWNER      : Comp;            { Код владельца записи                  }
    XUsUSEROFFICE  : Word;            { Офис пользователя                     }
    XUsFULLNAME    : String[60];      { Имя пользователя                      }
    XUsLOGINNAME   : String[47];      { Идентификатор пользователя            }
    XUsUSERMACRO   : String[8];       { Значение переменной %USER%            }
    XUsPASSWORD    : String[64];      { Пароль пользователя                   }
    XUsPASSDATE    : Date;            { Дата установки пароля                 }
    XUsPASSPERIOD  : Word;            { Время действия пароля                 }
    XUsPASSWARN    : Word;            { За сколько дней предупреждать         }
    XUsBEGTIME     : Time;            { Время разрешения входа в систему      }
    XUsENDTIME     : Time;            { Время запрещения входа в систему      }
    XUsTYPE        : Byte;            { Тип пользователя                      }
    XUsFLAG        : Word;            { Флаги пользователя                    }
    XUsSECURITYLEVEL: Byte;           { Уровень безопасности пользователя     }
    XUsFLAGEXT     : LongInt          { Дополнительные флаги пользователя     }
  end;
const
  tiUSERBYLOGINNAME      = 0;  { XUsUSEROFFICE(Un M) + XUsLOGINNAME(Up)  }
  tiUSERBYTYPE           = 1;  { XUsTYPE(M) + ATL_NREC                   }
  tiUSERBYLOGINNOOFF     = 2;  { XUsLOGINNAME(M Up)                      }
  tiUSERBYFULLNAME       = 3;  { XUsFULLNAME(M Up)                       }
  tiUSERSID              = 4;  { ATL_NREC(J Sur Un nM)                   }
  tiUSERSLM              = 5;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiUSERSLU              = 6;  { ATL_LASTUSER(M)                         }

{═════════════ Таблица : X$RIGHTS "Права пользователей" ══════════════}
const
  coXsRIGHTS = 7;
  diXsRIGHTSName = 'X$RIGHTS';
const
  diXsRIGHTSFile : String[9] = 'Right.adf';
type
  pXsRIGHTSR = ^tXsRIGHTSR;
  tXsRIGHTSR = record   { - Права пользователей }
    ATL_NREC       : Comp;            { Собственный номер записи              }
    ATL_LASTDATE   : Date;            { Дата последней модификации            }
    ATL_LASTTIME   : Time;            { Время последней модификации           }
    ATL_LASTUSER   : Comp;            { Код пользователя                      }
    ATL_ORIGINOFFICE: Word;           { Номер офиса, в котором занесена запись }
    ATL_OWNER      : Comp;            { Код владельца записи                  }
    XRsUSERCODE    : Comp;            { Код пользователя                      }
    XRsFILECODE    : Word;            { Код таблицы                           }
  end;
const
  tiRIGHTBYUSERCODEBYFILECODE= 0;{ XRsUSERCODE(Un M) + XRsFILECODE       }
  tiRIGHTSID             = 1;  { ATL_NREC(J Sur Un nM)                   }
  tiRIGHTSLM             = 2;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiRIGHTSLU             = 3;  { ATL_LASTUSER(M)                         }

{═════════════ Таблица : X$RELATE "Ссылочная целостность" ══════════════}
const
  coXsRELATE = 8;
  diXsRELATEName = 'X$RELATE';
const
  diXsRELATEFile : String[10] = 'Relate.adf';
type
  pXsRELATER = ^tXsRELATER;
  tXsRELATER = record   { - Ссылочная целостность }
    XPsPFILECODE   : Word;            { Код корневой таблицы                  }
    XPsPINDEXCODE  : Word;            { Номер индекса в корневой таблице      }
    XPsFFILECODE   : Word;            { Код подцепляемой таблицы              }
    XPsFINDEXCODE  : Word;            { Номер индекса в подцепляемой таблице  }
    XPsINSERTRULE  : Byte;            { При Insert                            }
    XPsUPDATERULE  : Byte;            { При UpDate                            }
    XPsDELETERULE  : Byte;            { При Delete                            }
    XPsFLAGS       : Byte;            { Флаги                                 }
    XPsSWITCHFIELDOFS: Word;          { Смещение поля-переключателя в записи  }
    XPsSWITCHVALUE : Word;            { Значение поля-переключателя           }
    XPsOBJINDEXCODE: Word;            { Неоптимизированный номер индекса в корневой таблице }
    XPsOBJREF      : String[80];      { Объектная ссылка                      }
  end;
const
  tiRELATEBYPFILECODE    = 0;  { XPsPFILECODE(M) + XPsPINDEXCODE         }
  tiRELATEBYFFILECODE    = 1;  { XPsFFILECODE(M) + XPsFINDEXCODE         }
  tiRELATEBYPFILECODEBYFFILECODE= 2;{ XPsPFILECODE(M) + XPsFFILECODE     }
  tiRELATEBYSWITCHBYVALUE= 3;  { XPsFFILECODE(Un M) + XPsFINDEXCODE + XPsSWITCHFIELDOFS +  }
                               { XPsSWITCHVALUE                          }
  tiRELATEBYOBJREF       = 4;  { XPsOBJREF(M Up)                         }

{═════════════ Таблица : X$OWNERS "Таблица кодирования файлов" ══════════════}
const
  coXsOWNERS = 9;
  diXsOWNERSName = 'X$OWNERS';
const
  diXsOWNERSFile : String[9] = 'Owner.adf';
type
  pXsOWNERSR = ^tXsOWNERSR;
  tXsOWNERSR = record   { - Таблица кодирования файлов }
    ATL_NREC       : Comp;            { Собственный номер записи              }
    ATL_LASTDATE   : Date;            { Дата последней модификации            }
    ATL_LASTTIME   : Time;            { Время последней модификации           }
    ATL_LASTUSER   : Comp;            { Код пользователя                      }
    ATL_ORIGINOFFICE: Word;           { Номер офиса, в котором занесена запись }
    ATL_OWNER      : Comp;            { Код владельца записи                  }
    XOsFILECODE    : Word;            { Код файла                             }
    XOsOWNER       : String[64];      { Имя владельца                         }
    XOsFLAGS       : Word;            { Флаги                                 }
  end;
const
  tiOWNERBYFILECODE      = 0;  { XOsFILECODE(M)                          }
  tiOWNERBYOWNER         = 1;  { XOsOWNER(M Up)                          }
  tiOWNERSID             = 2;  { ATL_NREC(J Sur Un nM)                   }
  tiOWNERSLM             = 3;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiOWNERSLU             = 4;  { ATL_LASTUSER(M)                         }

{═════════════ Таблица : X$SURRKEYS "Последние значения суррогатных ключей" ══════════════}
const
  coXsSURRKEYS = 10;
  diXsSURRKEYSName = 'X$SURRKEYS';
const
  diXsSURRKEYSFile : String[12] = 'SurrKeys.adf';
type
  pXsSURRKEYSR = ^tXsSURRKEYSR;
  tXsSURRKEYSR = record   { - Последние значения суррогатных ключей }
    TABLECODE      : Word;            { Код таблицы из словаря                }
    KEYNO          : Word;            { Номер индекса суррогатного ключа      }
    LASTKEYVALUE   : Comp;            { Последнее значение ключа              }
    RESERVED       : String[254];     { Reserved                              }
  end;
const
  tiSURRKEYSBYTABLECODEBYKEYNO= 0;{ TABLECODE(Un M) + KEYNO              }

{═════════════ Таблица : X$ACTIVEUSERS "Активные пользователи" ══════════════}
const
  coXsACTIVEUSERS = 11;
  diXsACTIVEUSERSName = 'X$ACTIVEUSERS';
const
  diXsACTIVEUSERSFile : String[12] = 'ActUsers.ast';
type
  pXsACTIVEUSERSR = ^tXsACTIVEUSERSR;
  tXsACTIVEUSERSR = record   { - Активные пользователи }
    USERCODE       : Comp;            { Код пользователя                      }
    NOVELLNAME     : String[48];      { Сетевое имя пользователя              }
    NOVELLADDRESS  : String[15];      { Теперь адрес переехал в Reserver      }
    COUNTORNAME    : String[7];       { Имя активного контура                 }
    COMPONENTNAME  : String[39];      { Имя активного компонента              }
    SESSIONID      : Comp;            { Идентификатор сессии                  }
    START_DATE     : Date;            { Дата инициализации словаря            }
    START_TIME     : Time;            { Время инициализации словаря           }
    RESERVED       : String[31];      { А вот здесь лежит сетевой адрес       }
    DBSESSIONID    : String[24];      { Платформеннозависимый идентификатор сессии }
  end;
const
  tiACTIVEUSERSBYUSERCODE= 0;  { USERCODE(M)                             }
  tiUSERBYNOVELLNAME     = 1;  { NOVELLNAME(M Up)                        }
  tiUSERBYSESSIONID      = 2;  { SESSIONID(Sur Un M)                     }
  tiUSERBYSTARTDATETIME  = 3;  { START_DATE(M) + START_TIME              }

{═════════════ Таблица : X$SEMAFORS "Семафоры" ══════════════}
const
  coXsSEMAFORS = 12;
  diXsSEMAFORSName = 'X$SEMAFORS';
const
  diXsSEMAFORSFile : String[12] = 'Semafors.ast';
type
  pXsSEMAFORSR = ^tXsSEMAFORSR;
  tXsSEMAFORSR = record   { - Семафоры }
    USERCODE       : Comp;            { Код пользователя, установившего семафор }
    DATEBEG        : Date;            { Дата выставки семафора                }
    TIMEBEG        : Time;            { Время выставки семафора               }
    SESSION        : Comp;            { Код сессии пользователя               }
    TITLE          : String[39];      { Заголовок семафора                    }
    FLAG           : Byte;            { Флаг семафора                         }
    INFO           : String[39];      { Примечания                            }
  end;
const
  tiSEMAFORSBYTITLEBYUSERCODE= 0;{ TITLE(M Up) + USERCODE                }
  tiSEMAFORSBYSESSION    = 1;  { SESSION(M)                              }
  tiSEMAFORSBYDATEBEGBYTIMEBEG= 2;{ DATEBEG(M) + TIMEBEG                 }
  tiSEMAFORSBYTITLEBYMODE= 3;  { TITLE(M Up) + FLAG                      }

{═════════════ Таблица : X$JOURNALCONFIG "Настройки системы журналирования" ══════════════}
const
  coXsJOURNALCONFIG = 13;
  diXsJOURNALCONFIGName = 'X$JOURNALCONFIG';
const
  diXsJOURNALCONFIGFile : String[12] = 'JourConf.adf';
type
  pXsJOURNALCONFIGR = ^tXsJOURNALCONFIGR;
  tXsJOURNALCONFIGR = record   { - Настройки системы журналирования }
    ATL_NREC       : Comp;            { Собственный номер записи              }
    ATL_LASTDATE   : Date;            { Дата последней модификации            }
    ATL_LASTTIME   : Time;            { Время последней модификации           }
    ATL_LASTUSER   : Comp;            { Код пользователя                      }
    ATL_ORIGINOFFICE: Word;           { Номер офиса, в котором занесена запись }
    ATL_OWNER      : Comp;            { Код владельца записи                  }
    OFFICENO       : Word;            { Номер текущего офиса                  }
    NAME           : String[40];      { Наименование текущего офиса           }
    OFFICESTRID    : String[10];      { Строковый код текущего офиса          }
    TYPEJOURNAL    : Byte;            { Тип журналирования                    }
    TYPELIMIT      : Byte;            { Тип ограничения на журнал             }
    LIMIT          : LongInt;         { Количество для ограничения            }
    OPSTATUS       : Byte;            { Признак активности поля Status журнала }
  end;
const
  tiJOURNALCONFIGBYOFFICENO= 0;{ OFFICENO(Un M)                          }
  tiJOURNALCONFIGID      = 1;  { ATL_NREC(J Sur Un nM)                   }
  tiJOURNALCONFIGLM      = 2;  { ATL_LASTDATE(M) + ATL_LASTTIME          }
  tiJOURNALCONFIGLU      = 3;  { ATL_LASTUSER(M)                         }

{═════════════ Таблица : X$REGISTERTABLES "Регистрация таблиц для журналирования" ══════════════}
const
  coXsREGISTERTABLES = 14;
  diXsREGISTERTABLESName = 'X$REGISTERTABLES';
const
  diXsREGISTERTABLESFile : String[12] = 'RegTable.adf';
type
  pXsREGISTERTABLESR = ^tXsREGISTERTABLESR;
  tXsREGISTERTABLESR = record   { - Регистрация таблиц для журналирования }
    TABLECODE      : Word;            { Код таблицы из словаря                }
    FORCORPO       : Byte;            { Таблица для утилиты Corpo             }
    FORPERSONS     : Byte;            { Таблица для утилиты Journal           }
    FORREPAIR      : Byte;            { Таблица для утилиты Repair            }
  end;
const
  tiREGISTERTABLESBYTABLECODE= 0;{ TABLECODE(Un M)                       }
  tiREGISTERTABLESBYFORCORPO= 1;{ FORCORPO(M)                            }
  tiREGISTERTABLESBYFORPERSONS= 2;{ FORPERSONS(M)                        }
  tiREGISTERTABLESBYFORREPAIR= 3;{ FORREPAIR(M)                          }

{═════════════ Таблица : X$JOURNAL "Журнал регистраций изменений" ══════════════}
const
  coXsJOURNAL = 15;
  diXsJOURNALName = 'X$JOURNAL';
const
  diXsJOURNALFile : String[11] = 'Journal.adf';
type
  pXsJOURNALR = ^tXsJOURNALR;
  tXsJOURNALR = record   { - Журнал регистраций изменений }
    NREC           : Comp;            { Номер записи                          }
    TABLECODE      : Word;            { Код таблицы, в которой произвели изменение }
    TABLENREC      : Comp;            { Номер записи из такой таблицы         }
    USERCODE       : Comp;            { Код пользователя, сделавшего изменение }
    LASTDATE       : Date;            { Дата изменения                        }
    LASTTIME       : Time;            { Время изменения                       }
    OFFICENO       : Word;            { Номер офиса, в котором произвели изменение }
    STATUS         : Byte;            { Статус записи                         }
    OPERATION      : Byte;            { Флаг операции                         }
    TRANSNO        : Comp;            { Номер транзакции                      }
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

{════════════════════════════════════════════════════════════════════════}
CONST
  diDictTables : set of byte = [1,2,3,4,8];{ Словарные таблицы}
  diLastSystemTable    = coXsJournal;      { Номер последней системной таблицы }
  diFirstDataTable     = 200;              { Номер первой таблицы с данными      }
{════════════════════════════════════════════════════════════════════════}
