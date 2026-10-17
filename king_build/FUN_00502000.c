
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00502000(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float local_88;
  float local_84;
  float local_7c;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  local_68 = *(float *)(param_1 + 0xe3c + param_3 * 4);
  puVar9 = (undefined4 *)(param_1 + 0xf08 + param_3 * 0xc);
  local_84 = 10.0;
  *puVar9 = DAT_007015b0;
  puVar9[1] = DAT_007015b4;
  puVar9[2] = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xee8 + param_3 * 4) = 0;
  *(undefined4 *)(param_1 + 0xf68 + param_3 * 4) = 0;
  *(undefined4 *)(param_1 + 0x34d0 + param_3 * 4) = 0;
  if (*(int *)(param_2 + 100) == 0) {
    return 0;
  }
  local_7c = *(float *)(param_1 + 0x1964 + param_3 * 4);
  if (_DAT_0064b440 < local_7c) {
    local_7c = 10.0;
  }
  fVar12 = (float10)FUN_004e1fd9();
  local_6c = (float)fVar12;
  fVar3 = *(float *)(param_1 + 0x1a7c + param_3 * 4);
  fVar4 = *(float *)(param_1 + 0x1a5c + param_3 * 4);
  *(undefined4 *)(param_1 + 0x2690 + param_3 * 4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x2670 + param_3 * 4) = 0x3f000000;
  if (DAT_006967ac == 1) {
    *(undefined4 *)(param_1 + 0x2670 + param_3 * 4) = 0x3e99999a;
  }
  local_64 = *(int *)(*(int *)(param_2 + 100) + 4);
  iVar11 = param_1 + param_3 * 0xf8;
  if (*(short *)(param_1 + 0x1030 + param_3 * 0xf8) != 0) {
    iVar10 = 0;
    local_60 = *(float *)(iVar11 + 0x1018);
    local_5c = *(float *)(iVar11 + 0x101c);
    local_58 = *(float *)(iVar11 + 0x1020);
    local_78 = *(double *)(param_2 + 0x34);
    local_70 = *(float *)(param_2 + 0x3c);
    if (0 < *(int *)(param_1 + 0x29d0)) {
      iVar11 = param_1 + 0x2900;
      do {
        iVar7 = FUN_00501af0(iVar11,&local_60,&local_78);
        if (iVar7 != 0) {
          local_64 = 0xd;
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x30;
      } while (iVar10 < *(int *)(param_1 + 0x29d0));
    }
  }
  if (**(int **)(param_2 + 100) != 1) goto switchD_00502211_default;
  if ((0 < local_64) && (local_64 < 0xe)) {
    iVar11 = (*(int **)(param_2 + 100))[1] * 4;
    *(float *)(param_1 + 0x2690 + param_3 * 4) =
         ABS(fVar3) * *(float *)(&DAT_006965e8 + iVar11) +
         ABS(fVar4) * *(float *)(&DAT_00696620 + iVar11);
    *(undefined4 *)(param_1 + 0x2670 + param_3 * 4) =
         *(undefined4 *)
          (&DAT_00696658 +
          (*(int *)(*(int *)(param_2 + 100) + 4) +
          (DAT_006967ac + *(int *)(param_1 + 0x3f4c) * 2) * 0xe) * 4);
  }
  iVar11 = *(int *)(param_2 + 100);
  switch(*(undefined4 *)(iVar11 + 4)) {
  case 1:
  case 5:
    goto switchD_00502211_caseD_1;
  case 2:
    fVar12 = (float10)FUN_004eae60();
    if (fVar12 == (float10)_DAT_0064b3fc) {
      *(float *)(param_1 + 0x2690 + param_3 * 4) =
           *(float *)(param_1 + 0x2690 + param_3 * 4) * (float)_DAT_0064ca78;
    }
    if ((*(uint *)(*(int *)(param_2 + 100) + 8) & 0x3fffffff) == 2) {
      puVar9 = *(undefined4 **)(*(int *)(param_2 + 100) + 0xc);
      *(undefined4 *)(param_1 + 0x2670 + param_3 * 4) = *puVar9;
      *(undefined4 *)(param_1 + 0x2690 + param_3 * 4) = puVar9[1];
    }
    if (*(short *)(param_1 + 0x19a4 + param_3 * 2) == 0) {
      if (((*(char *)(param_3 + 0x19c4 + param_1) != '\0') &&
          ((float)_DAT_0064ca90 < ABS(*(float *)(param_1 + 0x1a30 + param_3 * 4)))) ||
         (*(int *)(param_1 + 0x19d4 + param_3 * 4) != 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((*(short *)(param_1 + 0x2740) != 0) && (bVar5)) {
        *(undefined4 *)(param_1 + 0x34d0 + param_3 * 4) = 1;
      }
      if ((((*(char *)(param_3 + 0x19c4 + param_1) == '\0') ||
           (ABS(*(float *)(param_1 + 0x1a30 + param_3 * 4)) <= (float)_DAT_0064ca90)) &&
          (*(int *)(param_1 + 0x19d4 + param_3 * 4) == 0)) ||
         (*(short *)(param_1 + 0x19a4 + param_3 * 2) != 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((*(short *)(param_1 + 0x2740) != 0) && (bVar5)) {
        *(undefined4 *)(param_1 + 0x34d0 + param_3 * 4) = 2;
      }
      if (*(int *)(param_1 + 0x276c) == 2) {
        local_84 = local_7c * (float)_DAT_0064c328;
        fVar3 = *(float *)(param_1 + 0x1f9c + param_3 * 4) * (float)_DAT_0064c328;
      }
      else if (*(int *)(param_1 + 0x276c) == 1) {
        local_84 = local_7c * (float)_DAT_0064a5a8;
        fVar3 = *(float *)(param_1 + 0x1f9c + param_3 * 4) * (float)_DAT_0064a830;
      }
      else {
        local_84 = local_7c * (float)_DAT_0064a6d0;
        fVar3 = *(float *)(param_1 + 0x1f9c + param_3 * 4) * (float)_DAT_0064a6d0;
      }
      fVar4 = ABS(local_68);
      *(float *)(param_1 + 0xe5c + param_3 * 4) =
           (_DAT_0064b240 - fVar4 / fVar3) * *(float *)(param_1 + 0xe5c + param_3 * 4);
      iVar11 = _rand();
      local_78 = (double)CONCAT44(local_78._4_4_,iVar11);
      fVar6 = ((float)_DAT_0064a5a8 / (local_6c + (float)_DAT_0064a590)) * local_7c;
      fVar3 = ((fVar6 + fVar6) / (local_7c + _DAT_0064b440)) *
              (SQRT(fVar4 / fVar3) * (float)_DAT_0064b948 + (float)_DAT_0064a5a8) *
              ((float)iVar11 * _DAT_0064b244 - (local_68 + fVar3) / (fVar3 + fVar3)) +
              *(float *)(param_1 + 0xe5c + param_3 * 4);
      *(float *)(param_1 + 0xe5c + param_3 * 4) = fVar3;
      if (local_84 < fVar3) {
        *(float *)(param_1 + 0xe5c + param_3 * 4) = local_84;
      }
      if (*(float *)(param_1 + 0xe5c + param_3 * 4) < -local_84) {
        *(float *)(param_1 + 0xe5c + param_3 * 4) = -local_84;
      }
      fVar3 = local_6c * *(float *)(param_1 + 0xe5c + param_3 * 4) +
              *(float *)(param_1 + 0xe3c + param_3 * 4);
      *(float *)(param_1 + 0xe3c + param_3 * 4) = fVar3;
      if (_DAT_0064b2f4 < fVar3) {
        *(undefined4 *)(param_1 + 0xe3c + param_3 * 4) = 0x3dcccccd;
      }
      if (*(float *)(param_1 + 0xe3c + param_3 * 4) < _DAT_0064c680) {
        *(undefined4 *)(param_1 + 0xe3c + param_3 * 4) = 0xbdcccccd;
      }
    }
    break;
  case 3:
    if ((*(uint *)(iVar11 + 8) & 0x3fffffff) == 2) {
      puVar9 = *(undefined4 **)(iVar11 + 0xc);
      *(undefined4 *)(param_1 + 0x2670 + param_3 * 4) = *puVar9;
      *(undefined4 *)(param_1 + 0x2690 + param_3 * 4) = puVar9[1];
    }
    if (*(short *)(param_1 + 0x19a4 + param_3 * 2) == 0) {
      if (((*(char *)(param_3 + 0x19c4 + param_1) != '\0') &&
          ((float)_DAT_0064a830 < ABS(*(float *)(param_1 + 0x1a5c + param_3 * 4)))) ||
         (*(int *)(param_1 + 0x19d4 + param_3 * 4) != 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((*(short *)(param_1 + 0x2740) != 0) && (bVar5)) {
        *(undefined4 *)(param_1 + 0x34d0 + param_3 * 4) = 1;
      }
      if ((((*(char *)(param_3 + 0x19c4 + param_1) == '\0') ||
           (ABS(*(float *)(param_1 + 0x1a5c + param_3 * 4)) <= (float)_DAT_0064a830)) &&
          (*(int *)(param_1 + 0x19d4 + param_3 * 4) == 0)) ||
         (*(short *)(param_1 + 0x19a4 + param_3 * 2) != 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((*(short *)(param_1 + 0x2740) != 0) && (bVar5)) {
        *(undefined4 *)(param_1 + 0x34d0 + param_3 * 4) = 2;
      }
    }
    break;
  case 4:
  case 7:
  case 9:
    if (*(short *)(param_1 + 0x19a4 + param_3 * 2) == 0) {
      if ((*(uint *)(iVar11 + 8) & 0x3fffffff) == 2) {
        puVar9 = *(undefined4 **)(iVar11 + 0xc);
        *(undefined4 *)(param_1 + 0x2670 + param_3 * 4) = *puVar9;
        *(undefined4 *)(param_1 + 0x2690 + param_3 * 4) = puVar9[1];
      }
      if (*(int *)(*(int *)(param_2 + 100) + 4) == 9) {
        local_88 = 0.05;
        local_84 = 2.0;
      }
      else {
        local_88 = 0.3;
      }
      fVar3 = ABS(local_68);
      *(float *)(param_1 + 0xe5c + param_3 * 4) =
           (_DAT_0064b240 - fVar3 / local_88) * *(float *)(param_1 + 0xe5c + param_3 * 4);
      iVar11 = _rand();
      local_78 = (double)CONCAT44(local_78._4_4_,iVar11);
      fVar3 = ((fVar3 / local_88) * (float)_DAT_0064b948 + (float)_DAT_0064a5a8) *
              ((local_7c * _DAT_0064b310) / (local_7c + _DAT_0064b440)) *
              ((float)iVar11 * _DAT_0064b244 - (local_68 + local_88) / (local_88 + local_88)) +
              *(float *)(param_1 + 0xe5c + param_3 * 4);
      *(float *)(param_1 + 0xe5c + param_3 * 4) = fVar3;
      if (local_84 < fVar3) {
        *(float *)(param_1 + 0xe5c + param_3 * 4) = local_84;
      }
      if (*(float *)(param_1 + 0xe5c + param_3 * 4) < -local_84) {
        *(float *)(param_1 + 0xe5c + param_3 * 4) = -local_84;
      }
      fVar3 = local_6c * *(float *)(param_1 + 0xe5c + param_3 * 4) +
              *(float *)(param_1 + 0xe3c + param_3 * 4);
      *(float *)(param_1 + 0xe3c + param_3 * 4) = fVar3;
      if (local_88 < fVar3) {
        *(float *)(param_1 + 0xe3c + param_3 * 4) = local_88;
      }
      if (*(float *)(param_1 + 0xe3c + param_3 * 4) < -local_88) {
        *(float *)(param_1 + 0xe3c + param_3 * 4) = -local_88;
      }
    }
    break;
  case 6:
  case 10:
  case 0xb:
    if ((*(uint *)(iVar11 + 8) & 0x3fffffff) == 2) {
      puVar9 = *(undefined4 **)(iVar11 + 0xc);
      *(undefined4 *)(param_1 + 0x2670 + param_3 * 4) = *puVar9;
      *(undefined4 *)(param_1 + 0x2690 + param_3 * 4) = puVar9[1];
    }
    if (*(short *)(param_1 + 0x19a4 + param_3 * 2) == 0) {
      fVar3 = ABS(local_68);
      fVar4 = (float)_DAT_0064ca70;
      *(float *)(param_1 + 0xe5c + param_3 * 4) =
           (_DAT_0064b240 - fVar3 * fVar4) * *(float *)(param_1 + 0xe5c + param_3 * 4);
      iVar11 = _rand();
      local_78 = (double)CONCAT44(local_78._4_4_,iVar11);
      fVar3 = (SQRT(fVar3 * fVar4) * (float)_DAT_0064b948 + (float)_DAT_0064a5a8) *
              (local_7c / (local_7c + _DAT_0064b440)) *
              ((float)iVar11 * _DAT_0064b244 - (local_68 + _DAT_0064b250) * _DAT_0064ca6c) +
              *(float *)(param_1 + 0xe5c + param_3 * 4);
      *(float *)(param_1 + 0xe5c + param_3 * 4) = fVar3;
      if (_DAT_0064b440 < fVar3) {
        *(undefined4 *)(param_1 + 0xe5c + param_3 * 4) = 0x41200000;
      }
      if (*(float *)(param_1 + 0xe5c + param_3 * 4) < _DAT_0064b958) {
        *(undefined4 *)(param_1 + 0xe5c + param_3 * 4) = 0xc1200000;
      }
      fVar3 = local_6c * *(float *)(param_1 + 0xe5c + param_3 * 4) +
              *(float *)(param_1 + 0xe3c + param_3 * 4);
      *(float *)(param_1 + 0xe3c + param_3 * 4) = fVar3;
      if (_DAT_0064b328 < fVar3) {
        *(undefined4 *)(param_1 + 0xe3c + param_3 * 4) = 0x3e99999a;
      }
      if (*(float *)(param_1 + 0xe3c + param_3 * 4) < _DAT_0064ca68) {
        *(undefined4 *)(param_1 + 0xe3c + param_3 * 4) = 0xbe99999a;
      }
    }
    break;
  case 8:
    if (*(short *)(param_1 + 0x19a4 + param_3 * 2) == 0) {
      if (*(short *)(param_1 + 0x2740) == 0) {
        iVar11 = FUN_005db380(local_30);
        local_60 = *(float *)(iVar11 + 0x24) - *(float *)(param_1 + 0x34);
        local_5c = *(float *)(iVar11 + 0x28) - *(float *)(param_1 + 0x38);
        local_78 = (double)CONCAT44(local_5c,local_60);
        local_70 = *(float *)(iVar11 + 0x2c) - *(float *)(param_1 + 0x3c);
        local_58 = local_70;
        fVar12 = (float10)FUN_005aabc0(&local_60);
        local_78 = (double)((float10)_DAT_0064a908 / (fVar12 + (float10)_DAT_0064a5a8));
        iVar11 = _rand();
        if ((float)iVar11 * _DAT_0064b244 <= (float)local_78) goto switchD_00502211_caseD_1;
      }
      *(undefined4 *)(param_1 + 0x3c58) = 1;
      pfVar1 = (float *)(param_1 + 0x3c5c);
      pfVar2 = (float *)(param_1 + 0x3c68);
      fVar3 = *(float *)(param_2 + 0x40) * _DAT_0064ca9c;
      fVar4 = *(float *)(param_2 + 0x44) * _DAT_0064ca9c;
      local_78 = (double)CONCAT44(fVar4,fVar3);
      local_70 = *(float *)(param_2 + 0x48) * _DAT_0064ca9c;
      *pfVar1 = fVar3;
      *(float *)(param_1 + 0x3c60) = fVar4;
      *(float *)(param_1 + 0x3c64) = local_70;
      *pfVar2 = *(float *)(param_2 + 0x34);
      *(undefined4 *)(param_1 + 0x3c6c) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_1 + 0x3c70) = *(undefined4 *)(param_2 + 0x3c);
      if (3 < (uint)(*(int *)(*(int *)(param_2 + 100) + 8) << 2)) {
        *(undefined4 *)(param_1 + 0x3c58) = **(undefined4 **)(*(int *)(param_2 + 100) + 0xc);
      }
      if (7 < (uint)(*(int *)(*(int *)(param_2 + 100) + 8) << 2)) {
        local_70 = *(float *)(*(int *)(*(int *)(param_2 + 100) + 0xc) + 4);
        fVar4 = local_70 * *(float *)(param_2 + 0x40);
        fVar3 = local_70 * *(float *)(param_2 + 0x44);
        local_78 = (double)CONCAT44(fVar3,fVar4);
        local_70 = local_70 * *(float *)(param_2 + 0x48);
        *pfVar1 = fVar4;
        *(float *)(param_1 + 0x3c60) = fVar3;
        *(float *)(param_1 + 0x3c64) = local_70;
      }
      FUN_005aad10(local_3c,*(float *)(param_1 + 0x2640) * _DAT_0064ca98);
      local_48 = *pfVar1 / local_6c;
      local_44 = *(float *)(param_1 + 0x3c60) / local_6c;
      local_78 = (double)CONCAT44(local_44,local_48);
      local_70 = *(float *)(param_1 + 0x3c64) / local_6c;
      local_54 = *pfVar2 * *(float *)(param_1 + 0x900) +
                 *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0x3c70) +
                 *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0x3c6c) +
                 *(float *)(param_1 + 0x924);
      local_50 = *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0x3c70) +
                 *(float *)(param_1 + 0x904) * *pfVar2 +
                 *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x3c6c) +
                 *(float *)(param_1 + 0x928);
      local_4c = *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0x3c70) +
                 *(float *)(param_1 + 0x908) * *pfVar2 +
                 *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0x3c6c) +
                 *(float *)(param_1 + 0x92c);
      local_40 = local_70;
      FUN_004eb360(&local_54,&local_48,&DAT_007015b0);
    }
switchD_00502211_caseD_1:
    iVar11 = *(int *)(param_2 + 100);
    uVar8 = *(int *)(iVar11 + 8) << 2;
    if (7 < uVar8) {
      if (*(int *)(iVar11 + 4) == 8) {
        if (uVar8 != 0x10) goto LAB_005024dd;
        puVar9 = (undefined4 *)(*(int *)(iVar11 + 0xc) + 8);
      }
      else {
        puVar9 = *(undefined4 **)(iVar11 + 0xc);
      }
      if (puVar9 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x2670 + param_3 * 4) = *puVar9;
        *(undefined4 *)(param_1 + 0x2690 + param_3 * 4) = puVar9[1];
        if (DAT_006967ac == 1) {
          *(float *)(param_1 + 0x2670 + param_3 * 4) =
               *(float *)(param_1 + 0x2670 + param_3 * 4) * (float)_DAT_0064c308;
        }
      }
    }
LAB_005024dd:
    if ((((*(char *)(param_3 + 0x19c4 + param_1) == '\0') ||
         (ABS(*(float *)(param_1 + 0x1a30 + param_3 * 4)) <= (float)_DAT_0064ca90)) &&
        (*(int *)(param_1 + 0x19d4 + param_3 * 4) == 0)) ||
       (*(short *)(param_1 + 0x19a4 + param_3 * 2) != 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((*(short *)(param_1 + 0x2740) != 0) && (bVar5)) {
      *(undefined4 *)(param_1 + 0x34d0 + param_3 * 4) = 2;
    }
    if (*(int *)(param_1 + 0x276c) == 2) {
      local_84 = local_7c * (float)_DAT_0064ca88;
      fVar3 = *(float *)(param_1 + 0x1f9c + param_3 * 4) * (float)_DAT_0064c328;
    }
    else if (*(int *)(param_1 + 0x276c) == 1) {
      local_84 = local_7c * (float)_DAT_0064c658;
      fVar3 = *(float *)(param_1 + 0x1f9c + param_3 * 4) * (float)_DAT_0064a5a8;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x1f9c + param_3 * 4) * (float)_DAT_0064a830;
      local_84 = local_7c;
    }
    fVar4 = ABS(local_68);
    *(float *)(param_1 + 0xe5c + param_3 * 4) =
         (_DAT_0064b240 - fVar4 / fVar3) * *(float *)(param_1 + 0xe5c + param_3 * 4);
    iVar11 = _rand();
    local_78 = (double)CONCAT44(local_78._4_4_,iVar11);
    fVar3 = ((((float)_DAT_0064a5a8 / (local_6c + (float)_DAT_0064a590)) * local_7c) /
            (local_7c + _DAT_0064b440)) *
            (SQRT(fVar4 / fVar3) * (float)_DAT_0064b948 + (float)_DAT_0064a5a8) *
            ((float)iVar11 * _DAT_0064b244 - (local_68 + fVar3) / (fVar3 + fVar3)) +
            *(float *)(param_1 + 0xe5c + param_3 * 4);
    *(float *)(param_1 + 0xe5c + param_3 * 4) = fVar3;
    if (local_84 < fVar3) {
      *(float *)(param_1 + 0xe5c + param_3 * 4) = local_84;
    }
    if (*(float *)(param_1 + 0xe5c + param_3 * 4) < -local_84) {
      *(float *)(param_1 + 0xe5c + param_3 * 4) = -local_84;
    }
    fVar3 = local_6c * *(float *)(param_1 + 0xe5c + param_3 * 4) +
            *(float *)(param_1 + 0xe3c + param_3 * 4);
    *(float *)(param_1 + 0xe3c + param_3 * 4) = fVar3;
    if (_DAT_0064ca84 < fVar3) {
      *(undefined4 *)(param_1 + 0xe3c + param_3 * 4) = 0x3ca3d70a;
    }
    if (*(float *)(param_1 + 0xe3c + param_3 * 4) < _DAT_0064ca80) {
      *(undefined4 *)(param_1 + 0xe3c + param_3 * 4) = 0xbca3d70a;
    }
  }
switchD_00502211_default:
  fVar12 = (float10)FUN_004eae60();
  fVar12 = fVar12 * (float10)*(float *)(param_1 + 0x2670 + param_3 * 4) * (float10)_DAT_00695b3c;
  *(float *)(param_1 + 0x2670 + param_3 * 4) = (float)fVar12;
  if ((*(int *)(param_1 + 0x276c) == 2) &&
     ((iVar11 = *(int *)(*(int *)(param_2 + 100) + 4), iVar11 == 1 || (iVar11 == 5)))) {
    *(float *)(param_1 + 0x2670 + param_3 * 4) =
         (float)(fVar12 * (float10)_DAT_0064a658 + (float10)_DAT_0064c0e0);
  }
  else if (*(int *)(param_1 + 0x276c) != 0) {
    *(float *)(param_1 + 0x2670 + param_3 * 4) =
         (float)(fVar12 * (float10)_DAT_0064c368 + (float10)_DAT_0064a5a8);
  }
  *(undefined4 *)(param_1 + 0x3b90 + param_3 * 4) = *(undefined4 *)(param_1 + 0xe3c + param_3 * 4);
  return local_64;
}

