
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a7fc0(float *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005aa880(&param_2);
  iVar2 = FUN_0061f34d(uVar1);
  *param_1 = (float)iVar2 * (float)_DAT_0064db98;
  uVar1 = FUN_005aa880(&param_2);
  iVar2 = FUN_0061f34d(uVar1);
  param_1[1] = (float)iVar2 * (float)_DAT_0064db98;
  uVar1 = FUN_005aa880(&param_2);
  iVar2 = FUN_0061f34d(uVar1);
  param_1[2] = (float)iVar2 * (float)_DAT_0064db98;
  return;
}

