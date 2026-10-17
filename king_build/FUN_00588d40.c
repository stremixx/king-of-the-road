
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00588d40(int *param_1,float *param_2,int param_3,uint param_4)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  int local_1a0;
  float fStack_19c;
  float fStack_198;
  float local_194;
  float local_190;
  float local_18c;
  int local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float local_13c;
  float local_138;
  float local_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int local_dc [13];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_68;
  undefined1 auStack_c [12];
  
  FUN_005eebf0();
  local_188 = FUN_0057d5d0();
  local_1b8 = 0.0;
  local_1b4 = 0.0;
  local_1b0 = 0.0;
  FUN_0057d570(&local_178);
  local_1a0 = 0;
  do {
    if ((param_4 & 0x200) == 0) {
      iVar4 = FUN_0058c7f0(&local_1b8);
    }
    else {
      iVar4 = FUN_0058c820(&local_1b8);
    }
    if (iVar4 == 0) {
      return local_1a0;
    }
    if ((param_4 & 0x200) == 0) {
      local_1ac = local_178 * local_1b8 + local_16c * local_1b4 + local_160 * local_1b0 + local_154;
      local_1a8 = local_174 * local_1b8 + local_168 * local_1b4 + local_15c * local_1b0 + local_150;
      local_1a4 = local_170 * local_1b8 + local_164 * local_1b4 + local_158 * local_1b0 + local_14c;
      local_194 = local_1b8 * *param_2 + local_1b4 * param_2[3] + local_1b0 * param_2[6] +
                  param_2[9];
      local_190 = local_1b8 * param_2[1] + local_1b4 * param_2[4] + local_1b0 * param_2[7] +
                  param_2[10];
      local_18c = local_1b8 * param_2[2] + local_1b4 * param_2[5] + local_1b0 * param_2[8] +
                  param_2[0xb];
      fStack_130 = local_194;
      fStack_12c = local_190;
      fStack_128 = local_18c;
      fStack_124 = local_1ac;
      fStack_120 = local_1a8;
      fStack_11c = local_1a4;
      iVar6 = FUN_004e5437(local_188,&local_154,&local_1ac);
    }
    else {
      local_1ac = local_154;
      local_1a8 = local_150;
      local_1a4 = local_14c;
      local_194 = local_178 * local_1b8 + local_16c * local_1b4 + local_160 * local_1b0 + local_154;
      local_190 = local_174 * local_1b8 + local_168 * local_1b4 + local_15c * local_1b0 + local_150;
      local_18c = local_170 * local_1b8 + local_164 * local_1b4 + local_158 * local_1b0 + local_14c;
      iVar6 = local_188;
      local_13c = local_194;
      local_138 = local_190;
      local_134 = local_18c;
    }
    iVar5 = local_188;
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x1c))(1);
      iVar6 = iVar5;
    }
    fStack_198 = (float)FUN_004e6061(iVar6,&local_1ac,&local_194,local_dc);
    if (fStack_198 == 0.0) {
      if ((param_4 & 0x10) != 0) {
        fVar3 = (local_1ac - (float)param_1[0x508]) * (float)param_1[0x50b] +
                (local_1a8 - (float)param_1[0x509]) * (float)param_1[0x50c] +
                (local_1a4 - (float)param_1[0x50a]) * (float)param_1[0x50d];
        iVar5 = param_1[0x511];
        fStack_19c = (float)param_1[0x50b] * (local_194 - (float)param_1[0x508]) +
                     (local_190 - (float)param_1[0x509]) * (float)param_1[0x50c] +
                     (local_18c - (float)param_1[0x50a]) * (float)param_1[0x50d];
        if (iVar5 != 0) {
          fVar3 = ABS(fVar3);
          fStack_19c = ABS(fStack_19c);
        }
        if ((fVar3 < (float)param_1[0x506] - _DAT_0064b248) &&
           (fStack_19c < (float)param_1[0x506] - _DAT_0064b248)) {
          if (iVar5 != 0) {
            if (((float)_DAT_0064a668 < fVar3) && ((float)_DAT_0064a668 < fStack_19c))
            goto LAB_00589261;
            if (iVar5 != 0) goto LAB_0058912c;
          }
          if ((_DAT_0064b248 < fVar3) && (_DAT_0064b248 < fStack_19c)) goto LAB_00589261;
        }
LAB_0058912c:
        if ((param_4 & 0x20) != 0) {
          fStack_184 = (float)param_1[0x50f] * (float)param_1[0x50d] -
                       (float)param_1[0x510] * (float)param_1[0x50c];
          fStack_180 = (float)param_1[0x510] * (float)param_1[0x50b] -
                       (float)param_1[0x50d] * (float)param_1[0x50e];
          fStack_17c = (float)param_1[0x50c] * (float)param_1[0x50e] -
                       (float)param_1[0x50f] * (float)param_1[0x50b];
          fStack_148 = fStack_184;
          fStack_144 = fStack_180;
          fStack_140 = fStack_17c;
          if (fStack_184 * DAT_00701590 + fStack_180 * DAT_00701594 + fStack_17c * DAT_00701598 <
              (float)_DAT_0064a668) {
            FUN_005aad10(auStack_c,0xbf800000);
          }
          if ((float)param_1[0x507] <
              (local_190 - (float)param_1[0x509]) * fStack_144 +
              (local_18c - (float)param_1[0x50a]) * fStack_140 +
              fStack_148 * (local_194 - (float)param_1[0x508])) goto LAB_00589261;
        }
      }
      fStack_198 = (float)FUN_004e6354(iVar6,&local_1ac,&local_194,local_dc);
    }
LAB_00589261:
    if (0x3e < *(int *)(param_3 + 0xb00)) {
      iVar4 = FUN_0058c7f0(&local_1b8);
      while (iVar4 != 0) {
        iVar4 = FUN_0058c7f0(&local_1b8);
      }
      return local_1a0;
    }
    *(uint *)(param_3 + 0xb04 + *(int *)(param_3 + 0xb00) * 4) =
         (uint)((SUB41(fStack_198,0) & 1) == 1);
    *(undefined4 *)(param_3 + 0x800 + *(int *)(param_3 + 0xb00) * 4) = 0x3f800000;
    if (*(int *)(param_3 + 0xb04 + *(int *)(param_3 + 0xb00) * 4) != 0) {
      *(undefined4 *)(param_3 + 0x800 + *(int *)(param_3 + 0xb00) * 4) = 0;
      local_1a0 = local_1a0 + 1;
      pfVar1 = (float *)(param_3 + *(int *)(param_3 + 0xb00) * 0xc);
      *pfVar1 = fStack_a8;
      pfVar1[1] = fStack_a4;
      pfVar1[2] = fStack_a0;
      iVar5 = *(int *)(param_3 + 0xb00) + 0x40;
      iVar6 = param_3 + iVar5 * 0xc;
      *(float *)(param_3 + iVar5 * 0xc) = fStack_9c;
      *(float *)(iVar6 + 4) = fStack_98;
      *(float *)(iVar6 + 8) = fStack_94;
      *(int *)(param_3 + 0xc04 + *(int *)(param_3 + 0xb00) * 4) = iVar4 + -1;
      uVar2 = param_1[iVar4 + 0x511];
      param_1[iVar4 + 0x511] = uVar2 | 1;
      param_1[iVar4 + 0x525] = uVar2 | 1;
      piVar7 = local_dc;
      piVar8 = param_1 + iVar4 * 0x34 + 0x506;
      for (iVar6 = 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      *(undefined4 *)(param_3 + 0x600 + *(int *)(param_3 + 0xb00) * 4) = uStack_68;
      FUN_0041ce10(fStack_84 - local_1ac,fStack_80 - local_1a8,fStack_7c - local_1a4);
      uStack_118 = uStack_e8;
      uStack_114 = uStack_e4;
      uStack_110 = uStack_e0;
      FUN_0041ce10(fStack_a8 - local_1ac,fStack_a4 - local_1a8,fStack_a0 - local_1a4);
      uStack_10c = uStack_100;
      uStack_108 = uStack_fc;
      uStack_104 = uStack_f8;
      FUN_0041ce10(fStack_a8 - local_194,fStack_a4 - local_190,fStack_a0 - local_18c);
      *(float *)(param_3 + 0xa00 + *(int *)(param_3 + 0xb00) * 4) =
           fStack_f4 * fStack_9c + fStack_f0 * fStack_98 + fStack_ec * fStack_94;
      fVar9 = (float10)FUN_004e1080(&uStack_118,&uStack_118);
      fStack_198 = (float)fVar9;
      fVar9 = (float10)FUN_004e1080(&uStack_10c,&uStack_10c);
      if ((float)_DAT_0064f6a0 <= fStack_198) {
        fVar9 = fVar9 / (float10)fStack_198;
        if ((float10)_DAT_0064a660 < fVar9) {
          fVar9 = (float10)_DAT_0064b240;
        }
        *(float *)(param_3 + 0x800 + *(int *)(param_3 + 0xb00) * 4) = (float)SQRT(fVar9);
        *(int *)(param_3 + 0xb00) = *(int *)(param_3 + 0xb00) + 1;
      }
      else {
        *(int *)(param_3 + 0xb00) = *(int *)(param_3 + 0xb00) + 1;
      }
    }
  } while( true );
}

