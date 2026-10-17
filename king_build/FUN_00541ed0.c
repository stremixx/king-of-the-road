
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00541ed0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  double *pdVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined4 *puVar22;
  char *pcVar23;
  float *pfVar24;
  undefined4 *puVar25;
  char *pcVar26;
  float10 fVar27;
  int *local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  double *local_d8;
  undefined4 *local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  *(undefined4 *)(param_1 + 0x2548) = 0;
  *(undefined4 *)(param_1 + 0x4fa0) = 0;
  *(undefined4 *)(param_1 + 0x4f9c) = 0;
  *(undefined4 *)(param_1 + 0xe00) = 2;
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
  iVar15 = *(int *)(param_1 + 0x28b4);
  FUN_0057d450((&DAT_00696828)[iVar15 * 0x25c],(&DAT_00696964)[iVar15 * 0x25c],
               (&DAT_00696968)[iVar15 * 0x25c],(&DAT_0069696c)[iVar15 * 0x25c]);
  FUN_00541cb0();
  local_e8 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x28b8) = (&DAT_0069702c)[*(int *)(param_1 + 0x28b4) * 0x25c];
  *(undefined4 *)(param_1 + 0x28bc) = (&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c];
  if (0 < *(int *)(param_1 + 0x28b8)) {
    local_d4 = (undefined4 *)(param_1 + 0x25b4);
    local_d8 = (double *)(param_1 + 0x2594);
    local_d0 = (float)(-0x297c - param_1);
    pfVar16 = (float *)(param_1 + 0x297c);
    do {
      puVar12 = &DAT_00701550;
      puVar19 = local_d4;
      for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar19 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined4 *)local_d8 =
           *(undefined4 *)(&DAT_006d1054 + ((int)local_e8 + *(int *)(param_1 + 0x28b4) * 0x174) * 4)
      ;
      if ((int)local_e8 < *(int *)(param_1 + 0x28b8) - *(int *)(param_1 + 0x28bc)) {
        pfVar13 = pfVar16 + -1;
        pfVar24 = (float *)(&DAT_006969d0 + *(int *)(param_1 + 0x28b4) * 0x970 + (int)local_d0 +
                           (int)pfVar16);
        *pfVar13 = *pfVar24;
        *pfVar16 = pfVar24[1];
        pfVar16[1] = pfVar24[2];
        iVar15 = *(int *)(param_1 + 0x28b4) * 0x5d0;
        local_e4 = *pfVar13 * *(float *)(&DAT_006d1340 + iVar15) +
                   *(float *)(&DAT_006d134c + iVar15) * *pfVar16 +
                   *(float *)(&DAT_006d1358 + iVar15) * pfVar16[1] +
                   *(float *)(&DAT_006d1364 + iVar15);
        local_e0 = *(float *)(&DAT_006d1350 + iVar15) * *pfVar16 +
                   *(float *)(&DAT_006d1344 + iVar15) * *pfVar13 +
                   *(float *)(&DAT_006d135c + iVar15) * pfVar16[1] +
                   *(float *)(&DAT_006d1368 + iVar15);
        local_dc = *(float *)(&DAT_006d1354 + iVar15) * *pfVar16 +
                   *(float *)(&DAT_006d1348 + iVar15) * *pfVar13 +
                   *(float *)(&DAT_006d1360 + iVar15) * pfVar16[1] +
                   *(float *)(&DAT_006d136c + iVar15);
        pfVar16[0x17] = local_e4;
        pfVar16[0x18] = local_e0;
        pfVar16[0x19] = local_dc;
      }
      local_d8 = (double *)((int)local_d8 + 4);
      local_e8 = (int *)((int)local_e8 + 1);
      local_d4 = local_d4 + 0xc;
      pfVar16 = pfVar16 + 3;
    } while ((int)local_e8 < *(int *)(param_1 + 0x28b8));
  }
  *(undefined4 *)(param_1 + 0x2590) = 0;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x28b8)) {
    pfVar16 = (float *)(param_1 + 0x2958);
    do {
      if (iVar15 < *(int *)(param_1 + 0x28bc)) {
        iVar21 = iVar15 + *(int *)(param_1 + 0x28b4) * 0x25c;
        *pfVar16 = *(float *)(&DAT_00696ab4 + iVar21 * 4) - (float)(&DAT_00696a94)[iVar21];
      }
      else {
        *pfVar16 = *(float *)(param_1 + 0x2954 + *(int *)(param_1 + 0x28bc) * 4);
      }
      pfVar16[0xa0a] = 0.0;
      pfVar16[0x3c] = 0.0;
      pfVar16[0x44] = -NAN;
      iVar15 = iVar15 + 1;
      pfVar16 = pfVar16 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x28b8));
  }
  *(undefined4 *)(param_1 + 0xf98) = 3;
  *(undefined4 *)(param_1 + 0xf9c) = 0;
  *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) | 1;
  *(undefined4 *)(param_1 + 0x2aac) = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  FUN_004e409c(*(undefined4 *)(&DAT_006d1098 + *(int *)(param_1 + 0x28b4) * 0x5d0),1);
  *(undefined4 *)(param_1 + 0x2aa8) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x4f50) = 0;
  *(undefined4 *)(param_1 + 0x2a38) = 0;
  pfVar16 = (float *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2a3c) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x2a40) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x2a44) = DAT_007015b8;
  puVar12 = (undefined4 *)(&DAT_006d1310 + *(int *)(param_1 + 0x28b4) * 0x5d0);
  puVar19 = (undefined4 *)(param_1 + 0x2f4);
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar19 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar19 = puVar19 + 1;
  }
  pfVar13 = (float *)(&DAT_006d1340 + *(int *)(param_1 + 0x28b4) * 0x5d0);
  pfVar24 = pfVar16;
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *pfVar24 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar24 = pfVar24 + 1;
  }
  iVar15 = *(int *)(param_1 + 0x28b4);
  uVar11 = FUN_005ab330(local_60,(&DAT_00696954)[iVar15 * 0x25c],(&DAT_00696958)[iVar15 * 0x25c],
                        (&DAT_0069695c)[iVar15 * 0x25c],pfVar16);
  uVar11 = FUN_005ab5d0(local_c0,(&DAT_00696960)[*(int *)(param_1 + 0x28b4) * 0x25c],uVar11);
  uVar11 = FUN_005ab130(local_90,uVar11);
  puVar12 = (undefined4 *)FUN_005ab130(local_30,uVar11);
  puVar19 = (undefined4 *)(param_1 + 0x2734);
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar19 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar19 = puVar19 + 1;
  }
  iVar15 = *(int *)(param_1 + 0x28b4);
  local_d4 = (undefined4 *)0x0;
  if (0 < (int)(&DAT_00696d3c)[iVar15 * 0x25c]) {
    iVar21 = 0;
    do {
      iVar15 = iVar15 * 0x970;
      pfVar13 = (float *)(&DAT_00696d44 + iVar21 + iVar15);
      local_e0 = *(float *)(param_1 + 0x2d4) * *pfVar13 +
                 *(float *)(param_1 + 0x2c8) * *(float *)(&DAT_00696d40 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2e0) * *(float *)(&DAT_00696d48 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2ec);
      local_dc = *pfVar13 * *(float *)(param_1 + 0x2d8) +
                 *(float *)(&DAT_00696d48 + iVar21 + iVar15) * *(float *)(param_1 + 0x2e4) +
                 *(float *)(param_1 + 0x2cc) * *(float *)(&DAT_00696d40 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2f0);
      local_e4 = *(float *)(param_1 + 0x2d0) * *pfVar13 +
                 *pfVar16 * *(float *)(&DAT_00696d40 + iVar21 + iVar15) +
                 *(float *)(&DAT_00696d48 + iVar21 + iVar15) * *(float *)(param_1 + 0x2dc) +
                 *(float *)(param_1 + 0x2e8);
      local_d0 = local_dc;
      FUN_0058c580(1,&local_e4,0);
      iVar15 = *(int *)(param_1 + 0x28b4);
      local_d4 = (undefined4 *)((int)local_d4 + 1);
      iVar21 = iVar21 + 0xc;
    } while ((int)local_d4 < (int)(&DAT_00696d3c)[iVar15 * 0x25c]);
  }
  local_e8 = (int *)0x461c4000;
  local_d8 = (double *)0xc61c4000;
  local_d4 = (undefined4 *)0x0;
  iVar15 = *(int *)(param_1 + 0x28b4) * 0x970;
  if (0 < (int)(&DAT_00696b30)[*(int *)(param_1 + 0x28b4) * 0x25c]) {
    iVar21 = 0;
    do {
      local_e0 = *(float *)(param_1 + 0x2c8) * *(float *)((int)&DAT_00696b38 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2d4) * *(float *)((int)&DAT_00696b3c + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2e0) * *(float *)((int)&DAT_00696b40 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2ec);
      local_dc = *(float *)(param_1 + 0x2cc) * *(float *)((int)&DAT_00696b38 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2d8) * *(float *)((int)&DAT_00696b3c + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2e4) * *(float *)((int)&DAT_00696b40 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2f0);
      local_e4 = *pfVar16 * *(float *)((int)&DAT_00696b38 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2d0) * *(float *)((int)&DAT_00696b3c + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2dc) * *(float *)((int)&DAT_00696b40 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2e8);
      local_d0 = local_dc;
      FUN_0058c580(0,&local_e4,0);
      iVar15 = *(int *)(param_1 + 0x28b4) * 0x970;
      fVar3 = *(float *)((int)&DAT_00696b38 + iVar21 + iVar15) * *pfVar16 +
              *(float *)((int)&DAT_00696b40 + iVar21 + iVar15) * *(float *)(param_1 + 0x2dc) +
              *(float *)((int)&DAT_00696b3c + iVar21 + iVar15) * *(float *)(param_1 + 0x2d0) +
              *(float *)(param_1 + 0x2e8);
      if (fVar3 < (float)local_e8) {
        local_e8 = (int *)fVar3;
      }
      if ((float)local_d8 < fVar3) {
        local_d8 = (double *)fVar3;
      }
      local_d4 = (undefined4 *)((int)local_d4 + 1);
      iVar21 = iVar21 + 0xc;
    } while ((int)local_d4 < (int)(&DAT_00696b30)[*(int *)(param_1 + 0x28b4) * 0x25c]);
  }
  local_d4 = (undefined4 *)0x0;
  iVar15 = *(int *)(param_1 + 0x28b4) * 0x970;
  if (0 < (int)(&DAT_00696b34)[*(int *)(param_1 + 0x28b4) * 0x25c]) {
    iVar21 = 0;
    do {
      local_e0 = *(float *)(param_1 + 0x2c8) * *(float *)(&DAT_00696c28 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2d4) * *(float *)(&DAT_00696c2c + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2e0) * *(float *)(&DAT_00696c30 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2ec);
      local_dc = *(float *)(param_1 + 0x2cc) * *(float *)(&DAT_00696c28 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2d8) * *(float *)(&DAT_00696c2c + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2e4) * *(float *)(&DAT_00696c30 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2f0);
      local_e4 = *pfVar16 * *(float *)(&DAT_00696c28 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2d0) * *(float *)(&DAT_00696c2c + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2dc) * *(float *)(&DAT_00696c30 + iVar21 + iVar15) +
                 *(float *)(param_1 + 0x2e8);
      local_d0 = local_dc;
      FUN_0058c580(0,&local_e4,3);
      iVar15 = *(int *)(param_1 + 0x28b4) * 0x970;
      fVar3 = *pfVar16 * *(float *)(&DAT_00696c28 + iVar21 + iVar15) +
              *(float *)(&DAT_00696c2c + iVar21 + iVar15) * *(float *)(param_1 + 0x2d0) +
              *(float *)(&DAT_00696c30 + iVar21 + iVar15) * *(float *)(param_1 + 0x2dc) +
              *(float *)(param_1 + 0x2e8);
      if (fVar3 < (float)local_e8) {
        local_e8 = (int *)fVar3;
      }
      if ((float)local_d8 < fVar3) {
        local_d8 = (double *)fVar3;
      }
      local_d4 = (undefined4 *)((int)local_d4 + 1);
      iVar21 = iVar21 + 0xc;
    } while ((int)local_d4 < (int)(&DAT_00696b34)[*(int *)(param_1 + 0x28b4) * 0x25c]);
  }
  *(undefined4 *)(param_1 + 0xe14) = 0;
  *(undefined4 *)(param_1 + 0xcdc) = 0x3f000000;
  fVar3 = ((float)local_d8 - (float)local_e8) * _DAT_0064b248;
  *(float *)(param_1 + 0xce0) = fVar3;
  *(float *)(param_1 + 0xce4) = fVar3;
  iVar15 = *(int *)(param_1 + 0x28b4) * 0x5d0;
  pfVar13 = (float *)(&DAT_006d1370 + iVar15);
  fVar3 = *(float *)(&DAT_006d1378 + iVar15);
  fVar4 = *pfVar13;
  fVar5 = *(float *)(&DAT_006d1374 + iVar15);
  fVar6 = *(float *)(&DAT_006d1378 + iVar15);
  fVar7 = *pfVar13;
  fVar8 = *(float *)(&DAT_006d1374 + iVar15);
  *(float *)(param_1 + 0xd7c) =
       *pfVar16 * *pfVar13 +
       *(float *)(param_1 + 0x2d0) * *(float *)(&DAT_006d1374 + iVar15) +
       *(float *)(param_1 + 0x2dc) * *(float *)(&DAT_006d1378 + iVar15) +
       *(float *)(param_1 + 0x2e8);
  *(float *)(param_1 + 0xd80) =
       *(float *)(param_1 + 0x2d4) * fVar5 +
       *(float *)(param_1 + 0x2c8) * fVar4 + *(float *)(param_1 + 0x2e0) * fVar3 +
       *(float *)(param_1 + 0x2ec);
  *(float *)(param_1 + 0xd84) =
       *(float *)(param_1 + 0x2d8) * fVar8 +
       *(float *)(param_1 + 0x2cc) * fVar7 + *(float *)(param_1 + 0x2e4) * fVar6 +
       *(float *)(param_1 + 0x2f0);
  iVar15 = *(int *)(param_1 + 0x28b4) * 0x970;
  fVar6 = (*(float *)(param_1 + 0xcdc) + *(float *)(param_1 + 0xcdc)) -
          *(float *)(&DAT_0069682c + iVar15);
  fVar7 = fVar6 * DAT_00701590;
  fVar8 = DAT_00701594 * fVar6;
  fVar6 = fVar6 * DAT_00701598;
  fVar3 = *(float *)(&DAT_00696970 + iVar15);
  fVar4 = *(float *)(&DAT_00696974 + iVar15);
  fVar5 = *(float *)(&DAT_00696978 + iVar15);
  iVar15 = *(int *)(param_1 + 0x28b4) * 0x5d0;
  pfVar13 = (float *)(param_1 + 0x4f84);
  fVar10 = (*(float *)(&DAT_006d11b8 + iVar15) + *(float *)(&DAT_006d1188 + iVar15)) * _DAT_0064b248
  ;
  *pfVar13 = 0.0;
  *(float *)(param_1 + 0x4f88) = fVar10;
  *(float *)(param_1 + 0x4f8c) =
       (fVar7 + fVar3) * *(float *)(param_1 + 0x2fc) +
       (fVar8 + fVar4) * *(float *)(param_1 + 0x308) + (fVar6 + fVar5) * *(float *)(param_1 + 0x314)
       + *(float *)(param_1 + 800);
  iVar15 = *(int *)(param_1 + 0x28b4) * 0x970;
  fVar6 = (*(float *)(param_1 + 0xcdc) + *(float *)(param_1 + 0xcdc)) -
          *(float *)(&DAT_0069682c + iVar15);
  local_cc = fVar6 * DAT_00701590;
  local_c8 = DAT_00701594 * fVar6;
  fVar6 = fVar6 * DAT_00701598;
  fVar3 = *(float *)(&DAT_00696970 + iVar15);
  fVar4 = *(float *)(&DAT_00696974 + iVar15);
  fVar5 = *(float *)(&DAT_00696978 + iVar15);
  iVar15 = *(int *)(param_1 + 0x28b4) * 0x5d0;
  pfVar24 = (float *)(param_1 + 0x4f90);
  fVar7 = (*(float *)(&DAT_006d1218 + iVar15) + *(float *)(&DAT_006d11e8 + iVar15)) * _DAT_0064b248;
  *pfVar24 = 0.0;
  *(float *)(param_1 + 0x4f94) = fVar7;
  *(float *)(param_1 + 0x4f98) =
       (local_cc + fVar3) * *(float *)(param_1 + 0x2fc) +
       (local_c8 + fVar4) * *(float *)(param_1 + 0x308) +
       (fVar6 + fVar5) * *(float *)(param_1 + 0x314) + *(float *)(param_1 + 800);
  *(float *)(param_1 + 0x4f6c) =
       *pfVar16 * *pfVar13 +
       *(float *)(param_1 + 0x2d0) * *(float *)(param_1 + 0x4f88) +
       *(float *)(param_1 + 0x2dc) * *(float *)(param_1 + 0x4f8c) + *(float *)(param_1 + 0x2e8);
  *(float *)(param_1 + 0x4f70) =
       *(float *)(param_1 + 0x2c8) * *pfVar13 +
       *(float *)(param_1 + 0x2d4) * *(float *)(param_1 + 0x4f88) +
       *(float *)(param_1 + 0x2e0) * *(float *)(param_1 + 0x4f8c) + *(float *)(param_1 + 0x2ec);
  *(float *)(param_1 + 0x4f74) =
       *(float *)(param_1 + 0x2cc) * *pfVar13 +
       *(float *)(param_1 + 0x2d8) * *(float *)(param_1 + 0x4f88) +
       *(float *)(param_1 + 0x2e4) * *(float *)(param_1 + 0x4f8c) + *(float *)(param_1 + 0x2f0);
  local_e4 = *pfVar24 * *pfVar16 +
             *(float *)(param_1 + 0x2d0) * *(float *)(param_1 + 0x4f94) +
             *(float *)(param_1 + 0x2dc) * *(float *)(param_1 + 0x4f98) +
             *(float *)(param_1 + 0x2e8);
  local_e0 = *(float *)(param_1 + 0x2d4) * *(float *)(param_1 + 0x4f94) +
             *(float *)(param_1 + 0x2c8) * *pfVar24 +
             *(float *)(param_1 + 0x2e0) * *(float *)(param_1 + 0x4f98) +
             *(float *)(param_1 + 0x2ec);
  iVar21 = 0;
  local_dc = *(float *)(param_1 + 0x2d8) * *(float *)(param_1 + 0x4f94) +
             *(float *)(param_1 + 0x2cc) * *pfVar24 +
             *(float *)(param_1 + 0x2e4) * *(float *)(param_1 + 0x4f98) +
             *(float *)(param_1 + 0x2f0);
  *(float *)(param_1 + 0x4f78) = local_e4;
  *(float *)(param_1 + 0x4f7c) = local_e0;
  *(float *)(param_1 + 0x4f80) = local_dc;
  *(float *)(param_1 + 0xd88) = *(float *)(param_1 + 0x4f6c);
  *(undefined4 *)(param_1 + 0xd8c) = *(undefined4 *)(param_1 + 0x4f70);
  *(undefined4 *)(param_1 + 0xd90) = *(undefined4 *)(param_1 + 0x4f74);
  *(undefined4 *)(param_1 + 0x4f68) = 1;
  iVar15 = *(int *)(param_1 + 0x28b4);
  if (0 < (int)(&DAT_00696eb0)[iVar15 * 0x25c]) {
    do {
      FUN_0058ac50(&DAT_00696d70 + (iVar21 + iVar15 * 0x97) * 4);
      iVar15 = *(int *)(param_1 + 0x28b4);
      iVar21 = iVar21 + 1;
    } while (iVar21 < (int)(&DAT_00696eb0)[iVar15 * 0x25c]);
  }
  *(int *)(param_1 + 0x141c) = iVar21;
  FUN_0058c990();
  FUN_0058c9b0();
  *(undefined4 *)(param_1 + 0x2a88) = 9;
  uVar11 = FUN_005ee8e0(0,s_Flame_00678e2c);
  *(undefined4 *)(param_1 + 0x2a8c) = uVar11;
  uVar11 = FUN_005ee8e0(0,s_SwitchFlame_006786cc);
  *(undefined4 *)(param_1 + 0x2a90) = uVar11;
  uVar11 = FUN_005ee8e0(0,s_FlameSpace_00678698);
  *(undefined4 *)(param_1 + 0x2a94) = uVar11;
  fVar27 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x2a9c) = (float)fVar27;
  fVar27 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x2a98) = (float)fVar27;
  fVar27 = (float10)FUN_004e2035();
  piVar1 = (int *)(param_1 + 0x253c);
  *(float *)(param_1 + 0x502c) = (float)(fVar27 - (float10)_DAT_0064c7a8);
  FUN_00545cf0(param_1 + 0x2540,piVar1);
  iVar15 = 0;
  *(uint *)(param_1 + 0x51a4) = *(uint *)(param_1 + 0x51a4) | 0x80;
  if (0 < *piVar1) {
    iVar21 = 0;
    puVar12 = (undefined4 *)(param_1 + 0x523c);
    do {
      iVar15 = iVar15 + 1;
      iVar2 = iVar21 + 4;
      iVar21 = iVar21 + 0x14;
      *puVar12 = *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2540));
      puVar12 = puVar12 + 1;
    } while (iVar15 < *piVar1);
  }
  iVar15 = 0;
  puVar12 = (undefined4 *)(param_1 + 0x5280);
  do {
    *puVar12 = 0;
    iVar21 = *piVar1 + iVar15;
    iVar15 = iVar15 + 1;
    puVar12 = puVar12 + 1;
    *(undefined4 *)(param_1 + 0x523c + iVar21 * 4) = 0;
  } while (iVar15 < 8);
  *(undefined4 *)(param_1 + 0x2550) = *(undefined4 *)(param_1 + 0x19c);
  FUN_00544d00(0,param_1 + 0x318);
  *(undefined4 *)(param_1 + 0x4f4c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x4f48) = 0;
  puVar12 = (undefined4 *)(param_1 + 0x5494);
  local_e8 = (int *)0xb;
  puVar19 = (undefined4 *)(param_1 + 0x5518);
  do {
    puVar19[-0x2c] = 0;
    *puVar19 = 0;
    *puVar12 = DAT_007015b0;
    puVar12[1] = DAT_007015b4;
    puVar12[2] = DAT_007015b8;
    fVar27 = (float10)FUN_004e2035();
    puVar12 = puVar12 + 3;
    local_e8 = (int *)((int)local_e8 + -1);
    puVar19[0xb] = (float)(fVar27 - (float10)_DAT_0064c7a8);
    puVar19 = puVar19 + 1;
  } while (local_e8 != (int *)0x0);
  *(undefined4 *)(param_1 + 0x51f0) = (&DAT_006968d4)[*(int *)(param_1 + 0x28b4) * 0x25c];
  if ((*(int *)(param_1 + 0x28b4) < DAT_006cd29c) || (DAT_006cd2a0 <= *(int *)(param_1 + 0x28b4))) {
    *(undefined4 *)(param_1 + 0x4fb0) = 0;
    *(undefined4 *)(param_1 + 0x4fb4) = 1;
    *(undefined4 *)(param_1 + 0x4fb8) = 2;
    *(undefined4 *)(param_1 + 0x4fbc) = 3;
    if (*(int *)(param_1 + 0x28bc) == 6) {
      *(undefined4 *)(param_1 + 0x4fb8) = 4;
      *(undefined4 *)(param_1 + 0x4fbc) = 5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4fb0) = 2;
    *(undefined4 *)(param_1 + 0x4fb4) = 2;
    *(undefined4 *)(param_1 + 0x4fb8) = 0;
    *(undefined4 *)(param_1 + 0x4fbc) = 1;
  }
  local_e8 = (int *)(param_1 + 0x4fb0);
  pfVar16 = (float *)(param_1 + 0x285c);
  iVar15 = 0;
  *(float *)(param_1 + 0x2828) =
       *(float *)(&DAT_00696978 + *(int *)(param_1 + 0x28b4) * 0x970) -
       (float)(&DAT_00696a94)[*(int *)(param_1 + 0x28b4) * 0x25c];
  local_d8 = (double *)(param_1 + 0x4fe8);
  do {
    *(undefined1 *)(iVar15 + 0x2822 + param_1) = 0;
    fVar3 = (float)(&DAT_00696a94)[*local_e8 + *(int *)(param_1 + 0x28b4) * 0x25c];
    local_cc = fVar3 * DAT_00701590;
    local_c8 = DAT_00701594 * fVar3;
    pfVar13 = (float *)(&DAT_00696970 + *local_e8 * 0xc + *(int *)(param_1 + 0x28b4) * 0x970);
    fVar3 = fVar3 * DAT_00701598;
    local_e4 = *pfVar13 - local_cc;
    local_e0 = pfVar13[1] - local_c8;
    local_dc = pfVar13[2];
    pfVar16[-0xc] = local_e4;
    local_dc = local_dc - fVar3;
    pfVar16[-0xb] = local_e0;
    pfVar16[-10] = local_dc;
    *pfVar16 = DAT_00701590;
    pfVar16[1] = DAT_00701594;
    pfVar16[2] = DAT_00701598;
    local_d0 = (float)_rand();
    iVar15 = iVar15 + 1;
    local_e8 = local_e8 + 1;
    pfVar16 = pfVar16 + 3;
    pdVar14 = local_d8 + 1;
    *local_d8 = (double)((float)(int)local_d0 * _DAT_006785f8 * _DAT_0064b244);
    local_d8 = pdVar14;
  } while (iVar15 < 4);
  *(undefined4 *)(param_1 + 0x4f54) = 0;
  *(undefined4 *)(param_1 + 0x4f58) = 0;
  *(undefined1 *)(param_1 + 0x27c4) = 0;
  *(undefined4 *)(param_1 + 0x2774) = *(undefined4 *)(param_1 + 0x28b8);
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x28b8)) {
    puVar12 = (undefined4 *)(param_1 + 0x27d0);
    do {
      *(undefined1 *)(iVar15 + 0x27c5 + param_1) = 0;
      *puVar12 = 0;
      iVar15 = iVar15 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x28b8));
  }
  *(undefined1 *)(param_1 + 0x27b8) = *(undefined1 *)(param_1 + 0xf98);
  *(undefined4 *)(param_1 + 0x27b4) = 0;
  *(undefined1 *)(param_1 + 0x2821) = 0;
  iVar15 = (*(int *)(param_1 + 0x28b8) + 8) * 3;
  *(int *)(param_1 + 0x2768) = iVar15;
  *(int *)(param_1 + 0x276c) = iVar15 + 10;
  FUN_005415b0();
  *(undefined4 *)(param_1 + 0x4fac) = 0;
  if (*(int *)(param_1 + 0x254c) == 5) {
    if ((DAT_006ee150 == 0) && (DAT_006ee164 != (int *)0x0)) {
      (**(code **)(*DAT_006ee164 + 0x28))();
    }
    DAT_006ee150 = DAT_006ee150 + 1;
  }
  else {
    iVar15 = 0;
    do {
      if (((&DAT_006d1428)[*(int *)(param_1 + 0x28b4) * 0x174] != 0) &&
         (*(int *)(&DAT_006d1440 + *(int *)(param_1 + 0x28b4) * 0x5d0) != 0)) {
        *(int *)(param_1 + 0x4fac) = iVar15;
        break;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 6);
    iVar15 = *(int *)(param_1 + 0x4fac) + *(int *)(param_1 + 0x28b4) * 0x174;
    if ((*(int *)(&DAT_006d1440 + iVar15 * 4) == 0) &&
       ((int *)(&DAT_006d1428)[iVar15] != (int *)0x0)) {
      (**(code **)(*(int *)(&DAT_006d1428)[iVar15] + 0x28))();
    }
    *(int *)(&DAT_006d1440 + (*(int *)(param_1 + 0x4fac) + *(int *)(param_1 + 0x28b4) * 0x174) * 4)
         = *(int *)(&DAT_006d1440 +
                   (*(int *)(param_1 + 0x4fac) + *(int *)(param_1 + 0x28b4) * 0x174) * 4) + 1;
  }
  puVar12 = (undefined4 *)(param_1 + 0x4fd8);
  iVar15 = 3;
  do {
    puVar12[-3] = 0;
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  *(undefined4 *)(param_1 + 0x4fc0) = 0;
  *(undefined4 *)(param_1 + 0x4fc4) = 0;
  *(undefined4 *)(param_1 + 0x4fc8) = 0;
  uVar11 = FUN_005eea00(s_effect_Glow_Beam_00678e18);
  *(undefined4 *)(param_1 + 0x5008) = uVar11;
  uVar11 = FUN_005eea00(s_effect_Glow_Particle_00678e00);
  *(undefined4 *)(param_1 + 0x500c) = uVar11;
  uVar11 = FUN_005ee8e0(0,s_GlowKey_00678df8);
  *(undefined4 *)(param_1 + 0x5010) = uVar11;
  uVar11 = FUN_005ee8e0(0,s_HeadLightKey_00678de8);
  *(undefined4 *)(param_1 + 0x5014) = uVar11;
  uVar11 = FUN_005ee8e0(0,s_HornKey_00678de0);
  *(undefined4 *)(param_1 + 0x5018) = uVar11;
  FUN_004eae00(0,0x3f800000,0x3f800000,0x3f800000);
  FUN_004eae00(1,0x3e99999a,0x3e99999a,0x3f800000);
  FUN_004eae00(0,0x3f800000,0x3f800000,0x3f800000);
  FUN_004eae00(1,0x3e99999a,0x3e99999a,0x3f800000);
  FUN_004eae00(0,0x40000000,0x3f800000,0x3f800000);
  FUN_004eae00(1,0x3f800000,0x3e4ccccd,0x3f800000);
  FUN_004eae00(0,0,0x3f800000,0x3f800000);
  FUN_004eae00(1,0,0x3f800000,0x3f800000);
  FUN_004eae00(0,0,0,0x3f800000);
  FUN_004eae00(1,0,0x40800000,0x40800000);
  FUN_004eae00(0,0,0x3f800000,0x3f800000);
  FUN_004eae00(1,0,0x3f800000,0x3f800000);
  FUN_004eae00(0,0,0x3f800000,0x3f800000);
  FUN_004eae00(1,0,0x3f800000,0x3f800000);
  FUN_004eae00(0,0,0x3f800000,0x3f800000);
  FUN_004eae00(1,0,0x3f800000,0x3f800000);
  local_d0 = (float)_rand();
  *(undefined4 *)(param_1 + 0x5020) = 0;
  *(undefined4 *)(param_1 + 0x5024) = 0;
  *(undefined4 *)(param_1 + 0x5028) = 0;
  *(float *)(param_1 + 0x501c) = (float)(int)local_d0 * _DAT_0064e500;
  FUN_00548fc0(param_1);
  *(undefined4 *)(param_1 + 4000) = 0;
  *(undefined4 *)(param_1 + 0x507c) = 0;
  *(undefined4 *)(param_1 + 0x5080) = 1;
  *(undefined4 *)(param_1 + 0x5084) = 0;
  *(undefined4 *)(param_1 + 0x5078) = 0;
  *(undefined4 *)(param_1 + 0x5088) = 0x41200000;
  *(undefined4 *)(param_1 + 0x508c) = 0;
  *(undefined4 *)(param_1 + 0x5090) = 0x42700000;
  *(undefined4 *)(param_1 + 0x5074) = 0;
  *(undefined4 *)(param_1 + 0x5094) = 0;
  *(undefined4 *)(param_1 + 0x5098) = 0;
  FUN_00541b80(*(undefined4 *)(param_1 + 0x28b8));
  if ((_DAT_0064ca9c < (float)(&DAT_00696828)[*(int *)(param_1 + 0x28b4) * 0x25c]) &&
     (iVar15 = FUN_0061f130(&PTR_DAT_00678ddc,&DAT_006970c6 + *(int *)(param_1 + 0x28b4) * 0x970,3),
     iVar15 != 0)) {
    *(uint *)(param_1 + 0x51a4) = *(uint *)(param_1 + 0x51a4) | 2;
  }
  local_e8 = (int *)(param_1 + 0x486c);
  *(undefined4 *)(param_1 + 0x2ab0) = 0;
  *(undefined4 *)(param_1 + 0x2ab8) = 0;
  local_d8 = (double *)0x32;
  puVar12 = (undefined4 *)(param_1 + 0x2b84);
  puVar19 = (undefined4 *)(param_1 + 0x2d14);
  puVar20 = (undefined4 *)(param_1 + 0x3b24);
  do {
    puVar12[-0x32] = 0;
    *puVar12 = 0;
    puVar19[0x5dc] = DAT_00701590;
    puVar19[0x5dd] = DAT_00701594;
    puVar19[0x5de] = DAT_00701598;
    puVar22 = &DAT_00701550;
    puVar25 = puVar20 + -600;
    for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar25 = *puVar22;
      puVar22 = puVar22 + 1;
      puVar25 = puVar25 + 1;
    }
    puVar22 = &DAT_00701550;
    puVar25 = puVar20;
    for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar25 = *puVar22;
      puVar22 = puVar22 + 1;
      puVar25 = puVar25 + 1;
    }
    puVar12[0x6d6] = 0;
    *(undefined1 *)local_e8 = 0;
    *puVar19 = *(undefined4 *)(param_1 + 0x1b0);
    puVar19[1] = *(undefined4 *)(param_1 + 0x1b4);
    puVar19[2] = *(undefined4 *)(param_1 + 0x1b8);
    puVar19[0x96] = *(undefined4 *)(param_1 + 0x1bc);
    puVar19[0x97] = *(undefined4 *)(param_1 + 0x1c0);
    local_e8 = (int *)((int)local_e8 + 0x21);
    puVar19[0x98] = *(undefined4 *)(param_1 + 0x1c4);
    local_d8 = (double *)((int)local_d8 + -1);
    puVar12 = puVar12 + 1;
    puVar19 = puVar19 + 3;
    puVar20 = puVar20 + 0xc;
  } while (local_d8 != (double *)0x0);
  puVar12 = (undefined4 *)(param_1 + 0x204);
  puVar19 = (undefined4 *)(param_1 + 0x4ef4);
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar19 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar19 = puVar19 + 1;
  }
  uVar17 = 0xffffffff;
  pcVar23 = *(char **)(*(int *)(param_1 + 0x330) + 0xc);
  do {
    pcVar26 = pcVar23;
    if (uVar17 == 0) break;
    uVar17 = uVar17 - 1;
    pcVar26 = pcVar23 + 1;
    cVar9 = *pcVar23;
    pcVar23 = pcVar26;
  } while (cVar9 != '\0');
  uVar17 = ~uVar17;
  pcVar23 = pcVar26 + -uVar17;
  pcVar26 = (char *)(param_1 + 0x4f24);
  for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar23;
    pcVar23 = pcVar23 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    *pcVar26 = *pcVar23;
    pcVar23 = pcVar23 + 1;
    pcVar26 = pcVar26 + 1;
  }
  puVar12 = (undefined4 *)(param_1 + 0x204);
  puVar19 = (undefined4 *)(param_1 + 0x31c4);
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar19 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined4 *)(param_1 + 0x47a4) = *(undefined4 *)(param_1 + 0x330);
  uVar17 = 0xffffffff;
  pcVar23 = *(char **)(*(int *)(param_1 + 0x330) + 0xc);
  do {
    pcVar26 = pcVar23;
    if (uVar17 == 0) break;
    uVar17 = uVar17 - 1;
    pcVar26 = pcVar23 + 1;
    cVar9 = *pcVar23;
    pcVar23 = pcVar26;
  } while (cVar9 != '\0');
  uVar17 = ~uVar17;
  pcVar23 = pcVar26 + -uVar17;
  pcVar26 = (char *)(param_1 + 0x486c);
  for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar23;
    pcVar23 = pcVar23 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    *pcVar26 = *pcVar23;
    pcVar23 = pcVar23 + 1;
    pcVar26 = pcVar26 + 1;
  }
  *(undefined4 *)(param_1 + 0x4ee0) = 0;
  *(undefined4 *)(param_1 + 0x4ee4) = 0;
  *(undefined4 *)(param_1 + 0x4ee8) = 0;
  *(undefined4 *)(param_1 + 0x4eec) = 0;
  *(undefined4 *)(param_1 + 0x4ef0) = 0;
  return;
}

