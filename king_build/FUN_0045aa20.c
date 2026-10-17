
undefined4 * FUN_0045aa20(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = (param_2 - param_1) / 0xc;
  if (0 < iVar4) {
    puVar2 = param_3;
    do {
      puVar1 = (undefined4 *)((param_1 - (int)param_3) + (int)puVar2);
      puVar3 = puVar2 + 3;
      iVar4 = iVar4 + -1;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2 = puVar3;
    } while (iVar4 != 0);
    return puVar3;
  }
  return param_3;
}

