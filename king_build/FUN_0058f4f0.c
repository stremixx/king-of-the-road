
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058f4f0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  float10 fVar12;
  float fStack_170;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined4 uStack_14c;
  float fStack_144;
  float fStack_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_11c;
  float local_118;
  float fStack_114;
  int iStack_9c;
  undefined1 local_38 [52];
  
  pfVar10 = (float *)(param_1 + 0x68);
  iVar8 = param_1[0xdf];
  local_168 = 1.0;
  local_118 = *pfVar10 * *pfVar10 +
              (float)param_1[0x69] * (float)param_1[0x69] +
              (float)param_1[0x6a] * (float)param_1[0x6a];
  local_150 = (float)param_1[0x6b] * (float)param_1[0x6b] +
              (float)param_1[0x6c] * (float)param_1[0x6c] +
              (float)param_1[0x6d] * (float)param_1[0x6d];
  if (((iVar8 == 0) || ((float)param_1[0xf6] <= (float)_DAT_0064c308)) ||
     (iVar9 = param_1[0x503], iVar9 == 0)) {
    local_168 = -1.0;
  }
  else if (0 < iVar9) {
    pfVar7 = (float *)(param_1 + 0x3e6);
    do {
      fVar1 = ((float)param_1[0x81] * *pfVar7 +
              (float)param_1[0x84] * pfVar7[1] + (float)param_1[0x7e] * pfVar7[-1]) *
              (float)param_1[0xf5] +
              (float)param_1[0xf4] *
              ((float)param_1[0x80] * *pfVar7 +
              (float)param_1[0x83] * pfVar7[1] + (float)param_1[0x7d] * pfVar7[-1]) +
              ((float)param_1[0x85] * pfVar7[1] +
              (float)param_1[0x7f] * pfVar7[-1] + *pfVar7 * (float)param_1[0x82]) *
              (float)param_1[0xf6];
      if (fVar1 < local_168) {
        local_168 = fVar1;
      }
      pfVar7 = pfVar7 + 7;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((((param_1[299] & 0x100U) == 0) && (param_1[0x3e2] == 2)) && (iVar8 != 0)) {
    FUN_004e2844();
    piVar6 = (int *)FUN_005da010(local_38,(double)local_130,(double)local_12c,(double)local_128,
                                 (double)local_124,0,0,0,0);
    piVar11 = param_1 + 0x7d;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar11 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar11 = piVar11 + 1;
    }
    FUN_005902a0(0);
  }
  else if ((param_1[299] & 8U) == 0) {
    (**(code **)(*param_1 + 0x8c))(param_1[200],param_1 + 0x7d);
  }
  else if (((iVar8 == 0) || ((float)_DAT_0064a948 < local_118)) ||
          (((float)_DAT_0064a590 < local_150 || ((float)_DAT_0064f800 < local_168)))) {
    fVar1 = (float)param_1[100];
    local_160 = 0.0;
    local_15c = 0.0;
    local_158 = 0.0;
    local_154 = fVar1;
    local_150 = fVar1;
    iVar8 = FUN_0058c7f0(&local_160);
    fVar4 = local_150;
    while (local_150 = fVar4, iVar8 != 0) {
      local_12c = local_15c * (float)param_1[0x81] +
                  local_158 * (float)param_1[0x84] + local_160 * (float)param_1[0x7e] +
                  (float)param_1[0x87];
      local_128 = local_160 * (float)param_1[0x7f] +
                  local_15c * (float)param_1[0x82] + local_158 * (float)param_1[0x85] +
                  (float)param_1[0x88];
      fVar2 = (local_160 * (float)param_1[0x7d] +
               local_15c * (float)param_1[0x80] + local_158 * (float)param_1[0x83] +
              (float)param_1[0x86]) - (float)param_1[iVar8 * 0x34 + 0x513];
      local_138 = local_12c - (float)param_1[iVar8 * 0x34 + 0x514];
      local_134 = local_128 - (float)param_1[iVar8 * 0x34 + 0x515];
      fVar3 = ABS(fVar2 * (float)param_1[iVar8 * 0x34 + 0x516] +
                  (float)param_1[iVar8 * 0x34 + 0x517] * local_138 +
                  (float)param_1[iVar8 * 0x34 + 0x518] * local_134);
      local_168 = fVar1;
      fVar5 = local_154;
      if (((((param_1[iVar8 * 0x34 + 0x523] == 0) &&
            (local_134 * local_134 + local_138 * local_138 + fVar2 * fVar2 < (float)param_1[100]))
           && (fVar3 < (float)param_1[100] * (float)_DAT_0064a6d0)) &&
          ((local_168 = local_154, fVar5 = fVar4, local_150 = fVar3, fVar4 <= fVar3 &&
           (fVar5 = fVar3, local_150 = fVar4, local_154 <= fVar3)))) &&
         (local_168 = fVar1, fVar5 = local_154, fVar3 < fVar1)) {
        local_168 = fVar3;
      }
      local_154 = fVar5;
      iVar8 = FUN_0058c7f0(&local_160);
      fVar1 = local_168;
      fVar4 = local_150;
    }
    if (fVar1 < (float)param_1[100] * (float)_DAT_0064c328) {
      local_150 = 4.056482e+29;
      uStack_14c = 0x3fef0a3d;
      FUN_004e1fd9();
      fVar12 = (float10)FUN_0061d200();
      local_150 = (float)fVar12;
      if (local_118 < _DAT_0064b240) {
        FUN_005aad10(&local_130,local_150);
        (**(code **)(*param_1 + 0x90))(pfVar10,s_Move_3__1_0067ce64);
      }
    }
    (**(code **)(*param_1 + 0x8c))(param_1[200],param_1 + 0x7d);
  }
  else {
    (**(code **)(*param_1 + 0x8c))(param_1[0xc9],param_1 + 0x89);
    if ((*(byte *)(param_1 + 299) & 2) != 0) {
      iVar8 = param_1[0x503];
      if (iVar8 != 0) {
        if (((param_1[0xdf] == 0) || ((float)param_1[0xf6] <= (float)_DAT_0064c308)) ||
           (param_1[0x101] != 0)) {
          iVar9 = 0;
          fStack_170 = 0.0;
          if (0 < iVar8) {
            pfVar10 = (float *)(param_1 + 0x3ea);
            do {
              if (1 < iVar9) break;
              fVar1 = pfVar10[-1] * pfVar10[-1] + pfVar10[1] * pfVar10[1] + *pfVar10 * *pfVar10;
              if (fStack_170 < fVar1) {
                fStack_170 = fVar1;
              }
              iVar9 = iVar9 + 1;
              pfVar10 = pfVar10 + 7;
            } while (iVar9 < iVar8);
          }
          FUN_005eebf0();
          fStack_170 = SQRT(fStack_170);
          fVar1 = fStack_170 + fStack_170;
          local_138 = fVar1 * DAT_00701590 + (float)param_1[0x86];
          local_134 = fVar1 * DAT_00701594 + (float)param_1[0x87];
          local_160 = fVar1 * DAT_00701598 + (float)param_1[0x88];
          fStack_170 = fStack_170 * _DAT_0064c2e8;
          fStack_144 = fStack_170 * DAT_00701590;
          fStack_140 = fStack_170 * DAT_00701594;
          local_158 = local_138 - fStack_144;
          local_154 = local_134 - fStack_140;
          local_150 = local_160 - fStack_170 * DAT_00701598;
          local_130 = local_160;
          local_11c = local_158;
          local_118 = local_154;
          fStack_114 = local_150;
          iVar8 = FUN_004e5078();
          if (((iVar8 != 0) && (iStack_9c == 0)) && ((float)_DAT_0064c308 < (float)param_1[0xf6])) {
            (**(code **)(*param_1 + 0xe0))();
          }
        }
        else {
          FUN_005902a0(0);
        }
      }
      if ((param_1[0xdf] == 0) || (iVar8 = FUN_0057c0a0(param_1[0x101]), iVar8 == 0)) {
        param_1[0x12a] = 1;
      }
    }
  }
  if (DAT_006f54c8 != 0) {
    param_1[0xdf] = param_1[0xdf] | 0x20;
  }
  if ((param_1[0xe0] == 0) && (param_1[0xdf] == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
  }
  param_1[0xe0] = iVar8;
  param_1[0xe1] = param_1[0xdf];
  return;
}

