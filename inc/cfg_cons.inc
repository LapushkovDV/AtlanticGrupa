const 
      cfsLoadType_DeleteAll    = 0; 
      cfsLoadType_DeleteLoaded = 1;
      cfsLoadType_NoDelete     = 2;

      cfsStoreType_Full        = 0; 
      cfsStoreType_Diff        = 1; 
      cfsStoreType_DiffUser    = 2; 

      cfsSelectType_UserRes    = 0; 
      cfsSelectType_AllConfRes = 1; 
      cfsSelectType_AllRes     = 2; 

      cfsStoreOption_Layout    = 1;

      cfsTypesFilter_Windows   = 1;
      cfsTypesFilter_Menu      = 2;
      cfsTypesFilter_HelpLinks = 4;
      cfsTypesFilter_ReportList= 8;
      cfsTypesFilter_All       = cfsTypesFilter_Windows + cfsTypesFilter_Menu +
                                 cfsTypesFilter_HelpLinks;
