
void __thiscall FUN_0048f270(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  undefined4 *puVar5;
  uint local_280;
  double local_27c;
  double local_274;
  double local_26c;
  double local_264;
  double local_25c;
  double local_254;
  undefined4 local_24c [144];
  int local_c;
  
  iVar3 = *(int *)(param_1 + 0x240);
  pdVar1 = &local_27c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar1 = *param_3;
    param_3 = param_3 + 1;
    pdVar1 = (double *)((int)pdVar1 + 4);
  }
  iVar3 = iVar3 * 0x18;
  iVar2 = iVar3 >> 0x1f;
  local_c = 0;
  local_280 = 0;
  if (iVar3 / 0x18 + iVar2 != iVar2) {
    pdVar1 = (double *)(param_1 + 0x10);
    do {
      local_264 = pdVar1[-2] * local_27c;
      local_25c = pdVar1[-1] * local_274;
      local_254 = local_26c * *pdVar1;
      if (local_24c + local_c * 6 != (undefined4 *)0x0) {
        pdVar4 = &local_264;
        puVar5 = local_24c + local_c * 6;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *(undefined4 *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          puVar5 = puVar5 + 1;
        }
      }
      pdVar1 = pdVar1 + 3;
      local_280 = local_280 + 1;
      local_c = local_c + 1;
    } while (local_280 < (uint)((*(int *)(param_1 + 0x240) * 0x18) / 0x18));
  }
  puVar5 = local_24c;
  for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

