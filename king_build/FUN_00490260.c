
void __thiscall FUN_00490260(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  undefined4 *puVar6;
  double *pdVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint local_d4;
  undefined8 local_cc;
  int local_c;
  
  if (param_1 == param_1 + param_1[0x30] * 2) {
    for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  if (param_3 != param_3 + param_3[0x30] * 2) {
    uVar1 = (param_3[0x30] * 8 >> 3) - (param_1[0x30] * 8 >> 3);
    local_c = 0;
    if ((int)uVar1 < 0) {
      uVar4 = -uVar1;
      uVar2 = 0;
      puVar6 = param_1;
      uVar9 = uVar4;
      if (uVar1 != 0 && -1 < (int)uVar4) {
        do {
          iVar3 = local_c * 8;
          if (&local_cc + local_c != (undefined8 *)0x0) {
            *(undefined4 *)(&local_cc + local_c) = *puVar6;
            *(undefined4 *)((int)&local_cc + iVar3 + 4) = puVar6[1];
          }
          uVar9 = uVar9 - 1;
          local_c = local_c + 1;
          uVar2 = uVar4;
          puVar6 = puVar6 + 2;
        } while (uVar9 != 0);
      }
      if (uVar2 < (uint)((int)(param_1[0x30] << 3) >> 3)) {
        pdVar7 = (double *)(param_1 + uVar2 * 2);
        pdVar5 = (double *)(param_3 + (uVar1 + uVar2) * 2);
        do {
          if ((double *)(&local_cc + local_c) != (double *)0x0) {
            (&local_cc)[local_c] = *pdVar7 + *pdVar5;
          }
          uVar2 = uVar2 + 1;
          pdVar5 = pdVar5 + 1;
          pdVar7 = pdVar7 + 1;
          local_c = local_c + 1;
        } while (uVar2 < (uint)((int)(param_1[0x30] << 3) >> 3));
      }
    }
    else {
      puVar6 = param_3;
      uVar2 = 0;
      local_d4 = uVar1;
      if (0 < (int)uVar1) {
        do {
          iVar3 = local_c * 8;
          if (&local_cc + local_c != (undefined8 *)0x0) {
            *(undefined4 *)(&local_cc + local_c) = *puVar6;
            *(undefined4 *)((int)&local_cc + iVar3 + 4) = puVar6[1];
          }
          local_c = local_c + 1;
          local_d4 = local_d4 - 1;
          puVar6 = puVar6 + 2;
          uVar2 = uVar1;
        } while (local_d4 != 0);
      }
      if (uVar2 < (uint)((int)(param_3[0x30] << 3) >> 3)) {
        iVar3 = uVar2 * 8;
        do {
          if ((double *)(&local_cc + local_c) != (double *)0x0) {
            (&local_cc)[local_c] =
                 *(double *)(iVar3 + uVar1 * -8 + (int)param_1) + *(double *)(iVar3 + (int)param_3);
          }
          iVar3 = iVar3 + 8;
          uVar2 = uVar2 + 1;
          local_c = local_c + 1;
        } while (uVar2 < (uint)((int)(param_3[0x30] << 3) >> 3));
      }
    }
    puVar8 = &local_cc;
    for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *(undefined4 *)puVar8;
      puVar8 = (undefined8 *)((int)puVar8 + 4);
      param_2 = param_2 + 1;
    }
    return;
  }
  for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

