
float10 FUN_00624e8f(undefined4 param_1,double param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_0077d6c0 == 0) {
    fVar2 = (float10)FUN_00625445(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_006204a3();
  *puVar1 = 0x21;
  FUN_0062573a();
  return (float10)param_2;
}

