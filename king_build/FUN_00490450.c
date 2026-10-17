
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00490450(int param_1,undefined4 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  undefined4 *puVar8;
  uint local_26c;
  double local_264;
  double local_25c;
  double local_254;
  undefined4 local_24c [144];
  int local_c;
  
  dVar1 = *param_3;
  local_c = 0;
  local_26c = 0;
  iVar4 = *(int *)(param_1 + 0x240) * 0x18;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  iVar5 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar5 != iVar5) {
    pdVar6 = (double *)(param_1 + 0x10);
    do {
      local_264 = pdVar6[-2] * (_DAT_0064a660 / dVar1);
      local_25c = (_DAT_0064a660 / dVar2) * pdVar6[-1];
      local_254 = (_DAT_0064a660 / dVar3) * *pdVar6;
      if (local_24c + local_c * 6 != (undefined4 *)0x0) {
        pdVar7 = &local_264;
        puVar8 = local_24c + local_c * 6;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *(undefined4 *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + 4);
          puVar8 = puVar8 + 1;
        }
      }
      local_26c = local_26c + 1;
      pdVar6 = pdVar6 + 3;
      local_c = local_c + 1;
    } while (local_26c < (uint)((*(int *)(param_1 + 0x240) * 0x18) / 0x18));
  }
  puVar8 = local_24c;
  for (iVar5 = 0x91; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_2 = *puVar8;
    puVar8 = puVar8 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

