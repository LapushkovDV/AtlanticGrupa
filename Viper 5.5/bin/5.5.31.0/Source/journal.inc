const
  jtJournalOff   = 0;
  jtBriefJournal = 1;

  jcFlagOff      = 0;
  jcLimited      = 1;
  jcNoAutoClean  = 2;

  jtiNone        = 0;
  jtiRepair      = 1;
  jtiCorpo       = 2;
  jtiPersons     = 4;
  jtiJournal     = jtiCorpo OR jtiPersons OR jtiRepair;

  jstNoInfo      = 0;
