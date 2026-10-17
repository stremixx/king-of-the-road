
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a61a0(int param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  int local_12c;
  undefined4 local_128 [12];
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  iVar8 = *(int *)(param_1 + 0x6c);
  if ((*(byte *)(param_1 + 0x78) & 0x40) != 0) {
    *(byte *)(iVar8 + 0x28) = *(byte *)(iVar8 + 0x28) | 1;
    *(byte *)(*(int *)(param_1 + 0x70) + 0x28) = *(byte *)(*(int *)(param_1 + 0x70) + 0x28) | 1;
    FUN_005d29a0(1);
    return;
  }
  *(byte *)(iVar8 + 0x28) = *(byte *)(iVar8 + 0x28) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x70) + 0x28) = *(byte *)(*(int *)(param_1 + 0x70) + 0x28) & 0xfe;
  iVar8 = *(int *)(param_1 + 0x20);
  fVar12 = (float10)*(double *)(param_1 + 0x28) - (float10)*(double *)(iVar8 + 0xb70);
  if ((float10)_DAT_0064c8f0 < fVar12) {
    do {
      fVar12 = fVar12 - (float10)_DAT_0064c8f8;
    } while ((float10)_DAT_0064c8f0 < fVar12);
  }
  if (fVar12 < (float10)_DAT_0064c900) {
    do {
      fVar12 = fVar12 + (float10)_DAT_0064c8f8;
    } while (fVar12 < (float10)_DAT_0064c900);
  }
  fVar13 = (float10)*(double *)(param_1 + 0x30) - (float10)*(double *)(iVar8 + 0xb78);
  if ((float10)_DAT_0064c8f0 < fVar13) {
    do {
      fVar13 = fVar13 - (float10)_DAT_0064c8f8;
    } while ((float10)_DAT_0064c8f0 < fVar13);
  }
  if (fVar13 < (float10)_DAT_0064c900) {
    do {
      fVar13 = fVar13 + (float10)_DAT_0064c8f8;
    } while (fVar13 < (float10)_DAT_0064c900);
  }
  fVar13 = (float10)fcos(fVar13);
  fVar12 = (float10)fcos(fVar12);
  fVar12 = (fVar12 + fVar13 + (float10)_DAT_0064a650) * (float10)_DAT_0064a728;
  local_140 = (double)fVar12;
  *(double *)(param_1 + 0x38) = (double)fVar12;
  if ((float10)_DAT_0064a660 < fVar12) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x3ff00000;
  }
  dVar1 = *(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x38);
  puVar5 = local_128 + 2;
  dVar1 = dVar1 * dVar1;
  dVar1 = dVar1 * dVar1;
  dVar1 = dVar1 * dVar1;
  *(double *)(param_1 + 0x38) = dVar1 * dVar1;
  iVar8 = *(int *)(iVar8 + 0x1e8);
  iVar10 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  puVar5 = &DAT_00701550;
  puVar11 = local_128;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_005f1c30(local_128);
  puVar5 = (undefined4 *)FUN_005aba00(local_c8,local_128);
  dVar1 = *(double *)(param_1 + 0x30);
  puVar11 = local_128;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar11 = puVar11 + 1;
  }
  pfVar6 = (float *)FUN_005ab5d0(local_c8,(float)dVar1);
  fVar2 = DAT_00701580 * *pfVar6 + DAT_00701584 * pfVar6[3] + DAT_00701588 * pfVar6[6] + pfVar6[9];
  fVar3 = DAT_00701580 * pfVar6[1] + DAT_00701584 * pfVar6[4] + DAT_00701588 * pfVar6[7] +
          pfVar6[10];
  fVar4 = DAT_00701580 * pfVar6[2] + DAT_00701584 * pfVar6[5] + DAT_00701588 * pfVar6[8] +
          pfVar6[0xb];
  pfVar6 = (float *)FUN_005ab7d0(local_98,(float)*(double *)(param_1 + 0x28));
  local_14c = fVar2 * pfVar6[1] + fVar3 * pfVar6[4] + fVar4 * pfVar6[7] + pfVar6[10];
  local_148 = fVar2 * pfVar6[2] + fVar3 * pfVar6[5] + fVar4 * pfVar6[8] + pfVar6[0xb];
  local_150 = fVar2 * *pfVar6 + fVar3 * pfVar6[3] + fVar4 * pfVar6[6] + pfVar6[9];
  local_144 = local_148;
  FUN_005ab0a0(local_128);
  FUN_005aabf0(local_150,local_14c,local_148,&local_158,&local_154);
  local_158 = local_158 - (float)_DAT_0064c9f0;
  local_154 = (float)_DAT_0064c9f0 - local_154;
  if (local_158 < (float)_DAT_0064c900) {
    local_158 = local_158 + (float)_DAT_0064c8f8;
  }
  if ((float)_DAT_0064c8f0 < local_158) {
    local_158 = local_158 - (float)_DAT_0064c8f8;
  }
  if (local_154 < (float)_DAT_0064c900) {
    local_154 = local_154 + (float)_DAT_0064c8f8;
  }
  if ((float)_DAT_0064c8f0 < local_154) {
    local_154 = local_154 - (float)_DAT_0064c8f8;
  }
  FUN_005aad10(&local_138,0x42480000);
  uVar7 = FUN_005ab330(local_98,local_150,local_14c,local_148);
  uVar7 = FUN_005ab7d0(local_c8,local_158,uVar7);
  uVar7 = FUN_005ab5d0(local_38,local_154,uVar7);
  uVar7 = FUN_005ab130(local_68,uVar7);
  puVar5 = (undefined4 *)FUN_005ab130(local_f8,uVar7);
  puVar11 = local_128;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_005e1060(*(undefined4 *)(param_1 + 0x40),0,local_128);
  if ((*(uint *)(param_1 + 0x78) & 4) != 0) {
    iVar8 = __ftol();
    FUN_005e10c0(*(undefined4 *)(param_1 + 0x70),iVar8 % *(int *)(param_1 + 0x68));
    FUN_005f1c30(local_128);
    pfVar6 = (float *)FUN_005aba00(local_f8,local_128);
    local_134 = DAT_00701590 * pfVar6[1] + DAT_00701594 * pfVar6[4] + DAT_00701598 * pfVar6[7];
    local_130 = DAT_00701590 * pfVar6[2] + DAT_00701594 * pfVar6[5] + DAT_00701598 * pfVar6[8];
    fVar12 = (float10)fsin((float10)*(double *)(param_1 + 0x30));
    local_144 = (float)(fVar12 * (float10)_DAT_00650578);
    local_150 = (DAT_00701590 * *pfVar6 + DAT_00701594 * pfVar6[3] + DAT_00701598 * pfVar6[6]) *
                local_144;
    local_14c = local_134 * local_144;
    local_148 = local_130 * local_144;
    uVar7 = FUN_005ab330(local_f8,local_150,local_14c,local_148);
    FUN_005e1060(*(undefined4 *)(param_1 + 0x44),0,uVar7);
    goto LAB_005a683a;
  }
  if (((local_14c < (float)_DAT_0064a5a8) ||
      (*(float *)(iVar8 + 0x58) * _DAT_0064b248 < ABS(local_150 / local_14c))) ||
     (*(float *)(iVar8 + 0x54) * _DAT_0064b248 < ABS(local_148 / local_14c))) {
    iVar8 = *(int *)(param_1 + 0x70);
    bVar9 = *(byte *)(iVar8 + 0x28);
LAB_005a6631:
    bVar9 = bVar9 | 1;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x70);
    bVar9 = *(byte *)(iVar8 + 0x28);
    if ((*(uint *)(param_1 + 0x78) & 0x80) != 0) goto LAB_005a6631;
    bVar9 = bVar9 & 0xfe;
  }
  *(byte *)(iVar8 + 0x28) = bVar9;
  FUN_005ab0a0(local_128);
  local_150 = -local_150;
  local_14c = 0.0;
  local_144 = *(float *)(param_1 + 0x68);
  local_148 = -local_148;
  iVar8 = 1;
  if (1 < (int)local_144 + 1) {
    puVar5 = (undefined4 *)(param_1 + 0x44);
    do {
      iVar8 = iVar8 + 1;
      fVar2 = (float)iVar8;
      local_138 = fVar2 * local_150;
      local_134 = fVar2 * local_14c;
      fVar3 = (float)(int)local_144;
      local_12c = iVar8;
      uVar7 = FUN_005ab330(local_f8,local_138 / fVar3,local_134 / fVar3,(fVar2 * local_148) / fVar3)
      ;
      FUN_005e1060(*puVar5,0,uVar7);
      local_144 = *(float *)(param_1 + 0x68);
      puVar5 = puVar5 + 1;
    } while (iVar8 < (int)local_144 + 1);
  }
LAB_005a683a:
  dVar1 = _DAT_0064a660;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)local_140;
  *(undefined4 *)(param_1 + 0x3c) = local_140._4_4_;
  if (dVar1 < local_140) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x3ff00000;
  }
  dVar1 = *(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x38);
  dVar1 = dVar1 * dVar1;
  dVar1 = dVar1 * dVar1;
  dVar1 = dVar1 * dVar1;
  *(double *)(param_1 + 0x38) = dVar1 * dVar1;
  FUN_005d29a0(1);
  return;
}

