
undefined4 * FUN_00465cf0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)param_2 - param_1 >> 5;
  if (iVar1 < 1) {
    return param_3;
  }
  do {
    param_2 = param_2 + -8;
    param_3 = param_3 + -8;
    iVar1 = iVar1 + -1;
    puVar3 = param_2;
    puVar4 = param_3;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  } while (iVar1 != 0);
  return param_3;
}

