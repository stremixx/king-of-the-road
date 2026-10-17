
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004f2880(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  short *psVar10;
  float local_130;
  int local_12c;
  short *local_124;
  float local_120;
  float afStack_c4 [9];
  float local_a0;
  float local_9c;
  float afStack_98 [8];
  float local_78 [8];
  float afStack_58 [8];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  float afStack_20 [8];
  
  FUN_004e1fd9();
  iVar8 = 0;
  *(uint *)(param_1 + 0x1abc) = (uint)((float)_DAT_0064a5a8 < *(float *)(param_1 + 0x29dc));
  iVar2 = 0;
  local_130 = 0.0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar9 = (undefined4 *)(param_1 + 0x19d4);
    pfVar3 = (float *)(param_1 + 0x2094);
    do {
      *puVar9 = 0;
      local_78[iVar2] = 0.0;
      afStack_98[iVar2] = 0.0;
      afStack_c4[iVar2] = 0.0;
      pfVar3[0x48] = DAT_007015b0;
      afStack_58[iVar2] = 0.0;
      iVar2 = iVar2 + 1;
      pfVar3[0x49] = DAT_007015b4;
      puVar9 = puVar9 + 1;
      pfVar3[0x4a] = DAT_007015b8;
      *pfVar3 = DAT_007015b0;
      pfVar3[1] = DAT_007015b4;
      pfVar3[2] = DAT_007015b8;
      pfVar3 = pfVar3 + 3;
    } while (iVar2 < *(int *)(param_1 + 0xdd4));
  }
  iVar2 = *(int *)(param_1 + 0xdd4);
  local_120 = 0.01;
  if (0 < iVar2) {
    pfVar5 = local_78;
    pfVar3 = (float *)(param_1 + 0xd20);
    psVar10 = (short *)(param_1 + 0x19a4);
    iVar7 = iVar2;
    do {
      if (*psVar10 == 0) {
        fVar6 = pfVar3[0x654];
        fVar4 = *pfVar3;
        fVar1 = pfVar3[0x3a5];
        *pfVar5 = fVar6 * fVar4;
        if (fVar1 != 0.0) {
          local_120 = fVar6 * fVar4 + local_120;
        }
      }
      psVar10 = psVar10 + 1;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (0 < iVar2) {
    local_124 = (short *)(param_1 + 0x19a4);
    pfVar3 = (float *)(param_1 + 0x1a7c);
    pfVar5 = (float *)(param_1 + 0x190c);
    do {
      if (*local_124 == 0) {
        if (pfVar3[0x4e] != 0.0) {
          afStack_98[iVar8] = (local_78[iVar8] * *(float *)(param_1 + 0x1c94)) / local_120;
        }
        fVar6 = *pfVar3;
        iVar2 = *(int *)(param_1 + 0x1abc);
        afStack_58[iVar8] = fVar6 * local_78[iVar8];
        if (iVar2 != 0) {
          local_12c = -1;
          if (_DAT_0064b254 <= *pfVar3) {
            local_12c = 1;
          }
          afStack_c4[iVar8] = (float)local_12c * pfVar3[0x87] * *(float *)(param_1 + 0x29dc);
        }
        local_12c = 1;
        if (*(float *)(param_1 + 0x1c) * pfVar5[-2] +
            *(float *)(param_1 + 0x20) * pfVar5[-1] + *(float *)(param_1 + 0x24) * *pfVar5 <
            (float)_DAT_0064a668) {
          afStack_c4[iVar8] = -afStack_c4[iVar8];
          local_12c = -1;
        }
        fVar4 = afStack_98[iVar8] - afStack_c4[iVar8];
        afStack_20[iVar8] = fVar4;
        if (ABS(fVar4) <= ABS(fVar6 * local_78[iVar8])) {
          if (ABS(afStack_c4[iVar8]) <= ABS(afStack_98[iVar8])) {
            afStack_98[iVar8] = fVar4;
            afStack_c4[iVar8] = 0.0;
          }
          else {
            afStack_98[iVar8] = 0.0;
            afStack_c4[iVar8] = -((float)local_12c * fVar4);
          }
          fVar6 = afStack_c4[iVar8];
          local_a0 = -pfVar5[-0x3b1];
          local_9c = -pfVar5[-0x3b0];
          pfVar5[0x22a] = -pfVar5[-0x3b2] * fVar6;
          pfVar5[0x22b] = -pfVar5[-0x3b1] * fVar6;
          pfVar5[0x22c] = -pfVar5[-0x3b0] * fVar6;
          fVar6 = afStack_98[iVar8];
          if (*(float *)(param_1 + 0xa38) * pfVar5[-0x3b2] +
              *(float *)(param_1 + 0xa3c) * pfVar5[-0x3b1] +
              *(float *)(param_1 + 0xa40) * pfVar5[-0x3b0] <= (float)_DAT_0064a668) {
            fVar6 = -fVar6;
            fVar4 = fVar6 * pfVar5[-0x3b0];
            pfVar5[0x1e2] = fVar6 * pfVar5[-0x3b2];
            pfVar5[0x1e3] = fVar6 * pfVar5[-0x3b1];
          }
          else {
            fVar4 = fVar6 * pfVar5[-0x3b0];
            pfVar5[0x1e2] = fVar6 * pfVar5[-0x3b2];
            pfVar5[0x1e3] = fVar6 * pfVar5[-0x3b1];
          }
          fVar6 = afStack_c4[iVar8];
          pfVar5[0x1e4] = fVar4;
        }
        else {
          if (ABS(afStack_c4[iVar8]) <= ABS(afStack_98[iVar8])) {
            *(undefined1 *)(param_1 + 0x19c4 + iVar8) = 1;
            FUN_005aad10(local_38,0x3dcccccd);
            FUN_005aad10(local_2c,0x3dcccccd);
            fVar6 = local_78[iVar8];
            if (afStack_98[iVar8] <= _DAT_0064b254) {
              fVar6 = -fVar6;
              pfVar5[0x1e2] = fVar6 * pfVar5[-0x39a];
              pfVar5[0x1e3] = fVar6 * pfVar5[-0x399];
              pfVar5[0x1e4] = fVar6 * pfVar5[-0x398];
              pfVar3[-0x2a] = -NAN;
            }
            else {
              pfVar5[0x1e2] = fVar6 * pfVar5[-0x39a];
              pfVar5[0x1e3] = fVar6 * pfVar5[-0x399];
              pfVar5[0x1e4] = fVar6 * pfVar5[-0x398];
              pfVar3[-0x2a] = 1.4013e-45;
            }
            local_130 = local_130 + afStack_c4[iVar8];
            goto LAB_004f2e2e;
          }
          if ((float)_DAT_0064a660 < ABS(*(float *)(param_1 + 0xdc8))) {
            *(undefined1 *)(param_1 + 0x19c4 + iVar8) = 1;
            pfVar3[-0x2a] = -NAN;
          }
          if (_DAT_0064b240 <= pfVar3[-0x46]) {
            fVar4 = -local_78[iVar8];
            fVar6 = fVar4 * *pfVar5;
            pfVar5[0x22a] = fVar4 * pfVar5[-2];
            pfVar5[0x22b] = fVar4 * pfVar5[-1];
          }
          else {
            fVar4 = -(pfVar3[-0x46] * local_78[iVar8]);
            fVar6 = fVar4 * *pfVar5;
            pfVar5[0x22a] = fVar4 * pfVar5[-2];
            pfVar5[0x22b] = fVar4 * pfVar5[-1];
          }
          pfVar5[0x22c] = fVar6;
          fVar6 = afStack_58[iVar8];
          pfVar5[0x1fa] = DAT_007015b0;
          pfVar5[0x1fb] = DAT_007015b4;
          pfVar5[0x1fc] = DAT_007015b8;
          pfVar5[0x212] = DAT_007015b0;
          pfVar5[0x213] = DAT_007015b4;
          pfVar5[0x214] = DAT_007015b8;
          pfVar3[-0x2f0] = 0.0;
        }
        local_130 = ABS(fVar6) + local_130;
      }
LAB_004f2e2e:
      iVar8 = iVar8 + 1;
      local_124 = local_124 + 1;
      pfVar5 = pfVar5 + 3;
      pfVar3 = pfVar3 + 1;
    } while (iVar8 < *(int *)(param_1 + 0xdd4));
  }
  FUN_004f1d10();
  return (float10)local_130;
}

