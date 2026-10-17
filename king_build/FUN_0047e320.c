
undefined4 * FUN_0047e320(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = (param_2 - param_1) / 0x28;
  if (0 < iVar2) {
    puVar3 = param_3;
    do {
      puVar4 = puVar3 + 10;
      iVar2 = iVar2 + -1;
      puVar5 = (undefined4 *)((param_1 - (int)param_3) + (int)puVar3);
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar3 = puVar4;
    } while (iVar2 != 0);
    return puVar4;
  }
  return param_3;
}

