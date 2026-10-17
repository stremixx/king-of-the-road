
void __thiscall FUN_0048eda0(undefined4 *param_1,undefined4 *param_2,double *param_3)

{
  double dVar1;
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
  
  iVar5 = param_1[0x90];
  puVar6 = param_1;
  pdVar3 = &local_50;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  uVar2 = (iVar5 * 0x18) / 0x18;
  if (1 < uVar2) {
    dVar1 = *param_3;
    iVar5 = uVar2 - 1;
    pdVar3 = (double *)(param_1 + 10);
    do {
      iVar5 = iVar5 + -1;
      local_30 = local_48 * dVar1;
      local_28 = local_40 * dVar1;
      local_50 = local_50 * dVar1 + pdVar3[-2];
      local_18 = pdVar3[-1] + local_48 * dVar1;
      local_10 = *pdVar3 + local_40 * dVar1;
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

