
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f6c00(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float10 fVar14;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
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
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [48];
  
  puVar6 = (undefined4 *)
           FUN_005ab330(local_30,*(undefined4 *)(param_1 + 0x17e4),*(undefined4 *)(param_1 + 0x17e8)
                        ,*(undefined4 *)(param_1 + 0x17ec));
  puVar12 = (undefined4 *)(param_1 + 0x2244);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  pfVar1 = (float *)(param_1 + 0x2274);
  pfVar7 = (float *)FUN_005aba00(local_30,param_1 + 0x2244);
  pfVar8 = pfVar1;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  puVar6 = (undefined4 *)FUN_005ab130(local_30,param_1 + 0x8d0,pfVar1);
  puVar12 = (undefined4 *)(param_1 + 0x22a4);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar6 = (undefined4 *)FUN_005ab130(local_30,param_1 + 0x8d0,pfVar1);
  puVar12 = (undefined4 *)(param_1 + 0x22d4);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar6 = (undefined4 *)FUN_005aba00(local_30,param_1 + 0x22a4);
  puVar12 = (undefined4 *)(param_1 + 0x2304);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  pfVar7 = (float *)(param_1 + 0x2334);
  *pfVar7 = *(float *)(param_1 + 0xa08);
  *(undefined4 *)(param_1 + 0x2338) = *(undefined4 *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0x233c) = *(undefined4 *)(param_1 + 0xa10);
  pfVar8 = (float *)(param_1 + 0xc3c);
  *(float *)(param_1 + 0x2340) = *pfVar8;
  *(undefined4 *)(param_1 + 0x2344) = *(undefined4 *)(param_1 + 0xc40);
  *(undefined4 *)(param_1 + 0x2348) = *(undefined4 *)(param_1 + 0xc44);
  local_78 = *pfVar8 * *(float *)(param_1 + 0x2304) +
             *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0xc40) +
             *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0xc44);
  local_74 = *(float *)(param_1 + 0x2308) * *pfVar8 +
             *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0xc40) +
             *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0xc44);
  local_70 = *(float *)(param_1 + 0x230c) * *pfVar8 +
             *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0xc40) +
             *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0xc44);
  *(float *)(param_1 + 0x234c) = local_78;
  *(float *)(param_1 + 0x2350) = local_74;
  *(float *)(param_1 + 0x2354) = local_70;
  puVar6 = (undefined4 *)FUN_004e29c2(&local_64,(float *)(param_1 + 0x234c),param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x2358) = *puVar6;
  *(undefined4 *)(param_1 + 0x235c) = puVar6[1];
  *(undefined4 *)(param_1 + 0x2360) = puVar6[2];
  *(float *)(param_1 + 0x2388) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x238c) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x2390) = DAT_007015b8;
  *(float *)(param_1 + 0x23a0) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x23a4) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x23a8) = DAT_007015b8;
  *(float *)(param_1 + 0x23ac) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x23b0) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x23b4) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x2394) = *(undefined4 *)(param_1 + 0xc6c);
  *(undefined4 *)(param_1 + 0x2398) = *(undefined4 *)(param_1 + 0xc70);
  *(undefined4 *)(param_1 + 0x239c) = *(undefined4 *)(param_1 + 0xc74);
  *(undefined4 *)(param_1 + 0x23d0) = *(undefined4 *)(param_1 + 0xcc0);
  *(undefined4 *)(param_1 + 0x23d4) = *(undefined4 *)(param_1 + 0xcc4);
  *(undefined4 *)(param_1 + 0x23d8) = *(undefined4 *)(param_1 + 0xcc8);
  *(float *)(param_1 + 0x23dc) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x23e0) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x23e4) = DAT_007015b8;
  *(float *)(param_1 + 0x23e8) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x23ec) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x23f0) = DAT_007015b8;
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar6 = (undefined4 *)(param_1 + 0x241c);
    do {
      iVar10 = iVar10 + 1;
      *puVar6 = puVar6[-0x589];
      puVar6 = puVar6 + 1;
    } while (iVar10 < *(int *)(param_1 + 0xdd4));
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar8 = (float *)(param_1 + 0x68);
    do {
      iVar10 = iVar10 + 1;
      local_78 = *pfVar1 * pfVar8[-1] +
                 *(float *)(param_1 + 0x2280) * *pfVar8 + *(float *)(param_1 + 0x228c) * pfVar8[1] +
                 *(float *)(param_1 + 0x2298);
      local_74 = *(float *)(param_1 + 0x2278) * pfVar8[-1] +
                 *(float *)(param_1 + 0x2284) * *pfVar8 + *(float *)(param_1 + 0x2290) * pfVar8[1] +
                 *(float *)(param_1 + 0x229c);
      local_70 = *(float *)(param_1 + 0x227c) * pfVar8[-1] +
                 *(float *)(param_1 + 0x2288) * *pfVar8 + *(float *)(param_1 + 0x2294) * pfVar8[1] +
                 *(float *)(param_1 + 0x22a0);
      pfVar8[0x915] = local_78;
      pfVar8[0x916] = local_74;
      pfVar8[0x917] = local_70;
      local_84 = pfVar8[0x5e0] * *(float *)(param_1 + 0x2280) +
                 pfVar8[0x5e1] * *(float *)(param_1 + 0x228c) + *pfVar1 * pfVar8[0x5df] +
                 *(float *)(param_1 + 0x2298);
      local_80 = *(float *)(param_1 + 0x2278) * pfVar8[0x5df] +
                 pfVar8[0x5e0] * *(float *)(param_1 + 0x2284) +
                 pfVar8[0x5e1] * *(float *)(param_1 + 0x2290) + *(float *)(param_1 + 0x229c);
      local_7c = pfVar8[0x5e0] * *(float *)(param_1 + 0x2288) +
                 pfVar8[0x5e1] * *(float *)(param_1 + 0x2294) +
                 *(float *)(param_1 + 0x227c) * pfVar8[0x5df] + *(float *)(param_1 + 0x22a0);
      pfVar8[0x8fd] = local_84;
      pfVar8[0x8fe] = local_80;
      pfVar8[0x8ff] = local_7c;
      pfVar8 = pfVar8 + 3;
    } while (iVar10 < *(int *)(param_1 + 0xdd4));
  }
  fVar13 = (float10)FUN_004e1fd9();
  *(float *)(param_1 + 0x251c) = (float)fVar13;
  FUN_0061e749((double)(fVar13 * (float10)_DAT_0064c9e8));
  uVar9 = __ftol();
  *(undefined4 *)(param_1 + 0x2530) = uVar9;
  if (((*(short *)(param_1 + 0x2740) != 0) && (*(float *)(param_1 + 0x2640) < _DAT_0064ca00)) ||
     (*(int *)(param_1 + 0x276c) != 0)) {
    FUN_0061e749((double)(*(float *)(param_1 + 0x251c) * (float)_DAT_0064a690));
    uVar9 = __ftol();
    *(undefined4 *)(param_1 + 0x2530) = uVar9;
  }
  *(float *)(param_1 + 0x252c) = (float)*(int *)(param_1 + 0x2530);
  fVar2 = *(float *)(param_1 + 0x251c) / (float)*(int *)(param_1 + 0x2530);
  *(float *)(param_1 + 0x2524) = fVar2;
  *(float *)(param_1 + 0x2528) = fVar2;
  if (param_2 == 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x251c);
    *(undefined4 *)(param_1 + 0x2530) = 1;
    *(undefined4 *)(param_1 + 0x2528) = uVar9;
    if ((*(int *)(param_1 + 0xdd4) == 4) &&
       (((*(short *)(param_1 + 0x19a4) != 0 && (*(short *)(param_1 + 0x19a8) != 0)) ||
        ((*(short *)(param_1 + 0x19a6) != 0 && (*(short *)(param_1 + 0x19aa) != 0)))))) {
      *(undefined4 *)(param_1 + 0x2524) = uVar9;
    }
    if ((*(int *)(param_1 + 0xdd4) == 2) &&
       ((*(short *)(param_1 + 0x19a4) != 0 || (*(short *)(param_1 + 0x19a6) != 0)))) {
      *(undefined4 *)(param_1 + 0x2524) = uVar9;
    }
  }
  fVar2 = (float)_DAT_0064a5a8;
  *(undefined4 *)(param_1 + 0x2520) = 0;
  if ((*(float *)(param_1 + 0xdc4) < fVar2) && (*(int *)(param_1 + 0x1abc) != 0)) {
    fVar2 = *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0x233c) -
            *(float *)(param_1 + 0x2338) * *(float *)(param_1 + 0xd8);
    fVar4 = *pfVar7 * *(float *)(param_1 + 0xd8) -
            *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0x233c);
    fVar3 = *(float *)(param_1 + 0x2338) * *(float *)(param_1 + 0xd0) -
            *(float *)(param_1 + 0xd4) * *pfVar7;
    local_84 = fVar4 * *(float *)(param_1 + 0xd8) - fVar3 * *(float *)(param_1 + 0xd4);
    local_80 = fVar3 * *(float *)(param_1 + 0xd0) - fVar2 * *(float *)(param_1 + 0xd8);
    local_7c = fVar2 * *(float *)(param_1 + 0xd4) - fVar4 * *(float *)(param_1 + 0xd0);
    local_78 = local_84;
    local_74 = local_80;
    local_70 = local_7c;
    fVar13 = (float10)FUN_005aabc0();
    *(float *)(param_1 + 0xdc4) = (float)fVar13;
    fVar13 = (float10)FUN_005aabc0(pfVar7);
    *(float *)(param_1 + 0x2418) = (float)fVar13;
  }
  *(float *)(param_1 + 0x2598) =
       *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0x2304) +
       *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0xd4) +
       *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0x259c) =
       *(float *)(param_1 + 0x2308) * *(float *)(param_1 + 0xd0) +
       *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0xd4) +
       *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0x25a0) =
       *(float *)(param_1 + 0x230c) * *(float *)(param_1 + 0xd0) +
       *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0xd4) +
       *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0xd8);
  fVar2 = DAT_00701598 * *(float *)(param_1 + 200) - DAT_00701594 * *(float *)(param_1 + 0xcc);
  fVar3 = DAT_00701590 * *(float *)(param_1 + 0xcc) - DAT_00701598 * *(float *)(param_1 + 0xc4);
  fVar4 = DAT_00701594 * *(float *)(param_1 + 0xc4) - DAT_00701590 * *(float *)(param_1 + 200);
  local_84 = fVar3 * *(float *)(param_1 + 0xcc) - fVar4 * *(float *)(param_1 + 200);
  local_80 = fVar4 * *(float *)(param_1 + 0xc4) - fVar2 * *(float *)(param_1 + 0xcc);
  *(float *)(param_1 + 0x25a4) = local_84;
  local_7c = fVar2 * *(float *)(param_1 + 200) - fVar3 * *(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0x25a8) = local_80;
  *(float *)(param_1 + 0x25ac) = local_7c;
  *(float *)(param_1 + 0x25b0) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x25b4) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x25b8) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x25d4) = *(undefined4 *)(param_1 + 0xc54);
  *(undefined4 *)(param_1 + 0x25d8) = *(undefined4 *)(param_1 + 0xc58);
  *(undefined4 *)(param_1 + 0x25dc) = *(undefined4 *)(param_1 + 0xc5c);
  fVar14 = (float10)FUN_005aabc0();
  fVar13 = (float10)_DAT_0064a920;
  *(float *)(param_1 + 0x25e0) = (float)fVar14;
  if (fVar13 < fVar14) {
    *(float *)(param_1 + 0x25b0) = (float)((float10)*(float *)(param_1 + 0x25a4) / fVar14);
    *(float *)(param_1 + 0x25b4) = (float)((float10)*(float *)(param_1 + 0x25a8) / fVar14);
    *(float *)(param_1 + 0x25b8) = (float)((float10)*(float *)(param_1 + 0x25ac) / fVar14);
  }
  bVar5 = false;
  puVar6 = &DAT_00701550;
  puVar12 = (undefined4 *)(param_1 + 0x25e4);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  iVar10 = *(int *)(param_1 + 0xdd4);
  if (0 < iVar10) {
    psVar11 = (short *)(param_1 + 0x19a4);
    do {
      if ((bVar5) || (*psVar11 == 0)) {
        bVar5 = true;
      }
      psVar11 = psVar11 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (bVar5) {
      fVar13 = (float10)*(float *)(param_1 + 0x2644) * (float10)*(float *)(param_1 + 0xdc4) *
               (float10)_DAT_0064c9f8;
      goto LAB_004f7401;
    }
  }
  fVar13 = (float10)_DAT_0064a668;
LAB_004f7401:
  local_68 = (float)fVar13;
  if ((float10)_DAT_0064a660 < fVar13) {
    local_68 = 1.0;
  }
  local_84 = *(float *)(param_1 + 0x28f4) - *(float *)(param_1 + 0x40);
  local_80 = *(float *)(param_1 + 0x28f8) - *(float *)(param_1 + 0x44);
  local_7c = *(float *)(param_1 + 0x28fc) - *(float *)(param_1 + 0x48);
  local_54 = local_84;
  local_50 = local_80;
  local_4c = local_7c;
  local_48 = local_84;
  local_44 = local_80;
  local_40 = local_7c;
  fVar13 = (float10)FUN_005aabc0();
  local_6c = (float)fVar13;
  if (fVar13 != (float10)_DAT_0064b254) {
    FUN_005aad50(&local_64,local_6c);
  }
  local_58 = ABS(*(float *)(param_1 + 0xa38) * local_48 +
                 *(float *)(param_1 + 0xa3c) * local_44 + *(float *)(param_1 + 0xa40) * local_40);
  fVar2 = -DAT_00701590;
  fVar4 = -DAT_00701594;
  fVar3 = -DAT_00701598;
  local_78 = fVar2 * *(float *)(param_1 + 0x22a4) +
             fVar4 * *(float *)(param_1 + 0x22b0) + fVar3 * *(float *)(param_1 + 0x22bc);
  local_74 = fVar2 * *(float *)(param_1 + 0x22a8) +
             fVar4 * *(float *)(param_1 + 0x22b4) + fVar3 * *(float *)(param_1 + 0x22c0);
  local_7c = local_68 * *(float *)(param_1 + 0x2640) * (float)_DAT_0064a770;
  local_84 = local_78 * local_7c;
  local_80 = local_74 * local_7c;
  local_7c = (fVar2 * *(float *)(param_1 + 0x22ac) +
             fVar4 * *(float *)(param_1 + 0x22b8) + fVar3 * *(float *)(param_1 + 0x22c4)) * local_7c
  ;
  FUN_0041ce10(local_54 * local_6c,local_50 * local_6c,local_4c * local_6c);
  fVar2 = local_58 * *(float *)(param_1 + 0x2648) +
          ((float)_DAT_0064a660 - local_58) * *(float *)(param_1 + 0x264c);
  FUN_0041ce10(local_64 * fVar2,local_60 * fVar2,local_5c * fVar2);
  local_34 = local_70;
  local_3c = local_78;
  local_38 = local_74;
  FUN_0041ce10(local_78 + local_84,local_74 + local_80,local_70 + local_7c);
  *(float *)(param_1 + 0x2614) = local_64;
  *(float *)(param_1 + 0x2618) = local_60;
  *(float *)(param_1 + 0x261c) = local_5c;
  uVar9 = FUN_004cb300(&local_64,&local_3c,param_1 + 0x2304);
  puVar6 = (undefined4 *)FUN_004bde70(&local_84,param_1 + 0x26b4,uVar9);
  *(undefined4 *)(param_1 + 0x2620) = *puVar6;
  *(undefined4 *)(param_1 + 0x2624) = puVar6[1];
  uVar9 = puVar6[2];
  *(undefined4 *)(param_1 + 0x2534) = 1;
  *(undefined4 *)(param_1 + 0x2628) = uVar9;
  return;
}

