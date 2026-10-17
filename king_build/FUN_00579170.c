
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00579170(float *param_1,int param_2,uint param_3,float *param_4,float *param_5,float param_6,
            float param_7)

{
  ushort uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  float fVar16;
  float *pfVar17;
  uint uVar18;
  float *pfVar19;
  bool bVar20;
  float10 fVar21;
  float10 fVar22;
  float *local_114;
  float local_110;
  float *local_10c;
  float *local_108;
  float local_104;
  float *local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float *local_f0;
  float local_ec;
  float *local_e8;
  float *local_e4;
  float *local_e0;
  float *local_dc;
  float local_d8;
  float *local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float *local_c4;
  float *local_c0;
  float local_bc;
  float *local_b8;
  float *local_b4;
  float local_b0;
  float local_ac;
  float *local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float *local_8c;
  float *local_88;
  float *local_84;
  float *local_80;
  float fStack_7c;
  float *local_78;
  float *local_74;
  float fStack_70;
  float local_6c;
  float *local_68;
  undefined4 uStack_64;
  float *local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 uStack_48;
  float *local_44;
  float local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30 [7];
  float local_14;
  
  uVar18 = 0;
  if ((param_3 == 0) || (0x27 < param_3)) {
    return 0;
  }
  param_1[0x6c3] = 0.0;
  param_1[0x6c2] = param_7;
  uVar13 = 0;
  local_50 = (param_4[5] + param_4[8] + param_4[0xb] + param_4[2]) * _DAT_0064b324;
  if (param_3 != 0) {
    pfVar8 = (float *)(param_2 + 0x3c);
    do {
      if ((float)_DAT_0064a778 < ABS(*pfVar8 - local_50)) {
        return 0;
      }
      uVar13 = uVar13 + 1;
      pfVar8 = pfVar8 + 0x34;
    } while (uVar13 < param_3);
  }
  local_5c = *param_4;
  local_58 = param_4[1];
  local_a4 = param_4[3];
  local_a0 = param_4[4];
  local_b4 = (float *)param_4[6];
  local_b0 = param_4[7];
  local_c0 = (float *)param_4[9];
  local_bc = param_4[10];
  local_100 = (float *)*param_4;
  local_fc = param_4[1];
  local_f8 = param_4[2];
  local_d0 = param_4[6];
  local_cc = param_4[7];
  local_c8 = param_4[8];
  local_98 = param_4[9];
  local_94 = param_4[10];
  local_90 = param_4[0xb];
  local_8c = (float *)((float)local_b4 - local_5c);
  local_84 = (float *)0x0;
  local_88 = (float *)(local_b0 - local_58);
  local_c4 = param_1;
  local_80 = local_88;
  local_68 = local_8c;
  fVar21 = (float10)FUN_004bff80(&local_8c);
  fVar21 = SQRT(fVar21);
  FUN_0041ce10((float)((float10)(float)local_8c / fVar21),(float)((float10)(float)local_88 / fVar21)
               ,(float)((float10)(float)local_84 / fVar21));
  local_60 = (float *)(local_a4 - local_5c);
  local_4c = local_a0 - local_58;
  local_3c = 0.0;
  local_44 = local_60;
  local_40 = local_4c;
  fVar21 = (float10)FUN_004bff80(&local_44);
  fVar21 = SQRT(fVar21);
  FUN_0041ce10((float)((float10)(float)local_44 / fVar21),(float)((float10)local_40 / fVar21),
               (float)((float10)local_3c / fVar21));
  local_88 = (float *)((float)local_74 * (float)local_10c - (float)local_114 * local_6c);
  local_84 = (float *)((float)local_114 * fStack_70 - (float)local_74 * local_110);
  local_114 = (float *)-(local_6c * local_110 - fStack_70 * (float)local_10c);
  local_110 = -(float)local_88;
  local_10c = (float *)-(float)local_84;
  fVar21 = (float10)FUN_0061d420();
  local_74 = (float *)(float)fVar21;
  local_f4 = (float)(uint)(_DAT_0064f3d0 < (float)local_10c);
  local_a8 = (float *)0x0;
  local_38 = 0;
  local_50 = 0.0;
  if (param_3 != 0) {
    local_108 = (float *)&DAT_006f441c;
    piVar15 = (int *)(param_2 + 0x6c);
    local_a8 = (float *)param_3;
    pfVar8 = local_a8;
    do {
      local_a8 = pfVar8;
      pfVar8 = local_108;
      uVar13 = 0;
      if (&DAT_006f441c < local_108) {
        piVar6 = &DAT_006f4418;
        do {
          if ((*(int *)(*piVar6 + 0x6c) == *piVar15) && (*(int *)(*piVar6 + 0x70) == piVar15[1]))
          break;
          uVar13 = uVar13 + 1;
          piVar6 = piVar6 + 0xd;
        } while (uVar13 < uVar18);
      }
      if (uVar13 == uVar18) {
        piVar6 = (int *)*piVar15;
        if (piVar6 != (int *)0x0) {
          if (*piVar6 == 8) {
            local_38 = piVar6[2];
          }
          if (*piVar6 == 5) {
            local_44 = (float *)piVar6[2];
            local_50 = 1.4013e-45;
          }
        }
        local_108[-1] = (float)(piVar15 + -0x1b);
        puVar7 = (undefined4 *)FUN_005aba00(local_30,piVar15 + -0x1a);
        uVar18 = uVar18 + 1;
        local_108 = local_108 + 0xd;
        for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pfVar8 = (float)*puVar7;
          puVar7 = puVar7 + 1;
          pfVar8 = pfVar8 + 1;
        }
      }
      piVar15 = piVar15 + 0x34;
      pfVar8 = (float *)((int)local_a8 - 1);
      local_a8 = (float *)uVar18;
    } while (pfVar8 != (float *)0x0);
  }
  fVar16 = local_f4;
  bVar20 = local_c8 < local_f8;
  bVar2 = local_f8 < local_c8;
  if (local_f4 != 0.0) {
    bVar20 = !bVar20;
    bVar2 = !bVar2;
  }
  local_f8 = local_f8 - local_c8;
  local_f4 = ABS(local_f8) /
             SQRT((local_fc - local_cc) * (local_fc - local_cc) +
                  local_f8 * local_f8 +
                  ((float)local_100 - local_d0) * ((float)local_100 - local_d0));
  if (bVar20) {
    local_f0 = (float *)(local_f4 * param_6);
  }
  else {
    local_f0 = (float *)0x0;
  }
  if (bVar2) {
    local_f4 = local_f4 * param_6;
  }
  else {
    local_f4 = 0.0;
  }
  bVar20 = local_c8 <= local_90;
  bVar2 = local_90 <= local_c8;
  if (fVar16 != 0.0) {
    bVar20 = !bVar20;
    bVar2 = !bVar2;
  }
  fVar3 = local_c8 - local_90;
  local_104 = ABS(fVar3) /
              SQRT((local_cc - local_94) * (local_cc - local_94) +
                   fVar3 * fVar3 + (local_d0 - local_98) * (local_d0 - local_98));
  if (bVar2) {
    local_ec = local_104 * param_6;
  }
  else {
    local_ec = 0.0;
  }
  if (bVar20) {
    local_104 = local_104 * param_6;
  }
  else {
    local_104 = 0.0;
  }
  local_dc = local_60;
  local_d8 = local_4c;
  local_e8 = local_68;
  local_e4 = local_80;
  local_d4 = (float *)0x0;
  local_e0 = (float *)0x0;
  fVar3 = SQRT(local_4c * local_4c + (float)local_60 * (float)local_60);
  local_108 = (float *)SQRT((float)local_80 * (float)local_80 + (float)local_68 * (float)local_68);
  if (_DAT_0064b240 <= fVar3) {
    local_dc = (float *)((float)local_60 / fVar3);
    local_d8 = local_4c / fVar3;
    local_d4 = (float *)(_DAT_0064b254 / fVar3);
  }
  else if (fVar16 == 0.0) {
    local_f8 = 0.0;
    local_100 = local_80;
    local_114 = local_80;
    local_110 = -(float)local_68;
    local_10c = (float *)0x0;
    local_fc = local_110;
    fVar21 = (float10)FUN_004bff80(&local_114);
    fVar21 = SQRT(fVar21);
    FUN_0041ce10((float)((float10)(float)local_114 / fVar21),(float)((float10)local_110 / fVar21),
                 (float)((float10)(float)local_10c / fVar21));
    local_dc = local_100;
    local_d8 = local_fc;
    local_d4 = (float *)local_f8;
  }
  else {
    local_f8 = 0.0;
    local_100 = local_80;
    local_114 = local_80;
    local_110 = -(float)local_68;
    local_10c = (float *)0x0;
    local_fc = local_110;
    fVar21 = (float10)FUN_004bff80(&local_114);
    fVar21 = SQRT(fVar21);
    FUN_0041ce10((float)((float10)(float)local_114 / fVar21),(float)((float10)local_110 / fVar21),
                 (float)((float10)(float)local_10c / fVar21));
    local_dc = (float *)-(float)local_100;
    local_d8 = -local_fc;
    local_d4 = (float *)-local_f8;
  }
  if (_DAT_0064b240 <= (float)local_108) {
    local_e8 = (float *)((float)local_e8 / (float)local_108);
    local_e4 = (float *)((float)local_e4 / (float)local_108);
    local_e0 = (float *)((float)local_e0 / (float)local_108);
  }
  else {
    local_114 = (float *)(local_d8 - _DAT_0064b254);
    local_100 = local_114;
    if (fVar16 == 0.0) {
      local_f8 = 0.0;
      local_110 = _DAT_0064b254 - (float)local_dc;
      local_10c = (float *)0x0;
      local_fc = local_110;
      fVar21 = (float10)FUN_004bff80(&local_114);
      fVar21 = SQRT(fVar21);
      FUN_0041ce10((float)((float10)(float)local_114 / fVar21),(float)((float10)local_110 / fVar21),
                   (float)((float10)(float)local_10c / fVar21));
      local_e8 = local_100;
      local_e4 = (float *)local_fc;
      local_e0 = (float *)local_f8;
    }
    else {
      local_f8 = 0.0;
      local_110 = _DAT_0064b254 - (float)local_dc;
      local_10c = (float *)0x0;
      local_fc = local_110;
      fVar21 = (float10)FUN_004bff80(&local_114);
      fVar21 = SQRT(fVar21);
      FUN_0041ce10((float)((float10)(float)local_114 / fVar21),(float)((float10)local_110 / fVar21),
                   (float)((float10)(float)local_10c / fVar21));
      local_e8 = (float *)-(float)local_100;
      local_e4 = (float *)-local_fc;
      local_e0 = (float *)-local_f8;
    }
  }
  fVar16 = (float)local_dc * local_ec;
  local_4c = local_ec * local_d8;
  local_60 = (float *)(local_ec * (float)local_d4);
  fVar3 = (float)local_e8 * (float)local_f0;
  fVar4 = (float)local_f0 * (float)local_e4;
  fVar5 = (float)local_f0 * (float)local_e0;
  local_d0 = (local_5c - fVar3) - fVar16;
  local_cc = (local_58 - fVar4) - local_4c;
  local_c8 = -fVar5 - (float)local_60;
  local_114 = (float *)((float)local_dc * local_104);
  local_ec = local_104 * local_d8;
  local_f0 = (float *)(local_104 * (float)local_d4);
  local_98 = (local_a4 - fVar3) + (float)local_114;
  local_94 = (local_a0 - fVar4) + local_ec;
  local_90 = -fVar5 + (float)local_f0;
  local_110 = local_f4 * (float)local_e4;
  local_10c = (float *)(local_f4 * (float)local_e0);
  local_100 = (float *)(((float)local_e8 * local_f4 + (float)local_b4) - fVar16);
  local_fc = (local_110 + local_b0) - local_4c;
  local_f8 = (float)local_10c - (float)local_60;
  local_bc = local_bc + local_110;
  local_a4 = (float)local_e8 * local_f4 + (float)local_c0 + (float)local_114;
  local_a0 = local_bc + local_ec;
  local_9c = (float)local_10c + (float)local_f0;
  local_dc = (float *)(local_98 - local_d0);
  local_d8 = local_94 - local_cc;
  local_d4 = (float *)(local_90 - local_c8);
  local_e8 = (float *)((float)local_100 - local_d0);
  local_e4 = (float *)(local_fc - local_cc);
  local_e0 = (float *)(local_f8 - local_c8);
  local_108 = local_114;
  local_b8 = local_10c;
  local_b4 = local_114;
  local_b0 = local_ec;
  local_ac = (float)local_f0;
  local_8c = local_dc;
  local_88 = (float *)local_d8;
  local_84 = local_d4;
  local_80 = local_e8;
  fStack_7c = (float)local_e4;
  local_78 = local_e0;
  local_68 = local_10c;
  local_5c = local_d0;
  local_58 = local_cc;
  local_54 = local_c8;
  if ((float)local_74 < (float)_DAT_0064f3c8) {
    local_110 = (float)local_e4 * _DAT_0064c698;
    local_10c = (float *)((float)local_e0 * _DAT_0064c698);
    local_68 = (float *)((float)local_dc * _DAT_0064f3c4);
    local_bc = local_d8 * _DAT_0064f3c4;
    local_b8 = (float *)((float)local_d4 * _DAT_0064f3c4);
    local_ac = local_c8 - (float)local_b8;
    local_d0 = (local_d0 - (float)local_68) - (float)local_e8 * _DAT_0064c698;
    local_cc = (local_cc - local_bc) - local_110;
    local_c8 = local_ac - (float)local_10c;
    local_b4 = (float *)((float)local_68 + local_98);
    local_b0 = local_bc + local_94;
    local_80 = local_10c;
    local_74 = (float *)local_110;
    local_60 = local_b8;
    local_5c = local_d0;
    local_58 = local_cc;
    local_54 = local_c8;
    local_4c = local_bc;
    FUN_0041ce10((float)local_b4 - (float)local_e8 * _DAT_0064c698,local_b0 - local_110,
                 ((float)local_b8 + local_90) - (float)local_10c);
    FUN_0041ce10((float)local_e8 * _DAT_0064c698,(float)local_e4 * _DAT_0064c698,
                 (float)local_e0 * _DAT_0064c698);
    FUN_0041ce10((float)local_dc * _DAT_0064f3c4,local_d8 * _DAT_0064f3c4,
                 (float)local_d4 * _DAT_0064f3c4);
    FUN_0041ce10((float)local_100 - (float)local_c0,local_fc - local_bc,local_f8 - (float)local_b8);
    FUN_0041ce10((float)local_b4 + (float)local_114,local_b0 + local_110,local_ac + (float)local_10c
                );
    FUN_0041ce10((float)local_e8 * _DAT_0064c698,(float)local_e4 * _DAT_0064c698,
                 (float)local_e0 * _DAT_0064c698);
    FUN_0041ce10((float)local_dc * _DAT_0064f3c4,local_d8 * _DAT_0064f3c4,
                 (float)local_d4 * _DAT_0064f3c4);
    FUN_0041ce10((float)local_c0 + local_a4,local_bc + local_a0,(float)local_b8 + local_9c);
    FUN_0041ce10((float)local_b4 + (float)local_114,local_b0 + local_110,local_ac + (float)local_10c
                );
    FUN_0041ce10(local_98 - local_d0,local_94 - local_cc,local_90 - local_c8);
    local_d8 = local_bc;
    local_dc = local_c0;
    local_d4 = local_b8;
    FUN_0041ce10((float)local_8c - local_d0,(float)local_88 - local_cc,(float)local_84 - local_c8);
    local_e8 = local_c0;
    local_e4 = (float *)local_bc;
    local_e0 = local_b8;
  }
  fVar21 = (float10)FUN_004bff80(&local_dc);
  local_f4 = (float)SQRT(fVar21);
  fVar21 = (float10)FUN_004bff80(&local_e8);
  fVar21 = SQRT(fVar21);
  fStack_70 = 0.0;
  local_74 = (float *)((int)param_5 - 1);
  local_f0 = (float *)0x0;
  local_80 = (float *)((int)param_5 * 6);
  local_c4[0x6c1] = (float)local_80;
  local_c4[0x6c0] = (float)((int)param_5 * 0x1e + -0x1e);
  local_dc = (float *)((float)local_dc / local_f4);
  local_d8 = local_d8 / local_f4;
  local_d4 = (float *)((float)local_d4 / local_f4);
  local_e8 = (float *)(float)((float10)(float)local_e8 / fVar21);
  local_e4 = (float *)(float)((float10)(float)local_e4 / fVar21);
  local_e0 = (float *)(float)((float10)(float)local_e0 / fVar21);
  local_108 = (float *)(local_f4 * _DAT_0064b8f8);
  local_ec = (float)local_74;
  local_f4 = (float)(fVar21 / (float10)local_74);
  if (param_5 != (float *)0x0) {
    local_30[3] = 0.0;
    local_30[4] = 0.0;
    local_30[5] = 1.0;
    pfVar8 = local_c4;
    do {
      fVar16 = 0.0;
      uStack_64 = 0;
      local_104 = (float)local_f0;
      local_14 = local_104 / local_ec;
      pfVar17 = pfVar8;
      local_68 = local_f0;
      do {
        FUN_0041ce10((float)local_e8 * local_f4,local_f4 * (float)local_e4,
                     local_f4 * (float)local_e0);
        FUN_0041ce10((float)local_c0 * local_104,local_104 * local_bc,local_104 * (float)local_b8);
        FUN_0041ce10((float)local_dc * (float)local_108,(float)local_108 * local_d8,
                     (float)local_108 * (float)local_d4);
        uStack_48 = 0;
        local_74 = (float *)(float)(uint)fVar16;
        local_4c = fVar16;
        FUN_0041ce10((float)local_b4 * (float)local_74,(float)local_74 * local_b0,
                     (float)local_74 * local_ac);
        FUN_0041ce10(local_a4 + local_5c,local_a0 + local_58,local_54 + local_9c);
        FUN_0041ce10((float)local_114 + (float)local_100,local_110 + local_fc,
                     (float)local_10c + local_f8);
        local_30[2] = local_90;
        fVar16 = (float)((int)fVar16 + 1);
        local_30[6] = (float)local_74 * _DAT_0064b8f8;
        pfVar8 = pfVar17 + 8;
        local_30[0] = local_98;
        local_30[1] = local_94;
        pfVar12 = local_30;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pfVar17 = *pfVar12;
          pfVar12 = pfVar12 + 1;
          pfVar17 = pfVar17 + 1;
        }
        pfVar17 = pfVar8;
      } while ((uint)fVar16 < 6);
      local_f0 = (float *)((int)local_f0 + 1);
    } while (local_f0 < param_5);
  }
  local_108 = (float *)0x0;
  _DAT_006f5328 = 0;
  local_f0 = (float *)0x0;
  if (local_a8 != (float *)0x0) {
    puVar7 = &DAT_006f441c;
    do {
      if (0x27 < local_108) break;
      piVar15 = *(int **)(puVar7[-1] + 0x6c);
      if ((piVar15 != (int *)0x0) && (*piVar15 == 6)) {
        iVar14 = *(int *)(puVar7[-1] + 0x70) * 0x30;
        iVar10 = iVar14 + -0x30 + piVar15[2];
        uVar1 = *(ushort *)(iVar14 + -0x2e + piVar15[2]);
        if ((2 < uVar1) && (local_f4 = 1.4013e-45, 1 < uVar1 - 1)) {
          iVar14 = 0xc;
          uVar18 = (int)local_108 * 0xc;
          do {
            if (0x1df < uVar18) break;
            FUN_0043f690(&local_c0,*(undefined4 *)(iVar10 + 4),puVar7);
            FUN_0043f690(&local_b4,*(int *)(iVar10 + 4) + iVar14,puVar7);
            FUN_0043f690(&local_a4,*(int *)(iVar10 + 4) + 0xc + iVar14,puVar7);
            *(float *)(&DAT_006f4eb8 + uVar18) = local_bc;
            *(float **)(&DAT_006f4cd8 + uVar18) = local_c0;
            *(float **)(&DAT_006f4cdc + uVar18) = local_b4;
            *(float *)(&DAT_006f4ce0 + uVar18) = local_a4;
            *(float *)(&DAT_006f4ebc + uVar18) = local_b0;
            *(int *)(&DAT_006f4c38 + (int)local_108 * 4) = iVar10 + 0x20;
            *(undefined4 **)(&DAT_006f4374 + (int)local_108 * 4) = puVar7;
            local_108 = (float *)((int)local_108 + 1);
            *(float *)(&DAT_006f4ec0 + uVar18) = local_a0;
            uVar18 = uVar18 + 0xc;
            local_f4 = (float)((int)local_f4 + 1);
            iVar14 = iVar14 + 0xc;
          } while ((uint)local_f4 < *(ushort *)(iVar10 + 2) - 1);
        }
      }
      local_f0 = (float *)((int)local_f0 + 1);
      puVar7 = puVar7 + 0xd;
    } while (local_f0 < local_a8);
  }
  iVar10 = local_38;
  bVar2 = false;
  if (local_80 != (float *)0x0) {
    pfVar8 = local_c4 + 2;
    pfVar17 = local_80;
    local_74 = pfVar8;
    do {
      iVar14 = FUN_0057bf00(&local_34,pfVar8[-2],pfVar8[-1],&DAT_006f4cd8,&DAT_006f4eb8,
                            &DAT_006f4c38,&DAT_006f4374,local_108);
      if (iVar14 == 0) {
        if (iVar10 == 0) {
          if (local_50 == 0.0) {
            *pfVar8 = DAT_0064f3c0;
          }
          else {
            fVar22 = (float10)FUN_0057bed0(pfVar8[-2],pfVar8[-1],local_44);
            fVar21 = (float10)_DAT_0064b2f4;
            *pfVar8 = (float)(fVar22 + fVar21);
            if (fVar22 + fVar21 != (float10)DAT_0064f3c0) goto LAB_0057a576;
          }
          bVar2 = true;
        }
        else {
          fVar21 = (float10)FUN_00615f10(pfVar8[-2],pfVar8[-1]);
          *pfVar8 = (float)(fVar21 + (float10)_DAT_0064b2f4);
        }
      }
      else {
        *pfVar8 = local_34 + _DAT_0064b2f4;
      }
LAB_0057a576:
      pfVar8 = pfVar8 + 8;
      pfVar17 = (float *)((int)pfVar17 - 1);
    } while (pfVar17 != (float *)0x0);
    if (bVar2) {
      local_a8 = local_74;
      local_f0 = (float *)0x0;
      do {
        pfVar8 = (float *)0x0;
        pfVar17 = local_f0;
        if (param_5 != (float *)0x0) {
          do {
            pfVar11 = local_c4;
            iVar10 = (int)pfVar17 + (int)pfVar8 * 6;
            pfVar9 = local_c4 + iVar10 * 8 + 2;
            pfVar12 = pfVar8;
            if (local_c4[iVar10 * 8 + 2] == DAT_0064f3c0) {
              for (; (pfVar12 < param_5 && (*pfVar9 == DAT_0064f3c0)); pfVar9 = pfVar9 + 0x30) {
                pfVar12 = (float *)((int)pfVar12 + 1);
              }
              pfVar9 = local_a8;
              pfVar19 = param_5;
              if (((pfVar12 == param_5) && (pfVar8 < (float *)0x2)) ||
                 ((pfVar8 == (float *)0x0 && (pfVar12 == (float *)((int)param_5 + -1))))) {
                do {
                  fVar21 = (float10)FUN_0057bf80(pfVar9[-2],pfVar9[-1],param_2,param_3);
                  pfVar19 = (float *)((int)pfVar19 + -1);
                  *pfVar9 = (float)(fVar21 + (float10)_DAT_0064b2f4);
                  pfVar12 = param_5;
                  pfVar9 = pfVar9 + 0x30;
                } while (pfVar19 != (float *)0x0);
              }
              else {
                if (pfVar12 == param_5) {
                  pfVar8 = (float *)((int)pfVar8 - 1);
                  pfVar12 = (float *)((int)param_5 + -1);
                  iVar10 = (int)pfVar17 + (int)pfVar8 * 6;
                  local_104 = local_c4[iVar10 * 8 + -0x2e];
                  local_ec = local_c4[iVar10 * 8 + 2];
                  if (local_104 == DAT_0064f3c0) {
                    fVar21 = (float10)FUN_0057bf80(local_c4[(iVar10 + -6) * 8],
                                                   local_c4[iVar10 * 8 + -0x2f],param_2,param_3);
                    local_104 = (float)(fVar21 + (float10)_DAT_0064b2f4);
                  }
                  if ((float *)0x1 < pfVar8) {
                    fVar21 = (float10)pfVar11[iVar10 * 8 + -0x5e];
                    if (fVar21 == (float10)DAT_0064f3c0) {
                      fVar21 = (float10)FUN_0057bf80(local_c4[((int)pfVar17 +
                                                              ((int)pfVar8 * 3 + -6) * 2) * 8],
                                                     pfVar11[iVar10 * 8 + -0x5f],param_2,param_3);
                      fVar21 = fVar21 + (float10)_DAT_0064b2f4;
                    }
                    if (ABS(fVar21 - (float10)local_104) <
                        ABS((float10)local_ec - (float10)local_104)) {
                      local_ec = local_104;
                      local_104 = (float)fVar21;
                    }
                  }
                  local_44 = (float *)((int)pfVar12 - (int)pfVar8);
                  local_40 = 0.0;
                  local_108 = (float *)((local_ec - local_104) * (float)(int)local_44 + local_ec);
                }
                else if (pfVar8 == (float *)0x0) {
                  pfVar8 = (float *)0x0;
                  iVar10 = (int)local_f0 + (int)pfVar12 * 6;
                  local_104 = local_c4[iVar10 * 8 + 0x32];
                  local_108 = (float *)local_c4[iVar10 * 8 + 2];
                  if (local_104 == DAT_0064f3c0) {
                    fVar21 = (float10)FUN_0057bf80(local_c4[((int)local_f0 +
                                                            ((int)pfVar12 * 3 + 3) * 2) * 8],
                                                   local_c4[iVar10 * 8 + 0x31],param_2,param_3);
                    local_104 = (float)(fVar21 + (float10)_DAT_0064b2f4);
                  }
                  if (pfVar12 < (float *)((int)param_5 - 1U)) {
                    fVar21 = (float10)pfVar11[iVar10 * 8 + 0x62];
                    if (fVar21 == (float10)DAT_0064f3c0) {
                      fVar21 = (float10)FUN_0057bf80(local_c4[((int)local_f0 +
                                                              ((int)pfVar12 * 3 + 6) * 2) * 8],
                                                     pfVar11[iVar10 * 8 + 0x61],param_2,param_3);
                      fVar21 = fVar21 + (float10)_DAT_0064b2f4;
                    }
                    if (ABS(fVar21 - (float10)local_104) <
                        ABS((float10)(float)local_108 - (float10)local_104)) {
                      local_108 = (float *)local_104;
                      local_104 = (float)fVar21;
                    }
                  }
                  fStack_70 = 0.0;
                  local_ec = ((float)local_108 - local_104) * (float)(int)pfVar12 + (float)local_108
                  ;
                  pfVar17 = local_f0;
                  local_74 = pfVar12;
                }
                else {
                  pfVar8 = (float *)((int)pfVar8 + -1);
                  local_ec = local_c4[((int)pfVar17 + (int)pfVar8 * 6) * 8 + 2];
                  local_108 = (float *)local_c4[((int)pfVar17 + (int)pfVar12 * 6) * 8 + 2];
                }
                if (pfVar12 <= pfVar8) {
                  return 0;
                }
                if (pfVar8 <= pfVar12) {
                  local_80 = (float *)((int)pfVar12 - (int)pfVar8);
                  fStack_7c = 0.0;
                  pfVar9 = pfVar8;
                  pfVar11 = local_c4 + ((int)pfVar17 + (int)pfVar8 * 6) * 8 + 2;
                  do {
                    uStack_64 = 0;
                    local_68 = (float *)((int)pfVar9 - (int)pfVar8);
                    pfVar9 = (float *)((int)pfVar9 + 1);
                    *pfVar11 = (float)(((float10)local_68 / (float10)local_80) *
                                       ((float10)(float)local_108 - (float10)local_ec) +
                                      (float10)local_ec);
                    pfVar11 = pfVar11 + 0x30;
                  } while (pfVar9 <= pfVar12);
                }
              }
            }
            pfVar8 = (float *)((int)pfVar12 + 1);
          } while (pfVar8 < param_5);
        }
        local_f0 = (float *)((int)pfVar17 + 1);
        local_a8 = local_a8 + 8;
      } while (local_f0 < 6);
    }
  }
  return 1;
}

