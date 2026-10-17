
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004ee500(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  char *pcVar12;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8 [6];
  float local_1b0;
  float local_1ac;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  float local_188 [9];
  float local_164 [4];
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined1 local_134 [12];
  undefined1 local_128 [48];
  undefined1 local_f8 [48];
  undefined1 local_c8 [200];
  
  pfVar7 = local_1c8 + 2;
  iVar9 = 3;
  do {
    pfVar7[-2] = 0.0;
    pfVar7[-1] = 0.0;
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 3;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pfVar7 = local_188 + 2;
  iVar9 = 3;
  do {
    pfVar7[-2] = 0.0;
    pfVar7[-1] = 0.0;
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 3;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_194 = DAT_007015b0;
  local_190 = DAT_007015b4;
  local_18c = DAT_007015b8;
  FUN_005aaad0(&local_1d4,param_2);
  iVar9 = *(int *)(param_1 + 0x8cc);
  pfVar7 = (float *)(&DAT_00696fa4 + iVar9 * 0x25c);
  local_188[0] = *pfVar7 * *(float *)(param_1 + 0x2790) +
                 *(float *)(param_1 + 0x27a8) * (float)(&DAT_00696fac)[iVar9 * 0x25c] +
                 *(float *)(param_1 + 0x279c) * (float)(&DAT_00696fa8)[iVar9 * 0x25c] +
                 *(float *)(param_1 + 0x27b4);
  local_188[1] = *(float *)(param_1 + 0x27ac) * (float)(&DAT_00696fac)[iVar9 * 0x25c] +
                 *(float *)(param_1 + 0x27a0) * (float)(&DAT_00696fa8)[iVar9 * 0x25c] +
                 *(float *)(param_1 + 0x2794) * *pfVar7 + *(float *)(param_1 + 0x27b8);
  iVar10 = *(int *)(param_1 + 0xdd4);
  local_188[2] = *(float *)(param_1 + 0x27b0) * (float)(&DAT_00696fac)[iVar9 * 0x25c] +
                 *(float *)(param_1 + 0x27a4) * (float)(&DAT_00696fa8)[iVar9 * 0x25c] +
                 *(float *)(param_1 + 0x2798) * *pfVar7 + *(float *)(param_1 + 0x27bc);
  if (iVar10 == 3) {
    return ((float10)*(float *)(param_1 + 0x1cc0) * (float10)*(float *)(param_1 + 0x2640) *
           (float10)_DAT_0064c980) / ((float10)*(float *)(param_1 + 0x1cc0) - (float10)local_188[1])
    ;
  }
  if (iVar10 == 5) {
    fVar11 = (float10)*(float *)(param_1 + 0x1cc0) + (float10)*(float *)(param_1 + 0x1cd8);
    return ((float10)_DAT_0064a660 /
           (fVar11 - ((float10)*(float *)(param_1 + 0x1cf0) + (float10)*(float *)(param_1 + 0x1cf0))
           )) * fVar11 * (float10)*(float *)(param_1 + 0x2640) * (float10)_DAT_0064c6a8;
  }
  FUN_0061c369(local_c8,s__Car_V__getSemiTrailerSaddleLoad_006735c0,iVar10 + -1,
               s_but_not_1_or_3_006735f4);
  FUN_004e1e9c(local_c8);
  pfVar7 = local_164 + 2;
  iVar9 = 4;
  do {
    pfVar7[-2] = 0.0;
    pfVar7[-1] = 0.0;
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 3;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_1a4 = local_1cc * DAT_00701594 - local_1d0 * DAT_00701598;
  local_1a0 = local_1d4 * DAT_00701598 - local_1cc * DAT_00701590;
  local_19c = local_1d0 * DAT_00701590 - local_1d4 * DAT_00701594;
  FUN_005aabc0(&local_1a4);
  fVar11 = (float10)FUN_0061e4b0();
  uVar6 = FUN_005ab380(local_128,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_1a4,local_1a0,
                       local_19c,(float)fVar11);
  pfVar7 = (float *)FUN_005aba00(local_f8,uVar6);
  pfVar8 = local_164;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  iVar9 = 0;
  do {
    pfVar7 = (float *)((int)local_188 + iVar9);
    pfVar8 = (float *)FUN_004e5bf2(local_134,&local_194,&local_1d4,pfVar7);
    fVar3 = local_164[3];
    *pfVar7 = *pfVar8;
    *(float *)((int)local_188 + iVar9 + 4) = pfVar8[1];
    *(float *)((int)local_188 + iVar9 + 8) = pfVar8[2];
    iVar10 = iVar9 + 0xc;
    fVar1 = local_148 * *(float *)((int)local_188 + iVar9 + 8);
    fVar2 = local_164[1] * *pfVar7;
    *(float *)((int)local_1c8 + iVar9) =
         local_164[0] * *pfVar7 +
         local_14c * *(float *)((int)local_188 + iVar9 + 8) +
         fVar3 * *(float *)((int)local_188 + iVar9 + 4);
    fVar3 = local_144 * *(float *)((int)local_188 + iVar9 + 8);
    fVar4 = local_164[2] * *pfVar7;
    *(float *)((int)local_1c8 + iVar9 + 4) =
         local_154 * *(float *)((int)local_188 + iVar9 + 4) + fVar2 + fVar1;
    *(float *)((int)local_1c8 + iVar9 + 8) =
         local_150 * *(float *)((int)local_188 + iVar9 + 4) + fVar4 + fVar3;
    iVar9 = iVar10;
  } while (iVar10 < 0x24);
  fVar1 = local_1c8[1] - local_1c8[4];
  local_198 = 0.0;
  fVar2 = local_1c8[0] - local_1b0;
  fVar4 = local_1c8[0] - local_1c8[3];
  fVar3 = local_1c8[1] - local_1ac;
  fVar5 = fVar2 * fVar1 - fVar3 * fVar4;
  if ((float)_DAT_0064a920 < ABS(fVar5)) {
    fVar5 = ((local_1c8[1] * local_1c8[3] - local_1c8[0] * local_1c8[4]) *
             *(float *)(param_1 + 0x2640) * _DAT_0064c988) / fVar5;
    if (ABS(fVar4) <= (float)_DAT_0064a920) {
      if (ABS(local_1c8[4] - local_1c8[1]) <= (float)_DAT_0064a920) {
        FUN_004e1e9c(s_getSemiTrailerLoad___r1__r2__0__006735a0);
      }
      else {
        local_198 = -((fVar3 * fVar5 - local_1c8[1] * *(float *)(param_1 + 0x2640) * _DAT_0064c988)
                     / fVar1);
      }
    }
    else {
      local_198 = -((fVar2 * fVar5 - local_1c8[0] * *(float *)(param_1 + 0x2640) * _DAT_0064c988) /
                   fVar4);
    }
    return (float10)((*(float *)(param_1 + 0x2640) * _DAT_0064c980 - local_198) - fVar5);
  }
  if (((float)_DAT_0064a920 <= ABS(fVar4)) || ((float)_DAT_0064a920 <= ABS(fVar1))) {
    if (((float)_DAT_0064a920 <= ABS(fVar2)) || ((float)_DAT_0064a920 <= ABS(fVar3))) {
      if (((float)_DAT_0064a920 <= ABS(fVar4)) ||
         ((float)_DAT_0064a920 <= ABS(local_1c8[3] - local_1b0))) {
        if (((float)_DAT_0064a920 <= ABS(fVar1)) ||
           ((float)_DAT_0064a920 <= ABS(local_1c8[4] - local_1ac))) goto LAB_004eea7a;
        pcVar12 = s_getSemiTrailerLoad___r1y__r2y__r_0067351c;
      }
      else {
        pcVar12 = s_getSemiTrailerLoad___r1x__r2x__r_00673540;
      }
    }
    else {
      pcVar12 = s_getSemiTrailerLoad___r1__r3_00673564;
    }
  }
  else {
    pcVar12 = s_getSemiTrailerLoad___r1__r2__1__00673580;
  }
  FUN_004e1e9c(pcVar12);
LAB_004eea7a:
  return (float10)0.0;
}

