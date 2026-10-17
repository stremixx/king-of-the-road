
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_004f7ae0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  int iVar15;
  short *psVar16;
  undefined4 *puVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  short *local_6d0;
  float local_6cc;
  float local_6c8;
  float local_6c4;
  float local_6c0;
  float local_6bc;
  float local_6b8;
  float *local_6b4;
  float local_6b0;
  float local_6ac;
  float local_6a8;
  float local_6a4;
  float local_6a0;
  float local_69c;
  short *local_698;
  float local_694;
  float local_690;
  float local_68c;
  float local_688;
  float local_684;
  float local_680;
  float local_67c;
  float local_678;
  float local_674;
  float local_670;
  float local_66c;
  float local_668;
  short *local_664;
  float local_660;
  float local_65c;
  float local_658;
  float local_654;
  float local_650;
  float local_64c;
  float local_648;
  float local_644;
  float local_640;
  float local_63c;
  undefined1 local_638 [8];
  float local_630;
  undefined1 local_62c [12];
  float *local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  float local_610;
  float local_60c;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  float local_5e4;
  float local_5e0;
  float local_5dc;
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float afStack_5bc [8];
  float local_59c [24];
  float afStack_53c [8];
  float afStack_51c [8];
  float afStack_4fc [8];
  float local_4dc [12];
  float afStack_4ac [8];
  float afStack_48c [8];
  float afStack_46c [8];
  float afStack_44c [8];
  float local_42c [27];
  float local_3c0 [24];
  float local_360 [24];
  float local_300 [24];
  float local_2a0 [24];
  undefined1 local_240 [48];
  float local_210 [24];
  undefined4 local_1b0 [24];
  undefined4 local_150 [24];
  float local_f0 [24];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (1 < *(int *)(param_1 + 0x2534)) {
    fVar11 = *(float *)(param_1 + 0x2338) * *(float *)(param_1 + 0xd8) -
             *(float *)(param_1 + 0x233c) * *(float *)(param_1 + 0xd4);
    local_660 = DAT_007015b0;
    local_65c = DAT_007015b4;
    local_658 = DAT_007015b8;
    local_6b0 = DAT_007015b0;
    fVar13 = *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0x233c) -
             *(float *)(param_1 + 0x2334) * *(float *)(param_1 + 0xd8);
    local_6ac = DAT_007015b4;
    local_6a8 = DAT_007015b8;
    fVar12 = *(float *)(param_1 + 0x2334) * *(float *)(param_1 + 0xd4) -
             *(float *)(param_1 + 0x2338) * *(float *)(param_1 + 0xd0);
    local_6a4 = fVar12 * *(float *)(param_1 + 0xd4) - fVar13 * *(float *)(param_1 + 0xd8);
    local_6a0 = fVar11 * *(float *)(param_1 + 0xd8) - fVar12 * *(float *)(param_1 + 0xd0);
    local_69c = fVar13 * *(float *)(param_1 + 0xd0) - fVar11 * *(float *)(param_1 + 0xd4);
    fVar11 = DAT_00701580 * *(float *)(param_1 + 0x22a4) +
             DAT_00701584 * *(float *)(param_1 + 0x22b0) +
             DAT_00701588 * *(float *)(param_1 + 0x22bc);
    fVar12 = DAT_00701580 * *(float *)(param_1 + 0x22a8) +
             DAT_00701584 * *(float *)(param_1 + 0x22b4) +
             DAT_00701588 * *(float *)(param_1 + 0x22c0);
    fVar13 = DAT_00701580 * *(float *)(param_1 + 0x22ac) +
             DAT_00701584 * *(float *)(param_1 + 0x22b8) +
             DAT_00701588 * *(float *)(param_1 + 0x22c4);
    local_688 = fVar12 * *(float *)(param_1 + 0xd8) - fVar13 * *(float *)(param_1 + 0xd4);
    local_684 = fVar13 * *(float *)(param_1 + 0xd0) - fVar11 * *(float *)(param_1 + 0xd8);
    fVar11 = fVar11 * *(float *)(param_1 + 0xd4) - fVar12 * *(float *)(param_1 + 0xd0);
    local_6cc = fVar11 * *(float *)(param_1 + 0xd4) - local_684 * *(float *)(param_1 + 0xd8);
    local_6c8 = local_688 * *(float *)(param_1 + 0xd8) - fVar11 * *(float *)(param_1 + 0xd0);
    local_6c4 = local_684 * *(float *)(param_1 + 0xd0) - local_688 * *(float *)(param_1 + 0xd4);
    local_680 = local_69c;
    local_654 = local_6cc;
    local_650 = local_6c8;
    local_64c = local_6c4;
    FUN_005aab70();
    FUN_004f1ef0(param_1 + 0x2004,(float *)(param_1 + 0x22a4),param_1 + 0x2304,&local_6a4,
                 param_1 + 0x2340,
                 local_6cc * local_6a4 + local_6c8 * local_6a0 + local_6c4 * local_69c,&local_6cc);
    FUN_004efa30();
    if ((*(int *)(param_1 + 0x276c) == 0) && (*(int *)(param_1 + 0x3f4c) != 1)) {
      pfVar6 = (float *)(param_1 + 0x2224);
    }
    else {
      iVar15 = *(int *)(param_1 + 0xdd4);
      if (0 < iVar15) {
        pfVar9 = local_4dc;
        pfVar6 = (float *)(param_1 + 0x2224);
        do {
          *pfVar9 = ABS(*pfVar6);
          pfVar6 = pfVar6 + 1;
          pfVar9 = pfVar9 + 1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      pfVar6 = local_4dc;
    }
    FUN_004f47e0(pfVar6);
    FUN_004f2880();
    iVar15 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      local_6b4 = (float *)(param_1 + 0x3510);
      local_6d0 = (short *)(param_1 + 0x19a4);
      local_664 = (short *)(param_1 + 0x110);
      puVar7 = (undefined4 *)(param_1 + 0xee8);
      pfVar6 = (float *)(param_1 + 0xf08);
      do {
        *pfVar6 = DAT_007015b0;
        pfVar6[1] = DAT_007015b4;
        pfVar6[2] = DAT_007015b8;
        *puVar7 = 0;
        if ((*local_664 != 0) && (*local_6d0 == 0)) {
          FUN_00502d80(local_6b4,iVar15,0);
        }
        local_6d0 = local_6d0 + 1;
        iVar15 = iVar15 + 1;
        puVar7 = puVar7 + 1;
        pfVar6 = pfVar6 + 3;
        local_664 = local_664 + 0x7c;
        local_6b4 = (float *)((int)local_6b4 + 0xd0);
      } while (iVar15 < *(int *)(param_1 + 0xdd4));
    }
    FUN_004f3170(&local_660,&local_6b0);
    FUN_004f3990(&local_660,&local_6b0,&local_6a4,param_1 + 0x2340,*(undefined4 *)(param_1 + 0x2524)
                );
    *(float *)(param_1 + 0xc9c) = DAT_007015b0;
    *(float *)(param_1 + 0xca0) = DAT_007015b4;
    *(float *)(param_1 + 0xca4) = DAT_007015b8;
    *(float *)(param_1 + 0xce4) = DAT_007015b0;
    *(float *)(param_1 + 0xce8) = DAT_007015b4;
    iVar15 = 8;
    *(float *)(param_1 + 0xcec) = DAT_007015b8;
    pfVar6 = local_360 + 2;
    do {
      pfVar6[-2] = 0.0;
      pfVar6[-1] = 0.0;
      *pfVar6 = 0.0;
      pfVar6 = pfVar6 + 3;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    local_698 = (short *)0x0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      pfVar14 = local_360 + 1;
      pfVar6 = (float *)(param_1 + 0x108);
      pfVar9 = (float *)(param_1 + 0x2098);
      do {
        fVar13 = pfVar9[1] * *pfVar6 - pfVar6[1] * *pfVar9;
        fVar2 = pfVar6[1] * pfVar9[-1] - pfVar9[1] * pfVar6[-1];
        fVar1 = pfVar6[-1] * *pfVar9 - pfVar9[-1] * *pfVar6;
        local_688 = fVar2 * pfVar6[1] - fVar1 * *pfVar6;
        fVar11 = pfVar6[-1];
        fVar12 = pfVar6[1];
        pfVar14[-1] = local_688;
        local_684 = fVar1 * fVar11 - fVar13 * fVar12;
        fVar11 = *pfVar6;
        fVar12 = pfVar6[-1];
        *pfVar14 = local_684;
        local_680 = fVar13 * fVar11 - fVar2 * fVar12;
        pfVar14[1] = local_680;
        FUN_005aae00(local_638,pfVar14 + -1);
        fVar11 = *(float *)(param_1 + 0x90c) * *pfVar14 +
                 *(float *)(param_1 + 0x900) * pfVar14[-1] +
                 pfVar14[1] * *(float *)(param_1 + 0x918);
        fVar13 = *(float *)(param_1 + 0x910) * *pfVar14 +
                 pfVar14[1] * *(float *)(param_1 + 0x91c) +
                 pfVar14[-1] * *(float *)(param_1 + 0x904);
        fVar12 = *pfVar14 * *(float *)(param_1 + 0x914) +
                 pfVar14[-1] * *(float *)(param_1 + 0x908) +
                 pfVar14[1] * *(float *)(param_1 + 0x920);
        local_6c0 = fVar12 * pfVar9[-0x214] - fVar13 * pfVar9[-0x213];
        local_6bc = fVar11 * pfVar9[-0x213] - fVar12 * pfVar9[-0x215];
        local_6b8 = fVar13 * pfVar9[-0x215] - fVar11 * pfVar9[-0x214];
        local_654 = local_6c0;
        local_650 = local_6bc;
        local_64c = local_6b8;
        FUN_005aae00(&local_694,&local_6c0);
        local_698 = (short *)((int)local_698 + 1);
        pfVar6 = pfVar6 + 0x3e;
        pfVar9 = pfVar9 + 3;
        pfVar14 = pfVar14 + 3;
      } while ((int)local_698 < *(int *)(param_1 + 0xdd4));
    }
    *(float *)(param_1 + 0xc6c) =
         local_660 + *(float *)(param_1 + 0xc9c) + *(float *)(param_1 + 0xc90) +
         *(float *)(param_1 + 0xc78);
    *(float *)(param_1 + 0xc70) =
         local_65c + *(float *)(param_1 + 0xca0) + *(float *)(param_1 + 0xc94) +
         *(float *)(param_1 + 0xc7c);
    *(float *)(param_1 + 0xc74) =
         local_658 + *(float *)(param_1 + 0xca4) + *(float *)(param_1 + 0xc98) +
         *(float *)(param_1 + 0xc80);
    local_66c = local_6ac + *(float *)(param_1 + 0xce8) + *(float *)(param_1 + 0xcdc);
    local_668 = local_6a8 + *(float *)(param_1 + 0xcec) + *(float *)(param_1 + 0xce0);
    local_688 = local_6b0 + *(float *)(param_1 + 0xce4) + *(float *)(param_1 + 0xcd8) +
                *(float *)(param_1 + 0xccc);
    local_684 = local_66c + *(float *)(param_1 + 0xcd0);
    local_680 = local_668 + *(float *)(param_1 + 0xcd4);
    *(float *)(param_1 + 0xcc0) = local_688;
    *(float *)(param_1 + 0xcc4) = local_684;
    *(float *)(param_1 + 0xcc8) = local_680;
    *(float *)(param_1 + 0x2394) = *(float *)(param_1 + 0xc6c);
    *(undefined4 *)(param_1 + 0x2398) = *(undefined4 *)(param_1 + 0xc70);
    *(undefined4 *)(param_1 + 0x239c) = *(undefined4 *)(param_1 + 0xc74);
    *(float *)(param_1 + 0x23d0) = *(float *)(param_1 + 0xcc0);
    *(undefined4 *)(param_1 + 0x23d4) = *(undefined4 *)(param_1 + 0xcc4);
    *(undefined4 *)(param_1 + 0x23d8) = *(undefined4 *)(param_1 + 0xcc8);
  }
  local_644 = 0.0;
  local_640 = 0.0;
  local_63c = 0.0;
  pfVar6 = local_59c + 2;
  iVar15 = 8;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  pfVar6 = local_3c0 + 2;
  iVar15 = 8;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  pfVar6 = local_300 + 2;
  iVar15 = 8;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  pfVar6 = local_210 + 2;
  iVar15 = 8;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  pfVar6 = local_42c + 2;
  iVar15 = 8;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  pfVar6 = local_f0 + 2;
  iVar15 = 8;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  pfVar6 = local_f0 + 2;
  iVar15 = 8;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  *(float *)(param_1 + 0x2520) = *(float *)(param_1 + 0x2528) + *(float *)(param_1 + 0x2520);
  local_6cc = *(float *)(param_1 + 0x2358) - *(float *)(param_1 + 0x2364) * _DAT_0064b248;
  local_6c8 = *(float *)(param_1 + 0x235c) - *(float *)(param_1 + 0x2368) * _DAT_0064b248;
  local_6c4 = *(float *)(param_1 + 0x2360) - *(float *)(param_1 + 0x236c) * _DAT_0064b248;
  local_6b8 = *(float *)(param_1 + 0x2528);
  local_6c0 = local_6cc * local_6b8;
  local_6bc = local_6b8 * local_6c8;
  local_6b8 = local_6b8 * local_6c4;
  local_6a4 = local_6c0;
  local_6a0 = local_6bc;
  local_69c = local_6b8;
  fVar18 = (float10)FUN_005aabc0(&local_6c0);
  puVar7 = (undefined4 *)
           FUN_005ab380(local_42c,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_6cc,local_6c8,
                        local_6c4,(float)fVar18);
  puVar17 = (undefined4 *)(param_1 + 0x25e4);
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar17 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar17 = puVar17 + 1;
  }
  local_6bc = *(float *)(param_1 + 0x2338) + *(float *)(param_1 + 0xa18);
  local_6b8 = *(float *)(param_1 + 0x233c) + *(float *)(param_1 + 0xa1c);
  local_6b4 = *(float **)(param_1 + 0x2528);
  local_6cc = (*(float *)(param_1 + 0x2334) + *(float *)(param_1 + 0xa14)) * (float)local_6b4;
  local_6c8 = (float)local_6b4 * local_6bc;
  local_6c4 = (float)local_6b4 * local_6b8;
  FUN_005ab330(local_240,local_6cc,local_6c8,local_6c4);
  puVar7 = (undefined4 *)(param_1 + 0x22a4);
  puVar17 = (undefined4 *)(param_1 + 0x22d4);
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar17 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar17 = puVar17 + 1;
  }
  uVar8 = FUN_005ab130(local_42c,param_1 + 0x25e4,(undefined4 *)(param_1 + 0x22d4),local_240);
  puVar7 = (undefined4 *)FUN_005ab130(local_4dc,uVar8);
  puVar17 = (undefined4 *)(param_1 + 0x22a4);
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar17 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar17 = puVar17 + 1;
  }
  pfVar6 = (float *)(param_1 + 0x2304);
  pfVar9 = (float *)FUN_005aba00(local_42c,param_1 + 0x22a4);
  pfVar14 = pfVar6;
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *pfVar14 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar14 = pfVar14 + 1;
  }
  *(float *)(param_1 + 0x2598) =
       *(float *)(param_1 + 0xd0) * *pfVar6 +
       *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0x259c) =
       *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0xd4) +
       *(float *)(param_1 + 0x2308) * *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0x25a0) =
       *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0xd4) +
       *(float *)(param_1 + 0x230c) * *(float *)(param_1 + 0xd0);
  local_6cc = *(float *)(param_1 + 0x2340) * *pfVar6 +
              *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0x2344) +
              *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0x2348);
  local_6c8 = *(float *)(param_1 + 0x2308) * *(float *)(param_1 + 0x2340) +
              *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0x2344) +
              *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0x2348);
  *(float *)(param_1 + 0x234c) = local_6cc;
  local_6c4 = *(float *)(param_1 + 0x230c) * *(float *)(param_1 + 0x2340) +
              *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0x2344) +
              *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0x2348);
  *(float *)(param_1 + 0x2350) = local_6c8;
  *(float *)(param_1 + 0x2354) = local_6c4;
  puVar7 = (undefined4 *)FUN_004e29c2(local_638,(float *)(param_1 + 0x234c),param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x2358) = *puVar7;
  *(undefined4 *)(param_1 + 0x235c) = puVar7[1];
  *(undefined4 *)(param_1 + 0x2360) = puVar7[2];
  local_6b0 = DAT_00701590 * *(float *)(param_1 + 0x22a4) +
              DAT_00701594 * *(float *)(param_1 + 0x22b0) +
              DAT_00701598 * *(float *)(param_1 + 0x22bc);
  iVar15 = 0;
  local_6ac = DAT_00701590 * *(float *)(param_1 + 0x22a8) +
              DAT_00701594 * *(float *)(param_1 + 0x22b4) +
              DAT_00701598 * *(float *)(param_1 + 0x22c0);
  local_6a8 = DAT_00701590 * *(float *)(param_1 + 0x22ac) +
              DAT_00701594 * *(float *)(param_1 + 0x22b8) +
              DAT_00701598 * *(float *)(param_1 + 0x22c4);
  if (0 < *(int *)(param_1 + 0xdd4)) {
    do {
      *(undefined4 *)(param_1 + 0x243c + iVar15 * 4) =
           *(undefined4 *)(param_1 + 0x241c + iVar15 * 4);
      psVar16 = (short *)(iVar15 * 0xc);
      *(undefined4 *)(param_1 + 0x2224 + iVar15 * 4) = 0;
      fVar11 = *(float *)(param_1 + 0x1b74 + iVar15 * 4);
      afStack_5bc[iVar15] = 0.0;
      fVar11 = -fVar11;
      local_67c = fVar11 * DAT_00701590;
      local_42c[iVar15 * 3] = DAT_007015b0;
      (local_42c + 1)[iVar15 * 3] = DAT_007015b4;
      (local_42c + 2)[iVar15 * 3] = DAT_007015b8;
      local_678 = fVar11 * DAT_00701594;
      local_f0[iVar15 * 3] = DAT_007015b0;
      (local_f0 + 1)[iVar15 * 3] = DAT_007015b4;
      (local_f0 + 2)[iVar15 * 3] = DAT_007015b8;
      iVar10 = iVar15 * 3 + 0x72f;
      local_6a4 = local_67c + *(float *)(param_1 + iVar10 * 4);
      local_620 = (float *)(param_1 + iVar10 * 4);
      pfVar6 = (float *)(param_1 + 0x22a4);
      afStack_51c[iVar15] = 0.0;
      afStack_4fc[iVar15] = 0.0;
      local_6a0 = local_678 + local_620[1];
      fVar11 = fVar11 * DAT_00701598 + local_620[2];
      local_6cc = local_6a4 * *pfVar6 +
                  local_6a0 * *(float *)(param_1 + 0x22b0) + fVar11 * *(float *)(param_1 + 0x22bc) +
                  *(float *)(param_1 + 0x22c8);
      local_6c8 = local_6a0 * *(float *)(param_1 + 0x22b4) +
                  fVar11 * *(float *)(param_1 + 0x22c0) + local_6a4 * *(float *)(param_1 + 0x22a8) +
                  *(float *)(param_1 + 0x22cc);
      local_6c4 = local_6a0 * *(float *)(param_1 + 0x22b8) +
                  fVar11 * *(float *)(param_1 + 0x22c4) + local_6a4 * *(float *)(param_1 + 0x22ac) +
                  *(float *)(param_1 + 0x22d0);
      local_698 = (short *)(param_1 + iVar15 * 0xf8);
      local_664 = psVar16;
      if ((*(short *)(param_1 + 0x110 + iVar15 * 0xf8) == 0) || (local_698[0x818] == 0)) {
LAB_004f88a8:
        local_6d0 = (short *)(*(float *)(param_1 + 0x1f9c + iVar15 * 4) * _DAT_0064b440);
        local_6b4 = (float *)(param_1 + (iVar15 * 3 + 0x94e) * 4);
        fVar2 = (float)local_6d0 * DAT_00701590;
        fVar4 = (float)local_6d0 * DAT_00701594;
        fVar3 = (float)local_6d0 * DAT_00701598;
        local_694 = fVar2 * *pfVar6 +
                    fVar4 * *(float *)(param_1 + 0x22b0) + fVar3 * *(float *)(param_1 + 0x22bc) +
                    *(float *)(param_1 + 0x22c8);
        local_690 = fVar2 * *(float *)(param_1 + 0x22a8) +
                    fVar4 * *(float *)(param_1 + 0x22b4) + fVar3 * *(float *)(param_1 + 0x22c0) +
                    *(float *)(param_1 + 0x22cc);
        fVar11 = *(float *)(param_1 + 0x22c4);
        fVar12 = *(float *)(param_1 + 0x22b8);
        fVar13 = *(float *)(param_1 + 0x22ac);
        fVar1 = *(float *)(param_1 + 0x22d0);
        local_5d4 = local_6cc - local_694;
        local_5d0 = local_6c8 - local_690;
        *local_6b4 = local_5d4;
        local_5cc = local_6c4 - (fVar2 * fVar13 + fVar4 * fVar12 + fVar3 * fVar11 + fVar1);
        local_6b4[1] = local_5d0;
        local_6b4[2] = local_5cc;
        local_644 = DAT_007015b0;
        local_640 = DAT_007015b4;
        local_63c = DAT_007015b8;
      }
      else {
        local_6b4 = (float *)(param_1 + (iVar15 * 3 + 0x94e) * 4);
        iVar10 = FUN_004fb650(local_6b4,local_59c + iVar15 * 3,pfVar6,
                              (int)psVar16 + param_1 + 0x245c,(int)psVar16 + param_1 + 0x24bc,iVar15
                             );
        if (iVar10 == 0) goto LAB_004f88a8;
        local_644 = local_6cc - *local_6b4;
        local_640 = local_6c8 - local_6b4[1];
        local_63c = local_6c4 - local_6b4[2];
        local_5c8 = local_644;
        local_5c4 = local_640;
        local_5c0 = local_63c;
        fVar18 = (float10)FUN_005aabc0(&local_644);
        local_6d0 = (short *)(float)fVar18;
        if (local_6b0 * local_644 + local_640 * local_6ac + local_63c * local_6a8 <
            (float)_DAT_0064a668) {
          local_6d0 = (short *)-(float)local_6d0;
        }
      }
      local_5f8 = *(float *)(param_1 + 0x2304) * local_59c[iVar15 * 3] +
                  *(float *)(param_1 + 0x231c) * (local_59c + 2)[iVar15 * 3] +
                  *(float *)(param_1 + 0x2310) * (local_59c + 1)[iVar15 * 3];
      fVar11 = *(float *)(param_1 + 0x2314);
      fVar12 = (local_59c + 1)[iVar15 * 3];
      fVar13 = *(float *)(param_1 + 0x2308);
      local_3c0[iVar15 * 3] = local_5f8;
      local_5f4 = *(float *)(param_1 + 0x2320) * (local_59c + 2)[iVar15 * 3] +
                  fVar13 * local_59c[iVar15 * 3] + fVar11 * fVar12;
      fVar11 = *(float *)(param_1 + 0x2318);
      fVar12 = (local_59c + 1)[iVar15 * 3];
      fVar13 = *(float *)(param_1 + 0x230c);
      fVar1 = local_59c[iVar15 * 3];
      (local_3c0 + 1)[iVar15 * 3] = local_5f4;
      local_5f0 = *(float *)(param_1 + 0x2324) * (local_59c + 2)[iVar15 * 3] +
                  fVar13 * fVar1 + fVar11 * fVar12;
      fVar11 = (local_59c + 2)[iVar15 * 3];
      fVar12 = (local_59c + 1)[iVar15 * 3];
      (local_3c0 + 2)[iVar15 * 3] = local_5f0;
      local_648 = local_59c[iVar15 * 3] * local_6b0 + fVar12 * local_6ac + fVar11 * local_6a8;
      afStack_4ac[iVar15] = local_648;
      fVar18 = (float10)FUN_0061d420();
      local_42c[iVar15] = (float)fVar18;
      fVar18 = (float10)fsin(fVar18);
      afStack_44c[iVar15] = (float)fVar18;
      if (((*(float *)(param_1 + 0x1f9c + iVar15 * 4) < (float)local_6d0) || (local_698[0x88] == 0))
         || (local_698[0x818] == 0)) {
        *(undefined2 *)(param_1 + 0x19a4 + iVar15 * 2) = 1;
        fVar11 = *(float *)(param_1 + 0x1f9c + iVar15 * 4);
        if (((*(int *)(param_1 + 0x276c) != 0) || (*(int *)(param_1 + 0x3f4c) == 1)) &&
           (((float)local_6d0 < fVar11 + fVar11 &&
            ((local_698[0x88] != 0 && (local_698[0x818] != 0)))))) {
          *(short **)(param_1 + 0x241c + iVar15 * 4) = local_6d0;
          fVar18 = ((float10)(float)local_6d0 - (float10)*(float *)(param_1 + 0x1f9c + iVar15 * 4))
                   / ((float10)*(float *)(param_1 + 0x1f9c + iVar15 * 4) * (float10)_DAT_0064a5a8);
          fVar19 = (float10)1.4426950408889634 * -(fVar18 * fVar18);
          fVar18 = ROUND(fVar19);
          fVar19 = (float10)f2xm1(fVar19 - fVar18);
          fVar18 = (float10)fscale((float10)1 + fVar19,fVar18);
          if (*(int *)(param_1 + 0x276c) == 0) {
            fVar11 = ((*(float *)(param_1 + 0x1f9c + iVar15 * 4) - (float)local_6d0) -
                     *(float *)(param_1 + 0x1f9c + iVar15 * 4) * (float)_DAT_0064c0e0) *
                     *(float *)(param_1 + 0x1fbc + iVar15 * 4);
            fVar11 = fVar11 + fVar11;
          }
          else {
            fVar11 = -(float)local_6d0;
            fVar11 = (((fVar11 + fVar11) * ABS(fVar11)) / *(float *)(param_1 + 0x1f9c + iVar15 * 4))
                     * *(float *)(param_1 + 0x1fbc + iVar15 * 4);
          }
          afStack_53c[iVar15] = fVar11;
          fVar18 = ((float10)_DAT_0064a660 - fVar18) * (float10)afStack_53c[iVar15];
          afStack_53c[iVar15] = (float)fVar18;
          *(float *)(param_1 + 0x2224 + iVar15 * 4) = (float)fVar18;
          local_630 = (local_620[1] * *(float *)(param_1 + 0x2358) -
                      *(float *)(param_1 + 0x235c) * *local_620) + *(float *)(param_1 + 0x233c);
          afStack_46c[iVar15] = local_630;
          fVar11 = local_630 / _DAT_006733cc;
          if (local_630 <= _DAT_0064b254) {
            local_620 = (float *)-((local_630 / _DAT_006733c8) *
                                  *(float *)(param_1 + 0x1d3c + iVar15 * 4));
            afStack_5bc[iVar15] = (float)local_620;
            if ((float)local_620 <= ABS(afStack_53c[iVar15]) * (float)_DAT_0064c940)
            goto LAB_004f91c7;
            afStack_5bc[iVar15] = ABS(afStack_53c[iVar15]) * (float)_DAT_0064c940;
            *(undefined2 *)(param_1 + 0x19a4 + iVar15 * 2) = 0;
          }
          else {
            if (fVar11 <= (float)_DAT_0064a6d0) {
              fVar11 = *(float *)(param_1 + 0x1d3c + iVar15 * 4) * fVar11 * (float)_DAT_0064a6a8;
            }
            else {
              fVar11 = -(fVar11 * *(float *)(param_1 + 0x1d3c + iVar15 * 4) * fVar11);
            }
            afStack_5bc[iVar15] = fVar11;
            if (-ABS(fVar18) <= (float10)afStack_5bc[iVar15]) {
LAB_004f91c7:
              *(undefined2 *)(param_1 + 0x19a4 + iVar15 * 2) = 0;
            }
            else {
              afStack_5bc[iVar15] = (float)-ABS(fVar18);
              *(undefined2 *)(param_1 + 0x19a4 + iVar15 * 2) = 0;
            }
          }
        }
        uVar8 = *(undefined4 *)(param_1 + 0x1f9c + iVar15 * 4);
        local_42c[iVar15] = -20.0;
        *(undefined4 *)(param_1 + 0x241c + iVar15 * 4) = uVar8;
      }
      else if ((((float)local_6d0 < _DAT_0064b254) && (*(int *)(param_1 + 0x276c) == 0)) ||
              ((*(int *)(param_1 + 0x276c) != 0 &&
               ((float)local_6d0 < -*(float *)(param_1 + 0x1f9c + iVar15 * 4))))) {
        if ((iVar15 == 0) || (iVar15 == 1)) {
          uVar8 = __ftol();
          *(undefined4 *)(param_1 + 0x3c08) = uVar8;
        }
        *(undefined4 *)(param_1 + 0x241c + iVar15 * 4) = 0;
        local_5d8 = -(float)local_6d0;
        local_644 = local_5d8 * *(float *)((int)local_59c + (int)local_664);
        local_640 = local_5d8 * *(float *)((int)(local_59c + 1) + (int)local_664);
        local_63c = local_5d8 * *(float *)((int)(local_59c + 2) + (int)local_664);
        local_42c[iVar15] = local_5d8;
        afStack_46c[iVar15] = -(local_5d8 / *(float *)(param_1 + 0x2524));
        fVar11 = *(float *)(param_1 + 0x1f7c + iVar15 * 4);
        fVar11 = fVar11 * (ABS(fVar11) / *(float *)(param_1 + 0x1f7c + iVar15 * 4) +
                          (float)_DAT_0064a660) * *(float *)(param_1 + 0x1fbc + iVar15 * 4);
        afStack_53c[iVar15] = fVar11;
        *(float *)(param_1 + 0x2224 + iVar15 * 4) = fVar11;
        local_5e0 = local_5d8 * DAT_00701590;
        local_5dc = local_5d8 * DAT_00701594;
        local_5d8 = local_5d8 * DAT_00701598;
        local_5ec = local_644;
        local_5e8 = local_640;
        local_5e4 = local_63c;
        uVar8 = FUN_005ab330(local_60,local_5e0,local_5dc,local_5d8,(undefined4 *)(param_1 + 0x22a4)
                            );
        puVar7 = (undefined4 *)FUN_005ab130(local_30,uVar8);
        puVar17 = (undefined4 *)(param_1 + 0x22a4);
        for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar17 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar17 = puVar17 + 1;
        }
        puVar7 = (undefined4 *)FUN_005aba00(local_90,param_1 + 0x22a4);
        puVar17 = (undefined4 *)(param_1 + 0x2304);
        for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar17 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar17 = puVar17 + 1;
        }
        puVar7 = (undefined4 *)(param_1 + 0x2334);
        *(undefined4 *)(param_1 + 0x3c0c) = *(undefined4 *)(param_1 + 0x2534);
        iVar10 = param_1 + 0x2358;
        local_61c = *puVar7;
        local_618 = *(undefined4 *)(param_1 + 0x2338);
        local_614 = *(undefined4 *)(param_1 + 0x233c);
        local_648 = (float)((int)local_59c + (int)local_664);
        FUN_004e73dd(local_6b4,local_648,(float *)(param_1 + 0x22a4),
                     (undefined4 *)(param_1 + 0x2304),*(undefined4 *)(param_1 + 0x2640),0x3f000000,0
                     ,puVar7,iVar10,param_1 + 0x1f48,puVar7,iVar10);
        pfVar9 = (float *)FUN_004e2984(local_62c,iVar10,param_1 + 0x1f48);
        pfVar6 = (float *)(param_1 + 0x234c);
        *pfVar6 = *pfVar9;
        *(float *)(param_1 + 0x2350) = pfVar9[1];
        *(float *)(param_1 + 0x2354) = pfVar9[2];
        local_610 = *(float *)(param_1 + 0x22a4) * *pfVar6 +
                    *(float *)(param_1 + 0x22bc) * *(float *)(param_1 + 0x2354) +
                    *(float *)(param_1 + 0x22b0) * *(float *)(param_1 + 0x2350);
        local_60c = *(float *)(param_1 + 0x22c0) * *(float *)(param_1 + 0x2354) +
                    *(float *)(param_1 + 0x22a8) * *pfVar6 +
                    *(float *)(param_1 + 0x22b4) * *(float *)(param_1 + 0x2350);
        local_608 = *(float *)(param_1 + 0x22c4) * *(float *)(param_1 + 0x2354) +
                    *(float *)(param_1 + 0x22ac) * *pfVar6 +
                    *(float *)(param_1 + 0x22b8) * *(float *)(param_1 + 0x2350);
        *(float *)(param_1 + 0x2340) = local_610;
        *(float *)(param_1 + 0x2344) = local_60c;
        *(float *)(param_1 + 0x2348) = local_608;
        uVar8 = __ftol();
        *(undefined4 *)(param_1 + 0x3be8 + iVar15 * 4) = uVar8;
        *(undefined2 *)(param_1 + 0x19a4 + iVar15 * 2) = 0;
        psVar16 = local_664;
      }
      else {
        *(undefined2 *)(param_1 + 0x19a4 + iVar15 * 2) = 0;
        *(short **)(param_1 + 0x241c + iVar15 * 4) = local_6d0;
        fVar18 = (float10)*(float *)(param_1 + 0x1f7c + iVar15 * 4) - (float10)(float)local_6d0;
        fVar19 = ((float10)(float)local_6d0 - (float10)*(float *)(param_1 + 0x1f9c + iVar15 * 4)) /
                 ((float10)*(float *)(param_1 + 0x1f9c + iVar15 * 4) * (float10)_DAT_0064a5a8);
        fVar20 = (float10)1.4426950408889634 * -(fVar19 * fVar19);
        fVar19 = ROUND(fVar20);
        fVar20 = (float10)f2xm1(fVar20 - fVar19);
        fVar19 = (float10)fscale((float10)1 + fVar20,fVar19);
        fVar18 = fVar18 * (ABS(fVar18) / (float10)*(float *)(param_1 + 0x1f7c + iVar15 * 4) +
                          (float10)_DAT_0064a660) *
                          (float10)*(float *)(param_1 + 0x1fbc + iVar15 * 4) *
                 ((float10)_DAT_0064a660 - fVar19);
        afStack_53c[iVar15] = (float)fVar18;
        *(float *)(param_1 + 0x2224 + iVar15 * 4) = (float)fVar18;
        fVar11 = *(float *)(param_1 + 0x241c + iVar15 * 4) -
                 *(float *)(param_1 + 0x243c + iVar15 * 4);
        local_42c[iVar15] = fVar11;
        local_6b4 = (float *)(fVar11 / *(float *)(param_1 + 0x2528));
        afStack_46c[iVar15] = (float)local_6b4;
        fVar12 = (float)local_6b4 / _DAT_006733cc;
        if (fVar11 <= _DAT_0064b254) {
          local_648 = -(((float)local_6b4 / _DAT_006733c8) *
                       *(float *)(param_1 + 0x1d3c + iVar15 * 4));
          afStack_5bc[iVar15] = local_648;
          if (afStack_53c[iVar15] * (float)_DAT_0064c940 < local_648) {
            afStack_5bc[iVar15] = afStack_53c[iVar15] * (float)_DAT_0064c940;
          }
        }
        else {
          if (fVar12 <= (float)_DAT_0064a6d0) {
            fVar11 = *(float *)(param_1 + 0x1d3c + iVar15 * 4) * fVar12 * (float)_DAT_0064a6a8;
          }
          else {
            fVar11 = -(fVar12 * *(float *)(param_1 + 0x1d3c + iVar15 * 4) * fVar12);
          }
          afStack_5bc[iVar15] = fVar11;
          if ((float10)afStack_5bc[iVar15] < -fVar18) {
            afStack_5bc[iVar15] = (float)-fVar18;
          }
        }
      }
      fVar11 = *(float *)(param_1 + 0x2224 + iVar15 * 4) + afStack_5bc[iVar15];
      iVar10 = *(int *)(param_1 + 0x276c);
      afStack_48c[iVar15] = fVar11;
      if (((iVar10 == 0) && (*(int *)(param_1 + 0x3f4c) == 0)) && (fVar11 < _DAT_0064b254)) {
        afStack_48c[iVar15] = 0.0;
      }
      fVar11 = *(float *)(param_1 + 0x2224 + iVar15 * 4) * afStack_4ac[iVar15];
      local_4dc[iVar15] = 0.0;
      afStack_51c[iVar15] = fVar11;
      afStack_4fc[iVar15] = afStack_4ac[iVar15] * afStack_5bc[iVar15];
      if (((float)_DAT_0064a6c8 < ABS(afStack_44c[iVar15])) &&
         ((afStack_4ac[iVar15] * afStack_5bc[iVar15] + fVar11) *
          *(float *)(param_1 + 0x2670 + iVar15 * 4) < afStack_44c[iVar15] * afStack_48c[iVar15])) {
        *(undefined1 *)(iVar15 + 0x19c4 + param_1) = 1;
      }
      pfVar6 = (float *)((int)local_300 + (int)psVar16);
      fVar13 = local_6a8 * *(float *)((int)(local_59c + 1) + (int)psVar16) -
               local_6ac * *(float *)((int)(local_59c + 2) + (int)psVar16);
      fVar1 = local_6b0 * *(float *)((int)(local_59c + 2) + (int)psVar16) -
              local_6a8 * *(float *)((int)local_59c + (int)psVar16);
      fVar12 = local_6ac * *(float *)((int)local_59c + (int)psVar16) -
               local_6b0 * *(float *)((int)(local_59c + 1) + (int)psVar16);
      local_670 = fVar1 * *(float *)((int)(local_59c + 2) + (int)psVar16) -
                  fVar12 * *(float *)((int)(local_59c + 1) + (int)psVar16);
      fVar11 = *(float *)((int)(local_59c + 2) + (int)psVar16);
      *pfVar6 = local_670;
      local_66c = fVar12 * *(float *)((int)local_59c + (int)psVar16) - fVar13 * fVar11;
      fVar11 = *(float *)((int)(local_59c + 1) + (int)psVar16);
      fVar12 = *(float *)((int)local_59c + (int)psVar16);
      *(float *)((int)(local_300 + 1) + (int)psVar16) = local_66c;
      local_668 = fVar13 * fVar11 - fVar1 * fVar12;
      fVar11 = *(float *)(param_1 + 0x2310);
      *(float *)((int)(local_300 + 2) + (int)psVar16) = local_668;
      local_6c0 = *pfVar6 * *(float *)(param_1 + 0x2304) +
                  *(float *)(param_1 + 0x231c) * *(float *)((int)(local_300 + 2) + (int)psVar16) +
                  fVar11 * *(float *)((int)(local_300 + 1) + (int)psVar16);
      local_6bc = *(float *)(param_1 + 0x2320) * *(float *)((int)(local_300 + 2) + (int)psVar16) +
                  *(float *)(param_1 + 0x2314) * *(float *)((int)(local_300 + 1) + (int)psVar16) +
                  *(float *)(param_1 + 0x2308) * *pfVar6;
      local_6b8 = *(float *)(param_1 + 0x2324) * *(float *)((int)(local_300 + 2) + (int)psVar16) +
                  *(float *)(param_1 + 0x2318) * *(float *)((int)(local_300 + 1) + (int)psVar16) +
                  *(float *)(param_1 + 0x230c) * *pfVar6;
      *(float *)((int)local_210 + (int)psVar16) = local_6c0;
      *(float *)((int)(local_210 + 1) + (int)psVar16) = local_6bc;
      iVar15 = iVar15 + 1;
      *(float *)((int)(local_210 + 2) + (int)psVar16) = local_6b8;
    } while (iVar15 < *(int *)(param_1 + 0xdd4));
  }
  pfVar6 = (float *)(param_1 + 0x2388);
  iVar15 = 0;
  *pfVar6 = DAT_007015b0;
  *(float *)(param_1 + 0x238c) = DAT_007015b4;
  *(float *)(param_1 + 0x2390) = DAT_007015b8;
  *(float *)(param_1 + 0x23a0) = DAT_007015b0;
  *(float *)(param_1 + 0x23a4) = DAT_007015b4;
  *(float *)(param_1 + 0x23a8) = DAT_007015b8;
  *(float *)(param_1 + 0x23ac) = DAT_007015b0;
  *(float *)(param_1 + 0x23b0) = DAT_007015b4;
  *(float *)(param_1 + 0x23b4) = DAT_007015b8;
  *(undefined1 *)(param_1 + 0x19ba) = 0;
  *(undefined1 *)(param_1 + 0x19b4) = 1;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    local_698 = (short *)(param_1 + 0x19a4);
    iVar10 = 0;
    do {
      if ((*(char *)(param_1 + 0x19ba) == '\0') && (*local_698 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)(param_1 + 0x19ba) = uVar5;
      if ((*(char *)(param_1 + 0x19b4) == '\0') || (*local_698 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      local_6b8 = afStack_4fc[iVar15] + afStack_51c[iVar15];
      *(undefined1 *)(param_1 + 0x19b4) = uVar5;
      local_6c0 = local_6b8 * *(float *)((int)local_59c + iVar10);
      local_6bc = local_6b8 * *(float *)((int)local_59c + iVar10 + 4);
      local_6b8 = local_6b8 * *(float *)((int)local_59c + iVar10 + 8);
      local_694 = local_6c0;
      local_690 = local_6bc;
      local_68c = local_6b8;
      FUN_005aae00(local_62c,&local_694);
      local_674 = local_4dc[iVar15];
      local_67c = local_674 * *(float *)((int)local_300 + iVar10);
      local_678 = local_674 * *(float *)((int)local_300 + iVar10 + 4);
      local_674 = local_674 * *(float *)((int)local_300 + iVar10 + 8);
      local_670 = local_67c;
      local_66c = local_678;
      local_668 = local_674;
      FUN_005aae00(local_638,&local_67c);
      iVar15 = iVar15 + 1;
      local_698 = local_698 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar15 < *(int *)(param_1 + 0xdd4));
  }
  *(float *)(param_1 + 0x2370) =
       *(float *)(param_1 + 0x22a4) * *pfVar6 +
       *(float *)(param_1 + 0x22bc) * *(float *)(param_1 + 0x2390) +
       *(float *)(param_1 + 0x22b0) * *(float *)(param_1 + 0x238c);
  pfVar9 = (float *)(param_1 + 0x2394);
  *(float *)(param_1 + 0x2374) =
       *(float *)(param_1 + 0x22c0) * *(float *)(param_1 + 0x2390) +
       *(float *)(param_1 + 0x22b4) * *(float *)(param_1 + 0x238c) +
       *(float *)(param_1 + 0x22a8) * *pfVar6;
  *(float *)(param_1 + 0x2378) =
       *(float *)(param_1 + 0x22c4) * *(float *)(param_1 + 0x2390) +
       *(float *)(param_1 + 0x22b8) * *(float *)(param_1 + 0x238c) +
       *(float *)(param_1 + 0x22ac) * *pfVar6;
  local_6c0 = *(float *)(param_1 + 0x25e4) * *pfVar9 +
              *(float *)(param_1 + 0x25f0) * *(float *)(param_1 + 0x2398) +
              *(float *)(param_1 + 0x25fc) * *(float *)(param_1 + 0x239c);
  local_6bc = *(float *)(param_1 + 0x25f4) * *(float *)(param_1 + 0x2398) +
              *(float *)(param_1 + 0x25e8) * *pfVar9 +
              *(float *)(param_1 + 0x2600) * *(float *)(param_1 + 0x239c);
  fVar11 = *pfVar9;
  *pfVar9 = local_6c0;
  local_6b8 = *(float *)(param_1 + 0x25f8) * *(float *)(param_1 + 0x2398) +
              *(float *)(param_1 + 0x25ec) * fVar11 +
              *(float *)(param_1 + 0x2604) * *(float *)(param_1 + 0x239c);
  *(float *)(param_1 + 0x2398) = local_6bc;
  *(float *)(param_1 + 0x239c) = local_6b8;
  FUN_0041ce10(*(float *)(param_1 + 0x23ac) + *(float *)(param_1 + 0x23a0) +
               *(float *)(param_1 + 0x25d4),
               *(float *)(param_1 + 0x23a4) + *(float *)(param_1 + 0x23b0) +
               *(float *)(param_1 + 0x25d8),
               *(float *)(param_1 + 0x23a8) + *(float *)(param_1 + 0x23b4) +
               *(float *)(param_1 + 0x25dc));
  FUN_0041ce10(local_694 + *pfVar9,local_690 + *(float *)(param_1 + 0x2398),
               local_68c + *(float *)(param_1 + 0x239c));
  FUN_0041ce10(local_67c + *(float *)(param_1 + 0x2614),local_678 + *(float *)(param_1 + 0x2618),
               local_674 + *(float *)(param_1 + 0x261c));
  *(float *)(param_1 + 0x2370) = local_6c0;
  local_698 = (short *)0x0;
  *(float *)(param_1 + 0x2374) = local_6bc;
  *(float *)(param_1 + 0x2378) = local_6b8;
  local_654 = DAT_007015b0;
  local_604 = DAT_007015b0;
  local_688 = DAT_007015b0;
  local_660 = DAT_007015b0;
  local_650 = DAT_007015b4;
  local_64c = DAT_007015b8;
  local_600 = DAT_007015b4;
  local_5fc = DAT_007015b8;
  local_684 = DAT_007015b4;
  local_680 = DAT_007015b8;
  local_65c = DAT_007015b4;
  local_658 = DAT_007015b8;
  if (0 < *(int *)(param_1 + 0x27c0)) {
    pfVar6 = (float *)(param_1 + 0x2808);
    do {
      pfVar9 = pfVar6 + -1;
      FUN_005aae00(local_62c,pfVar9);
      pfVar14 = pfVar6 + 0xe;
      FUN_005aae00(local_638,pfVar14);
      FUN_0041ce10(*(float *)(param_1 + 0x2304) * *pfVar9 +
                   *(float *)(param_1 + 0x2310) * *pfVar6 + *(float *)(param_1 + 0x231c) * pfVar6[1]
                   ,*(float *)(param_1 + 0x2308) * *pfVar9 +
                    *(float *)(param_1 + 0x2314) * *pfVar6 +
                    *(float *)(param_1 + 0x2320) * pfVar6[1],
                   *(float *)(param_1 + 0x230c) * *pfVar9 +
                   *(float *)(param_1 + 0x2318) * *pfVar6 + *(float *)(param_1 + 0x2324) * pfVar6[1]
                  );
      FUN_0041ce10(local_6c4 * pfVar6[-0xf] - local_6c8 * pfVar6[-0xe],
                   local_6cc * pfVar6[-0xe] - local_6c4 * pfVar6[-0x10],
                   local_6c8 * pfVar6[-0x10] - local_6cc * pfVar6[-0xf]);
      local_67c = local_694;
      local_678 = local_690;
      local_674 = local_68c;
      FUN_005aae00(&local_61c,&local_67c);
      FUN_0041ce10(pfVar6[0xf] * *(float *)(param_1 + 0x2310) +
                   pfVar6[0x10] * *(float *)(param_1 + 0x231c) +
                   *pfVar14 * *(float *)(param_1 + 0x2304),
                   pfVar6[0xf] * *(float *)(param_1 + 0x2314) +
                   pfVar6[0x10] * *(float *)(param_1 + 0x2320) +
                   *(float *)(param_1 + 0x2308) * *pfVar14,
                   pfVar6[0xf] * *(float *)(param_1 + 0x2318) +
                   *(float *)(param_1 + 0x230c) * *pfVar14 +
                   pfVar6[0x10] * *(float *)(param_1 + 0x2324));
      FUN_0041ce10(local_69c * pfVar6[-0xf] - local_6a0 * pfVar6[-0xe],
                   local_6a4 * pfVar6[-0xe] - local_69c * pfVar6[-0x10],
                   local_6a0 * pfVar6[-0x10] - local_6a4 * pfVar6[-0xf]);
      local_670 = local_6c0;
      local_66c = local_6bc;
      local_668 = local_6b8;
      FUN_005aae00(&local_610,&local_670);
      local_698 = (short *)((int)local_698 + 1);
      pfVar6 = pfVar6 + 3;
    } while ((int)local_698 < *(int *)(param_1 + 0x27c0));
  }
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x27c4)) {
    iVar10 = param_1 + 0x28b8;
    do {
      FUN_005aae00(local_62c,iVar10 + -0x3c);
      FUN_005aae00(local_638,iVar10);
      iVar15 = iVar15 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar15 < *(int *)(param_1 + 0x27c4));
  }
  if ((*(int *)(param_1 + 0x27c0) != 0) ||
     (fVar11 = local_660, fVar12 = local_65c, fVar13 = local_658, *(int *)(param_1 + 0x27c4) != 0))
  {
    local_6cc = local_660;
    local_6c8 = local_65c;
    local_6c4 = local_658;
    FUN_005aaad0(&local_6a4,&local_6cc);
    fVar11 = local_6a4 * *(float *)(param_1 + 0x234c) +
             *(float *)(param_1 + 0x2350) * local_6a0 + *(float *)(param_1 + 0x2354) * local_69c;
    FUN_0041ce10(local_6a4 * fVar11,local_6a0 * fVar11,local_69c * fVar11);
    fVar11 = DAT_007015b0;
    fVar12 = DAT_007015b4;
    fVar13 = DAT_007015b8;
    if (local_69c * local_6a8 + local_6a0 * local_6ac + local_6a4 * local_6b0 <=
        (float)_DAT_0064a668) {
      fVar11 = *(float *)(param_1 + 0x2524);
      FUN_0041ce10(local_6cc * fVar11,fVar11 * local_6c8,fVar11 * local_6c4);
      FUN_0041ce10(local_694 + local_6b0,local_690 + local_6ac,local_68c + local_6a8);
      fVar11 = local_6cc;
      fVar12 = local_6c8;
      fVar13 = local_6c4;
      if (local_678 * local_6ac + local_67c * local_6b0 + local_674 * local_6a8 <
          (float)_DAT_0064a668) {
        fVar11 = _DAT_0064b928 / *(float *)(param_1 + 0x2524);
        FUN_0041ce10(fVar11 * local_6b0,fVar11 * local_6ac,fVar11 * local_6a8);
        fVar11 = local_694;
        fVar12 = local_690;
        fVar13 = local_68c;
      }
    }
  }
  local_658 = fVar13;
  local_65c = fVar12;
  local_660 = fVar11;
  FUN_0041ce10(local_604 + local_654,local_600 + local_650,local_5fc + local_64c);
  local_67c = local_694;
  local_678 = local_690;
  local_674 = local_68c;
  FUN_005aae00(local_62c,&local_67c);
  *(undefined4 *)(param_1 + 0x237c) = *(undefined4 *)(param_1 + 0x2370);
  *(undefined4 *)(param_1 + 0x2380) = *(undefined4 *)(param_1 + 0x2374);
  *(undefined4 *)(param_1 + 0x2384) = *(undefined4 *)(param_1 + 0x2378);
  *(float *)(param_1 + 0x23dc) = DAT_007015b0;
  *(float *)(param_1 + 0x23e0) = DAT_007015b4;
  *(float *)(param_1 + 0x23e4) = DAT_007015b8;
  *(float *)(param_1 + 0x23e8) = DAT_007015b0;
  *(float *)(param_1 + 0x23ec) = DAT_007015b4;
  *(float *)(param_1 + 0x23f0) = DAT_007015b8;
  *(float *)(param_1 + 0x23f4) = DAT_007015b0;
  *(float *)(param_1 + 0x23f8) = DAT_007015b4;
  *(float *)(param_1 + 0x23fc) = DAT_007015b8;
  *(float *)(param_1 + 0x2400) = DAT_007015b0;
  *(float *)(param_1 + 0x2404) = DAT_007015b4;
  *(float *)(param_1 + 0x2408) = DAT_007015b8;
  *(float *)(param_1 + 0x240c) = DAT_007015b0;
  *(float *)(param_1 + 0x2410) = DAT_007015b4;
  *(float *)(param_1 + 0x2414) = DAT_007015b8;
  FUN_0041ce10(DAT_00701598 * *(float *)(param_1 + 0xd4) - DAT_00701594 * *(float *)(param_1 + 0xd8)
               ,DAT_00701590 * *(float *)(param_1 + 0xd8) -
                DAT_00701598 * *(float *)(param_1 + 0xd0),
               DAT_00701594 * *(float *)(param_1 + 0xd0) - DAT_00701590 * *(float *)(param_1 + 0xd4)
              );
  FUN_0041ce10(local_6a0 * *(float *)(param_1 + 0xd8) - local_69c * *(float *)(param_1 + 0xd4),
               local_69c * *(float *)(param_1 + 0xd0) - local_6a4 * *(float *)(param_1 + 0xd8),
               local_6a4 * *(float *)(param_1 + 0xd4) - local_6a0 * *(float *)(param_1 + 0xd0));
  FUN_0041ce10(local_6cc * *(float *)(param_1 + 0x2304) +
               local_6c4 * *(float *)(param_1 + 0x231c) + local_6c8 * *(float *)(param_1 + 0x2310),
               local_6c4 * *(float *)(param_1 + 0x2320) +
               local_6c8 * *(float *)(param_1 + 0x2314) + local_6cc * *(float *)(param_1 + 0x2308),
               local_6c4 * *(float *)(param_1 + 0x2324) +
               local_6c8 * *(float *)(param_1 + 0x2318) + local_6cc * *(float *)(param_1 + 0x230c));
  iVar15 = 8;
  do {
    FUN_004042a0();
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  iVar15 = 8;
  do {
    FUN_004042a0();
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  iVar15 = 8;
  do {
    FUN_004042a0();
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  iVar15 = 8;
  do {
    FUN_004042a0();
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar6 = (float *)(param_1 + 0x253c);
    iVar10 = 0;
    do {
      FUN_0041ce10(*pfVar6 * *(float *)(param_1 + 0x2310) +
                   pfVar6[1] * *(float *)(param_1 + 0x231c) +
                   pfVar6[-1] * *(float *)(param_1 + 0x2304) + *(float *)(param_1 + 9000),
                   pfVar6[1] * *(float *)(param_1 + 0x2320) +
                   pfVar6[-1] * *(float *)(param_1 + 0x2308) +
                   *pfVar6 * *(float *)(param_1 + 0x2314) + *(float *)(param_1 + 0x232c),
                   pfVar6[-1] * *(float *)(param_1 + 0x230c) +
                   *pfVar6 * *(float *)(param_1 + 0x2318) + pfVar6[1] * *(float *)(param_1 + 0x2324)
                   + *(float *)(param_1 + 0x2330));
      fVar11 = afStack_51c[iVar15];
      fVar12 = *(float *)((int)local_3c0 + iVar10 + 8);
      *(float *)((int)local_2a0 + iVar10) = local_694;
      *(float *)((int)local_2a0 + iVar10 + 4) = local_690;
      fVar13 = *(float *)((int)local_3c0 + iVar10 + 4);
      *(float *)((int)local_2a0 + iVar10 + 8) = local_68c;
      FUN_0041ce10(fVar11 * *(float *)((int)local_3c0 + iVar10),fVar11 * fVar13,fVar11 * fVar12);
      local_6c0 = local_67c;
      local_6bc = local_678;
      local_6b8 = local_674;
      puVar7 = (undefined4 *)FUN_004bde70(local_62c,(int)local_2a0 + iVar10,&local_6c0);
      *(undefined4 *)((int)local_1b0 + iVar10) = *puVar7;
      *(undefined4 *)((int)local_1b0 + iVar10 + 4) = puVar7[1];
      *(undefined4 *)((int)local_1b0 + iVar10 + 8) = puVar7[2];
      uVar8 = FUN_004bdd80(local_638,&DAT_00701590,afStack_4fc[iVar15]);
      puVar7 = (undefined4 *)FUN_004bde70(&local_670,pfVar6 + -0x220,uVar8);
      *(undefined4 *)((int)local_150 + iVar10) = *puVar7;
      *(undefined4 *)((int)local_150 + iVar10 + 4) = puVar7[1];
      fVar11 = local_4dc[iVar15];
      *(undefined4 *)((int)local_150 + iVar10 + 8) = puVar7[2];
      uVar8 = FUN_004bdd80(&local_61c,(int)local_210 + iVar10,fVar11);
      puVar7 = (undefined4 *)FUN_004bde70(&local_610,(int)local_2a0 + iVar10,uVar8);
      *(undefined4 *)((int)local_360 + iVar10) = *puVar7;
      *(undefined4 *)((int)local_360 + iVar10 + 4) = puVar7[1];
      *(undefined4 *)((int)local_360 + iVar10 + 8) = puVar7[2];
      FUN_005aae00(&local_5e0,(int)local_1b0 + iVar10);
      FUN_005aae00(&local_5ec,(int)local_150 + iVar10);
      FUN_005aae00(&local_5f8,(int)local_360 + iVar10);
      iVar15 = iVar15 + 1;
      pfVar6 = pfVar6 + 3;
      iVar10 = iVar10 + 0xc;
    } while (iVar15 < *(int *)(param_1 + 0xdd4));
  }
  uVar8 = FUN_004bddd0(local_62c,param_1 + 0x2620,param_1 + 0x2400,&local_660);
  pfVar9 = (float *)FUN_004bddd0(local_638,uVar8);
  pfVar6 = (float *)(param_1 + 0x23c4);
  *pfVar6 = *pfVar9;
  *(float *)(param_1 + 0x23c8) = pfVar9[1];
  *(float *)(param_1 + 0x23cc) = pfVar9[2];
  local_6b0 = *pfVar9;
  local_6ac = pfVar9[1];
  local_6a8 = pfVar9[2];
  FUN_005aaad0(&local_694,&local_6b0);
  uVar8 = FUN_004bddd0(local_62c,param_1 + 0x23f4,param_1 + 0x240c,&local_688,
                       *(undefined4 *)(param_1 + 0x2524),&local_694);
  uVar8 = FUN_004bddd0(local_638,uVar8);
  uVar8 = FUN_004bdd80(&local_67c,uVar8);
  uVar8 = FUN_004bddd0(&local_670,param_1 + 0x234c,uVar8);
  fVar18 = (float10)FUN_004e1080(uVar8);
  FUN_004bdd80(&local_6c0,&local_694,(float)fVar18);
  fVar18 = (float10)FUN_004e1080(&local_6b0,&local_6c0);
  fVar11 = DAT_007015b8;
  fVar12 = DAT_007015b4;
  fVar13 = DAT_007015b0;
  if (fVar18 <= (float10)_DAT_0064a668) {
    uVar8 = FUN_004bdd80(local_62c,&local_6b0,*(undefined4 *)(param_1 + 0x2524));
    FUN_004bddd0(local_638,&local_6c0,uVar8);
    fVar18 = (float10)FUN_004e1080(local_638,&local_6c0);
    fVar11 = local_6a8;
    fVar12 = local_6ac;
    fVar13 = local_6b0;
    if (fVar18 < (float10)_DAT_0064a668) {
      pfVar9 = (float *)FUN_004bdd80(local_62c,&local_6c0,
                                     _DAT_0064b928 / *(float *)(param_1 + 0x2524));
      local_6b0 = *pfVar9;
      local_6ac = pfVar9[1];
      fVar11 = pfVar9[2];
      fVar12 = local_6ac;
      fVar13 = local_6b0;
    }
  }
  *pfVar6 = fVar13;
  *(float *)(param_1 + 0x23c8) = fVar12;
  *(float *)(param_1 + 0x23cc) = fVar11;
  FUN_005aae00(local_62c,param_1 + 0x23d0);
  uVar8 = FUN_004bddd0(local_62c,param_1 + 0x23f4,param_1 + 0x240c,&local_688,pfVar6);
  uVar8 = FUN_004bddd0(local_638,uVar8);
  puVar7 = (undefined4 *)FUN_004bddd0(&local_694,uVar8);
  *(undefined4 *)(param_1 + 0x23b8) = *puVar7;
  *(undefined4 *)(param_1 + 0x23bc) = puVar7[1];
  *(undefined4 *)(param_1 + 0x23c0) = puVar7[2];
  if (*(int *)(param_1 + 0x2778) == 0) {
    FUN_004e1030(&local_694,param_1 + 0x2370,*(undefined4 *)(param_1 + 0x2640));
    FUN_004e29c2(local_638,(undefined4 *)(param_1 + 0x23b8),param_1 + 0x1f48);
    FUN_004fa3a0(&local_694,local_638);
  }
  iVar15 = *(int *)(param_1 + 0x2534) + 1;
  *(int *)(param_1 + 0x2534) = iVar15;
  return iVar15 <= *(int *)(param_1 + 0x2530);
}

