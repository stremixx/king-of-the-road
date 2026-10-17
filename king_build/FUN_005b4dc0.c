
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005b4dc0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float *pfVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  int *piVar24;
  undefined4 *puVar25;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154 [15];
  undefined1 local_118 [40];
  undefined1 local_f0 [48];
  float local_c0 [12];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  pfVar16 = local_c0 + 2;
  iVar20 = 4;
  do {
    pfVar16[-2] = 0.0;
    pfVar16[-1] = 0.0;
    *pfVar16 = 0.0;
    pfVar16 = pfVar16 + 3;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  pfVar16 = local_154 + 0xf;
  pfVar22 = (float *)&DAT_00701550;
  pfVar23 = local_c0;
  for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
    *pfVar23 = *pfVar22;
    pfVar22 = pfVar22 + 1;
    pfVar23 = pfVar23 + 1;
  }
  iVar20 = 4;
  do {
    pfVar16[-2] = 0.0;
    pfVar16[-1] = 0.0;
    *pfVar16 = 0.0;
    pfVar16 = pfVar16 + 3;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  iVar21 = 0;
  pfVar16 = (float *)&DAT_00701550;
  pfVar22 = local_154 + 0xd;
  for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
    *pfVar22 = *pfVar16;
    pfVar16 = pfVar16 + 1;
    pfVar22 = pfVar22 + 1;
  }
  pfVar16 = param_2 + 1;
  puVar17 = (undefined4 *)(param_1 + 0x628);
  pfVar22 = (float *)(param_1 + 0x4cc);
  do {
    iVar20 = *(int *)(param_1 + 0x2020) * 0x30;
    pfVar23 = (float *)(iVar20 + 0x8c0 + param_1);
    fVar1 = pfVar23[7];
    fVar2 = pfVar16[1];
    fVar3 = pfVar23[1];
    fVar4 = pfVar16[-1];
    fVar5 = pfVar23[4];
    fVar6 = *pfVar16;
    fVar7 = pfVar23[10];
    fVar8 = pfVar23[8];
    fVar9 = pfVar16[1];
    fVar10 = pfVar23[2];
    fVar11 = pfVar16[-1];
    fVar12 = pfVar23[5];
    fVar13 = *pfVar16;
    fVar14 = pfVar23[0xb];
    pfVar22[-1] = pfVar16[-1] * *pfVar23 +
                  *(float *)(iVar20 + 0x8cc + param_1) * *pfVar16 +
                  *(float *)(iVar20 + 0x8d8 + param_1) * pfVar16[1] + pfVar23[9];
    *pfVar22 = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
    pfVar22[1] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
    puVar17[-0x16] = 0;
    *puVar17 = 0;
    puVar17[0x16] = 0;
    puVar17[0x2d] = iVar21;
    iVar21 = iVar21 + 1;
    pfVar16 = pfVar16 + 3;
    puVar17 = puVar17 + 1;
    pfVar22 = pfVar22 + 3;
  } while (iVar21 < 4);
  if (param_3 != 0) {
    local_160 = *param_2 - param_2[3];
    local_15c = param_2[1] - param_2[4];
    FUN_005aabf0((param_2[8] - param_2[5]) * local_15c -
                 (param_2[7] - param_2[4]) * (param_2[2] - param_2[5]),
                 (param_2[2] - param_2[5]) * (param_2[6] - param_2[3]) -
                 (param_2[8] - param_2[5]) * local_160,
                 (param_2[7] - param_2[4]) * local_160 - local_15c * (param_2[6] - param_2[3]),
                 local_154,&local_164);
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    uVar15 = FUN_005ab5d0(local_154 + 1,-local_164);
    uVar15 = FUN_005ab7d0(local_30,-local_154[0],uVar15);
    uVar15 = FUN_005ab330(local_90,-fVar1,-fVar2,-fVar3,uVar15);
    uVar15 = FUN_005ab130(local_60,uVar15);
    pfVar16 = (float *)FUN_005ab130(local_f0,uVar15);
    pfVar22 = local_154 + 0xd;
    for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
      *pfVar22 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      pfVar22 = pfVar22 + 1;
    }
  }
  piVar24 = (int *)(param_1 + 0x6dc);
  iVar20 = param_1 + 0x734;
  *(int *)(param_1 + 0x78c) = iVar21;
  uVar15 = FUN_005ae580(0,iVar21,iVar20,piVar24,4);
  uVar15 = FUN_005ae580(0,uVar15,piVar24,iVar20,0x10);
  uVar15 = FUN_005ae580(0,uVar15,iVar20,piVar24,8);
  iVar20 = FUN_005ae580(0,uVar15,piVar24,iVar20,2);
  if (iVar20 == 0) {
    return 0;
  }
  iVar21 = 0;
  *(int *)(param_1 + 0x78c) = iVar20;
  local_174 = 1.0;
  local_16c = -1.0;
  local_170 = 1.0;
  local_168 = -1.0;
  if (0 < iVar20) {
    do {
      pfVar16 = (float *)(param_1 + (*piVar24 + 0x66) * 0xc);
      local_160 = *pfVar16;
      local_15c = pfVar16[1];
      local_158 = pfVar16[2];
      if (local_15c < (float)_DAT_0064a5a8) {
        iVar20 = *(int *)(param_1 + 0x2024) * 0x30 + param_1;
        puVar17 = (undefined4 *)(iVar20 + 0x10a0);
        puVar25 = (undefined4 *)(iVar20 + 0x10d0);
        for (iVar21 = 0xc; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar25 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar25 = puVar25 + 1;
        }
        *(int *)(param_1 + 0x2024) = *(int *)(param_1 + 0x2024) + 1;
        FUN_005adc90(&DAT_00701550,1);
        *(undefined4 *)(param_1 + 0x7b0 + *(int *)(param_1 + 0x2028) * 4) =
             *(undefined4 *)(param_1 + 0x7a0);
        *(undefined4 *)(param_1 + 0x800 + *(int *)(param_1 + 0x2028) * 4) =
             *(undefined4 *)(param_1 + 0x7a4);
        *(undefined4 *)(param_1 + 0x850 + *(int *)(param_1 + 0x2028) * 4) =
             *(undefined4 *)(param_1 + 0x7a8);
        *(undefined4 *)(param_1 + 0x8a0 + *(int *)(param_1 + 0x2028) * 4) =
             *(undefined4 *)(param_1 + 0x7ac);
        goto LAB_005b57b0;
      }
      fVar1 = local_160 / local_15c;
      local_15c = local_158 / local_15c;
      if (fVar1 < local_174) {
        local_174 = fVar1;
      }
      if (local_16c < fVar1) {
        local_16c = fVar1;
      }
      if (local_15c < local_170) {
        local_170 = local_15c;
      }
      if (local_168 < local_15c) {
        local_168 = local_15c;
      }
      iVar21 = iVar21 + 1;
      piVar24 = piVar24 + 1;
    } while (iVar21 < iVar20);
    if (_DAT_0064b240 < local_174) {
      return 0;
    }
    if (_DAT_0064b240 < local_170) {
      return 0;
    }
    if (local_16c < _DAT_0064b928) {
      return 0;
    }
    if (local_168 < _DAT_0064b928) {
      return 0;
    }
    if (local_174 < _DAT_0064b928) {
      local_174 = -1.0;
    }
    if (_DAT_0064b240 < local_16c) {
      local_16c = 1.0;
    }
    if (local_170 < _DAT_0064b928) {
      local_170 = -1.0;
    }
    if (_DAT_0064b240 < local_168) {
      local_168 = 1.0;
    }
    if (local_174 < local_16c) {
      if (local_168 <= local_170) {
        return 0;
      }
      pfVar16 = local_154;
      iVar20 = 4;
      local_164 = (local_168 + local_170) * _DAT_0064b248;
      do {
        pfVar16 = (float *)((int)pfVar16 + 0xc);
        pfVar16[-2] = 0.0;
        pfVar16[-1] = 0.0;
        *pfVar16 = 0.0;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      local_154[1] = 1.0;
      local_154[4] = -((local_16c + local_174) * _DAT_0064b248);
      local_154[7] = 0.0;
      local_154[2] = 0.0;
      local_154[3] = 0.0;
      local_154[6] = -local_164;
      local_154[5] = 1.0;
      local_154[8] = 0.0;
      local_154[9] = 1.0;
      local_154[10] = 0.0;
      pfVar16 = local_154;
      local_154[0xb] = 0.0;
      local_154[0xc] = 0.0;
      pfVar22 = local_c0;
      for (iVar20 = 0xc; pfVar16 = (float *)((int)pfVar16 + 4), iVar20 != 0; iVar20 = iVar20 + -1) {
        *pfVar22 = *pfVar16;
        pfVar22 = pfVar22 + 1;
      }
      local_154[0] = local_168 - local_170;
      uVar15 = FUN_005ab580(local_f0,_DAT_0064b3fc / (local_16c - local_174),0x3f800000,
                            _DAT_0064b3fc / local_154[0]);
      FUN_005ab2f0(uVar15);
      if (0x11 < *(int *)(param_1 + 0x2024)) {
        return 0;
      }
      if (0x11 < *(int *)(param_1 + 0x2020)) {
        return 0;
      }
      if (0x11 < *(int *)(param_1 + 0x202c)) {
        return 0;
      }
      puVar17 = (undefined4 *)
                FUN_005ab130(local_f0,*(int *)(param_1 + 0x2024) * 0x30 + 0x10a0 + param_1,local_c0)
      ;
      puVar25 = (undefined4 *)(*(int *)(param_1 + 0x2024) * 0x30 + 0x10d0 + param_1);
      for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar25 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar25 = puVar25 + 1;
      }
      *(int *)(param_1 + 0x2024) = *(int *)(param_1 + 0x2024) + 1;
      if (param_3 == 0) {
        uVar15 = 0;
        iVar20 = *(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1;
      }
      else {
        pfVar16 = local_154;
        iVar20 = 4;
        do {
          pfVar16 = (float *)((int)pfVar16 + 0xc);
          pfVar16[-2] = 0.0;
          pfVar16[-1] = 0.0;
          *pfVar16 = 0.0;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        local_154[1] = -1.0;
        local_154[2] = 0.0;
        local_154[4] = 0.0;
        local_154[5] = 1.0;
        local_154[3] = 0.0;
        local_154[7] = 0.0;
        local_154[8] = 0.0;
        local_154[6] = 0.0;
        local_154[10] = 0.0;
        local_154[0xb] = 0.0;
        local_154[9] = 1.0;
        local_154[0xc] = 0.0;
        uVar15 = FUN_005aba00(local_f0,local_154 + 0xd);
        uVar15 = FUN_005ab130(local_60,local_154 + 0xd,local_154 + 1,uVar15);
        pfVar16 = (float *)FUN_005ab130(local_90,uVar15);
        uVar15 = 0;
        iVar20 = *(int *)(param_1 + 0x202c);
        pfVar22 = local_154 + 0xd;
        for (iVar21 = 0xc; iVar21 != 0; iVar21 = iVar21 + -1) {
          *pfVar22 = *pfVar16;
          pfVar16 = pfVar16 + 1;
          pfVar22 = pfVar22 + 1;
        }
        iVar20 = FUN_005ab130(local_f0,iVar20 * 0x30 + 0x1460 + param_1,local_154 + 0xd,0);
      }
      FUN_005adc90(iVar20,uVar15);
      fVar1 = *(float *)(param_1 + 0x7a8);
      local_164 = fVar1;
      iVar20 = __ftol();
      local_164 = *(float *)(param_1 + 0x7ac);
      iVar21 = __ftol();
      iVar18 = __ftol();
      iVar18 = 0x8000 - iVar18;
      iVar19 = __ftol();
      iVar19 = 0x8000 - iVar19;
      if ((int)fVar1 * 2 < iVar20 + iVar18 * 2) {
        iVar18 = (int)fVar1 - (iVar20 >> 1);
      }
      if ((int)local_164 * 2 < iVar21 + iVar19 * 2) {
        iVar19 = (int)local_164 - (iVar21 >> 1);
      }
      *(int *)(param_1 + 0x7ac) = iVar19;
      iVar20 = *(int *)(param_1 + 0x7a0) + iVar20;
      *(int *)(param_1 + 0x7a0) = iVar20;
      *(int *)(param_1 + 0x7a8) = iVar18;
      *(int *)(param_1 + 0x7a4) = *(int *)(param_1 + 0x7a4) + iVar21;
      *(int *)(param_1 + 0x7b0 + *(int *)(param_1 + 0x2028) * 4) = iVar20;
      *(undefined4 *)(param_1 + 0x800 + *(int *)(param_1 + 0x2028) * 4) =
           *(undefined4 *)(param_1 + 0x7a4);
      *(undefined4 *)(param_1 + 0x850 + *(int *)(param_1 + 0x2028) * 4) =
           *(undefined4 *)(param_1 + 0x7a8);
      *(undefined4 *)(param_1 + 0x8a0 + *(int *)(param_1 + 0x2028) * 4) =
           *(undefined4 *)(param_1 + 0x7ac);
LAB_005b57b0:
      *(int *)(param_1 + 0x2028) = *(int *)(param_1 + 0x2028) + 1;
      return 1;
    }
  }
  return 0;
}

