
void __thiscall FUN_00454b40(int param_1,undefined4 *param_2,double param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  double local_50;
  double local_48;
  double local_40;
  double local_30;
  double local_28;
  double local_18;
  double local_10;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x38) + 0x268 + param_4 * 0x638);
  iVar5 = puVar1[0x90];
  puVar6 = puVar1;
  pdVar3 = &local_50;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  uVar2 = (iVar5 * 0x18) / 0x18;
  if (1 < uVar2) {
    iVar5 = uVar2 - 1;
    pdVar3 = (double *)(puVar1 + 10);
    do {
      iVar5 = iVar5 + -1;
      local_30 = local_48 * param_3;
      local_28 = local_40 * param_3;
      local_50 = local_50 * param_3 + pdVar3[-2];
      local_18 = pdVar3[-1] + local_48 * param_3;
      local_10 = *pdVar3 + local_40 * param_3;
      local_48 = local_18;
      local_40 = local_10;
      pdVar3 = pdVar3 + 3;
    } while (iVar5 != 0);
  }
  pdVar3 = &local_50;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_2 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    param_2 = param_2 + 1;
  }
  return;
}

