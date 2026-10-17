
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d37e0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  uint local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  int *local_2bc;
  float *local_2b8;
  float *local_2b4 [2];
  float local_2ac;
  float local_2a8;
  int iStack_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float *pfStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  double local_260;
  double local_258;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_210;
  float local_20c;
  float local_204;
  float local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  float local_1a4 [12];
  undefined1 auStack_174 [12];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 local_138;
  undefined4 local_134 [12];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int *local_d0;
  int local_c4;
  int local_c0;
  undefined1 auStack_68 [48];
  undefined1 auStack_38 [52];
  
  FUN_005eebf0();
  iVar7 = 0;
  local_2f0 = 0;
  local_258 = (double)(*(float *)(param_1 + 0x332c) * *(float *)(param_1 + 0x332c) * _DAT_0064b960 +
                      _DAT_0064c2e8);
  FUN_0057d570(&local_24c);
  FUN_005aba00(&local_168,&local_24c);
  local_2bc = (int *)FUN_0057d5d0();
  pfVar5 = local_1a4 + 2;
  iVar6 = 3;
  do {
    pfVar5[-2] = 0.0;
    pfVar5[-1] = 0.0;
    *pfVar5 = 0.0;
    pfVar5 = pfVar5 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = *(int *)(param_1 + 0x40c0) + (-(uint)(param_2 != 0) & 2) * 0xc;
  local_2ec = *(float *)(iVar6 + 0xf08) * _DAT_0064b344;
  local_2e8 = *(float *)(iVar6 + 0xf0c) * _DAT_0064b344;
  local_2e4 = *(float *)(iVar6 + 0xf10) * _DAT_0064b344;
  local_1a4[0] = local_2ec;
  local_1a4[1] = local_2e8;
  local_1a4[2] = local_2e4;
  local_2d0 = *(float *)(iVar6 + 0xf14) * _DAT_0064b344;
  local_2cc = *(float *)(iVar6 + 0xf18) * _DAT_0064b344;
  local_1a4[6] = local_2d0;
  local_2c8 = *(float *)(iVar6 + 0xf1c) * _DAT_0064b344;
  local_1a4[7] = local_2cc;
  local_2ac = local_2e8 + local_2cc;
  local_1a4[8] = local_2c8;
  local_2a8 = local_2e4 + local_2c8;
  local_2d8 = local_2a8 * _DAT_0064b248;
  local_2b8 = (float *)(float)local_258;
  local_1a4[3] = (local_2d0 + local_2ec) * _DAT_0064b248;
  local_1a4[4] = local_2ac * _DAT_0064b248;
  local_2d4 = (float)(int)((-(uint)(param_2 != 0) & 0xfffffffe) + 1);
  local_1a4[5] = local_2d8;
  local_2b4[0] = local_2b8;
  do {
    fVar1 = local_1a4[iVar7 * 3 + 2];
    fVar2 = local_1a4[iVar7 * 3 + 1];
    pfVar5 = local_1a4 + iVar7 * 3;
    puVar8 = &DAT_00701550;
    puVar9 = local_134;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_2a0 = local_24c * *pfVar5 + local_240 * fVar2 + local_234 * fVar1 + local_228;
    local_29c = local_248 * *pfVar5 +
                local_23c * local_1a4[iVar7 * 3 + 1] + local_230 * local_1a4[iVar7 * 3 + 2] +
                local_224;
    local_260 = (double)CONCAT44(local_260._4_4_,iVar7 + -1);
    local_298 = local_244 * *pfVar5 +
                local_238 * local_1a4[iVar7 * 3 + 1] + local_22c * local_1a4[iVar7 * 3 + 2] +
                local_220;
    fVar1 = (float)(iVar7 + -1);
    local_1ec = fVar1 * DAT_007015a0;
    local_1e8 = fVar1 * DAT_007015a4;
    local_210 = local_1ec * _DAT_0064b248;
    local_20c = local_1e8 * _DAT_0064b248;
    local_204 = local_210 + DAT_00701580;
    local_200 = local_20c + DAT_00701584;
    local_2e0 = local_204 * (float)local_2b8;
    local_2dc = local_200 * (float)local_2b8;
    fVar1 = (fVar1 * DAT_007015a8 * _DAT_0064b248 + DAT_00701588) * (float)local_2b8;
    local_21c = local_2dc * local_240 + fVar1 * local_234 + local_2e0 * local_24c;
    local_218 = local_2dc * local_23c + fVar1 * local_230 + local_248 * local_2e0;
    local_1bc = local_21c * local_2d4;
    local_1b8 = local_218 * local_2d4;
    local_ec = local_2a0;
    local_e8 = local_29c;
    local_e4 = local_298;
    FUN_0041ce10(local_1bc + local_2a0,local_1b8 + local_29c,
                 (local_2dc * local_238 + fVar1 * local_22c + local_244 * local_2e0) * local_2d4 +
                 local_298);
    local_d8 = local_1a8;
    local_e0 = local_1b0;
    local_dc = local_1ac;
    local_c4 = 0;
    local_138 = 0;
    local_d0 = local_2bc;
    if (*(int *)(param_1 + 0x40c0) == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = *(int *)(param_1 + 0x40c0) + 0x10;
    }
    uVar3 = (**(code **)(*local_2bc + 0x34))(4,&local_138);
    if ((uVar3 & 1) != 0) {
      if (local_c4 == 0) {
        if (fStack_f0 < (float)_DAT_0064a6d0) {
          FUN_0041ce10(fStack_104 - local_ec,fStack_100 - local_e8,fStack_fc - local_e4);
          uStack_1f8 = uStack_1d4;
          uStack_1f4 = uStack_1d0;
          uStack_1f0 = uStack_1cc;
          fVar10 = (float10)FUN_005aabc0(&uStack_1f8);
          if (fVar10 < (float10)_DAT_0064a650) {
            local_2f0 = local_2f0 | 8;
          }
          if (fVar10 < (float10)local_258) {
            if (iVar7 == 0) {
              local_2f0 = local_2f0 | 5;
            }
            else {
              uVar3 = local_2f0;
              if (iVar7 == 1) {
                local_2f0 = local_2f0 | 0x14;
              }
              else {
joined_r0x004d4054:
                local_2f0 = uVar3 | 4;
                if (iVar7 == 2) {
                  local_2f0 = uVar3 | 6;
                }
              }
            }
          }
        }
      }
      else {
        local_2ec = *(float *)(local_c4 + 0x1a0);
        local_2e8 = *(float *)(local_c4 + 0x1a4);
        local_2e4 = *(float *)(local_c4 + 0x1a8);
        pfVar5 = (float *)FUN_0057d570(auStack_68);
        FUN_0041ce10(local_2ec * *pfVar5 + local_2e8 * pfVar5[3] + local_2e4 * pfVar5[6],
                     local_2e8 * pfVar5[4] + local_2e4 * pfVar5[7] + local_2ec * pfVar5[1],
                     local_2e8 * pfVar5[5] + local_2e4 * pfVar5[8] + local_2ec * pfVar5[2]);
        FUN_0041ce10(local_168 * local_2d0 + fStack_15c * local_2cc + fStack_150 * local_2c8,
                     fStack_164 * local_2d0 + fStack_158 * local_2cc + fStack_14c * local_2c8,
                     fStack_160 * local_2d0 + fStack_154 * local_2cc + fStack_148 * local_2c8);
        fVar1 = *(float *)(param_1 + 0x332c);
        FUN_0041ce10(fVar1 * DAT_00701580,fVar1 * DAT_00701584,fVar1 * DAT_00701588);
        uStack_1e0 = uStack_1c8;
        uStack_1dc = uStack_1c4;
        uStack_1d8 = uStack_1c0;
        FUN_005aae40(auStack_174,&uStack_1e0);
        if (local_2ac < _DAT_0064b240) {
          local_260 = (double)(local_2ac * local_2ac * _DAT_0064b960 + _DAT_0064c2e8);
          uVar4 = FUN_0057d570(auStack_38);
          FUN_0043f690(&fStack_284,&fStack_104,uVar4);
          FUN_0041ce10(local_ec - fStack_284,local_e8 - fStack_280,local_e4 - fStack_27c);
          uStack_26c = uStack_278;
          uStack_268 = uStack_274;
          uStack_264 = uStack_270;
          fVar10 = (float10)FUN_005aabc0(&uStack_26c);
          if (fVar10 < (float10)_DAT_0064a650) {
            local_2f0 = local_2f0 | 8;
          }
          if (fVar10 < (float10)local_260) {
            if (iVar7 == 0) {
              local_2f0 = local_2f0 | 5;
            }
            else {
              uVar3 = local_2f0;
              if (iVar7 != 1) goto joined_r0x004d4054;
              local_2f0 = local_2f0 | 0x14;
            }
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
    if (2 < iVar7) {
      FUN_004042a0();
      pfStack_288 = (float *)0x0;
      iVar6 = *(int *)(param_1 + 0x40c0);
      uStack_26c = *(undefined4 *)(iVar6 + 0xf14);
      uStack_268 = *(undefined4 *)(iVar6 + 0xf18);
      uStack_264 = *(undefined4 *)(iVar6 + 0xf1c);
      uStack_278 = *(undefined4 *)(iVar6 + 0xf08);
      uStack_274 = *(undefined4 *)(iVar6 + 0xf0c);
      uStack_270 = *(undefined4 *)(iVar6 + 0xf10);
      pfVar5 = (float *)FUN_004bddd0(auStack_174,&uStack_278,&uStack_26c);
      FUN_0041ce10(*pfVar5 * _DAT_0064b248,pfVar5[1] * _DAT_0064b248,pfVar5[2] * _DAT_0064b248);
      fStack_294 = fStack_284;
      fStack_290 = fStack_280;
      fStack_28c = fStack_27c;
      FUN_005ab040(&local_24c);
      pfStack_288 = local_2b4[0];
      FUN_0056eac0(local_2bc,fStack_294,fStack_290,fStack_28c,local_2b4[0],&iStack_2a4);
      iVar6 = 0;
      if (0 < iStack_2a4) {
        do {
          iVar7 = FUN_0056ed20(iVar6,local_2b4,&local_2b8,&local_2d0,&local_2d4,&local_260,
                               &local_2bc);
          if (0 < iVar7) {
            local_2ec = *local_2b4[0];
            local_2e8 = local_2b4[0][1];
            local_2e4 = local_2b4[0][2];
            if (local_2bc != (int *)0x0) {
              FUN_004bd520();
              FUN_005f1c30(local_1a4);
              pfVar5 = (float *)FUN_0043f690(auStack_174,&local_2ec,local_1a4);
              local_2ec = *pfVar5;
              local_2e8 = pfVar5[1];
              local_2e4 = pfVar5[2];
            }
            FUN_005ab040(&local_168);
            if (((ABS(local_2ec) <= (float)_DAT_0064a650) && (_DAT_0064b254 <= local_2e8)) &&
               (local_2e8 <= (float)local_258)) {
              if (local_2e8 < _DAT_0064b3fc) {
                local_2f0 = local_2f0 | 8;
              }
              if (local_2e8 < (float)local_258) {
                if (local_2ec <= _DAT_0064b254) {
                  local_2f0 = local_2f0 | 5;
                }
                else {
                  local_2f0 = local_2f0 | 6;
                }
              }
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iStack_2a4);
      }
      if (((local_2f0 & 0x10) != 0) && ((local_2f0 & 3) == 0)) {
        local_2f0 = local_2f0 & 0xffffffef | 2;
      }
      return local_2f0;
    }
  } while( true );
}

