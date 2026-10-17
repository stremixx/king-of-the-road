
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004f50a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int *piVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  float local_110;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc [12];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c [12];
  undefined1 local_90 [48];
  undefined1 local_60 [8];
  undefined4 local_58 [22];
  
  puVar8 = local_58;
  iVar13 = 8;
  do {
    puVar8[-2] = 0;
    puVar8[-1] = 0;
    *puVar8 = 0;
    puVar8 = puVar8 + 3;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  fVar17 = (float10)FUN_004e1fd9();
  local_f4 = (float)fVar17;
  fVar17 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0xc) = (float)(fVar17 - (float10)*(float *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x3c88) = 0;
  if (*(int *)(param_1 + 0x2784) != 0) {
    FUN_004eaca0();
  }
  fVar18 = (float10)FUN_004e2035();
  piVar16 = (int *)(param_1 + 0x26c0);
  *(float *)(param_1 + 0x3bd4) = (float)(fVar18 - (float10)*(float *)(param_1 + 0x17e0));
  *(undefined4 *)(param_1 + 0x3c84) = 0;
  *(undefined4 *)(param_1 + 0x3c58) = 0;
  *(float *)(param_1 + 0x3c5c) = DAT_007015b0;
  *(float *)(param_1 + 0x3c60) = DAT_007015b4;
  *(float *)(param_1 + 0x3c64) = DAT_007015b8;
  iVar13 = 3;
  do {
    if (*piVar16 != 0) {
      if (_DAT_006733bc + (float)piVar16[8] <= (float)fVar17) {
        *piVar16 = 0;
        fVar19 = 1.0;
      }
      else {
        fVar19 = ((float)fVar17 - (float)piVar16[8]) / _DAT_006733bc;
      }
      FUN_00501020(iVar13,fVar19);
    }
    piVar16 = piVar16 + 1;
    iVar14 = iVar13 + -2;
    iVar13 = iVar13 + 1;
  } while (iVar14 < 8);
  FUN_005011b0();
  FUN_005000d0();
  if ((*(int *)(param_1 + 0x3344) != 0) && (*(short *)(param_1 + 0x2748) == 0)) {
    return 0xffffffff;
  }
  fVar19 = *(float *)(param_1 + 0x2640);
  *(float *)(param_1 + 0xc54) = fVar19 * *(float *)(param_1 + 0xd40);
  *(float *)(param_1 + 0xc58) = fVar19 * *(float *)(param_1 + 0xd44);
  *(float *)(param_1 + 0xc5c) = fVar19 * *(float *)(param_1 + 0xd48);
  if (*(short *)(param_1 + 0x2748) != 0) {
    *(undefined4 *)(param_1 + 0x3344) = 0;
    *(undefined2 *)(param_1 + 0x2748) = 0;
    *(undefined4 *)(param_1 + 0x271c) = 0;
    *(undefined4 *)(param_1 + 0x29e0) = 0;
    *(undefined4 *)(param_1 + 0x2720) = 0;
    *(undefined4 *)(param_1 + 0x29e0) = 0;
    *(undefined4 *)(param_1 + 0x29dc) = 0;
    *(undefined4 *)(param_1 + 0x29d8) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x29e8) = 0;
    FUN_004eb290();
  }
  FUN_004efcd0();
  FUN_004f0560();
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar8 = (undefined4 *)(param_1 + 0xd00);
    pfVar12 = (float *)(param_1 + 0x68);
    iVar13 = 0;
    do {
      *puVar8 = 0;
      iVar14 = iVar13 + 1;
      puVar8 = puVar8 + 1;
      pfVar12[0x823] = DAT_007015b0;
      pfVar12[0x824] = DAT_007015b4;
      pfVar12[0x825] = DAT_007015b8;
      fVar19 = *(float *)(param_1 + 0x91c);
      fVar1 = *(float *)(param_1 + 0x904);
      fVar2 = *(float *)(param_1 + 0x910);
      fVar3 = *(float *)(param_1 + 0x928);
      fVar4 = *(float *)(param_1 + 0x914);
      fVar5 = *(float *)(param_1 + 0x920);
      fVar6 = *(float *)(param_1 + 0x908);
      fVar7 = *(float *)(param_1 + 0x92c);
      pfVar12[0x5f7] =
           *(float *)(param_1 + 0x90c) * *pfVar12 +
           *(float *)(param_1 + 0x900) * pfVar12[-1] + *(float *)(param_1 + 0x918) * pfVar12[1] +
           *(float *)(param_1 + 0x924);
      pfVar12[0x5f8] = fVar2 * *pfVar12 + fVar1 * pfVar12[-1] + pfVar12[1] * fVar19 + fVar3;
      pfVar12[0x5f9] = fVar6 * pfVar12[-1] + pfVar12[1] * fVar5 + *pfVar12 * fVar4 + fVar7;
      *(undefined1 *)(iVar13 + 0x19c4 + param_1) = 0;
      pfVar12 = pfVar12 + 3;
      iVar13 = iVar14;
    } while (iVar14 < *(int *)(param_1 + 0xdd4));
  }
  pfVar12 = (float *)(param_1 + 0x900);
  pfVar11 = (float *)(param_1 + 0xd0);
  pfVar15 = (float *)(param_1 + 0x1008);
  *pfVar15 = *pfVar12 * *pfVar11 +
             *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0xd8) +
             *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0x100c) =
       *(float *)(param_1 + 0x904) * *pfVar11 +
       *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0x1010) =
       *(float *)(param_1 + 0x908) * *pfVar11 +
       *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0xd4);
  fVar17 = (float10)FUN_004ef910();
  *(float *)(param_1 + 0x1a20) = (float)fVar17;
  FUN_004ef9e0();
  local_b8 = *(float *)(param_1 + 0x58) * *pfVar15 +
             *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x100c) +
             *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x1010);
  local_c0 = local_b8 * *pfVar15;
  local_bc = local_b8 * *(float *)(param_1 + 0x100c);
  local_b8 = local_b8 * *(float *)(param_1 + 0x1010);
  puVar8 = (undefined4 *)
           FUN_005ab380(local_90,DAT_007015b0,DAT_007015b4,DAT_007015b8,*pfVar11,
                        *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8),
                        *(undefined4 *)(param_1 + 0x1a20));
  puVar9 = (undefined4 *)(param_1 + 0x2004);
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_004f1eb0();
  FUN_004f1d10();
  FUN_004efa30();
  *(undefined4 *)(param_1 + 0x1a14) = 0x47c35000;
  if ((float)_DAT_0064a590 < ABS(*(float *)(param_1 + 0x1a20) - (float)_DAT_0064c9f0)) {
    fVar17 = (float10)fsin((float10)*(float *)(param_1 + 0x1a20));
    fVar18 = (float10)fcos((float10)*(float *)(param_1 + 0x1a20));
    *(float *)(param_1 + 0x1a14) = (float)(fVar17 / fVar18);
  }
  FUN_004f47e0();
  fVar17 = (float10)FUN_004efc90();
  *(float *)(param_1 + 0x1a28) = (float)fVar17;
  fVar17 = (float10)FUN_004efcb0();
  *(float *)(param_1 + 0x1a2c) = (float)fVar17;
  FUN_004f2e70();
  local_d0 = DAT_007015b8;
  local_dc = DAT_007015b8;
  local_d8 = DAT_007015b0;
  local_e4 = DAT_007015b0;
  local_d4 = DAT_007015b4;
  local_e0 = DAT_007015b4;
  FUN_004f3170(&local_d8,&local_e4);
  fVar19 = local_f4;
  fVar17 = (float10)FUN_0061e749((double)(*(float *)(param_1 + 0x251c) * (float)_DAT_0064c9e8));
  FUN_004f3990(&local_d8,&local_e4,param_1 + 0x9f0,param_1 + 0x4c,
               (float)((float10)fVar19 / (fVar17 + (float10)_DAT_0064a660)));
  if (*(char *)(param_1 + 0x19b4) == '\0') {
    local_ec = DAT_007015b4;
    local_110 = 0.0;
    fVar19 = local_110;
    local_110 = 0.0;
    local_f0 = DAT_007015b0;
    local_e8 = DAT_007015b8;
    local_104 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      iVar13 = param_1 + 0x18a4;
      pfVar11 = (float *)(param_1 + 0x1964);
      do {
        local_110 = local_110 + *pfVar11;
        FUN_005aae00(&local_100,iVar13);
        local_104 = local_104 + 1;
        pfVar11 = pfVar11 + 1;
        iVar13 = iVar13 + 0xc;
        fVar19 = local_110;
      } while (local_104 < *(int *)(param_1 + 0xdd4));
    }
    local_110 = fVar19;
    fVar17 = (float10)FUN_005aabc0();
    if ((*(int *)(param_1 + 0x1abc) != 0) && (*(float *)(param_1 + 0xdc4) < (float)_DAT_0064a6d0)) {
      local_d8 = DAT_007015b0;
      local_d4 = DAT_007015b4;
      local_d0 = DAT_007015b8;
      FUN_004eeea0();
    }
    if (((float)fVar17 + (float)fVar17 < local_110) &&
       (ABS(*(float *)(param_1 + 0x60)) < (float)_DAT_0064a6d0)) {
      local_e4 = DAT_007015b0;
      local_e0 = DAT_007015b4;
      local_dc = DAT_007015b8;
      FUN_004ef040();
    }
  }
  local_104 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar11 = (float *)(param_1 + 0x108);
    pfVar15 = (float *)(param_1 + 0x2038);
    do {
      pfVar15[-1] = pfVar15[0x17];
      *pfVar15 = pfVar15[0x18];
      pfVar15[1] = pfVar15[0x19];
      fVar4 = *pfVar11 * pfVar15[1] - pfVar11[1] * *pfVar15;
      fVar6 = pfVar15[-1] * pfVar11[1] - pfVar11[-1] * pfVar15[1];
      fVar5 = *pfVar15 * pfVar11[-1] - pfVar15[-1] * *pfVar11;
      fVar19 = pfVar11[-1];
      fVar1 = pfVar11[1];
      fVar2 = *pfVar11;
      fVar3 = pfVar11[-1];
      pfVar15[-1] = fVar6 * pfVar11[1] - fVar5 * *pfVar11;
      *pfVar15 = fVar5 * fVar19 - fVar4 * fVar1;
      pfVar15[1] = fVar4 * fVar2 - fVar6 * fVar3;
      local_104 = local_104 + 1;
      pfVar11 = pfVar11 + 0x3e;
      pfVar15 = pfVar15 + 3;
    } while (local_104 < *(int *)(param_1 + 0xdd4));
  }
  local_104 = 0;
  *(float *)(param_1 + 0xc9c) = DAT_007015b0;
  *(float *)(param_1 + 0xca0) = DAT_007015b4;
  *(float *)(param_1 + 0xca4) = DAT_007015b8;
  *(float *)(param_1 + 0xce4) = DAT_007015b0;
  *(float *)(param_1 + 0xce8) = DAT_007015b4;
  *(float *)(param_1 + 0xcec) = DAT_007015b8;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar11 = (float *)(param_1 + 0x2038);
    do {
      pfVar15 = pfVar11 + -1;
      FUN_005aae00(&local_100,pfVar15);
      fVar19 = *(float *)(param_1 + 0x90c) * *pfVar11 +
               *pfVar12 * *pfVar15 + *(float *)(param_1 + 0x918) * pfVar11[1];
      fVar2 = *(float *)(param_1 + 0x910) * *pfVar11 +
              *(float *)(param_1 + 0x91c) * pfVar11[1] + *(float *)(param_1 + 0x904) * *pfVar15;
      fVar1 = *pfVar11 * *(float *)(param_1 + 0x914) +
              pfVar11[1] * *(float *)(param_1 + 0x920) + *(float *)(param_1 + 0x908) * *pfVar15;
      local_f0 = fVar1 * pfVar11[-0x1fc] - fVar2 * pfVar11[-0x1fb];
      local_ec = fVar19 * pfVar11[-0x1fb] - fVar1 * pfVar11[-0x1fd];
      local_e8 = fVar2 * pfVar11[-0x1fd] - fVar19 * pfVar11[-0x1fc];
      FUN_005aae00(local_cc,&local_f0);
      local_104 = local_104 + 1;
      pfVar11 = pfVar11 + 3;
    } while (local_104 < *(int *)(param_1 + 0xdd4));
  }
  pfVar11 = (float *)(param_1 + 0xc6c);
  *pfVar11 = local_d8 + *(float *)(param_1 + 0xc9c) + *(float *)(param_1 + 0xc90) +
             *(float *)(param_1 + 0xc78);
  *(float *)(param_1 + 0xc70) =
       local_d4 + *(float *)(param_1 + 0xca0) + *(float *)(param_1 + 0xc94) +
       *(float *)(param_1 + 0xc7c);
  *(float *)(param_1 + 0xc74) =
       local_d0 + *(float *)(param_1 + 0xca4) + *(float *)(param_1 + 0xc98) +
       *(float *)(param_1 + 0xc80);
  local_f8 = local_dc + *(float *)(param_1 + 0xcec);
  local_ec = local_e0 + *(float *)(param_1 + 0xce8) + *(float *)(param_1 + 0xcdc);
  local_e8 = local_f8 + *(float *)(param_1 + 0xce0);
  *(float *)(param_1 + 0xcc0) =
       local_e4 + *(float *)(param_1 + 0xce4) + *(float *)(param_1 + 0xcd8) +
       *(float *)(param_1 + 0xccc);
  *(float *)(param_1 + 0xcc4) = local_ec + *(float *)(param_1 + 0xcd0);
  fVar19 = *(float *)(param_1 + 0x2640);
  *(float *)(param_1 + 0xcc8) = local_e8 + *(float *)(param_1 + 0xcd4);
  local_100 = *pfVar11 / fVar19;
  local_fc = *(float *)(param_1 + 0xc70) / fVar19;
  *(float *)(param_1 + 0xd58) = *(float *)(param_1 + 0xd40) - local_100;
  *(float *)(param_1 + 0xd5c) = *(float *)(param_1 + 0xd44) - local_fc;
  *(float *)(param_1 + 0xd60) = *(float *)(param_1 + 0xd48) - *(float *)(param_1 + 0xc74) / fVar19;
  fVar17 = (float10)FUN_005aabc0();
  *(float *)(param_1 + 0xd7c) = (float)fVar17;
  fVar19 = *(float *)(param_1 + 0xd0) * -*(float *)(param_1 + 0xd58) +
           -*(float *)(param_1 + 0xd5c) * *(float *)(param_1 + 0xd4) +
           -*(float *)(param_1 + 0xd60) * *(float *)(param_1 + 0xd8);
  pfVar15 = (float *)(param_1 + 0x19fc);
  *(float *)(param_1 + 0x263c) = fVar19;
  *(float *)(param_1 + 0xd70) = fVar19 * *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0xd74) = fVar19 * *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0xd78) = fVar19 * *(float *)(param_1 + 0xd8);
  *pfVar15 = DAT_007015b0;
  *(float *)(param_1 + 0x1a00) = DAT_007015b4;
  *(float *)(param_1 + 0x1a04) = DAT_007015b8;
  if ((*(char *)(param_1 + 0x19c3) != '\0') && (*(char *)(param_1 + 0x19c2) == '\0')) {
    fVar19 = (*(float *)(param_1 + 0x1cc0) + *(float *)(param_1 + 0x1ccc)) * _DAT_0064b248;
    *pfVar15 = (*(float *)(param_1 + 0x1cc8) + *(float *)(param_1 + 0x1cbc)) * _DAT_0064b248;
    fVar1 = (*(float *)(param_1 + 0x1cc4) + *(float *)(param_1 + 0x1cd0)) * _DAT_0064b248;
    *(float *)(param_1 + 0x1a00) = fVar19;
    *(float *)(param_1 + 0x1a04) = fVar1;
  }
  *(undefined4 *)(param_1 + 0x1a04) = 0;
  *(float *)(param_1 + 0xc48) = *(float *)(param_1 + 0xc54) + *pfVar11;
  *(float *)(param_1 + 0xc4c) = *(float *)(param_1 + 0xc70) + *(float *)(param_1 + 0xc58);
  fVar19 = *(float *)(param_1 + 0x2640);
  *(float *)(param_1 + 0xc50) = *(float *)(param_1 + 0xc74) + *(float *)(param_1 + 0xc5c);
  *(float *)(param_1 + 0xa14) = DAT_007015b0;
  *(float *)(param_1 + 0xa18) = DAT_007015b4;
  *(float *)(param_1 + 0xa1c) = DAT_007015b8;
  local_100 = (*pfVar11 / fVar19) * local_f4;
  local_fc = (*(float *)(param_1 + 0xc70) / fVar19) * local_f4;
  local_f8 = (*(float *)(param_1 + 0xc74) / fVar19) * local_f4;
  FUN_005aae00(local_cc,&local_100);
  *(float *)(param_1 + 0xca8) = *(float *)(param_1 + 0xcc0);
  *(undefined4 *)(param_1 + 0xcac) = *(undefined4 *)(param_1 + 0xcc4);
  *(undefined4 *)(param_1 + 0xcb0) = *(undefined4 *)(param_1 + 0xcc8);
  *(float *)(param_1 + 0xc30) = DAT_007015b0;
  *(float *)(param_1 + 0xc34) = DAT_007015b4;
  *(float *)(param_1 + 0xc38) = DAT_007015b8;
  fVar19 = local_f4 * *(float *)(param_1 + 0xca8);
  fVar1 = local_f4 * *(float *)(param_1 + 0xcac);
  pfVar11 = (float *)(param_1 + 0x4c);
  fVar2 = local_f4 * *(float *)(param_1 + 0xcb0);
  FUN_0041ce10(*pfVar11 * *pfVar12 +
               *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0x50) +
               *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0x54),
               *(float *)(param_1 + 0x904) * *pfVar11 +
               *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x50) +
               *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0x54),
               *(float *)(param_1 + 0x908) * *pfVar11 +
               *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0x50) +
               *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0x54));
  FUN_0041ce10(local_100 + fVar19,fVar1 + local_fc,fVar2 + local_f8);
  local_b4 = fVar19;
  local_b0 = fVar1;
  local_ac = fVar2;
  FUN_0041ce10(fVar19 * *(float *)(param_1 + 0x10) +
               fVar2 * *(float *)(param_1 + 0x28) + fVar1 * *(float *)(param_1 + 0x1c),
               fVar19 * *(float *)(param_1 + 0x14) +
               fVar2 * *(float *)(param_1 + 0x2c) + fVar1 * *(float *)(param_1 + 0x20),
               fVar19 * *(float *)(param_1 + 0x18) +
               fVar2 * *(float *)(param_1 + 0x30) + fVar1 * *(float *)(param_1 + 0x24));
  *pfVar11 = local_100;
  *(float *)(param_1 + 0x50) = local_fc;
  *(float *)(param_1 + 0x54) = local_f8;
  puVar9 = (undefined4 *)FUN_004e29c2(local_cc,&local_b4,param_1 + 0x1f48);
  puVar8 = (undefined4 *)(param_1 + 0x58);
  *puVar8 = *puVar9;
  *(undefined4 *)(param_1 + 0x5c) = puVar9[1];
  *(undefined4 *)(param_1 + 0x60) = puVar9[2];
  iVar13 = FUN_004ef880();
  if (iVar13 != 0) {
    *(undefined4 *)(param_1 + 0x3344) = 1;
    FUN_00506360();
    return 0xffffffff;
  }
  FUN_0041ce10(*(float *)(param_1 + 0xd0) * *pfVar12 +
               *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0xd4) +
               *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0xd8),
               *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0xd4) +
               *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0xd8) +
               *(float *)(param_1 + 0x904) * *(float *)(param_1 + 0xd0),
               *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0xd4) +
               *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0xd8) +
               *(float *)(param_1 + 0x908) * *(float *)(param_1 + 0xd0));
  uVar10 = FUN_004bde70(local_cc,local_9c,puVar8,local_9c);
  FUN_004bde70(&local_a8,uVar10);
  fVar17 = (float10)FUN_004e1080(puVar8,local_9c);
  pfVar11 = (float *)FUN_004bdd80(local_cc,local_9c,(float)fVar17);
  local_c0 = *pfVar11;
  local_bc = pfVar11[1];
  local_b8 = pfVar11[2];
  uVar10 = FUN_004bdd80(local_cc,&local_c0,local_f4);
  fVar17 = (float10)FUN_005aabc0(uVar10);
  puVar8 = (undefined4 *)
           FUN_005ab380(local_90,*pfVar15,*(undefined4 *)(param_1 + 0x1a00),
                        *(undefined4 *)(param_1 + 0x1a04),local_c0,local_bc,local_b8,(float)fVar17);
  puVar9 = (undefined4 *)(param_1 + 0x990);
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar10 = FUN_004bdd80(local_cc,&local_a8,local_f4);
  fVar17 = (float10)FUN_005aabc0(uVar10);
  puVar8 = (undefined4 *)
           FUN_005ab380(local_90,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_a8,local_a4,local_a0,
                        (float)fVar17);
  puVar9 = (undefined4 *)(param_1 + 0x960);
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = (undefined4 *)FUN_005ab130(local_90,param_1 + 0x990,(undefined4 *)(param_1 + 0x10));
  puVar9 = (undefined4 *)(param_1 + 0x10);
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar10 = FUN_004bddd0(local_cc,param_1 + 0x40,param_1 + 0xa14,local_f4);
  puVar8 = (undefined4 *)FUN_004bdd80(&local_100,uVar10);
  uVar10 = FUN_005ab330(local_90,*puVar8,puVar8[1],puVar8[2]);
  puVar8 = (undefined4 *)FUN_005ab130(local_60,(undefined4 *)(param_1 + 0x10),uVar10);
  puVar9 = (undefined4 *)(param_1 + 0x10);
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  pfVar11 = (float *)FUN_005aba00(local_60,param_1 + 0x10);
  pfVar15 = pfVar12;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *pfVar15 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar15 = pfVar15 + 1;
  }
  pfVar12 = (float *)FUN_004cb300(local_cc,param_1 + 0x4c,pfVar12);
  local_b4 = *pfVar12;
  local_b0 = pfVar12[1];
  local_ac = pfVar12[2];
  puVar8 = (undefined4 *)FUN_004e2984(local_cc,&local_b4,param_1 + 0x1f54);
  *(undefined4 *)(param_1 + 0x58) = *puVar8;
  *(undefined4 *)(param_1 + 0x5c) = puVar8[1];
  *(undefined4 *)(param_1 + 0x60) = puVar8[2];
  FUN_005045b0();
  puVar8 = (undefined4 *)(param_1 + 0x3be8);
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x3c08) = 0;
  *(undefined4 *)(param_1 + 0x3c0c) = 0;
  return 1;
}

