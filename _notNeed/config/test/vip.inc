[HardwareKey]
  SharedPath=\\srv-ru01\GalHWKey
  CheckPeriod=0

[Database]
  DataBaseName=gal_droga9_test
  DataBaseDriver=MS70DRV.DLL
  CheckRepository=Off

[SQLDriver]
  SQLServer=ncacn_ip_tcp:localhost[1997]
  FullLoginName=On
  ForceRights=ON

[login]
  username=supervisor
  password=

[Vip]
  DefaultEnv=GalNet

[licparam]
  LicFileName='%ConfigDir%%ConfigSubDir%\vip.lic'

[login]
  UserName=Compile
  Password=Comp1l3
