
undefined4 * FUN_0047c880(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = (param_2 - (int)param_1) / 0x28;
  if (iVar3 < 1) {
    return param_3;
  }
  do {
    puVar1 = param_3 + 10;
    iVar3 = iVar3 + -1;
    puVar4 = param_1;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    param_3 = puVar1;
    param_1 = param_1 + 10;
  } while (iVar3 != 0);
  return puVar1;
}

