
undefined4 * __thiscall FUN_0044aa20(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = param_2;
  iVar1 = (*(int *)(param_1 + 4) - param_3) / 0xc;
  if (0 < iVar1) {
    iVar3 = param_3 - (int)param_2;
    puVar5 = param_2;
    param_2 = (undefined4 *)iVar1;
    do {
      puVar4 = (undefined4 *)(iVar3 + (int)puVar5);
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      param_2 = (undefined4 *)((int)param_2 + -1);
      puVar5 = puVar5 + 3;
    } while (param_2 != (undefined4 *)0x0);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + ((param_3 - (int)puVar2) / 0xc) * -0xc;
  return puVar2;
}

