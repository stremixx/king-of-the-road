
undefined4 * FUN_00468c90(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 2;
  if (iVar2 < 1) {
    return param_3;
  }
  do {
    puVar1 = (undefined4 *)(param_2 + -4);
    param_2 = param_2 + -4;
    param_3 = param_3 + -1;
    iVar2 = iVar2 + -1;
    *param_3 = *puVar1;
  } while (iVar2 != 0);
  return param_3;
}

