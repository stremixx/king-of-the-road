
undefined4 * FUN_00464020(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0061d520(*param_1,*param_2);
  if (iVar1 < 0) {
    iVar1 = FUN_0061d520(*param_2,*param_3);
    if (-1 < iVar1) {
      iVar1 = FUN_0061d520(*param_1,*param_3);
      if (-1 < iVar1) {
        return param_1;
      }
      return param_3;
    }
  }
  else {
    iVar1 = FUN_0061d520(*param_1,*param_3);
    if (iVar1 < 0) {
      return param_1;
    }
    iVar1 = FUN_0061d520(*param_2,*param_3);
    if (iVar1 < 0) {
      return param_3;
    }
  }
  return param_2;
}

