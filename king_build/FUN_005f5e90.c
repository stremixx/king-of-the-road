
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_005f5e90(undefined4 *param_1,uint param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined1 *puVar11;
  uint uVar12;
  float fVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float local_33c;
  float local_338;
  float fStack_334;
  float local_330;
  float local_32c;
  float fStack_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  undefined8 local_2e8;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  undefined1 local_2d0 [12];
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  undefined1 local_258 [12];
  float local_24c;
  float local_248;
  undefined1 local_240 [12];
  float local_234;
  float local_230;
  float local_22c;
  undefined1 local_228 [12];
  float local_21c;
  float local_218;
  float local_214;
  undefined1 local_210 [12];
  float local_204;
  float local_200;
  undefined1 local_1f8 [12];
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  undefined1 local_1c8 [12];
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_304 = 0.0;
  local_300 = 0.0;
  local_2fc = 0.0;
  local_314 = 0.0;
  local_310 = 0.0;
  local_30c = 0.0;
  fVar13 = (float)_local_32c;
  switch(*param_1) {
  case 0:
    local_1d4 = *param_3 - *param_4;
    local_1d0 = param_3[1] - param_4[1];
    local_1cc = param_3[2] - param_4[2];
    pfVar10 = (float *)FUN_005aaad0(local_60,&local_1d4);
    *param_4 = *pfVar10;
    param_4[1] = pfVar10[1];
    param_4[2] = pfVar10[2];
    return 1;
  case 1:
    local_308 = _DAT_0064b254;
    if ((param_2 & 2) != 0) {
      local_308 = param_5;
    }
    local_308 = local_308 + *(float *)(param_1[2] + 0xc);
    iVar8 = FUN_005aad90(param_4,param_3);
    if (iVar8 == 0) {
      local_1b0 = *param_4 - *param_3;
      local_1ac = param_4[1] - param_3[1];
      local_1a8 = param_4[2] - param_3[2];
      pfVar10 = (float *)FUN_005aaad0(local_180,&local_1b0);
      local_314 = *pfVar10;
      local_310 = pfVar10[1];
      local_30c = pfVar10[2];
      pfVar10 = (float *)param_1[2];
      fVar13 = (param_3[1] - pfVar10[1]) * local_310 +
               (param_3[2] - pfVar10[2]) * local_30c + local_314 * (*param_3 - *pfVar10);
      fVar13 = fVar13 + fVar13;
      fVar1 = (((*param_3 - *pfVar10) * (*param_3 - *pfVar10) +
               (param_3[1] - pfVar10[1]) * (param_3[1] - pfVar10[1]) +
               (param_3[2] - pfVar10[2]) * (param_3[2] - pfVar10[2])) - local_308 * local_308) *
              _DAT_0064b3f8;
      if ((fVar1 <= fVar13 * fVar13) &&
         (fVar13 = (-fVar13 - SQRT(fVar13 * fVar13 - fVar1)) * (float)_DAT_0064a6d0,
         _DAT_0064b254 <= fVar13)) {
        local_234 = *param_4 - *param_3;
        local_230 = param_4[1] - param_3[1];
        local_22c = param_4[2] - param_3[2];
        fVar17 = (float10)FUN_005aabc0(&local_234);
        if ((float10)fVar13 <= fVar17) {
          *param_3 = local_314 * fVar13 + *param_3;
          param_3[1] = local_310 * fVar13 + param_3[1];
          param_3[2] = local_30c * fVar13 + param_3[2];
          pfVar10 = (float *)param_1[2];
          local_2ac = *param_3 - *pfVar10;
          local_2a8 = param_3[1] - pfVar10[1];
          local_2a4 = param_3[2] - pfVar10[2];
          pfVar10 = (float *)FUN_005aaad0(local_c0,&local_2ac);
          *param_4 = *pfVar10;
          param_4[1] = pfVar10[1];
          param_4[2] = pfVar10[2];
          local_1e4 = _DAT_0064b254;
          if ((param_2 & 2) != 0) {
            local_1e4 = param_5;
          }
          local_1ec = local_1e4 * *param_4;
          local_1e8 = local_1e4 * param_4[1];
          local_1e4 = local_1e4 * param_4[2];
          FUN_005aae40(local_168,&local_1ec);
          return 1;
        }
      }
    }
    else {
      pfVar10 = (float *)param_1[2];
      local_2c4 = *param_4 - *pfVar10;
      local_2c0 = param_4[1] - pfVar10[1];
      local_2bc = param_4[2] - pfVar10[2];
      fVar17 = (float10)FUN_005aabc0(&local_2c4);
      if (fVar17 < (float10)local_308 + (float10)_DAT_0064a738) {
        *param_3 = *param_4;
        param_3[1] = param_4[1];
        param_3[2] = param_4[2];
        pfVar10 = (float *)param_1[2];
        local_2b8 = *param_3 - *pfVar10;
        local_2b4 = param_3[1] - pfVar10[1];
        local_2b0 = param_3[2] - pfVar10[2];
        pfVar10 = &local_2b8;
        puVar11 = local_18;
LAB_005f61ab:
        pfVar10 = (float *)FUN_005aaad0(puVar11,pfVar10);
        *param_4 = *pfVar10;
        param_4[1] = pfVar10[1];
        param_4[2] = pfVar10[2];
        return 1;
      }
    }
    break;
  case 2:
    local_308 = _DAT_0064b254;
    if ((param_2 & 2) != 0) {
      local_308 = param_5;
    }
    pfVar10 = (float *)param_1[2];
    local_308 = pfVar10[3] - local_308;
    local_294 = *param_4 - *pfVar10;
    local_290 = param_4[1] - pfVar10[1];
    local_28c = param_4[2] - pfVar10[2];
    fVar1 = local_308 - (float)_DAT_0064a738;
    fVar17 = (float10)FUN_005aabc0(&local_294);
    if ((float10)fVar1 <= fVar17) {
      iVar8 = FUN_005aad90(param_4,param_3);
      if (iVar8 == 0) {
        fVar1 = *param_4;
        fVar2 = *param_3;
        fVar3 = param_4[1];
        fVar4 = param_3[1];
        fVar5 = param_4[2];
        fVar6 = param_3[2];
        local_1bc = fVar1 - fVar2;
        local_1b8 = fVar3 - fVar4;
        local_1b4 = fVar5 - fVar6;
        pfVar10 = (float *)FUN_005aaad0(local_150,&local_1bc);
        local_314 = *pfVar10;
        local_310 = pfVar10[1];
        local_30c = pfVar10[2];
        pfVar10 = (float *)param_1[2];
        FUN_0041ce10(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
        pfVar10 = (float *)param_1[2];
        fVar1 = local_314 * (fVar1 - fVar2) +
                (fVar3 - fVar4) * local_310 + (fVar5 - fVar6) * local_30c;
        fVar1 = fVar1 + fVar1;
        FUN_0041ce10(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
        pfVar10 = (float *)param_1[2];
        FUN_0041ce10(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
        fVar2 = fVar1 * fVar1;
        fVar3 = ((fVar13 * (float)local_2e8 + local_2e8._4_4_ * fStack_328 + local_2e0 * local_324)
                - local_308 * local_308) * _DAT_0064b3f8;
        if ((fVar3 <= fVar2) &&
           (fVar1 = (SQRT(fVar2 - fVar3) - fVar1) * (float)_DAT_0064a6d0, _DAT_0064b254 <= fVar1)) {
          FUN_0041ce10(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
          local_260 = fStack_328;
          local_264 = fVar13;
          fVar17 = (float10)FUN_005aabc0(&local_264);
          if ((float10)fVar1 <= fVar17) {
            FUN_0041ce10(local_314 * fVar1,local_310 * fVar1,local_30c * fVar1);
            FUN_0041ce10(fVar13 + *param_3,fStack_328 + param_3[1],local_324 + param_3[2]);
            *param_3 = fVar2;
            param_3[1] = fStack_328;
            param_3[2] = local_324;
            pfVar10 = (float *)param_1[2];
            FUN_0041ce10(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
            local_200 = fStack_328;
            local_204 = fVar13;
            pfVar10 = (float *)FUN_005aaad0(local_a8,&local_204);
            FUN_0041ce10(-*pfVar10,-pfVar10[1],-pfVar10[2]);
            *param_4 = fVar2;
            param_4[1] = fStack_328;
            param_4[2] = local_324;
            fVar1 = _DAT_0064b254;
            if ((param_2 & 2) != 0) {
              fVar1 = param_5;
            }
            FUN_0041ce10(fVar1 * *param_4,fVar1 * param_4[1],fVar1 * param_4[2]);
            local_248 = fStack_328;
            local_24c = fVar13;
            FUN_005aae40(local_138,&local_24c);
            return 1;
          }
        }
      }
      else {
        pfVar10 = (float *)param_1[2];
        local_21c = *param_4 - *pfVar10;
        local_218 = param_4[1] - pfVar10[1];
        local_214 = param_4[2] - pfVar10[2];
        fVar17 = (float10)FUN_005aabc0(&local_21c);
        if ((float10)fVar1 < fVar17) {
          *param_3 = *param_4;
          param_3[1] = param_4[1];
          param_3[2] = param_4[2];
          pfVar10 = (float *)param_1[2];
          local_27c = *param_3 - *pfVar10;
          local_278 = param_3[1] - pfVar10[1];
          local_274 = param_3[2] - pfVar10[2];
          pfVar10 = &local_27c;
          puVar11 = local_1a4;
          goto LAB_005f61ab;
        }
      }
    }
    break;
  case 3:
    uVar12 = param_2 & 2;
    local_338 = (float)(param_2 & 2);
    local_308 = _DAT_0064b254;
    if (uVar12 != 0) {
      local_308 = param_5;
    }
    local_308 = local_308 + *(float *)(param_1[2] + 0x18);
    local_2ec = _DAT_0064b254;
    if (uVar12 != 0) {
      local_2ec = param_5;
    }
    local_2ec = local_2ec + *(float *)(param_1[2] + 0x1c);
    FUN_0041ce10(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
    pfVar10 = (float *)FUN_005aaad0(local_108,local_210);
    local_314 = *pfVar10;
    local_310 = pfVar10[1];
    local_30c = pfVar10[2];
    pfVar10 = (float *)param_1[2];
    local_2e8._0_4_ =
         (local_314 * local_314 + local_30c * local_30c + local_310 * local_310) -
         (local_314 * pfVar10[3] + pfVar10[4] * local_310 + pfVar10[5] * local_30c) *
         (local_314 * pfVar10[3] + pfVar10[4] * local_310 + pfVar10[5] * local_30c);
    FUN_0041ce10(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
    iVar8 = param_1[2];
    local_300 = fStack_328;
    fVar1 = local_314 * fVar13 + fStack_328 * local_310 + local_324 * local_30c;
    fVar2 = (local_314 * *(float *)(iVar8 + 0xc) +
            *(float *)(iVar8 + 0x10) * local_310 + *(float *)(iVar8 + 0x14) * local_30c) *
            (fVar13 * *(float *)(iVar8 + 0xc) +
            *(float *)(iVar8 + 0x14) * local_324 + *(float *)(iVar8 + 0x10) * fStack_328);
    fVar1 = (fVar1 + fVar1) - (fVar2 + fVar2);
    fVar2 = (float)local_2e8 *
            (((fVar13 * fVar13 + local_324 * local_324 + fStack_328 * fStack_328) -
             (*(float *)(iVar8 + 0xc) * fVar13 +
             *(float *)(iVar8 + 0x14) * local_324 + *(float *)(iVar8 + 0x10) * fStack_328) *
             (*(float *)(iVar8 + 0xc) * fVar13 +
             *(float *)(iVar8 + 0x14) * local_324 + *(float *)(iVar8 + 0x10) * fStack_328)) -
            local_308 * local_308) * _DAT_0064b3f8;
    if (fVar2 < fVar1 * fVar1) {
      fVar1 = (-fVar1 - SQRT(fVar1 * fVar1 - fVar2)) / ((float)local_2e8 + (float)local_2e8);
      local_304 = fVar13;
      FUN_0041ce10(local_314 * fVar1,fVar1 * local_310,fVar1 * local_30c);
      FUN_0041ce10(local_320 + *param_3,local_31c + param_3[1],local_318 + param_3[2]);
      local_2fc = local_2e0;
      pfVar10 = (float *)param_1[2];
      local_304 = (float)local_2e8;
      local_300 = local_2e8._4_4_;
      FUN_0041ce10((float)local_2e8 - *pfVar10,local_2e8._4_4_ - pfVar10[1],local_2e0 - pfVar10[2]);
      iVar8 = param_1[2];
      fVar13 = *(float *)(iVar8 + 0xc) * local_320 +
               *(float *)(iVar8 + 0x14) * local_318 + *(float *)(iVar8 + 0x10) * local_31c;
      if ((ABS(fVar13) < local_2ec) && (_DAT_0064b254 < fVar1)) {
        FUN_0041ce10(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
        fVar17 = (float10)FUN_005aabc0(local_1f8);
        if ((float10)fVar1 < fVar17) {
          iVar8 = param_1[2];
          FUN_0041ce10(fVar13 * *(float *)(iVar8 + 0xc),fVar13 * *(float *)(iVar8 + 0x10),
                       fVar13 * *(float *)(iVar8 + 0x14));
          pfVar10 = (float *)param_1[2];
          FUN_0041ce10(local_320 + *pfVar10,local_31c + pfVar10[1],local_318 + pfVar10[2]);
          FUN_0041ce10(local_304 - local_2f8,local_300 - local_2f4,local_2fc - local_2f0);
          local_1e0 = local_2dc;
          local_1dc = local_2d8;
          local_1d8 = local_2d4;
          pfVar10 = (float *)FUN_005aaad0(local_48,&local_1e0);
          *param_4 = *pfVar10;
          param_4[1] = pfVar10[1];
          param_4[2] = pfVar10[2];
          *param_3 = local_304;
          param_3[1] = local_300;
          param_3[2] = local_2fc;
          fVar13 = _DAT_0064b254;
          if (uVar12 != 0) {
            fVar13 = param_5;
          }
          FUN_0041ce10(fVar13 * *param_4,fVar13 * param_4[1],fVar13 * param_4[2]);
          FUN_005aae40(local_f0,local_1c8);
          return 1;
        }
      }
      FUN_0041ce10(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
      fVar17 = (float10)FUN_004e1080(local_2d0,param_1[2] + 0xc);
      if ((float10)_DAT_0064a920 <= ABS(fVar17)) {
        uVar9 = FUN_004cb2c0(local_78,param_1[2] + 0xc,param_1[2]);
        fVar18 = (float10)FUN_004e1080(uVar9);
        fVar15 = (float10)FUN_004e1080(param_3,param_1[2] + 0xc);
        fVar17 = (float10)local_2ec;
        fVar16 = (float10)FUN_004e1080(&local_314,param_1[2] + 0xc);
        local_33c = (float)-((float10)(double)(((float10)(float)fVar18 - fVar17) + fVar15) / fVar16)
        ;
        fVar17 = (float10)FUN_004e1080(param_1[2] + 0xc,param_1[2]);
        local_2e8 = (double)(fVar17 - (float10)local_2ec);
        fVar17 = (float10)FUN_004e1080(param_3,param_1[2] + 0xc);
        local_2e8 = (double)((float10)local_2e8 - fVar17);
        fVar17 = (float10)FUN_004e1080(&local_314,param_1[2] + 0xc);
        fVar17 = (float10)local_2e8 / fVar17;
        if (_DAT_0064b254 <= local_33c) {
          if ((fVar17 <= (float10)_DAT_0064b254) || ((float10)local_33c <= fVar17)) {
            iVar8 = param_1[2];
            fVar13 = *(float *)(iVar8 + 0xc);
            fStack_328 = *(float *)(iVar8 + 0x10);
            local_324 = *(float *)(iVar8 + 0x14);
          }
          else {
            local_33c = (float)fVar17;
            pfVar10 = (float *)FUN_004cb2c0(local_198,param_1[2] + 0xc);
            fVar13 = *pfVar10;
            fStack_328 = pfVar10[1];
            local_324 = pfVar10[2];
          }
        }
        else {
          if (fVar17 < (float10)_DAT_0064b254) {
            return 0;
          }
          local_33c = (float)fVar17;
          pfVar10 = (float *)FUN_004cb2c0(local_d8,param_1[2] + 0xc);
          fVar13 = *pfVar10;
          fStack_328 = pfVar10[1];
          local_324 = pfVar10[2];
        }
        uVar9 = FUN_004bde20(local_18c,param_4,param_3);
        fVar17 = (float10)FUN_005aabc0(uVar9);
        if ((float10)local_33c <= fVar17) {
          uVar9 = FUN_004bdd80(local_174,&local_314,local_33c);
          pfVar10 = (float *)FUN_004bddd0(local_15c,param_3,uVar9);
          local_304 = *pfVar10;
          local_300 = pfVar10[1];
          local_2fc = pfVar10[2];
          uVar9 = FUN_004bde20(local_144,&local_304,param_1[2],param_1[2] + 0xc);
          fVar17 = (float10)FUN_004e1080(uVar9);
          uVar9 = FUN_004bdd80(local_12c,param_1[2] + 0xc,(float)fVar17,param_1[2]);
          uVar9 = FUN_004bde20(local_114,&local_304,uVar9);
          uVar9 = FUN_004bde20(local_fc,uVar9);
          fVar17 = (float10)FUN_005aabc0(uVar9);
          if (fVar17 <= (float10)local_308) {
            *param_4 = fVar13;
            param_4[1] = fStack_328;
            param_4[2] = local_324;
            *param_3 = local_304;
            param_3[1] = local_300;
            param_3[2] = local_2fc;
            local_32c = param_5;
            if (local_338 == 0.0) {
              local_32c = 0.0;
            }
            uVar9 = FUN_004bdd80(local_e4,param_4,local_32c);
            FUN_005aae40(local_cc,uVar9);
            return 1;
          }
        }
      }
    }
    break;
  case 4:
    param_2 = param_2 & 2;
    local_308 = _DAT_0064b254;
    if (param_2 != 0) {
      local_308 = param_5;
    }
    pfVar10 = (float *)param_1[2];
    local_308 = pfVar10[6] - local_308;
    local_2ec = _DAT_0064b254;
    if (param_2 != 0) {
      local_2ec = param_5;
    }
    local_2ec = pfVar10[7] - local_2ec;
    FUN_0041ce10(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
    pfVar10 = (float *)param_1[2];
    fVar13 = local_338 * pfVar10[3] + pfVar10[5] * local_330 + pfVar10[4] * fStack_334;
    local_32c = (float)(uint)(local_2ec < fVar13);
    if (ABS((double)(int)local_32c) == _DAT_0064a668) {
      FUN_0041ce10(*param_4 - *pfVar10,param_4[1] - pfVar10[1],param_4[2] - pfVar10[2]);
      iVar8 = param_1[2];
      local_2e8._0_4_ =
           local_338 * *(float *)(iVar8 + 0xc) +
           *(float *)(iVar8 + 0x14) * local_330 + *(float *)(iVar8 + 0x10) * fStack_334;
      fVar1 = (float)local_2e8 - fVar13;
      if ((float)_DAT_0064a738 < ABS(fVar1)) {
        if (local_2ec < (float)local_2e8) {
          FUN_0041ce10(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
          fVar2 = local_2ec - fVar13;
          FUN_0041ce10(fVar2 * local_338,fVar2 * fStack_334,fVar2 * local_330);
          FUN_0041ce10(local_2dc / fVar1,local_2d8 / fVar1,local_2d4 / fVar1);
          FUN_0041ce10(local_2f8 + *param_3,local_2f4 + param_3[1],local_2f0 + param_3[2]);
          local_304 = local_320;
          iVar8 = param_1[2];
          local_300 = local_31c;
          local_2fc = local_318;
          FUN_0041ce10(fVar13 * *(float *)(iVar8 + 0xc),fVar13 * *(float *)(iVar8 + 0x10),
                       fVar13 * *(float *)(iVar8 + 0x14));
          pfVar10 = (float *)param_1[2];
          _local_338 = CONCAT44(local_31c,local_320);
          local_330 = local_318;
          FUN_0041ce10(local_304 - *pfVar10,local_300 - pfVar10[1],local_2fc - pfVar10[2]);
          FUN_0041ce10(local_2f8 - local_320,local_2f4 - local_31c,local_2f0 - local_318);
          local_2a0 = local_2dc;
          local_29c = local_2d8;
          local_298 = local_2d4;
          fVar17 = (float10)FUN_005aabc0(&local_2a0);
          if (fVar17 < (float10)local_308) {
            iVar8 = param_1[2];
            FUN_0041ce10(-*(float *)(iVar8 + 0xc),-*(float *)(iVar8 + 0x10),
                         -*(float *)(iVar8 + 0x14));
            *param_4 = local_320;
            param_4[1] = local_31c;
            param_4[2] = local_318;
            fVar13 = _DAT_0064b254;
            if (param_2 != 0) {
              fVar13 = param_5;
            }
            FUN_0041ce10(fVar13 * *param_4,fVar13 * param_4[1],fVar13 * param_4[2]);
            FUN_0041ce10(local_304 - local_320,local_300 - local_31c,local_2fc - local_318);
            *param_3 = local_2f8;
            param_3[1] = local_2f4;
            param_3[2] = local_2f0;
            return 1;
          }
        }
        local_2ec = -local_2ec;
        if ((float)local_2e8 < local_2ec) {
          FUN_0041ce10(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
          fVar2 = local_2ec - fVar13;
          FUN_0041ce10(fVar2 * local_320,fVar2 * local_31c,fVar2 * local_318);
          FUN_0041ce10(local_2f8 / fVar1,local_2f4 / fVar1,local_2f0 / fVar1);
          FUN_0041ce10(local_2dc + *param_3,local_2d8 + param_3[1],local_2d4 + param_3[2]);
          local_304 = local_338;
          iVar8 = param_1[2];
          local_300 = fStack_334;
          local_2fc = local_330;
          FUN_0041ce10(fVar13 * *(float *)(iVar8 + 0xc),fVar13 * *(float *)(iVar8 + 0x10),
                       fVar13 * *(float *)(iVar8 + 0x14));
          pfVar10 = (float *)param_1[2];
          FUN_0041ce10(local_304 - *pfVar10,local_300 - pfVar10[1],local_2fc - pfVar10[2]);
          FUN_0041ce10(local_2f8 - local_320,local_2f4 - local_31c,local_2f0 - local_318);
          local_288 = local_2dc;
          local_284 = local_2d8;
          local_280 = local_2d4;
          fVar17 = (float10)FUN_005aabc0(&local_288);
          if (fVar17 < (float10)local_308) {
            iVar8 = param_1[2];
            *param_4 = *(float *)(iVar8 + 0xc);
            param_4[1] = *(float *)(iVar8 + 0x10);
            param_4[2] = *(float *)(iVar8 + 0x14);
            fVar13 = _DAT_0064b254;
            if (param_2 != 0) {
              fVar13 = param_5;
            }
            FUN_0041ce10(fVar13 * *param_4,fVar13 * param_4[1],fVar13 * param_4[2]);
            FUN_0041ce10(local_304 - local_320,local_300 - local_31c,local_2fc - local_318);
            *param_3 = local_2f8;
            param_3[1] = local_2f4;
            param_3[2] = local_2f0;
            return 1;
          }
        }
      }
      iVar8 = param_1[2];
      FUN_0041ce10((float)local_2e8 * *(float *)(iVar8 + 0xc),
                   (float)local_2e8 * *(float *)(iVar8 + 0x10),
                   (float)local_2e8 * *(float *)(iVar8 + 0x14));
      pfVar10 = (float *)param_1[2];
      FUN_0041ce10(*param_4 - *pfVar10,param_4[1] - pfVar10[1],param_4[2] - pfVar10[2]);
      FUN_0041ce10(local_2f8 - local_320,local_2f4 - local_31c,local_2f0 - local_318);
      local_270 = local_2dc;
      local_26c = local_2d8;
      local_268 = local_2d4;
      fVar17 = (float10)FUN_005aabc0(&local_270);
      if ((float10)local_308 < fVar17) {
        FUN_0041ce10(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
        pfVar10 = (float *)FUN_005aaad0(local_30,local_258);
        local_314 = *pfVar10;
        local_310 = pfVar10[1];
        local_30c = pfVar10[2];
        pfVar10 = (float *)param_1[2];
        fVar13 = (local_314 * local_314 + local_30c * local_30c + local_310 * local_310) -
                 (local_314 * pfVar10[3] + pfVar10[4] * local_310 + pfVar10[5] * local_30c) *
                 (local_314 * pfVar10[3] + pfVar10[4] * local_310 + pfVar10[5] * local_30c);
        local_2e8 = (double)CONCAT44(local_2e8._4_4_,fVar13);
        if ((float)_DAT_0064a738 <= ABS(fVar13)) {
          FUN_0041ce10(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
          iVar8 = param_1[2];
          fVar13 = local_314 * local_320 + local_31c * local_310 + local_318 * local_30c;
          fVar1 = (*(float *)(iVar8 + 0xc) * local_314 +
                  *(float *)(iVar8 + 0x10) * local_310 + *(float *)(iVar8 + 0x14) * local_30c) *
                  (*(float *)(iVar8 + 0xc) * local_320 +
                  *(float *)(iVar8 + 0x14) * local_318 + *(float *)(iVar8 + 0x10) * local_31c);
          fVar13 = (fVar13 + fVar13) - (fVar1 + fVar1);
          fVar1 = (float)local_2e8 *
                  (((local_320 * local_320 + local_318 * local_318 + local_31c * local_31c) -
                   (*(float *)(iVar8 + 0xc) * local_320 +
                   *(float *)(iVar8 + 0x14) * local_318 + *(float *)(iVar8 + 0x10) * local_31c) *
                   (*(float *)(iVar8 + 0xc) * local_320 +
                   *(float *)(iVar8 + 0x14) * local_318 + *(float *)(iVar8 + 0x10) * local_31c)) -
                  local_308 * local_308) * _DAT_0064b3f8;
          if ((fVar1 <= fVar13 * fVar13) &&
             (fVar13 = (SQRT(fVar13 * fVar13 - fVar1) - fVar13) /
                       ((float)local_2e8 + (float)local_2e8), _DAT_0064b254 <= fVar13)) {
            FUN_0041ce10(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
            fVar17 = (float10)FUN_005aabc0(local_240);
            if ((float10)fVar13 <= fVar17) {
              FUN_0041ce10(local_314 * fVar13,local_310 * fVar13,local_30c * fVar13);
              FUN_0041ce10(local_320 + *param_3,local_31c + param_3[1],local_318 + param_3[2]);
              *param_3 = local_2f8;
              param_3[1] = local_2f4;
              param_3[2] = local_2f0;
              pfVar10 = (float *)param_1[2];
              FUN_0041ce10(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
              iVar8 = param_1[2];
              local_304 = local_320;
              local_300 = local_31c;
              local_2fc = local_318;
              fVar13 = *(float *)(iVar8 + 0xc) * local_320 +
                       *(float *)(iVar8 + 0x14) * local_318 + *(float *)(iVar8 + 0x10) * local_31c;
              FUN_0041ce10(fVar13 * *(float *)(iVar8 + 0xc),fVar13 * *(float *)(iVar8 + 0x10),
                           fVar13 * *(float *)(iVar8 + 0x14));
              FUN_0041ce10(local_304 - local_320,local_300 - local_31c,local_2fc - local_318);
              *param_4 = local_2f8;
              param_4[1] = local_2f4;
              param_4[2] = local_2f0;
              pfVar10 = (float *)FUN_005aaad0(local_120,param_4);
              FUN_0041ce10(-*pfVar10,-pfVar10[1],-pfVar10[2]);
              *param_4 = local_320;
              param_4[1] = local_31c;
              param_4[2] = local_318;
              fVar13 = _DAT_0064b254;
              if (param_2 != 0) {
                fVar13 = param_5;
              }
              FUN_0041ce10(fVar13 * *param_4,fVar13 * param_4[1],fVar13 * param_4[2]);
              FUN_005aae40(local_90,local_228);
              return 1;
            }
          }
        }
      }
    }
    break;
  case 5:
    uVar9 = FUN_004bde20(local_b4,param_4,param_3,param_1[2]);
    fVar17 = (float10)FUN_004e1080(uVar9);
    if (fVar17 <= (float10)_DAT_0064a668) {
      uVar9 = FUN_004bde20(local_9c,param_4,param_3,param_1[2]);
      fVar17 = (float10)FUN_004e1080(uVar9);
      if ((float10)_DAT_0064a920 <= ABS(fVar17)) {
        if ((param_2 & 2) == 0) {
          local_32c = 0.0;
        }
        else {
          local_32c = param_5;
        }
        iVar8 = param_1[2];
        fVar17 = (float10)FUN_004e1080(param_3,iVar8);
        fVar13 = *(float *)(iVar8 + 0xc);
        uVar9 = FUN_004bde20(local_84,param_4,param_3,iVar8);
        fVar18 = (float10)FUN_004e1080(uVar9);
        fVar17 = -((float10)(double)(((float10)fVar13 - (float10)local_32c) + fVar17) / fVar18);
        local_33c = (float)fVar17;
        if (((float10)_DAT_0064b254 < fVar17) && (local_33c < _DAT_0064b240)) goto LAB_005f7e4b;
      }
      else {
        fVar17 = (float10)FUN_004e1080(param_4,param_1[2]);
        if (ABS(fVar17 + (float10)*(float *)(param_1[2] + 0xc)) <= (float10)_DAT_0064a590) {
          local_33c = 0.5;
LAB_005f7e4b:
          uVar9 = FUN_004bde20(local_6c,param_4,param_3,local_33c);
          uVar9 = FUN_004bdd80(local_54,uVar9);
          pfVar10 = (float *)FUN_004bddd0(local_3c,param_3,uVar9);
          *param_3 = *pfVar10;
          param_3[1] = pfVar10[1];
          param_3[2] = pfVar10[2];
          pfVar10 = (float *)param_1[2];
          *param_4 = *pfVar10;
          param_4[1] = pfVar10[1];
          param_4[2] = pfVar10[2];
          if ((param_2 & 2) == 0) {
            param_5 = 0.0;
          }
          uVar9 = FUN_004bdd80(local_24,param_4,param_5);
          FUN_005aae40(local_c,uVar9);
          return 1;
        }
      }
    }
    break;
  case 6:
    iVar8 = 0;
    if (0 < (int)param_1[1]) {
      iVar14 = 0;
      do {
        iVar7 = FUN_005f49e0(param_2,iVar14 + param_1[2],param_3,param_4,param_5);
        if (iVar7 != 0) goto LAB_005f600c;
        iVar8 = iVar8 + 1;
        iVar14 = iVar14 + 0x30;
      } while (iVar8 < (int)param_1[1]);
    }
    if (((param_2 & 2) != 0) && (iVar8 = 0, 0 < (int)param_1[1])) {
      iVar14 = 0;
      while (iVar7 = FUN_005f41a0(param_2,iVar14 + param_1[2],param_3,param_4,param_5), iVar7 == 0)
      {
        iVar8 = iVar8 + 1;
        iVar14 = iVar14 + 0x30;
        if ((int)param_1[1] <= iVar8) {
          return 0;
        }
      }
LAB_005f600c:
      return iVar8 + 1;
    }
    break;
  case 7:
    iVar14 = 0;
    iVar8 = 0;
    if (param_1[1] != 1 && -1 < param_1[1] + -1) {
      do {
        iVar7 = FUN_005f50f0(param_2,param_1[2] + iVar14,param_1[2] + 0xc + iVar14,param_3,param_4,
                             param_5);
        if (iVar7 != 0) {
          return iVar8 + 1;
        }
        iVar8 = iVar8 + 1;
        iVar14 = iVar14 + 0xc;
      } while (iVar8 < param_1[1] + -1);
      return 0;
    }
  }
  return 0;
}

