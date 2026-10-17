
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005bbf10(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float10 fVar16;
  double local_c0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  float local_8c;
  float local_88;
  undefined4 local_80 [9];
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50 [9];
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
  iVar11 = *param_4;
  local_90 = iVar11 + 2;
  if (*(int *)(param_1 + 4) < local_90) {
    *param_2 = DAT_007015b0;
    param_2[1] = DAT_007015b4;
    param_2[2] = DAT_007015b8;
    return param_2;
  }
  if (iVar11 < 0) {
    *param_2 = DAT_007015b0;
    param_2[1] = DAT_007015b4;
    param_2[2] = DAT_007015b8;
    return param_2;
  }
  iVar7 = *(int *)(param_1 + 8);
  puVar14 = (undefined4 *)(iVar11 * 0x30 + iVar7);
  puVar13 = puVar14;
  puVar12 = local_80;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar13 = (undefined4 *)((iVar11 * 3 + 3) * 0x10 + iVar7);
  puVar12 = puVar13;
  puVar15 = local_50;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar15 = puVar15 + 1;
  }
  local_9c = local_2c - local_5c;
  local_98 = local_28 - local_58;
  local_a8 = 0.0;
  local_94 = local_24 - local_54;
  local_a4 = 0.0;
  local_a0 = 0.0;
  if (*(int *)(param_1 + 4) < iVar11 + 3) {
    iVar11 = *(int *)(param_1 + 0x3c);
    iVar7 = 0;
    if (0 < iVar11) {
      piVar10 = (int *)(param_1 + 0x68);
      do {
        if (*(int *)(*piVar10 + 0x28) == *(int *)(param_1 + 0x28)) break;
        iVar7 = iVar7 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar7 < iVar11);
    }
    if (iVar11 == iVar7) {
      FUN_005aaad0(param_2,&local_9c);
      return param_2;
    }
    iVar11 = *(int *)(param_1 + 0x68 + iVar7 * 4);
    if (iVar11 == 0) {
      FUN_005aaad0(param_2,&local_9c);
      return param_2;
    }
    puVar13 = *(undefined4 **)(iVar11 + 8);
    puVar12 = puVar13;
    puVar15 = local_50;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    }
    puVar13 = puVar13 + 0xc;
    puVar12 = local_80;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    local_a8 = local_5c - local_2c;
    local_a4 = local_58 - local_28;
    local_a0 = local_54 - local_24;
  }
  else {
    puVar12 = local_50;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar13 = (undefined4 *)(local_90 * 0x30 + iVar7);
    puVar12 = local_80;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    local_a8 = local_5c - local_2c;
    local_a4 = local_58 - local_28;
    local_a0 = local_54 - local_24;
  }
  fVar1 = *(float *)(param_3 + 0x24);
  puVar13 = local_80;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  fVar2 = *(float *)(param_3 + 0x28);
  fVar3 = *(float *)(param_3 + 0x2c);
  pfVar8 = (float *)FUN_005aaad0(&local_8c,&local_9c);
  fVar4 = pfVar8[2];
  fVar5 = pfVar8[1];
  fVar6 = *pfVar8;
  fVar16 = (float10)FUN_005aabc0(&local_9c);
  fVar16 = (float10)((fVar1 - local_5c) * fVar6 +
                    fVar5 * (fVar2 - local_58) + fVar4 * (fVar3 - local_54)) / fVar16;
  local_c0 = (double)fVar16;
  if ((float10)_DAT_0064a668 <= fVar16) {
    if (_DAT_0064a660 < local_c0) {
      local_c0 = 1.0;
    }
  }
  else {
    local_c0 = 0.0;
  }
  fVar1 = (float)((float10)_DAT_0064a660 - (float10)local_c0);
  pfVar8 = (float *)FUN_005aaad0(local_14,&local_9c);
  fVar2 = *pfVar8;
  fVar3 = pfVar8[1];
  fVar4 = pfVar8[2];
  pfVar8 = (float *)FUN_005aaad0(local_20,&local_a8);
  fVar5 = (float)local_c0;
  local_8c = fVar5 * *pfVar8;
  local_88 = fVar5 * pfVar8[1];
  local_9c = local_8c + fVar1 * fVar2;
  local_98 = fVar1 * fVar3 + local_88;
  local_94 = fVar1 * fVar4 + fVar5 * pfVar8[2];
  FUN_005aaad0(param_2,&local_9c);
  return param_2;
}

