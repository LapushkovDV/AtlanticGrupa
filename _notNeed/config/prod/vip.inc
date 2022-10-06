[HardwareKey]
  SharedPath=\\srv-dc2\HWKey
  CheckPeriod=0

[Database]
  DataBaseName=gal_abm
  DataBaseDriver=MS70DRV.DLL
  CheckRepository=Off

[SQLDriver]
  SQLServer=ncacn_ip_tcp:RUMOW-VMGAL01.atlantic.grupa[1997]

  ForceRights=ON

[Vip]
  DefaultEnv=GalNet

[licparam]
  LicFileName='%ConfigDir%%ConfigSubDir%\vip.lic'

[login]
  UserName=Compile
  Password=Comp1l3
