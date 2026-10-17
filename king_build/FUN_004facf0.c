
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004facf0(int param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  short *psVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float10 fVar14;
  float afStack_128 [9];
  undefined4 uStack_104;
  float *pfStack_100;
  float *local_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  float *local_f0;
  double *local_ec;
  double *local_e8;
  double *local_e4;
  short *local_d0;
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
  int local_98;
  float local_94;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  double local_78;
  double local_70;
  double local_68;
  float local_60 [12];
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0x3c0c) < *(int *)(param_1 + 0x2530)) {
    local_b4 = *(float *)(param_1 + 0x2358) - *(float *)(param_1 + 0x2364) * _DAT_0064b248;
    local_b0 = *(float *)(param_1 + 0x235c) - *(float *)(param_1 + 0x2368) * _DAT_0064b248;
    local_ac = *(float *)(param_1 + 0x2360) - *(float *)(param_1 + 0x236c) * _DAT_0064b248;
    local_c4 = *(float *)(param_1 + 0x2528);
    local_cc = local_b4 * local_c4;
    local_c8 = local_b0 * local_c4;
    local_e4 = (double *)&local_c0;
    local_c4 = local_ac * local_c4;
    local_e8 = (double *)0x4fadb4;
    local_c0 = local_cc;
    local_bc = local_c8;
    local_b8 = local_c4;
    fVar14 = (float10)FUN_005aabc0();
    local_e4 = (double *)(float)fVar14;
    local_f0 = (float *)local_b4;
    local_ec = (double *)local_b0;
    local_e8 = (double *)local_ac;
    local_fc = (float *)DAT_007015b0;
    local_f8 = (undefined1 *)DAT_007015b4;
    pfStack_100 = local_60;
    local_f4 = (undefined1 *)DAT_007015b8;
    uStack_104 = 0x4fadfb;
    puVar6 = (undefined4 *)FUN_005ab380();
    puVar9 = (undefined4 *)(param_1 + 0x25e4);
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    local_bc = *(float *)(param_1 + 0x2338) + *(float *)(param_1 + 0xa18);
    local_b8 = *(float *)(param_1 + 0x233c) + *(float *)(param_1 + 0xa1c);
    fVar1 = *(float *)(param_1 + 0x2528);
    local_ec = (double *)((*(float *)(param_1 + 0x2334) + *(float *)(param_1 + 0xa14)) * fVar1);
    local_e8 = (double *)(local_bc * fVar1);
    local_e4 = (double *)(local_b8 * fVar1);
    local_f0 = (float *)local_90;
    local_f4 = (undefined1 *)0x4fae7f;
    local_cc = (float)local_ec;
    local_c8 = (float)local_e8;
    local_c4 = (float)local_e4;
    FUN_005ab330();
    local_e4 = (double *)local_90;
    local_e8 = (double *)(param_1 + 0x22d4);
    local_f0 = local_60;
    local_f4 = (undefined1 *)0x4faea2;
    local_ec = (double *)(param_1 + 0x25e4);
    local_e8 = (double *)FUN_005ab130();
    local_ec = (double *)local_30;
    local_f0 = (float *)0x4faeb3;
    puVar6 = (undefined4 *)FUN_005ab130();
    local_f0 = (float *)(param_1 + 0x22a4);
    local_f4 = local_30;
    pfVar12 = (float *)(param_1 + 0x2304);
    puVar9 = (undefined4 *)(param_1 + 0x22a4);
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    local_f8 = (undefined1 *)0x4faed6;
    pfVar7 = (float *)FUN_005aba00();
    pfVar13 = pfVar12;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar13 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar13 = pfVar13 + 1;
    }
    *(float *)(param_1 + 0x2598) =
         *(float *)(param_1 + 0xd0) * *pfVar12 +
         *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0xd8) +
         *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0x259c) =
         *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0xd8) +
         *(float *)(param_1 + 0x2308) * *(float *)(param_1 + 0xd0) +
         *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0xd4);
    local_fc = (float *)(param_1 + 0x234c);
    *(float *)(param_1 + 0x25a0) =
         *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0xd8) +
         *(float *)(param_1 + 0x230c) * *(float *)(param_1 + 0xd0) +
         *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0xd4);
    local_cc = *(float *)(param_1 + 0x2340) * *pfVar12 +
               *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0x2348) +
               *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0x2344);
    local_c8 = *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0x2348) +
               *(float *)(param_1 + 0x2308) * *(float *)(param_1 + 0x2340) +
               *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0x2344);
    *local_fc = local_cc;
    local_c4 = *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0x2348) +
               *(float *)(param_1 + 0x230c) * *(float *)(param_1 + 0x2340) +
               *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0x2344);
    *(float *)(param_1 + 0x2350) = local_c8;
    *(float *)(param_1 + 0x2354) = local_c4;
    local_f8 = (undefined1 *)(param_1 + 0x1f48);
    pfStack_100 = &local_a8;
    uStack_104 = 0x4faffb;
    puVar6 = (undefined4 *)FUN_004e29c2();
    *(undefined4 *)(param_1 + 0x2358) = *puVar6;
    *(undefined4 *)(param_1 + 0x235c) = puVar6[1];
    *(undefined4 *)(param_1 + 0x2360) = puVar6[2];
  }
  if (param_2 == 0) {
    iVar10 = *(int *)(param_1 + 0xdd4);
    bVar5 = false;
    iVar11 = 0;
    bVar2 = true;
    if (0 < iVar10) {
      psVar8 = (short *)(param_1 + 0x19a4);
      do {
        if ((bVar2) && (*psVar8 == 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar5) || (*psVar8 == 0)) {
          bVar5 = true;
        }
        iVar11 = iVar11 + (uint)(*psVar8 == 0);
        psVar8 = psVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (1 < iVar11) {
        fVar1 = *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0x2334) +
                *(float *)(param_1 + 0x2338) * *(float *)(param_1 + 0xd4) +
                *(float *)(param_1 + 0x233c) * *(float *)(param_1 + 0xd8);
        if ((float)_DAT_0064a5a8 < ABS(fVar1)) {
          local_d0 = (short *)0x1;
          if (fVar1 <= _DAT_0064b254) {
            local_d0 = (short *)0xffffffff;
          }
          fVar1 = *(float *)(param_1 + 0x233c) * *(float *)(param_1 + 0xd4) -
                  *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0x2338);
          fVar4 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0x2334) -
                  *(float *)(param_1 + 0x233c) * *(float *)(param_1 + 0xd0);
          fVar3 = *(float *)(param_1 + 0x2338) * *(float *)(param_1 + 0xd0) -
                  *(float *)(param_1 + 0x2334) * *(float *)(param_1 + 0xd4);
          local_b4 = fVar4 * *(float *)(param_1 + 0xd8) - fVar3 * *(float *)(param_1 + 0xd4);
          local_b0 = fVar3 * *(float *)(param_1 + 0xd0) - fVar1 * *(float *)(param_1 + 0xd8);
          local_bc = *(float *)(param_1 + 0xd4) * _DAT_0064b2f4;
          local_b8 = *(float *)(param_1 + 0xd8) * _DAT_0064b2f4;
          fVar3 = (float)(int)local_d0;
          local_a4 = local_bc * fVar3;
          local_a0 = local_b8 * fVar3;
          local_cc = *(float *)(param_1 + 0xd0) * _DAT_0064b2f4 * fVar3 + local_b4;
          local_c8 = local_b0 + local_a4;
          *(float *)(param_1 + 0x2334) = local_cc;
          local_c4 = (fVar1 * *(float *)(param_1 + 0xd4) - fVar4 * *(float *)(param_1 + 0xd0)) +
                     local_a0;
          *(float *)(param_1 + 0x2338) = local_c8;
          *(float *)(param_1 + 0x233c) = local_c4;
        }
        pfVar12 = (float *)(param_1 + 0x22a4);
        local_e4 = (double *)
                   (DAT_00701580 * *(float *)(param_1 + 0x22ac) +
                   DAT_00701584 * *(float *)(param_1 + 0x22b8) +
                   DAT_00701588 * *(float *)(param_1 + 0x22c4));
        local_e8 = (double *)
                   (DAT_00701580 * *(float *)(param_1 + 0x22a8) +
                   DAT_00701584 * *(float *)(param_1 + 0x22b4) +
                   DAT_00701588 * *(float *)(param_1 + 0x22c0));
        local_ec = (double *)
                   (DAT_00701580 * *pfVar12 +
                   DAT_00701584 * *(float *)(param_1 + 0x22b0) +
                   DAT_00701588 * *(float *)(param_1 + 0x22bc));
        local_f0 = (float *)0x4fb272;
        FUN_0041ce10();
        local_e4 = (double *)
                   (local_b0 * *(float *)(param_1 + 0xd0) - local_b4 * *(float *)(param_1 + 0xd4));
        local_e8 = (double *)
                   (local_b4 * *(float *)(param_1 + 0xd8) - local_ac * *(float *)(param_1 + 0xd0));
        local_ec = (double *)
                   (local_ac * *(float *)(param_1 + 0xd4) - local_b0 * *(float *)(param_1 + 0xd8));
        local_f0 = (float *)0x4fb2c9;
        FUN_0041ce10();
        local_e4 = (double *)
                   (local_cc * *(float *)(param_1 + 0xd4) - local_c8 * *(float *)(param_1 + 0xd0));
        local_e8 = (double *)
                   (local_c4 * *(float *)(param_1 + 0xd0) - local_cc * *(float *)(param_1 + 0xd8));
        local_ec = (double *)
                   (local_c8 * *(float *)(param_1 + 0xd8) - local_c4 * *(float *)(param_1 + 0xd4));
        local_f0 = (float *)0x4fb320;
        FUN_0041ce10();
        local_ec = (double *)&local_a8;
        local_e8 = (double *)&DAT_00701590;
        local_f0 = (float *)0x4fb330;
        local_e4 = (double *)pfVar12;
        FUN_004cb300();
        if ((float)_DAT_0064c308 < local_a0) {
          local_e4 = &local_68;
          local_e8 = &local_70;
          local_ec = &local_78;
          local_f0 = (float *)local_80;
          local_f4 = local_88;
          local_f8 = local_90;
          pfVar7 = pfVar12;
          pfVar13 = afStack_128;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *pfVar13 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            pfVar13 = pfVar13 + 1;
          }
          FUN_005de000();
          local_e8 = (double *)(float)local_78;
          local_e4 = (double *)s__Car_V__form_position1_00673720;
          local_ec = (double *)0x4fb391;
          fVar14 = (float10)FUN_004e3a69();
          local_78 = (double)fVar14;
          fVar14 = (float10)fpatan(-(float10)local_c0,(float10)local_bc);
          local_98 = -1;
          local_94 = (float)fVar14;
          if (local_c0 * DAT_00701590 + local_bc * DAT_00701594 + local_b8 * DAT_00701598 <=
              _DAT_0064b254) {
            local_98 = 1;
          }
          local_e4 = (double *)0x4fb3fe;
          fVar14 = (float10)FUN_0061d200();
          fVar1 = (float)fVar14;
          local_9c = _DAT_0064b240 - fVar1;
          local_78 = (double)(fVar1 * (float)local_78 + local_9c * local_94);
          local_e4 = (double *)0x4fb42d;
          fVar14 = (float10)FUN_0061d420();
          local_e4 = (double *)local_90;
          local_e8 = (double *)local_60;
          local_70 = (double)((float10)fVar1 * (float10)local_70 +
                             fVar14 * (float10)local_98 * (float10)local_9c);
          local_68 = (double)(fVar1 * (float)local_68);
          local_ec = (double *)0x4fb467;
          FUN_004e28b1();
          pfVar7 = local_60;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *pfVar12 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            pfVar12 = pfVar12 + 1;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2334);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x2338);
  local_ec = (double *)local_30;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x233c);
  local_e4 = (double *)(param_1 + 0x2244);
  local_e8 = (double *)(param_1 + 0x22a4);
  local_f0 = (float *)0x4fb4b1;
  puVar6 = (undefined4 *)FUN_005ab130();
  local_f4 = local_30;
  puVar9 = (undefined4 *)(param_1 + 0x10);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  local_f8 = (undefined1 *)0x4fb4ca;
  local_f0 = (float *)(param_1 + 0x10);
  puVar6 = (undefined4 *)FUN_005aba00();
  puVar9 = (undefined4 *)(param_1 + 0x900);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  local_e4 = (double *)(*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x2360));
  local_e8 = (double *)(*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x235c));
  local_ec = (double *)(*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x2358));
  local_f0 = (float *)0x4fb50b;
  FUN_0041ce10();
  local_c0 = local_a8;
  local_bc = local_a4;
  local_b8 = local_a0;
  local_e4 = (double *)0x4fb528;
  fVar14 = (float10)FUN_004e1fd9();
  local_e8 = (double *)&local_c0;
  local_ec = (double *)&local_cc;
  local_e4 = (double *)(float)fVar14;
  local_f0 = (float *)0x4fb53b;
  puVar6 = (undefined4 *)FUN_004e1030();
  iVar10 = 0;
  *(undefined4 *)(param_1 + 0x33b8) = *puVar6;
  *(undefined4 *)(param_1 + 0x33bc) = puVar6[1];
  *(undefined4 *)(param_1 + 0x33c0) = puVar6[2];
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x2358);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x235c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x2360);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2340);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x2344);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x2348);
  if (0 < *(int *)(param_1 + 0xdd4)) {
    local_d0 = (short *)(param_1 + 0x19a4);
    puVar6 = (undefined4 *)(param_1 + 100);
    pfVar12 = (float *)(param_1 + 0xd20);
    do {
      local_e8 = (double *)(puVar6 + 0x935);
      pfVar12[0x2e] = pfVar12[0x5bf];
      local_e4 = (double *)(param_1 + 0x2244);
      local_ec = (double *)&local_a8;
      local_f0 = (float *)0x4fb5cf;
      puVar9 = (undefined4 *)FUN_0043f690();
      *puVar6 = *puVar9;
      puVar6[1] = puVar9[1];
      puVar6[2] = puVar9[2];
      if (*local_d0 == 0) {
        *pfVar12 = ABS(pfVar12[0x541]);
      }
      else {
        *pfVar12 = 0.0;
      }
      iVar10 = iVar10 + 1;
      local_d0 = local_d0 + 1;
      puVar6 = puVar6 + 3;
      pfVar12[0x64c] =
           ABS(pfVar12[0x541]) / (*(float *)(param_1 + 0x263c) * *(float *)(param_1 + 0x2640));
      pfVar12 = pfVar12 + 1;
    } while (iVar10 < *(int *)(param_1 + 0xdd4));
  }
  return;
}

