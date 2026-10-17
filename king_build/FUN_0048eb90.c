
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048eb90(int param_1,undefined4 *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  double *pdVar8;
  int iVar9;
  double *pdVar10;
  uint local_d4;
  uint local_d0;
  double local_cc [24];
  int local_c;
  
  iVar4 = *(int *)(param_1 + 0xc0) * 8;
  local_d4 = 0;
  local_c = 0;
  if ((param_1 != iVar4 + param_1) &&
     (iVar9 = *(int *)(param_3 + 0xc0) * 8, param_3 != iVar9 + param_3)) {
    local_d0 = iVar9 >> 3;
    uVar5 = iVar4 >> 3;
    uVar7 = 0;
    if ((uVar5 - 1) + local_d0 != 0) {
      do {
        iVar4 = 0;
        if (uVar5 <= uVar7) {
          iVar4 = (uVar7 - uVar5) + 1;
        }
        local_d4 = uVar7 + 1;
        puVar6 = &local_d0;
        if ((int)local_d4 <= (int)local_d0) {
          puVar6 = &local_d4;
        }
        dVar3 = _DAT_0064a668;
        if (iVar4 < (int)*puVar6) {
          iVar9 = *puVar6 - iVar4;
          pdVar10 = (double *)(param_3 + iVar4 * 8);
          pdVar8 = (double *)(param_1 + (uVar7 - iVar4) * 8);
          do {
            dVar1 = *pdVar8;
            dVar2 = *pdVar10;
            pdVar8 = pdVar8 + -1;
            pdVar10 = pdVar10 + 1;
            iVar9 = iVar9 + -1;
            dVar3 = dVar1 * dVar2 + dVar3;
          } while (iVar9 != 0);
        }
        if (local_cc + local_c != (double *)0x0) {
          local_cc[local_c] = dVar3;
        }
        local_c = local_c + 1;
        local_d0 = (*(int *)(param_3 + 0xc0) << 3) >> 3;
        uVar5 = (*(int *)(param_1 + 0xc0) << 3) >> 3;
        uVar7 = local_d4;
      } while (local_d4 < (uVar5 - 1) + local_d0);
    }
  }
  pdVar10 = local_cc;
  for (iVar4 = 0x31; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_2 = *(undefined4 *)pdVar10;
    pdVar10 = (double *)((int)pdVar10 + 4);
    param_2 = param_2 + 1;
  }
  return;
}

