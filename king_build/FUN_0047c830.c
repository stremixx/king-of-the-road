
undefined4 * FUN_0047c830(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 - (int)param_1) / 0xc;
  if (iVar2 < 1) {
    return param_3;
  }
  do {
    puVar1 = param_3 + 3;
    iVar2 = iVar2 + -1;
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = puVar1;
    param_1 = param_1 + 3;
  } while (iVar2 != 0);
  return puVar1;
}

