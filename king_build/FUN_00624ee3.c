
float10 FUN_00624ee3(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_0062522e(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_00624f7b();
  }
  iVar1 = FUN_0062551a(param_1);
  if ((DAT_0077d6c0 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_00625445(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_006254cd(iVar1);
  FUN_0062573a();
  return (float10)param_4;
}

