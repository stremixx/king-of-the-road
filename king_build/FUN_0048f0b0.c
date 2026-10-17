
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048f0b0(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_284;
  uint local_280;
  double local_27c;
  double local_274;
  double local_26c;
  double local_25c;
  double local_254;
  undefined4 local_24c [144];
  int local_c;
  
  local_c = 0;
  iVar8 = *(int *)(param_1 + 0x240) * 0x18;
  if ((param_1 != iVar8 + param_1) &&
     (iVar3 = *(int *)(param_3 + 0x240) * 0x18, param_3 != iVar3 + param_3)) {
    local_280 = iVar3 / 0x18;
    uVar4 = iVar8 / 0x18;
    uVar1 = 0;
    if ((uVar4 - 1) + local_280 != 0) {
      do {
        iVar8 = 0;
        local_27c = _DAT_0064a668;
        local_274 = _DAT_0064a668;
        local_26c = _DAT_0064a668;
        if (uVar4 <= uVar1) {
          iVar8 = (uVar1 - uVar4) + 1;
        }
        local_284 = uVar1 + 1;
        puVar6 = &local_280;
        if ((int)local_284 <= (int)local_280) {
          puVar6 = &local_284;
        }
        if (iVar8 < (int)*puVar6) {
          iVar3 = *puVar6 - iVar8;
          pdVar2 = (double *)(param_1 + 0x10 + (uVar1 - iVar8) * 0x18);
          pdVar5 = (double *)(param_3 + 0x10 + iVar8 * 0x18);
          do {
            iVar3 = iVar3 + -1;
            local_25c = pdVar2[-1] * pdVar5[-1];
            local_254 = *pdVar2 * *pdVar5;
            local_27c = pdVar2[-2] * pdVar5[-2] + local_27c;
            local_274 = pdVar2[-1] * pdVar5[-1] + local_274;
            local_26c = local_26c + *pdVar2 * *pdVar5;
            pdVar2 = pdVar2 + -3;
            pdVar5 = pdVar5 + 3;
          } while (iVar3 != 0);
        }
        if (local_24c + local_c * 6 != (undefined4 *)0x0) {
          pdVar2 = &local_27c;
          puVar7 = local_24c + local_c * 6;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar7 = *(undefined4 *)pdVar2;
            pdVar2 = (double *)((int)pdVar2 + 4);
            puVar7 = puVar7 + 1;
          }
        }
        local_c = local_c + 1;
        local_280 = (*(int *)(param_3 + 0x240) * 0x18) / 0x18;
        uVar4 = (*(int *)(param_1 + 0x240) * 0x18) / 0x18;
        uVar1 = local_284;
      } while (local_284 < (uVar4 - 1) + local_280);
    }
  }
  puVar7 = local_24c;
  for (iVar8 = 0x91; iVar8 != 0; iVar8 = iVar8 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

