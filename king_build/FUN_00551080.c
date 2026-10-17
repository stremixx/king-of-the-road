
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00551080(int param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_144;
  float *local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
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
  int local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 local_78 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar9 = DAT_006ee15c;
  if ((*(uint *)(param_1 + 0x51a4) & 0x100) == 0) {
    return *(uint *)(param_1 + 0x51a4);
  }
  iVar5 = DAT_006cdbcc;
  if ((1 < *(int *)(DAT_006cdbcc + 0x514)) ||
     (((iVar5 = *(int *)(DAT_006cdbcc + 0x524), iVar5 == 1 || (iVar5 == 2)) &&
      (1 < *(int *)(DAT_006cdbcc + 0x514))))) {
    dVar2 = *(double *)(DAT_006ee15c + 0x1f18);
    if ((dVar2 == _DAT_0064a668) != 0) {
      return CONCAT22((short)((uint)iVar5 >> 0x10),
                      (ushort)(dVar2 < _DAT_0064a668) << 8 |
                      (ushort)(NAN(dVar2) || NAN(_DAT_0064a668)) << 10 |
                      (ushort)(dVar2 == _DAT_0064a668) << 0xe);
    }
    iVar5 = __ftol();
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    if (*(int *)(iVar9 + 0xbb0) % iVar5 != 0) {
      return *(int *)(iVar9 + 0xbb0) / iVar5;
    }
  }
  FUN_005ab130(&local_110,(float *)(param_1 + 0x2c4),param_1 + 0x204);
  FUN_004e5437(*(undefined4 *)(param_1 + 0x330),param_1 + 0x228,&local_ec);
  if (((*(byte *)(param_1 + 0x51a4) & 2) != 0) && ((*(uint *)(param_1 + 0x27b4) & 0x400) != 0)) {
    iVar9 = *(int *)(param_1 + 0x28b4);
    if (ABS((float)(&DAT_00696f10)[iVar9 * 0x25c]) < (float)_DAT_0064a770) {
      local_118 = local_100 * (float)(&DAT_00696f18)[iVar9 * 0x25c] +
                  local_f4 * (float)(&DAT_00696f1c)[iVar9 * 0x25c] +
                  local_10c * (float)(&DAT_00696f14)[iVar9 * 0x25c];
      local_114 = local_fc * (float)(&DAT_00696f18)[iVar9 * 0x25c] +
                  local_f0 * (float)(&DAT_00696f1c)[iVar9 * 0x25c] +
                  local_108 * (float)(&DAT_00696f14)[iVar9 * 0x25c];
      local_11c = local_110 * (float)(&DAT_00696f14)[iVar9 * 0x25c] +
                  local_104 * (float)(&DAT_00696f18)[iVar9 * 0x25c] +
                  local_f8 * (float)(&DAT_00696f1c)[iVar9 * 0x25c];
      local_d8 = local_100 * (float)(&DAT_00696f0c)[iVar9 * 0x25c] +
                 local_f4 * (float)(&DAT_00696f10)[iVar9 * 0x25c] +
                 local_10c * (float)(&DAT_00696f08)[iVar9 * 0x25c] + local_e8;
      local_d4 = local_fc * (float)(&DAT_00696f0c)[iVar9 * 0x25c] +
                 local_f0 * (float)(&DAT_00696f10)[iVar9 * 0x25c] +
                 local_108 * (float)(&DAT_00696f08)[iVar9 * 0x25c] + local_e4;
      local_dc = local_104 * (float)(&DAT_00696f0c)[iVar9 * 0x25c] +
                 local_f8 * (float)(&DAT_00696f10)[iVar9 * 0x25c] +
                 local_110 * (float)(&DAT_00696f08)[iVar9 * 0x25c] + local_ec;
      FUN_004bace0(&local_dc,&local_11c,0,1);
    }
    iVar9 = *(int *)(param_1 + 0x28b4) * 0x970;
    if (ABS(*(float *)(&DAT_00696f28 + iVar9)) < (float)_DAT_0064a770) {
      local_118 = local_10c * *(float *)(&DAT_00696f2c + iVar9) +
                  local_100 * *(float *)(&DAT_00696f30 + iVar9) +
                  local_f4 * *(float *)(&DAT_00696f34 + iVar9);
      local_114 = local_108 * *(float *)(&DAT_00696f2c + iVar9) +
                  local_fc * *(float *)(&DAT_00696f30 + iVar9) +
                  local_f0 * *(float *)(&DAT_00696f34 + iVar9);
      local_11c = local_110 * *(float *)(&DAT_00696f2c + iVar9) +
                  local_104 * *(float *)(&DAT_00696f30 + iVar9) +
                  local_f8 * *(float *)(&DAT_00696f34 + iVar9);
      local_d8 = local_10c * *(float *)(&DAT_00696f20 + iVar9) +
                 local_100 * *(float *)(&DAT_00696f24 + iVar9) +
                 local_f4 * *(float *)(&DAT_00696f28 + iVar9) + local_e8;
      local_d4 = local_108 * *(float *)(&DAT_00696f20 + iVar9) +
                 local_fc * *(float *)(&DAT_00696f24 + iVar9) +
                 local_f0 * *(float *)(&DAT_00696f28 + iVar9) + local_e4;
      local_dc = local_104 * *(float *)(&DAT_00696f24 + iVar9) +
                 local_f8 * *(float *)(&DAT_00696f28 + iVar9) +
                 local_110 * *(float *)(&DAT_00696f20 + iVar9) + local_ec;
      FUN_004bace0(&local_dc,&local_11c,0,1);
    }
  }
  iVar9 = 0;
  if (*(int *)(param_1 + 0x5460) == 0) {
    local_140 = (float *)(param_1 + 0x4fb0);
    local_13c = 0.0;
    pfVar6 = (float *)(param_1 + 0x2830);
    do {
      local_12c = 1.4013e-45;
      if (*(float *)(&DAT_00696970 + (int)*local_140 * 0xc + *(int *)(param_1 + 0x28b4) * 0x970) <=
          _DAT_0064b254) {
        local_12c = -NAN;
      }
      fVar1 = (float)(int)local_12c;
      local_128 = fVar1 * DAT_007015a0;
      local_124 = fVar1 * DAT_007015a4;
      fVar1 = fVar1 * DAT_007015a8;
      local_11c = local_128 * local_110 + local_124 * local_104 + fVar1 * local_f8;
      local_118 = local_10c * local_128 + local_124 * local_100 + fVar1 * local_f4;
      local_114 = local_108 * local_128 + local_124 * local_fc + fVar1 * local_f0;
      if (((*(byte *)(param_1 + 0x2821) & (byte)(1 << (SUB41(local_13c,0) & 0x1f))) != 0) &&
         ((float)_DAT_0064a5a8 < *(float *)(param_1 + 0x27f0 + (int)*local_140 * 4))) {
        local_dc = local_110 * pfVar6[-1] + local_f8 * pfVar6[1] + local_104 * *pfVar6 + local_ec;
        local_d8 = local_10c * pfVar6[-1] + local_f4 * pfVar6[1] + local_100 * *pfVar6 + local_e8;
        local_d4 = local_108 * pfVar6[-1] + local_f0 * pfVar6[1] + local_fc * *pfVar6 + local_e4;
        FUN_004bb0a0(&local_dc,&local_11c,local_140[-0x9f0],1);
      }
      local_13c = (float)((int)local_13c + 1);
      pfVar6 = pfVar6 + 3;
      local_140 = local_140 + 1;
    } while ((int)local_13c < 4);
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x28bc)) {
      local_140 = (float *)(param_1 + 0x27f0);
      local_13c = 0.0;
      do {
        local_12c = 1.4013e-45;
        if (*(float *)(&DAT_00696970 + iVar9 + *(int *)(param_1 + 0x28b4) * 0x970) <= _DAT_0064b254)
        {
          local_12c = -NAN;
        }
        fVar1 = (float)(int)local_12c;
        local_128 = fVar1 * DAT_007015a0;
        local_124 = fVar1 * DAT_007015a4;
        fVar1 = fVar1 * DAT_007015a8;
        local_11c = local_128 * local_110 + local_124 * local_104 + fVar1 * local_f8;
        local_118 = local_10c * local_128 + local_124 * local_100 + fVar1 * local_f4;
        local_114 = local_108 * local_128 + local_124 * local_fc + fVar1 * local_f0;
        if ((float)_DAT_0064a5a8 < *local_140) {
          FUN_004bb0a0(*(int *)(param_1 + 0x5460) + 0x2ba4 + (int)local_13c,&local_11c,*local_140,1)
          ;
        }
        local_140 = local_140 + 1;
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + 0xc;
        local_13c = (float)((int)local_13c + 0xf8);
      } while (iVar5 < *(int *)(param_1 + 0x28bc));
    }
  }
  iVar9 = FUN_00549300();
  if ((((iVar9 == 1) || (iVar9 = FUN_00549300(), iVar9 == 2)) ||
      (iVar9 = FUN_00549300(), iVar9 == 3)) || (iVar9 = FUN_00549300(), iVar9 == 4)) {
    local_12c = (float)(&DAT_00696d20)[*(int *)(param_1 + 0x28b4) * 0x25c];
    iVar9 = *(int *)(param_1 + 0x28b4);
    FUN_00549700(&local_140,&local_88);
    iVar5 = __ftol();
    if (0 < iVar5) {
      bVar10 = *(float *)(&DAT_00696f3c + iVar9 * 0x970) - (float)(&DAT_00696958)[iVar9 * 0x25c] <=
               _DAT_0064b254;
      if (bVar10) {
        local_140 = (float *)((float)local_140 * (float)(&DAT_00696d18)[iVar9 * 0x25c] *
                             _DAT_0064b2ec);
      }
      else {
        local_140 = (float *)((float)local_140 * (float)(&DAT_00696d18)[iVar9 * 0x25c]);
      }
      fVar1 = local_88 * (float)_DAT_0064c308 + (float)_DAT_0064ba68;
      iVar9 = FUN_00549300();
      if (((iVar9 == 1) || (iVar9 = FUN_00549300(), iVar9 == 2)) && ((float)_DAT_0064a798 < fVar1))
      {
        FUN_00549570(1);
      }
      iVar9 = *(int *)(param_1 + 0x28b4);
      local_d0 = (float)(&DAT_00696d24)[iVar9 * 0x25c];
      local_cc = (float)(&DAT_00696d28)[iVar9 * 0x25c];
      local_c8 = (float)(&DAT_00696d2c)[iVar9 * 0x25c];
      local_128 = (float)(&DAT_00696d30)[iVar9 * 0x25c];
      local_124 = (float)(&DAT_00696d34)[iVar9 * 0x25c];
      local_120 = (float)(&DAT_00696d38)[iVar9 * 0x25c];
      if (0 < iVar5) {
        local_12c = local_12c + _DAT_0064b240;
        do {
          iVar9 = _rand();
          fVar3 = ((float)iVar9 * _DAT_0064b244 - (float)_DAT_0064a6d0) * (float)local_140;
          iVar9 = _rand();
          local_13c = ((float)iVar9 * _DAT_0064b244 - (float)_DAT_0064a6d0) * (float)local_140;
          local_e0 = _rand();
          fVar4 = ((float)local_e0 * _DAT_0064b244 - (float)_DAT_0064a6d0) * (float)_DAT_0064c0e0;
          local_6c = DAT_00701580 * local_13c;
          local_68 = DAT_00701584 * local_13c;
          iVar9 = *(int *)(param_1 + 0x28b4) * 0x970;
          local_64 = DAT_00701588 * local_13c;
          local_84 = DAT_007015a0 * fVar3;
          local_80 = DAT_007015a4 * fVar3;
          local_7c = DAT_007015a8 * fVar3;
          local_3c = DAT_00701590 * fVar4;
          local_38 = DAT_00701594 * fVar4;
          local_54 = local_3c + *(float *)(&DAT_00696f38 + iVar9);
          local_50 = local_38 + *(float *)(&DAT_00696f3c + iVar9);
          local_48 = local_54 + local_84;
          local_44 = local_80 + local_50;
          local_138 = local_48 + local_6c;
          local_134 = local_68 + local_44;
          local_130 = local_64 + fVar4 * DAT_00701598 + *(float *)(&DAT_00696f40 + iVar9) + local_7c
          ;
          local_74 = DAT_00701594 * local_12c;
          local_70 = local_12c * DAT_00701598;
          local_11c = local_12c * DAT_00701590 + *(float *)(param_1 + 0x1b0);
          local_118 = local_74 + *(float *)(param_1 + 0x1b4);
          local_114 = local_70 + *(float *)(param_1 + 0x1b8);
          fVar3 = (float)(&DAT_00696958)[*(int *)(param_1 + 0x28b4) * 0x25c] - local_134;
          local_a0 = local_138;
          local_9c = local_134;
          local_98 = local_130;
          local_60 = local_11c;
          local_5c = local_118;
          local_58 = local_114;
          if ((fVar3 < _DAT_0064b240) && (_DAT_0064b928 < fVar3)) {
            local_c4 = DAT_00701580 + DAT_00701580;
            local_c0 = DAT_00701584 + DAT_00701584;
            local_bc = DAT_00701588 + DAT_00701588;
            local_94 = local_c4;
            local_90 = local_c0;
            local_8c = local_bc;
            FUN_005aae00(local_c,&local_c4);
            local_b4 = DAT_00701580 * *(float *)(param_1 + 0x208) +
                       DAT_00701588 * *(float *)(param_1 + 0x220) +
                       DAT_00701584 * *(float *)(param_1 + 0x214);
            local_b0 = DAT_00701580 * *(float *)(param_1 + 0x20c) +
                       DAT_00701588 * *(float *)(param_1 + 0x224) +
                       DAT_00701584 * *(float *)(param_1 + 0x218);
            local_d4 = fVar3 + _DAT_0064b240;
            local_dc = (DAT_00701580 * *(float *)(param_1 + 0x204) +
                       DAT_00701588 * *(float *)(param_1 + 0x21c) +
                       DAT_00701584 * *(float *)(param_1 + 0x210)) * local_d4;
            local_d8 = local_b4 * local_d4;
            local_d4 = local_b0 * local_d4;
            local_ac = local_dc;
            local_a8 = local_d8;
            local_a4 = local_d4;
            FUN_005aae00(local_24,&local_ac);
          }
          if (bVar10) {
            if (local_134 <= local_cc + (float)_DAT_0064a6d0) {
              if (local_124 <= local_134) {
                if (_DAT_0064b254 < local_138) {
                  local_138 = local_d0 + (float)_DAT_0064a5a8;
                }
                if (local_138 < _DAT_0064b254) {
                  local_138 = local_128 - (float)_DAT_0064a5a8;
                }
                goto LAB_00551db0;
              }
              local_134 = local_124;
              local_e0 = _rand();
            }
            else {
              local_134 = local_cc + (float)_DAT_0064a6d0;
              local_e0 = _rand();
            }
            local_138 = ((float)local_e0 * _DAT_0064b244 - (float)_DAT_0064a6d0) * local_d0;
          }
          else {
            if (local_d0 < local_138) {
              local_138 = local_d0;
            }
            if (local_138 < local_128) {
              local_138 = local_128;
            }
            if (local_cc < local_134) {
              local_134 = local_cc;
            }
            if (local_134 < local_124) {
              local_134 = local_124;
            }
          }
LAB_00551db0:
          if (local_c8 < local_130) {
            local_130 = local_c8;
          }
          if (local_130 < local_120) {
            local_130 = local_120;
          }
          FUN_0041ce10(local_138 * *(float *)(param_1 + 0x2c4) +
                       local_134 * *(float *)(param_1 + 0x2d0) +
                       local_130 * *(float *)(param_1 + 0x2dc) + *(float *)(param_1 + 0x2e8),
                       local_138 * *(float *)(param_1 + 0x2c8) +
                       local_130 * *(float *)(param_1 + 0x2e0) +
                       local_134 * *(float *)(param_1 + 0x2d4) + *(float *)(param_1 + 0x2ec),
                       local_138 * *(float *)(param_1 + 0x2cc) +
                       local_130 * *(float *)(param_1 + 0x2e4) +
                       local_134 * *(float *)(param_1 + 0x2d8) + *(float *)(param_1 + 0x2f0));
          pfVar6 = (float *)FUN_0043f690(local_18,local_30,param_1 + 0x204);
          local_138 = *pfVar6;
          local_134 = pfVar6[1];
          local_130 = pfVar6[2];
          FUN_004ba6b0(&local_138,&local_11c,fVar1,1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  uVar8 = *(uint *)(param_1 + 0x27b4);
  if ((uVar8 & 0x18000) == 0) {
    return uVar8;
  }
  local_144 = 0x3f000000;
  if ((uVar8 & 0x10000) != 0) {
    local_144 = 0x40000000;
  }
  fVar1 = *(float *)(&DAT_0069682c + *(int *)(param_1 + 0x28b4) * 0x970);
  FUN_0041ce10(fVar1 * DAT_00701590,DAT_00701594 * fVar1,fVar1 * DAT_00701598);
  iVar9 = *(int *)(param_1 + 0x28b4) * 0x970;
  FUN_0041ce10(*(float *)(&DAT_00696970 + iVar9) - local_ac,
               *(float *)(&DAT_00696974 + iVar9) - local_a8,
               *(float *)(&DAT_00696978 + iVar9) - local_a4);
  local_c4 = local_b8;
  local_c0 = local_b4;
  local_bc = local_b0;
  FUN_0043f690(local_30,&local_c4,&local_110);
  uVar7 = FUN_004bdd80(local_18,&DAT_00701590,
                       *(undefined4 *)(&DAT_0069682c + *(int *)(param_1 + 0x28b4) * 0x970),
                       &local_110);
  uVar7 = FUN_004bde20(local_24,&DAT_0069697c + *(int *)(param_1 + 0x28b4) * 0x970,uVar7);
  FUN_0043f690(local_78,uVar7);
  FUN_004bafe0(local_30,local_144,1);
  uVar8 = FUN_004bafe0(local_78,local_144,1);
  return uVar8;
}

