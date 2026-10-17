
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00598900(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
            int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float10 fVar13;
  float10 fVar14;
  double local_228;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  double local_1f0;
  double local_1e8;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined8 local_1d0;
  int local_1c4;
  double local_1c0;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4 [12];
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
  float local_148;
  undefined4 local_140;
  undefined4 local_134;
  int local_130;
  undefined4 local_d8;
  undefined1 local_d4 [8];
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
  float local_78;
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  FUN_005eebf0();
  puVar8 = &DAT_00701550;
  puVar11 = local_1a4;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  local_15c = param_3[9];
  local_158 = param_3[10];
  iVar10 = 0;
  local_150 = *param_4;
  local_154 = param_3[0xb];
  local_14c = param_4[1];
  local_134 = 0;
  local_148 = param_4[2];
  local_1a8 = 0.3;
  do {
    local_140 = param_2;
    uVar6 = FUN_00598810(param_2,&local_1a8,param_1,param_6);
    if ((uVar6 & 1) == 0) break;
    if (iVar10 == 9) {
      local_150 = local_15c;
      local_14c = local_158;
      local_148 = local_154;
      local_140 = param_2;
      break;
    }
    local_210 = local_164 * local_1a8;
    local_20c = local_160 * local_1a8;
    local_1d8 = local_210 * _DAT_0064f9e4;
    local_1d4 = local_20c * _DAT_0064f9e4;
    fVar3 = local_174 + local_168 * local_1a8 * _DAT_0064f9e4;
    fVar1 = local_1d8 + local_170;
    fVar2 = local_1d4 + local_16c;
    pfVar7 = (float *)FUN_005aba00(&local_c8,local_1a4);
    iVar10 = iVar10 + 1;
    local_208 = fVar3 * *pfVar7 + fVar1 * pfVar7[3] + fVar2 * pfVar7[6] + pfVar7[9];
    local_204 = fVar1 * pfVar7[4] + fVar2 * pfVar7[7] + fVar3 * pfVar7[1] + pfVar7[10];
    local_200 = fVar1 * pfVar7[5] + fVar2 * pfVar7[8] + fVar3 * pfVar7[2] + pfVar7[0xb];
    local_140 = param_2;
    local_150 = local_208;
    local_14c = local_204;
    local_148 = local_200;
  } while (iVar10 < 10);
  if (param_6 != 0) {
    local_130 = param_6;
  }
  local_158 = local_14c;
  local_15c = local_150;
  local_154 = local_148;
  local_d8 = local_140;
  FUN_005aba00(&local_98,param_3);
  local_1ac = 0.0;
  fVar1 = *param_5 - *param_4;
  fVar2 = param_5[1] - param_4[1];
  fVar3 = param_5[2] - param_4[2];
  local_1b4 = fVar2 * local_8c + fVar3 * local_80 + local_98 * fVar1;
  local_1b0 = fVar2 * local_88 + fVar3 * local_7c + local_94 * fVar1;
  local_1d0 = (double)(fVar2 * local_84 + fVar3 * local_78 + local_90 * fVar1);
  fVar13 = (float10)FUN_005aabc0(&local_1b4);
  local_214 = -local_1b4;
  local_210 = -local_1b0;
  local_20c = -local_1ac;
  local_208 = local_214;
  local_204 = local_210;
  local_200 = local_20c;
  pfVar7 = (float *)FUN_005aaad0(local_d4,&local_214);
  fVar1 = *pfVar7 * DAT_00701580 + pfVar7[1] * DAT_00701584 + pfVar7[2] * DAT_00701588;
  local_1e8 = (double)fVar1;
  if (fVar1 <= (float)_DAT_0064a660) {
    if (fVar1 < (float)_DAT_0064ba38) {
      local_1e8 = -1.0;
    }
  }
  else {
    local_1e8 = 1.0;
  }
  fVar14 = (float10)FUN_0061d420();
  local_1e8 = (double)fVar14;
  if (local_1b4 < _DAT_0064b254) {
    local_1e8 = -local_1e8;
  }
  local_1c0 = 0.0;
  if ((DAT_006f58a8 & 1) == 0) {
    DAT_006f58a8 = DAT_006f58a8 | 1;
    iVar10 = 10;
    puVar8 = &DAT_006f57a0;
    do {
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      puVar8 = puVar8 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    FUN_0061c439(&DAT_00599710);
  }
  if ((DAT_006f58a8 & 2) == 0) {
    DAT_006f58a8 = DAT_006f58a8 | 2;
    DAT_006f58b8 = 0.0;
    DAT_006f58bc = 0.0;
    DAT_006f58c0 = 0.0;
    FUN_0061c439(&DAT_00599700);
  }
  local_204 = -(float)fVar13;
  local_200 = (float)local_1d0;
  local_1f0 = local_1e8;
  local_1c4 = 0;
  local_1d0._0_4_ = &DAT_006f5798;
  while( true ) {
    puVar8 = &DAT_00701550;
    puVar11 = local_1a4;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    iVar10 = FUN_005ab5d0(local_38,(float)local_1c0);
    fVar1 = local_204 * *(float *)(iVar10 + 0xc) + local_200 * *(float *)(iVar10 + 0x18) +
            *(float *)(iVar10 + 0x24);
    fVar2 = local_204 * *(float *)(iVar10 + 0x10) + local_200 * *(float *)(iVar10 + 0x1c) +
            *(float *)(iVar10 + 0x28);
    fVar3 = local_204 * *(float *)(iVar10 + 0x14) + local_200 * *(float *)(iVar10 + 0x20) +
            *(float *)(iVar10 + 0x2c);
    pfVar7 = (float *)FUN_005ab7d0(local_68,(float)local_1f0);
    uVar9 = local_d8;
    fVar4 = fVar1 * *pfVar7 + fVar2 * pfVar7[3] + fVar3 * pfVar7[6] + pfVar7[9];
    fVar5 = fVar2 * pfVar7[4] + fVar3 * pfVar7[7] + fVar1 * pfVar7[1] + pfVar7[10];
    fVar1 = fVar2 * pfVar7[5] + fVar3 * pfVar7[8] + fVar1 * pfVar7[2] + pfVar7[0xb];
    local_1fc = fVar4 * *param_3 + fVar5 * param_3[3] + fVar1 * param_3[6];
    local_1f8 = fVar4 * param_3[1] + fVar5 * param_3[4] + fVar1 * param_3[7];
    local_1dc = local_1fc + local_15c;
    local_1d8 = local_158 + local_1f8;
    local_1d4 = local_154 + fVar4 * param_3[2] + fVar5 * param_3[5] + fVar1 * param_3[8];
    local_150 = local_1dc;
    local_14c = local_1d8;
    local_148 = local_1d4;
    uVar6 = FUN_00598810(local_d8,&local_1a8,param_1,param_6);
    uVar12 = local_140;
    if ((uVar6 & 1) == 0) break;
    DAT_006f58b8 = local_150;
    DAT_006f58bc = local_14c;
    DAT_006f58c0 = local_148;
    FUN_005aba00(&local_c8,local_1a4);
    pfVar7 = (float *)local_1d0;
    local_214 = local_b0 * local_16c + local_bc * local_170 + local_c8 * local_174 + local_a4;
    *(float *)local_1d0 = local_214;
    local_210 = local_ac * local_16c + local_b8 * local_170 + local_c4 * local_174 + local_a0;
    ((float *)local_1d0)[1] = local_210;
    local_20c = local_a8 * local_16c + local_b4 * local_170 + local_c0 * local_174 + local_9c;
    ((float *)local_1d0)[2] = local_20c;
    if ((float *)local_1d0 == (float *)&DAT_006f5804) {
      local_1d0 = (double)((ulonglong)local_1d0._4_4_ << 0x20);
      FUN_0041ce10(local_15c - DAT_006f5798,local_158 - DAT_006f579c,local_154 - DAT_006f57a0);
      local_214 = local_1fc;
      local_210 = local_1f8;
      local_20c = local_1f4;
      fVar13 = (float10)FUN_005aabc0(&local_214);
      local_228 = (double)fVar13;
      iVar10 = 1;
      pfVar7 = (float *)&DAT_006f57a8;
      do {
        FUN_0041ce10(local_15c - pfVar7[-1],local_158 - *pfVar7,local_154 - pfVar7[1]);
        local_214 = local_1fc;
        local_210 = local_1f8;
        local_20c = local_1f4;
        fVar13 = (float10)FUN_005aabc0(&local_214);
        if ((float10)local_228 < fVar13) {
          local_228 = (double)fVar13;
          local_1d0 = (double)CONCAT44(local_1d0._4_4_,iVar10);
        }
        pfVar7 = pfVar7 + 3;
        iVar10 = iVar10 + 1;
      } while ((int)pfVar7 < 0x6f5809);
      iVar10 = 0;
      local_150 = (&DAT_006f5798)[(int)(float *)local_1d0 * 3];
      local_14c = (&DAT_006f579c)[(int)(float *)local_1d0 * 3];
      local_148 = (&DAT_006f57a0)[(int)(float *)local_1d0 * 3];
      while( true ) {
        local_140 = uVar9;
        uVar6 = FUN_00598810(uVar9,&local_1a8,param_1,param_6);
        if ((uVar6 & 1) == 0) goto LAB_005996ca;
        uVar12 = uVar9;
        if (iVar10 == 9) break;
        FUN_0041ce10(local_168 * local_1a8,local_164 * local_1a8,local_160 * local_1a8);
        FUN_0041ce10(local_1fc * _DAT_0064f9e4,local_1f8 * _DAT_0064f9e4,local_1f4 * _DAT_0064f9e4);
        FUN_0041ce10(local_214 + local_174,local_210 + local_170,local_20c + local_16c);
        fVar3 = local_1d4;
        fVar2 = local_1d8;
        fVar1 = local_1dc;
        pfVar7 = (float *)FUN_005aba00(local_68,local_1a4);
        FUN_0041ce10(fVar1 * *pfVar7 + fVar2 * pfVar7[3] + fVar3 * pfVar7[6] + pfVar7[9],
                     fVar1 * pfVar7[1] + fVar2 * pfVar7[4] + fVar3 * pfVar7[7] + pfVar7[10],
                     fVar1 * pfVar7[2] + fVar2 * pfVar7[5] + fVar3 * pfVar7[8] + pfVar7[0xb]);
        iVar10 = iVar10 + 1;
        local_150 = local_208;
        local_14c = local_204;
        local_148 = local_200;
        if (9 < iVar10) {
          *param_5 = local_208;
          param_5[1] = local_204;
          param_5[2] = local_200;
          return uVar9;
        }
      }
      goto LAB_005996a1;
    }
    FUN_004cb300(local_d4,&local_168,&local_c8);
    if ((((_DAT_0064fad8 <= ABS(local_1e8)) && (_DAT_0064fad8 <= ABS(local_1e8 - _DAT_0064c9f0))) &&
        (_DAT_0064fad8 <= ABS(local_1e8 - _DAT_0064c8f0))) &&
       ((_DAT_0064fad8 <= ABS(local_1e8 + _DAT_0064c8f0) &&
        (_DAT_0064fad8 <= ABS(local_1e8 + _DAT_0064c9f0))))) {
      if ((_DAT_0064a668 <= local_1e8) || (local_1e8 < _DAT_0064fad0)) {
        if ((local_1e8 < _DAT_0064c9f0) || (_DAT_0064c8f0 <= local_1e8)) {
          DAT_0067d0cc = 0;
        }
        else {
          DAT_0067d0cc = 1;
        }
      }
      else {
        DAT_0067d0cc = 1;
      }
    }
    _DAT_0067d0c8 = DAT_0067d0cc;
    if (local_cc <= (float)_DAT_0064a6f0) {
      if ((float)_DAT_0064fac0 <= local_cc) {
        if (DAT_0067d0cc == 0) {
          local_1f0 = local_1f0 - _DAT_0064c338;
        }
        else {
          local_1f0 = local_1f0 + _DAT_0064c338;
        }
      }
      else {
        local_1c0 = local_1c0 + _DAT_0064fac8;
      }
    }
    else {
      local_1c0 = local_1c0 - _DAT_0064fac8;
    }
    if (_DAT_0064c8f0 < local_1f0) {
      local_1f0 = local_1f0 - _DAT_0064c8f8;
    }
    if (local_1f0 < _DAT_0064c900) {
      local_1f0 = local_1f0 + _DAT_0064c8f8;
    }
    local_1d0._0_4_ = pfVar7 + 3;
    local_1c4 = local_1c4 + 1;
    local_140 = uVar9;
    if (0x6f580f < (int)(float *)local_1d0) {
      return 0;
    }
  }
  if (local_1c4 == 0) {
    *param_5 = local_150;
    param_5[1] = local_14c;
    param_5[2] = local_148;
    return local_140;
  }
  local_15c = local_150;
  local_158 = local_14c;
  local_154 = local_148;
  local_150 = DAT_006f58b8;
  local_14c = DAT_006f58bc;
  local_148 = DAT_006f58c0;
  iVar10 = 0;
  do {
    local_140 = uVar12;
    uVar6 = FUN_00598810(uVar12,&local_1a8,param_1,param_6);
    if ((uVar6 & 1) == 0) {
LAB_005996ca:
      *param_5 = local_150;
      param_5[1] = local_14c;
      param_5[2] = local_148;
      return local_140;
    }
    if (iVar10 == 9) {
LAB_005996a1:
      *param_5 = local_15c;
      param_5[1] = local_158;
      param_5[2] = local_154;
      return uVar12;
    }
    FUN_0041ce10(local_168 * local_1a8,local_164 * local_1a8,local_160 * local_1a8);
    FUN_0041ce10(local_1fc * _DAT_0064f9e4,local_1f8 * _DAT_0064f9e4,local_1f4 * _DAT_0064f9e4);
    local_1dc = local_214;
    local_1d8 = local_210;
    local_1d4 = local_20c;
    uVar9 = FUN_005aba00(local_68,local_1a4);
    uVar9 = FUN_004bddd0(local_d4,&local_174,&local_1dc,uVar9);
    pfVar7 = (float *)FUN_0043f690(&local_208,uVar9);
    local_150 = *pfVar7;
    iVar10 = iVar10 + 1;
    local_14c = pfVar7[1];
    local_148 = pfVar7[2];
    if (9 < iVar10) {
      *param_5 = local_150;
      param_5[1] = local_14c;
      param_5[2] = local_148;
      return uVar12;
    }
  } while( true );
}

