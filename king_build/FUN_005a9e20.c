
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005a9e20(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  float unaff_EBX;
  float unaff_ESI;
  float *pfVar8;
  float unaff_EDI;
  float *pfVar9;
  float10 fVar10;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  int iStack_1a0;
  float *local_19c;
  float *local_198;
  float *local_194;
  undefined4 *puStack_190;
  float *pfStack_18c;
  float *pfStack_188;
  undefined4 *puStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined8 local_174;
  float local_16c;
  float fStack_168;
  float fStack_164;
  uint local_15c;
  float local_158;
  float local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  double dStack_13c;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined8 uStack_124;
  float local_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  double dStack_ec;
  float fStack_dc;
  float fStack_d8;
  double local_d4;
  undefined4 uStack_cc;
  undefined8 local_c8;
  double local_c0;
  float fStack_b8;
  float fStack_b4;
  double dStack_ac;
  undefined1 auStack_a4 [12];
  undefined4 *local_98;
  undefined4 local_94;
  undefined4 *local_90;
  undefined4 local_8c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined1 local_38 [52];
  
  if ((DAT_006fc6b8 & 1) == 0) {
    DAT_006fc6b8 = DAT_006fc6b8 | 1;
    iVar7 = 400;
    puVar5 = &DAT_006ff948;
    do {
      puVar5[-2] = 0;
      puVar5[-1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    FUN_0061c439(&DAT_005aa780);
  }
  if ((DAT_006fc6b8 & 2) == 0) {
    DAT_006fc6b8 = DAT_006fc6b8 | 2;
    puVar5 = &DAT_006fa660;
    iVar7 = 400;
    do {
      puVar5[-2] = 0;
      puVar5[-1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    FUN_0061c439(&DAT_005aa770);
  }
  if (DAT_00701534 == 0) {
    return 0;
  }
  local_94 = 0xc;
  local_8c = 0xc;
  local_98 = &DAT_006ff940;
  local_90 = &DAT_006fa658;
  local_78 = &DAT_006f96b0;
  local_74 = 8;
  local_70 = &DAT_006fba38;
  local_6c = 8;
  puVar5 = (undefined4 *)FUN_005adc60();
  local_15c = *puVar5;
  local_158 = (float)puVar5[1];
  local_154 = (float)puVar5[2];
  local_130 = (double)local_154;
  if (local_154 < (float)_DAT_0064a738) {
    local_130 = 1e-05;
  }
  pfVar6 = (float *)FUN_005aba00(local_38,param_2 + 0x1070);
  local_1a8 = DAT_00701580 * pfVar6[1] + DAT_00701584 * pfVar6[4] + DAT_00701588 * pfVar6[7];
  local_1a4 = 0.0;
  local_1ac = DAT_00701580 * *pfVar6 + DAT_00701584 * pfVar6[3] + DAT_00701588 * pfVar6[6];
  pfVar6 = (float *)FUN_005aaad0(&local_d4,&local_1ac);
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  fVar4 = (DAT_00701590 * fVar3 - fVar1 * DAT_00701598) * _DAT_0064baa0;
  uStack_124 = (double)CONCAT44(fVar4,(undefined4)uStack_124);
  local_11c = (fVar1 * DAT_00701594 - fVar2 * DAT_00701590) * _DAT_0064baa0;
  local_110 = (fVar2 * DAT_00701598 - DAT_00701594 * fVar3) * _DAT_0064baa0 * _DAT_0064b248 *
              _DAT_0064dd78;
  local_10c = fVar4 * _DAT_0064b248 * _DAT_0064dd78;
  local_108 = local_11c * _DAT_0064b248 * _DAT_0064dd78;
  local_19c = (float *)(fVar2 * _DAT_0064baa0);
  local_198 = (float *)(fVar3 * _DAT_0064baa0);
  local_1ac = fVar1 * _DAT_0064baa0 * _DAT_0064dd78;
  local_1a8 = (float)local_19c * _DAT_0064dd78;
  local_174 = (double)CONCAT44(local_1a8,local_1ac);
  local_1a4 = (float)local_198 * _DAT_0064dd78;
  local_16c = local_1a4;
  local_194 = (float *)__ftol();
  local_c8 = (double)(int)local_194 * _DAT_0064a770;
  local_194 = (float *)__ftol();
  DAT_00701538 = DAT_00701538 + 1 & 0x8000000f;
  local_c0 = (double)(int)local_194 * _DAT_0064a770;
  if ((int)DAT_00701538 < 0) {
    DAT_00701538 = (DAT_00701538 - 1 | 0xfffffff0) + 1;
  }
  if (DAT_00701518 != 0) {
    _DAT_0067d810 =
         _DAT_0067d818 * _DAT_0067d810 +
         (_DAT_0064a660 - _DAT_0067d818) *
         (double)*(float *)(DAT_00701518 + 0x214) * (double)_DAT_0064b8f8;
    *(double *)(DAT_00701534 + 0x60) = _DAT_0067d810 * *(double *)(DAT_00701534 + 0x58);
    iVar7 = DAT_00701534;
    if (*(double *)(DAT_00701534 + 0x60) < _DAT_0064a668) {
      *(undefined4 *)(DAT_00701534 + 0x60) = 0;
      *(undefined4 *)(iVar7 + 100) = 0;
    }
    *(double *)(DAT_00701534 + 0x40) = *(double *)(DAT_00701534 + 0x60) * _DAT_0064a6d0;
    *(double *)(DAT_00701534 + 0x48) = *(double *)(DAT_00701534 + 0x40) * _DAT_0064a798;
    *(double *)(DAT_00701534 + 0x50) = *(double *)(DAT_00701534 + 0x40) * _DAT_0064a7a8;
  }
  FUN_005b06d0(*(undefined4 *)(DAT_00701534 + 0x68),1,0,0);
  (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88,1);
  local_1a8 = fStack_118 * _DAT_0064e710;
  dStack_ec = 0.0;
  uStack_f0 = 0;
  uStack_128 = 0;
  local_1a4 = fStack_114 * _DAT_0064e710;
  local_15c = 0x18;
  local_110 = local_11c * _DAT_0064e710 * _DAT_0064b248;
  local_10c = local_1a8 * _DAT_0064b248;
  local_108 = local_1a4 * _DAT_0064b248;
  do {
    fVar1 = (float)(int)local_15c;
    local_c8._4_4_ = fVar1 * unaff_EDI;
    local_c0 = (double)CONCAT44(local_c0._4_4_,unaff_ESI * fVar1);
    fStack_b8 = local_c8._4_4_ + fStack_168;
    fStack_b4 = unaff_ESI * fVar1 + fStack_164;
    fStack_148 = fStack_b8 - local_110;
    fStack_144 = fStack_b4 - local_10c;
    fStack_140 = fVar1 * unaff_EBX - local_108;
    fStack_104 = fStack_148;
    fStack_100 = fStack_144;
    fStack_fc = fStack_140;
    fVar10 = (float10)thunk_FUN_00603580();
    dStack_ac = (double)fVar10;
    local_154 = 0.0;
    uStack_150 = 0;
    uStack_14c = 0;
    pfStack_18c = (float *)&DAT_006fba3c;
    local_19c = (float *)&DAT_006fba38;
    local_194 = (float *)&DAT_006f96b4;
    local_198 = (float *)&DAT_006f96b0;
    puStack_184 = &DAT_006fa660;
    puStack_190 = &DAT_006fa65c;
    pfStack_188 = (float *)&DAT_006fa658;
    pfVar6 = (float *)&DAT_006ff948;
    pfVar9 = (float *)&DAT_006ff944;
    pfVar8 = (float *)&DAT_006ff940;
    iStack_1a0 = 0x1a;
    do {
      uStack_124 = (double)fStack_148;
      local_174 = (double)fStack_144;
      *pfVar8 = fStack_148;
      local_158 = fStack_144;
      *pfVar9 = fStack_144;
      fStack_f8 = fStack_148;
      fStack_f4 = fStack_144;
      fVar10 = (float10)FUN_005a9d40(fStack_148,fStack_144,uStack_f0,&local_154);
      *pfVar6 = (float)fVar10;
      *pfStack_188 = local_154;
      pfStack_188 = pfStack_188 + 3;
      *puStack_190 = uStack_150;
      fVar10 = (float10)_DAT_0064a5a8;
      *puStack_184 = uStack_14c;
      puStack_184 = puStack_184 + 3;
      puStack_190 = puStack_190 + 3;
      *local_198 = (float)(((float10)uStack_124 - (float10)local_d4) * fVar10);
      local_198 = local_198 + 2;
      *local_194 = (float)(((float10)local_174 -
                           (float10)(double)CONCAT44((undefined4)local_c8,uStack_cc)) *
                          (float10)_DAT_0064a5a8);
      *local_19c = (((float)uStack_124 - fStack_168) * (float)_DAT_0064a6d0) / (float)dStack_13c +
                   (float)_DAT_0064a6d0;
      *pfStack_18c = (((float)local_174 - fStack_164) * (float)_DAT_0064a6d0) / (float)dStack_13c +
                     (float)_DAT_0064a6d0;
      fStack_180 = fStack_148 - unaff_EDI;
      fStack_17c = fStack_144 - unaff_ESI;
      pfStack_18c = pfStack_18c + 2;
      fStack_178 = fStack_140 - unaff_EBX;
      uStack_124 = (double)fStack_180;
      local_174 = (double)fStack_17c;
      pfVar8[3] = fStack_180;
      pfVar9[3] = fStack_17c;
      local_130 = (double)CONCAT44(fStack_17c,fStack_180);
      local_19c = local_19c + 2;
      local_194 = local_194 + 2;
      local_158 = fStack_17c;
      fVar10 = (float10)FUN_005a9d40(fStack_180,fStack_17c,uStack_128,&local_154);
      pfVar6[3] = (float)fVar10;
      *pfStack_188 = local_154;
      pfStack_188 = pfStack_188 + 3;
      *puStack_190 = uStack_150;
      fVar10 = (float10)_DAT_0064a5a8;
      *puStack_184 = uStack_14c;
      pfVar8 = pfVar8 + 6;
      pfVar9 = pfVar9 + 6;
      pfVar6 = pfVar6 + 6;
      *local_198 = (float)(((float10)uStack_124 - (float10)local_d4) * fVar10);
      puStack_190 = puStack_190 + 3;
      *local_194 = (float)(((float10)local_174 -
                           (float10)(double)CONCAT44((undefined4)local_c8,uStack_cc)) *
                          (float10)_DAT_0064a5a8);
      *local_19c = (((float)uStack_124 - fStack_168) * (float)_DAT_0064a6d0) / (float)dStack_13c +
                   (float)_DAT_0064a6d0;
      *pfStack_18c = (((float)local_174 - fStack_164) * (float)_DAT_0064a6d0) / (float)dStack_13c +
                     (float)_DAT_0064a6d0;
      fStack_dc = fStack_17c + unaff_ESI;
      puStack_184 = puStack_184 + 3;
      fStack_d8 = fStack_178 + unaff_EBX;
      local_198 = local_198 + 2;
      pfStack_18c = pfStack_18c + 2;
      local_1ac = fStack_180 + unaff_EDI + local_11c;
      local_194 = local_194 + 2;
      local_1a8 = fStack_118 + fStack_dc;
      local_19c = local_19c + 2;
      local_1a4 = fStack_114 + fStack_d8;
      iStack_1a0 = iStack_1a0 + -1;
      fStack_148 = local_1ac;
      fStack_144 = local_1a8;
      fStack_140 = local_1a4;
    } while (iStack_1a0 != 0);
    fVar10 = (float10)thunk_FUN_00603580();
    dStack_ec = (double)((fVar10 - (float10)dStack_ac) + (float10)dStack_ec);
    (**(code **)(*DAT_0071f868 + 0x74))(DAT_0071f868,5,0x212,auStack_a4,0x34,0);
    local_15c = local_15c - 1;
  } while (local_15c < 0x80000000);
  return 1;
}

