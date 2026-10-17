
void __thiscall FUN_0048f370(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  double *pdVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  undefined4 *puVar9;
  double *pdVar10;
  undefined4 *puVar11;
  uint local_274;
  double local_264;
  double local_25c;
  double local_254;
  undefined4 local_24c [144];
  int local_c;
  
  if (param_1 == param_1 + param_1[0x90] * 6) {
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  if (param_3 != param_3 + param_3[0x90] * 6) {
    local_c = 0;
    uVar5 = (param_3[0x90] * 0x18) / 0x18 - (param_1[0x90] * 0x18) / 0x18;
    if ((int)uVar5 < 0) {
      uVar1 = -uVar5;
      puVar3 = param_1;
      uVar7 = 0;
      local_274 = uVar1;
      if (0 < (int)uVar1) {
        do {
          if (local_24c + local_c * 6 != (undefined4 *)0x0) {
            puVar9 = puVar3;
            puVar11 = local_24c + local_c * 6;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          local_274 = local_274 - 1;
          local_c = local_c + 1;
          puVar3 = puVar3 + 6;
          uVar7 = uVar1;
        } while (local_274 != 0);
      }
      if (uVar7 < (uint)((param_1[0x90] * 0x18) / 0x18)) {
        pdVar2 = (double *)(param_1 + uVar7 * 6 + 2);
        pdVar10 = (double *)(param_3 + (uVar5 + uVar7) * 6 + 2);
        do {
          iVar4 = local_c;
          FUN_00405ea0(pdVar10[-1] + pdVar2[-1],*pdVar2 + *pdVar10,pdVar10[1] + pdVar2[1]);
          if (local_24c + iVar4 * 6 != (undefined4 *)0x0) {
            pdVar8 = &local_264;
            puVar3 = local_24c + iVar4 * 6;
            for (iVar6 = 6; iVar4 = local_c, iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar3 = *(undefined4 *)pdVar8;
              pdVar8 = (double *)((int)pdVar8 + 4);
              puVar3 = puVar3 + 1;
            }
          }
          pdVar2 = pdVar2 + 3;
          uVar7 = uVar7 + 1;
          pdVar10 = pdVar10 + 3;
          local_c = iVar4 + 1;
        } while (uVar7 < (uint)((param_1[0x90] * 0x18) / 0x18));
      }
    }
    else {
      local_274 = 0;
      puVar3 = param_3;
      uVar7 = uVar5;
      if (0 < (int)uVar5) {
        do {
          if (local_24c + local_c * 6 != (undefined4 *)0x0) {
            puVar9 = puVar3;
            puVar11 = local_24c + local_c * 6;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          uVar7 = uVar7 - 1;
          local_c = local_c + 1;
          puVar3 = puVar3 + 6;
          local_274 = uVar5;
        } while (uVar7 != 0);
      }
      if (local_274 < (uint)((param_3[0x90] * 0x18) / 0x18)) {
        pdVar2 = (double *)(param_3 + local_274 * 6 + 4);
        do {
          iVar4 = (-0x10 - (int)param_3) + uVar5 * -0x18 + (int)pdVar2;
          local_264 = pdVar2[-2] + *(double *)(iVar4 + (int)param_1);
          local_25c = pdVar2[-1] + *(double *)(iVar4 + 8 + (int)param_1);
          local_254 = *(double *)(iVar4 + 0x10 + (int)param_1) + *pdVar2;
          if (local_24c + local_c * 6 != (undefined4 *)0x0) {
            pdVar10 = &local_264;
            puVar3 = local_24c + local_c * 6;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar3 = *(undefined4 *)pdVar10;
              pdVar10 = (double *)((int)pdVar10 + 4);
              puVar3 = puVar3 + 1;
            }
          }
          local_274 = local_274 + 1;
          pdVar2 = pdVar2 + 3;
          local_c = local_c + 1;
        } while (local_274 < (uint)((param_3[0x90] * 0x18) / 0x18));
      }
    }
    puVar3 = local_24c;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

