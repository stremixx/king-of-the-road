
undefined4 * FUN_0047e370(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = (param_2 - param_1) / 0x28;
  if (0 < iVar2) {
    param_2 = param_2 - (int)param_3;
    do {
      param_3 = param_3 + -10;
      iVar2 = iVar2 + -1;
      puVar3 = (undefined4 *)(param_2 + (int)param_3);
      puVar4 = param_3;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    } while (iVar2 != 0);
    return param_3;
  }
  return param_3;
}

