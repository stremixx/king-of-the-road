
undefined4 FUN_004ccda0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004ccbc0(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_004ccc10(param_1,param_2);
    return uVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 0;
    }
    uVar2 = FUN_004ccd70(param_1,param_2);
    return uVar2;
  }
  uVar2 = FUN_004cccc0(param_1,param_2);
  return uVar2;
}

