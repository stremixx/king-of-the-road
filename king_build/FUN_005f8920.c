
void __thiscall FUN_005f8920(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005aa810(param_2);
  *param_1 = uVar1;
  uVar1 = FUN_005aa810(param_2);
  param_1[1] = uVar1;
  iVar2 = FUN_005aa810(param_2);
  param_1[2] = iVar2;
  if (iVar2 != 0) {
    uVar1 = FUN_00631d33(iVar2 << 2);
    param_1[3] = uVar1;
    FUN_0061d8bf(uVar1,param_1[2],4,param_2);
  }
  return;
}

