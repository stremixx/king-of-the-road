
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00547960(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  float *local_14c;
  float *local_148;
  float *local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120 [4];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [200];
  
  local_ec = DAT_007015b0;
  local_e8 = DAT_007015b4;
  local_e4 = DAT_007015b8;
  local_144 = (float *)0x0;
  local_134 = 0.0;
  local_130 = 0.0;
  local_12c = 0.0;
  pfVar7 = &local_108;
  iVar8 = 3;
  do {
    pfVar7[-2] = 0.0;
    pfVar7[-1] = 0.0;
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  pfVar7 = local_120;
  iVar8 = 2;
  do {
    pfVar7[-2] = 0.0;
    pfVar7[-1] = 0.0;
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x28bc)) {
    local_14c = param_2 + 0x39;
    local_148 = param_3 + 0x2a7;
    pfVar7 = param_3 + 0x58;
    do {
      if (*(short *)(pfVar7 + 6) != 0) {
        FUN_005aae00(&local_128,pfVar7);
        local_144 = (float *)((int)local_144 + 1);
        fVar4 = (float)((int)local_134 + 1);
        if (local_134 == 0.0) {
          local_110 = *pfVar7;
          local_10c = pfVar7[1];
          local_108 = pfVar7[2];
          local_134 = fVar4;
        }
        else {
          fVar5 = (float)((int)local_130 + 1);
          if (local_130 == 0.0) {
            local_104 = *pfVar7;
            local_100 = pfVar7[1];
            local_fc = pfVar7[2];
            local_134 = fVar4;
            local_130 = fVar5;
          }
          else {
            fVar6 = (float)((int)local_12c + 1);
            bVar14 = local_12c == 0.0;
            local_134 = fVar4;
            local_130 = fVar5;
            local_12c = fVar6;
            if (bVar14) {
              local_f8 = *pfVar7;
              local_f4 = pfVar7[1];
              local_f0 = pfVar7[2];
            }
          }
        }
      }
      if ((*(short *)(pfVar7 + 6) == 0) || (*local_148 == 0.0)) {
        *local_14c = 0.0;
      }
      else {
        *local_14c = *local_148;
      }
      iVar8 = iVar8 + 1;
      local_148 = local_148 + 1;
      local_14c = local_14c + 1;
      pfVar7 = pfVar7 + 0x3e;
    } while (iVar8 < *(int *)(param_1 + 0x28bc));
  }
  if (iVar8 < *(int *)(param_1 + 0x28b8)) {
    pfVar7 = param_2 + iVar8 + 0x39;
    do {
      *pfVar7 = 0.0;
      iVar8 = iVar8 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x28b8));
  }
  if (param_2 != (float *)0x0) {
    pfVar11 = param_3;
    pfVar7 = param_2;
    for (iVar8 = 0xc; pfVar7 = pfVar7 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar7 = *pfVar11;
      pfVar11 = pfVar11 + 1;
    }
    iVar8 = 0;
    param_2[0x19] = param_3[0x25e];
    if (0 < *(int *)(param_1 + 0x28bc)) {
      local_148 = param_2 + 0x1a;
      pfVar7 = param_3 + 0x25f;
      do {
        local_148[8] = *pfVar7;
        FUN_0061c369(local_c8,s__Vehicle__make_vehIn___1__s_out__00679050,
                     *(undefined4 *)(*(int *)(param_1 + 0x150) + 0xc),iVar8);
        FUN_004e3a69(*pfVar7,local_c8);
        iVar8 = iVar8 + 1;
        *local_148 = pfVar7[-9];
        local_148 = local_148 + 1;
        pfVar7 = pfVar7 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x28bc));
    }
    local_148 = (float *)0x0;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    if (*(int *)(param_1 + 0x28bc) < *(int *)(param_1 + 0x28b8)) {
      local_148 = (float *)FUN_00547840(param_3,*(int *)(param_1 + 0x28bc),&local_e0,&local_d4);
    }
    iVar8 = *(int *)(param_1 + 0x28bc);
    iVar12 = 0;
    if (*(int *)(param_1 + 0x28b8) != iVar8 && -1 < *(int *)(param_1 + 0x28b8) - iVar8) {
      pfVar7 = (float *)(param_1 + 0x29dc);
      do {
        if (local_148 == (float *)0x0) {
          param_2[iVar8 + iVar12 + 0x1a] = *(float *)(param_1 + 0x2958 + (iVar8 + iVar12) * 4);
        }
        else {
          local_134 = param_3[6] * pfVar7[1] + param_3[3] * *pfVar7 + *param_3 * pfVar7[-1] +
                      param_3[9];
          local_130 = param_3[7] * pfVar7[1] + param_3[1] * pfVar7[-1] + param_3[4] * *pfVar7 +
                      param_3[10];
          local_12c = param_3[2] * pfVar7[-1] + param_3[5] * *pfVar7 + pfVar7[1] * param_3[8] +
                      param_3[0xb];
          local_140 = DAT_00701590 * *param_3 +
                      DAT_00701594 * param_3[3] + DAT_00701598 * param_3[6];
          local_13c = DAT_00701594 * param_3[4] +
                      DAT_00701598 * param_3[7] + DAT_00701590 * param_3[1];
          local_138 = DAT_00701594 * param_3[5] +
                      DAT_00701598 * param_3[8] + DAT_00701590 * param_3[2];
          FUN_004e5d20(&local_128,&local_e0,&local_d4,&local_134,&local_140);
          param_2[*(int *)(param_1 + 0x28bc) + iVar12 + 0x1a] =
               (pfVar7[1] - param_3[0x2b1]) -
               (local_124 * param_3[0x11] + local_120[0] * param_3[0x14] + local_128 * param_3[0xe]
               + param_3[0x17]);
          iVar8 = *(int *)(param_1 + 0x28bc) + iVar12;
          if (param_2[iVar8 + 0x1a] <= *(float *)(param_1 + 0x2958 + iVar8 * 4)) {
            if (param_2[iVar8 + 0x1a] < _DAT_0064b254) {
              param_2[iVar8 + 0x1a] = 0.0;
            }
          }
          else {
            param_2[iVar8 + 0x1a] = *(float *)(param_1 + 0x2958 + iVar8 * 4);
          }
        }
        iVar8 = *(int *)(param_1 + 0x28bc);
        iVar12 = iVar12 + 1;
        pfVar7 = pfVar7 + 3;
      } while (iVar12 < *(int *)(param_1 + 0x28b8) - iVar8);
    }
    param_2[0xd] = param_3[0x18];
    param_2[0xe] = param_3[0x19];
    param_2[0xf] = param_3[0x1a];
    param_2[0x10] = param_3[0x1b];
    param_2[0x11] = param_3[0x1c];
    param_2[0x12] = param_3[0x1d];
    param_2[0x13] = param_3[0x21];
    param_2[0x14] = param_3[0x22];
    param_2[0x15] = param_3[0x23];
    param_2[0x2b] = param_3[0x57];
    if (local_144 == (float *)0x0) {
      param_2[0x2c] = 0.0;
    }
    else if (param_3[0x255] == 0.0) {
      param_2[0x2c] = 1.4013e-45;
      if ((int)local_144 < 3) {
        param_2[0x30] = param_3[0x54];
        param_2[0x31] = param_3[0x55];
        param_2[0x32] = param_3[0x56];
      }
      else {
        local_134 = local_104 - local_110;
        local_130 = local_100 - local_10c;
        local_140 = (local_f0 - local_108) * local_130 -
                    (local_f4 - local_10c) * (local_fc - local_108);
        local_13c = (local_fc - local_108) * (local_f8 - local_110) -
                    (local_f0 - local_108) * local_134;
        local_138 = (local_f4 - local_10c) * local_134 - local_130 * (local_f8 - local_110);
        local_128 = local_140;
        local_124 = local_13c;
        local_120[0] = local_138;
        pfVar7 = (float *)FUN_005aaad0(&local_140,&local_128);
        local_148 = (float *)0x1;
        param_2[0x30] = *pfVar7;
        param_2[0x31] = pfVar7[1];
        param_2[0x32] = pfVar7[2];
        if (param_2[0x30] * param_3[0x54] +
            param_2[0x31] * param_3[0x55] + param_2[0x32] * param_3[0x56] <= (float)_DAT_0064a668) {
          local_148 = (float *)0xffffffff;
        }
        FUN_005aad10(&local_128,(float)(int)local_148);
      }
      if ((float)_DAT_0064a6d0 <= param_2[0x32]) {
        local_138 = (float)(int)local_144;
        local_140 = local_ec / local_138;
        local_13c = local_e8 / local_138;
        param_2[0x2d] = local_140;
        local_138 = local_e4 / local_138;
        param_2[0x2e] = local_13c;
        param_2[0x2f] = local_138;
        param_2[0x33] = param_3[0x24c];
        param_2[0x34] = param_3[0x24d];
        param_2[0x35] = param_3[0x24b];
      }
      else {
        param_2[0x2c] = 0.0;
      }
    }
    if (((((uint)param_2[0x42] & 0x10) != 0) && (DAT_00695158 != 0)) &&
       (iVar8 = 0, 0 < *(int *)(param_1 + 0x28bc))) {
      local_144 = param_3 + 0x2c8;
      pfVar7 = param_3 + 0x2b8;
      do {
        if (*pfVar7 != 0.0) {
          if (DAT_006cdbc8 == 0) {
            if (param_1 == 0) {
              fVar4 = 0.0;
            }
            else {
              fVar4 = (float)(param_1 + 0x110);
            }
            local_144[0x1a] = fVar4;
          }
          uVar9 = iVar8 + 2U & 0x80000003;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
          }
          local_14c = (float *)pfVar7[8];
          if (param_3[uVar9 + 0x2c0] < (float)local_14c) {
            local_14c = (float *)(((float)local_14c + param_3[uVar9 + 0x2c0]) * _DAT_0064b248);
          }
          FUN_004bcd50(local_144,local_14c,iVar8,(int)*pfVar7 + -1);
          *pfVar7 = 0.0;
        }
        iVar8 = iVar8 + 1;
        pfVar7 = pfVar7 + 1;
        local_144 = local_144 + 0x34;
      } while (iVar8 < *(int *)(param_1 + 0x28bc));
    }
    if ((param_3[0x48a] == 0.0) || (((uint)param_2[0x42] & 0x40) == 0)) {
      *(uint *)(param_1 + 0x27b4) = *(uint *)(param_1 + 0x27b4) & 0xffff7fff;
    }
    else {
      if (param_3[0x48a] == 2.8026e-45) {
        uVar9 = *(uint *)(param_1 + 0x27b4) | 0x10000;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x27b4) | 0x8000;
      }
      *(uint *)(param_1 + 0x27b4) = uVar9;
      param_3[0x48a] = 0.0;
    }
    *(uint *)(param_1 + 0x27b4) = *(uint *)(param_1 + 0x27b4) & 0xfffeffff;
  }
  param_2[0x37] = param_3[0x2b5];
  param_2[0x38] = param_3[0x2b6];
  param_2[0x41] = param_3[0x2b7];
  fVar4 = 2.8026e-45;
  if (2 < (int)param_2[0x36]) {
    param_2[0x36] = 2.8026e-45;
  }
  if (param_3[0x487] == 0.0) {
    fVar4 = (float)((int)param_2[0x36] + -1);
  }
  param_2[0x36] = fVar4;
  if ((int)fVar4 < 0) {
    param_2[0x36] = 0.0;
  }
  pfVar7 = (float *)(param_1 + 0x282c);
  piVar13 = (int *)(param_1 + 0x4fb0);
  param_2[0x16] = param_3[0x248];
  param_2[0x17] = param_3[0x249];
  local_14c = (float *)0x0;
  param_2[0x18] = param_3[0x24a];
  *(undefined1 *)(param_1 + 0x2821) = 0;
  do {
    if (*(short *)(param_3 + *piVar13 * 0x3e + 0x5e) == 0) {
      *(undefined1 *)((int)local_14c + 0x2822 + param_1) = 0;
      *pfVar7 = DAT_007015b0;
      pfVar7[1] = DAT_007015b4;
      pfVar7[2] = DAT_007015b8;
      pfVar7[0xc] = DAT_00701590;
      pfVar7[0xd] = DAT_00701594;
      pfVar7[0xe] = DAT_00701598;
    }
    else {
      *(byte *)(param_1 + 0x2821) = *(byte *)(param_1 + 0x2821) | '\x01' << ((byte)local_14c & 0x1f)
      ;
      if (((int *)param_3[*piVar13 * 0x3e + 0x79] == (int *)0x0) ||
         (*(int *)param_3[*piVar13 * 0x3e + 0x79] != 1)) {
        *(undefined1 *)((int)local_14c + 0x2822 + param_1) = 0;
      }
      else {
        *(undefined1 *)((int)local_14c + 0x2822 + param_1) = 1;
      }
      iVar8 = *piVar13;
      pfVar11 = param_3 + iVar8 * 0x3e + 0x58;
      fVar4 = *(float *)(param_1 + 0x264) * *pfVar11 +
              *(float *)(param_1 + 0x27c) * param_3[iVar8 * 0x3e + 0x5a] +
              *(float *)(param_1 + 0x270) * param_3[iVar8 * 0x3e + 0x59] +
              *(float *)(param_1 + 0x288);
      fVar6 = *(float *)(param_1 + 0x280) * pfVar11[2] +
              *(float *)(param_1 + 0x268) * *pfVar11 + *(float *)(param_1 + 0x274) * pfVar11[1] +
              *(float *)(param_1 + 0x28c);
      fVar5 = *(float *)(param_1 + 0x284) * pfVar11[2] +
              *(float *)(param_1 + 0x26c) * *pfVar11 + *(float *)(param_1 + 0x278) * pfVar11[1] +
              *(float *)(param_1 + 0x290);
      local_140 = fVar4 * *(float *)(param_1 + 0x2f4) +
                  fVar6 * *(float *)(param_1 + 0x300) + fVar5 * *(float *)(param_1 + 0x30c) +
                  *(float *)(param_1 + 0x318);
      local_13c = fVar4 * *(float *)(param_1 + 0x2f8) +
                  fVar6 * *(float *)(param_1 + 0x304) + fVar5 * *(float *)(param_1 + 0x310) +
                  *(float *)(param_1 + 0x31c);
      local_138 = fVar4 * *(float *)(param_1 + 0x2fc) +
                  fVar6 * *(float *)(param_1 + 0x308) + fVar5 * *(float *)(param_1 + 0x314) +
                  *(float *)(param_1 + 800);
      *pfVar7 = local_140;
      pfVar7[1] = local_13c;
      pfVar7[2] = local_138;
      pfVar11 = param_3 + *piVar13 * 0x3e + 0x5b;
      fVar1 = *pfVar11 * *(float *)(param_1 + 0x264) +
              *(float *)(param_1 + 0x270) * pfVar11[1] +
              *(float *)(param_1 + 0x27c) * param_3[*piVar13 * 0x3e + 0x5d];
      fVar3 = *(float *)(param_1 + 0x268) * *pfVar11 +
              *(float *)(param_1 + 0x274) * pfVar11[1] + *(float *)(param_1 + 0x280) * pfVar11[2];
      fVar2 = *(float *)(param_1 + 0x26c) * *pfVar11 +
              *(float *)(param_1 + 0x278) * pfVar11[1] + *(float *)(param_1 + 0x284) * pfVar11[2];
      local_134 = fVar1 * *(float *)(param_1 + 0x2f4) +
                  fVar3 * *(float *)(param_1 + 0x300) + fVar2 * *(float *)(param_1 + 0x30c);
      local_130 = fVar1 * *(float *)(param_1 + 0x2f8) +
                  fVar3 * *(float *)(param_1 + 0x304) + fVar2 * *(float *)(param_1 + 0x310);
      fVar4 = *(float *)(param_1 + 0x314);
      fVar5 = *(float *)(param_1 + 0x308);
      fVar6 = *(float *)(param_1 + 0x2fc);
      pfVar7[0xc] = local_134;
      local_12c = fVar1 * fVar6 + fVar3 * fVar5 + fVar2 * fVar4;
      pfVar7[0xd] = local_130;
      pfVar7[0xe] = local_12c;
      if ((float)_DAT_0064e718 < ABS(pfVar7[2] - *(float *)(param_1 + 0x2828))) {
        *(undefined1 *)((int)local_14c + 0x2822 + param_1) = 0;
        *pfVar7 = DAT_007015b0;
        pfVar7[1] = DAT_007015b4;
        pfVar7[2] = DAT_007015b8;
        pfVar7[0xc] = DAT_00701590;
        pfVar7[0xd] = DAT_00701594;
        pfVar7[0xe] = DAT_00701598;
      }
    }
    local_14c = (float *)((int)local_14c + 1);
    piVar13 = piVar13 + 1;
    pfVar7 = pfVar7 + 3;
  } while ((int)local_14c < 4);
  if (param_3[0x49a] != 0.0) {
    FUN_0056e910(param_3[0x49a]);
    local_140 = param_3[0x49b] * _DAT_0064e710;
    local_13c = param_3[0x49c] * _DAT_0064e710;
    local_138 = param_3[0x49d] * _DAT_0064e710;
    local_128 = local_140;
    local_124 = local_13c;
    local_120[0] = local_138;
    (**(code **)(*(int *)(param_1 + 0x10) + 0xa4))(param_3 + 0x49e,&local_128);
  }
  iVar8 = 0x3cdc;
  puVar10 = (undefined4 *)(param_1 + 0x5280);
  do {
    iVar8 = iVar8 + 0x14;
    *puVar10 = *(undefined4 *)(*(int *)(param_1 + 0x5460) + -0x14 + iVar8);
    puVar10 = puVar10 + 1;
  } while (iVar8 < 0x3d7c);
  return;
}

