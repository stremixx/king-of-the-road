
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00553a05) */
/* WARNING: Removing unreachable block (ram,0x00553b6c) */
/* WARNING: Removing unreachable block (ram,0x00553b16) */
/* WARNING: Removing unreachable block (ram,0x00553bb8) */
/* WARNING: Removing unreachable block (ram,0x00553c13) */
/* WARNING: Removing unreachable block (ram,0x00553c74) */
/* WARNING: Removing unreachable block (ram,0x00553c7c) */
/* WARNING: Removing unreachable block (ram,0x00553c8d) */
/* WARNING: Removing unreachable block (ram,0x00553cce) */
/* WARNING: Removing unreachable block (ram,0x00553cdf) */
/* WARNING: Removing unreachable block (ram,0x00553d0c) */
/* WARNING: Removing unreachable block (ram,0x00553d1d) */
/* WARNING: Removing unreachable block (ram,0x00553d46) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00552050(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float *pfVar11;
  short *psVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short *psVar20;
  undefined4 *puVar21;
  int iVar22;
  float10 fVar23;
  float10 fVar24;
  uint local_a80;
  int local_a7c;
  undefined4 *local_a78;
  float local_a68;
  float local_a64;
  float local_a60;
  float local_a5c;
  float local_a58;
  float local_a54;
  float local_a50;
  float local_a4c;
  uint local_a2c;
  undefined4 local_a28;
  undefined4 local_a24;
  undefined4 local_a20;
  undefined4 local_a1c;
  float local_a18;
  float local_a14;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  undefined4 local_9d0 [34];
  undefined4 local_948 [13];
  float local_914;
  float local_910;
  float local_90c;
  float local_908;
  float local_904;
  float local_900;
  undefined4 local_8e4;
  undefined4 local_8e0;
  undefined4 local_8dc;
  int local_8d4;
  float local_7b8 [2];
  undefined4 local_7b0 [22];
  undefined4 local_758 [52];
  undefined4 local_688 [16];
  float local_648 [401];
  
  if (*(int *)(param_1 + 0x2590) == 0) {
    iVar22 = 8;
    do {
      FUN_005eebf0();
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    puVar15 = local_7b0;
    iVar22 = 4;
    do {
      puVar15[-2] = 0;
      puVar15[-1] = 0;
      *puVar15 = 0;
      puVar15 = puVar15 + 3;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    local_a7c = 0;
    iVar22 = 8;
    pfVar11 = local_648;
    do {
      pfVar11[-3] = DAT_007015b0;
      pfVar11[-2] = DAT_007015b4;
      pfVar11[-1] = DAT_007015b8;
      *pfVar11 = DAT_00701590;
      pfVar11[1] = DAT_00701594;
      pfVar11[2] = DAT_00701598;
      pfVar11[0xb] = 0.0;
      pfVar11[9] = 0.0;
      iVar22 = iVar22 + -1;
      pfVar11 = pfVar11 + 0x34;
    } while (iVar22 != 0);
    iVar22 = 0;
    pfVar16 = local_7b8;
    pfVar11 = (float *)(param_1 + 0xf08);
    do {
      fVar5 = *pfVar11;
      fVar6 = pfVar11[1];
      fVar7 = pfVar11[2];
      if (iVar22 < 4) {
        fVar1 = *(float *)(param_1 + 0x220);
        fVar2 = *(float *)(param_1 + 0x214);
        *pfVar16 = fVar5 * *(float *)(param_1 + 0x204) +
                   fVar6 * *(float *)(param_1 + 0x210) + fVar7 * *(float *)(param_1 + 0x21c) +
                   *(float *)(param_1 + 0x228);
        fVar3 = *(float *)(param_1 + 0x224);
        fVar4 = *(float *)(param_1 + 0x218);
        pfVar16[1] = fVar5 * *(float *)(param_1 + 0x208) + fVar6 * fVar2 + fVar7 * fVar1 +
                     *(float *)(param_1 + 0x22c);
        pfVar16[2] = fVar5 * *(float *)(param_1 + 0x20c) + fVar6 * fVar4 + fVar7 * fVar3 +
                     *(float *)(param_1 + 0x230);
      }
      else {
        *pfVar16 = DAT_007015b0;
        pfVar16[1] = DAT_007015b4;
        pfVar16[2] = DAT_007015b8;
      }
      iVar22 = iVar22 + 1;
      pfVar11 = pfVar11 + 3;
      pfVar16 = pfVar16 + 3;
    } while (iVar22 < 4);
    if ((*(int *)(param_1 + 0x184) == 0) ||
       (((*(int *)(DAT_006cdbcc + 0x514) < 2 && (*(int *)(DAT_006cdbcc + 0x524) != 1)) &&
        (*(int *)(DAT_006cdbcc + 0x524) != 2)))) {
      if (((*(int *)(param_1 + 0x2aac) == 1) && (iVar22 = *(int *)(param_1 + 0x5460), iVar22 != 0))
         && ((*(byte *)(param_1 + 0x51a4) & 8) != 0)) {
        fVar5 = *(float *)(DAT_006d0fd8 + 0x5b4) - *(float *)(param_1 + 0x228);
        fVar6 = *(float *)(DAT_006d0fd8 + 0x5b8) - *(float *)(param_1 + 0x22c);
        fVar7 = *(float *)(DAT_006d0fd8 + 0x5bc) - *(float *)(param_1 + 0x230);
        if ((*(int *)(iVar22 + 0x3344) != 0) || (*(float *)(param_1 + 0x224) < (float)_DAT_0064a6d0)
           ) {
          fVar5 = *(float *)(param_1 + 0x2f0);
          local_a50 = *(float *)(param_1 + 0x2e8) - fVar5 * DAT_00701590;
          local_a4c = *(float *)(param_1 + 0x2ec) - fVar5 * DAT_00701594;
          fVar5 = *(float *)(param_1 + 0x2f0) - fVar5 * DAT_00701598;
          local_a68 = local_a50 * *(float *)(param_1 + 0x204) +
                      local_a4c * *(float *)(param_1 + 0x210) + fVar5 * *(float *)(param_1 + 0x21c)
                      + *(float *)(param_1 + 0x228);
          local_a64 = local_a50 * *(float *)(param_1 + 0x208) +
                      local_a4c * *(float *)(param_1 + 0x214) + fVar5 * *(float *)(param_1 + 0x220)
                      + *(float *)(param_1 + 0x22c);
          local_a60 = local_a50 * *(float *)(param_1 + 0x20c) +
                      local_a4c * *(float *)(param_1 + 0x218) + fVar5 * *(float *)(param_1 + 0x224)
                      + *(float *)(param_1 + 0x230);
          local_a5c = DAT_00701590 * _DAT_0064b440 + local_a68;
          local_a58 = DAT_00701594 * _DAT_0064b440 + local_a64;
          local_a54 = DAT_00701598 * _DAT_0064b440 + local_a60;
          local_a18 = DAT_00701594 * _DAT_0064b310;
          local_a14 = DAT_00701598 * _DAT_0064b310;
          local_a68 = local_a68 - DAT_00701590 * _DAT_0064b310;
          local_a64 = local_a64 - local_a18;
          local_a60 = local_a60 - local_a14;
          FUN_005eebf0();
          uVar13 = FUN_004e5437(*(undefined4 *)(param_1 + 0x330),(float *)(param_1 + 0x228),
                                &local_a5c);
          if (param_1 == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = param_1 + 0x10;
          }
          uVar14 = FUN_004e5e08(iVar22,uVar13,&local_a5c,&local_a68,local_948);
          iVar19 = local_a7c;
          if (((uVar14 & 1) != 0) && (local_8d4 == 0)) {
            iVar19 = 1;
            puVar15 = local_948;
            puVar21 = local_688;
            for (iVar22 = 0x34; iVar22 != 0; iVar22 = iVar22 + -1) {
              *puVar21 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar21 = puVar21 + 1;
            }
          }
        }
        else if ((*(int *)(iVar22 + 0x2638) != 3) ||
                (_DAT_0064c7a8 < fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5)) {
          if (*(float *)(iVar22 + 0x3330) < _DAT_0064b254) {
            iVar17 = 0;
            if (((2 < *(int *)(iVar22 + 0x3340)) && (*(short *)(iVar22 + 0x2d58) != 0)) &&
               (*(short *)(iVar22 + 0x2d5a) == 0)) {
              iVar17 = 1;
              puVar15 = (undefined4 *)(iVar22 + 0x2d60);
              puVar21 = local_688;
              for (iVar19 = 0x34; iVar19 != 0; iVar19 = iVar19 + -1) {
                *puVar21 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar21 = puVar21 + 1;
              }
            }
            iVar19 = iVar17;
            if (((3 < *(int *)(iVar22 + 0x3340)) && (*(short *)(iVar22 + 0x2e50) != 0)) &&
               (*(short *)(iVar22 + 0x2e52) == 0)) {
              iVar19 = iVar17 + 1;
              puVar15 = (undefined4 *)(iVar22 + 0x2e58);
              puVar21 = local_688 + iVar17 * 0x34;
              for (iVar18 = 0x34; iVar18 != 0; iVar18 = iVar18 + -1) {
                *puVar21 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar21 = puVar21 + 1;
              }
            }
          }
          else {
            iVar17 = 0;
            if ((*(short *)(iVar22 + 0x2b68) != 0) && (*(short *)(iVar22 + 0x2b6a) == 0)) {
              iVar17 = 1;
              puVar15 = (undefined4 *)(iVar22 + 0x2b70);
              puVar21 = local_688;
              for (iVar19 = 0x34; iVar19 != 0; iVar19 = iVar19 + -1) {
                *puVar21 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar21 = puVar21 + 1;
              }
            }
            iVar19 = iVar17;
            if ((*(short *)(iVar22 + 0x2c60) != 0) && (*(short *)(iVar22 + 0x2c62) == 0)) {
              iVar19 = iVar17 + 1;
              puVar15 = (undefined4 *)(iVar22 + 0x2c68);
              puVar21 = local_688 + iVar17 * 0x34;
              for (iVar18 = 0x34; iVar18 != 0; iVar18 = iVar18 + -1) {
                *puVar21 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar21 = puVar21 + 1;
              }
            }
          }
        }
        else {
          iVar19 = 0;
          local_a7c = 0;
          if (0 < *(int *)(iVar22 + 0x3340)) {
            local_a78 = local_688;
            psVar12 = (short *)(iVar22 + 0x2b6a);
            do {
              if ((psVar12[-1] != 0) && (*psVar12 == 0)) {
                iVar19 = iVar19 + 1;
                psVar20 = psVar12 + 3;
                puVar15 = local_a78;
                for (iVar17 = 0x34; iVar17 != 0; iVar17 = iVar17 + -1) {
                  *puVar15 = *(undefined4 *)psVar20;
                  psVar20 = psVar20 + 2;
                  puVar15 = puVar15 + 1;
                }
                local_a78 = local_a78 + 0x34;
              }
              local_a7c = local_a7c + 1;
              psVar12 = psVar12 + 0x7c;
            } while (local_a7c < *(int *)(iVar22 + 0x3340));
          }
        }
        FUN_004bb2c0(local_688,iVar19,local_7b8,(&DAT_00696d20)[*(int *)(param_1 + 0x28b4) * 0x25c],
                     0);
      }
    }
    else if ((((*(byte *)(param_1 + 0x51a4) & 8) != 0) && (*(int *)(param_1 + 0x254c) != 5)) &&
            ((float)_DAT_0064a6d0 < *(float *)(param_1 + 0x224))) {
      iVar22 = 0;
      pfVar16 = local_648;
      local_a2c = (uint)*(byte *)(param_1 + 0x2821);
      pfVar11 = (float *)(param_1 + 0x2830);
      do {
        if ((local_a2c & 1 << ((byte)iVar22 & 0x1f)) != 0) {
          fVar4 = *(float *)(param_1 + 0x2c4) * pfVar11[-1] +
                  *(float *)(param_1 + 0x2d0) * *pfVar11 + *(float *)(param_1 + 0x2dc) * pfVar11[1]
                  + *(float *)(param_1 + 0x2e8);
          fVar9 = *(float *)(param_1 + 0x2c8) * pfVar11[-1] +
                  *(float *)(param_1 + 0x2d4) * *pfVar11 + *(float *)(param_1 + 0x2e0) * pfVar11[1]
                  + *(float *)(param_1 + 0x2ec);
          fVar8 = *(float *)(param_1 + 0x2cc) * pfVar11[-1] +
                  *(float *)(param_1 + 0x2d8) * *pfVar11 + *(float *)(param_1 + 0x2e4) * pfVar11[1]
                  + *(float *)(param_1 + 0x2f0);
          fVar5 = *(float *)(param_1 + 0x220);
          fVar6 = *(float *)(param_1 + 0x214);
          pfVar16[-3] = fVar4 * *(float *)(param_1 + 0x204) +
                        fVar9 * *(float *)(param_1 + 0x210) + fVar8 * *(float *)(param_1 + 0x21c) +
                        *(float *)(param_1 + 0x228);
          fVar7 = *(float *)(param_1 + 0x224);
          fVar1 = *(float *)(param_1 + 0x218);
          pfVar16[-2] = fVar4 * *(float *)(param_1 + 0x208) + fVar9 * fVar6 + fVar8 * fVar5 +
                        *(float *)(param_1 + 0x22c);
          fVar5 = *(float *)(param_1 + 0x2dc);
          fVar6 = pfVar11[0xd];
          fVar2 = *(float *)(param_1 + 0x2d0);
          fVar3 = pfVar11[0xc];
          pfVar16[-1] = fVar4 * *(float *)(param_1 + 0x20c) + fVar9 * fVar1 + fVar8 * fVar7 +
                        *(float *)(param_1 + 0x230);
          fVar7 = *(float *)(param_1 + 0x2c4) * pfVar11[0xb] + fVar2 * fVar3 + fVar5 * fVar6;
          local_a7c = local_a7c + 1;
          fVar1 = *(float *)(param_1 + 0x2c8) * pfVar11[0xb] +
                  *(float *)(param_1 + 0x2d4) * pfVar11[0xc] +
                  *(float *)(param_1 + 0x2e0) * pfVar11[0xd];
          fVar2 = *(float *)(param_1 + 0x2cc) * pfVar11[0xb] +
                  *(float *)(param_1 + 0x2d8) * pfVar11[0xc] +
                  *(float *)(param_1 + 0x2e4) * pfVar11[0xd];
          local_a68 = fVar7 * *(float *)(param_1 + 0x204) +
                      fVar1 * *(float *)(param_1 + 0x210) + fVar2 * *(float *)(param_1 + 0x21c);
          fVar5 = *(float *)(param_1 + 0x208);
          fVar6 = *(float *)(param_1 + 0x220);
          *pfVar16 = local_a68;
          local_a64 = fVar1 * *(float *)(param_1 + 0x214) + fVar2 * fVar6 + fVar7 * fVar5;
          fVar5 = *(float *)(param_1 + 0x20c);
          fVar6 = *(float *)(param_1 + 0x224);
          pfVar16[1] = local_a64;
          local_a60 = fVar1 * *(float *)(param_1 + 0x218) + fVar2 * fVar6 + fVar7 * fVar5;
          pfVar16[2] = local_a60;
        }
        iVar22 = iVar22 + 1;
        pfVar11 = pfVar11 + 3;
        pfVar16 = pfVar16 + 0x34;
      } while (iVar22 < 4);
      FUN_004bb3a0(local_688,local_a7c,local_7b8,(&DAT_00696d20)[*(int *)(param_1 + 0x28b4) * 0x25c]
                   ,0);
    }
    if (((double)_DAT_0064e788 < *(double *)(DAT_006f230c + 0x58)) ||
       (*(double *)(DAT_006f230c + 0x58) < (double)_DAT_0064b310)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    uVar14 = (uint)((float)_DAT_0064a830 < *(float *)(DAT_006f230c + 0x218));
    local_a5c = _DAT_00695954 - *(float *)(param_1 + 0x228);
    local_a58 = _DAT_00695958 - *(float *)(param_1 + 0x22c);
    local_a54 = _DAT_0069595c - *(float *)(param_1 + 0x230);
    local_a2c = uVar14;
    fVar23 = (float10)FUN_005aabc0(&local_a5c);
    fVar5 = _DAT_00678620;
    if (_DAT_00678620 < _DAT_0067861c) {
      fVar5 = _DAT_0067861c;
    }
    if (fVar5 <= _DAT_00678624) {
      fVar24 = (float10)_DAT_00678624;
    }
    else if (_DAT_0067861c <= _DAT_00678620) {
      fVar24 = (float10)_DAT_00678620;
    }
    else {
      fVar24 = (float10)_DAT_0067861c;
    }
    if (((fVar23 < fVar24) && ((uVar14 != 0 || (bVar10)))) && (DAT_006f2320 == 0)) {
      FUN_005eebf0();
      FUN_005eebf0();
      puVar15 = local_948;
      local_8e0 = 0;
      local_8dc = 0;
      local_8d4 = 0;
      local_8e4 = 0;
      local_a28 = 0;
      puVar21 = &DAT_00701550;
      for (iVar22 = 0xc; puVar15 = puVar15 + 1, iVar22 != 0; iVar22 = iVar22 + -1) {
        *puVar15 = *puVar21;
        puVar21 = puVar21 + 1;
      }
      local_910 = DAT_007015b4;
      local_904 = DAT_007015b4;
      local_914 = DAT_007015b0;
      local_90c = DAT_007015b8;
      local_908 = DAT_007015b0;
      local_900 = DAT_007015b8;
      puVar15 = local_948;
      puVar21 = local_758;
      for (iVar22 = 0x34; iVar22 != 0; iVar22 = iVar22 + -1) {
        *puVar21 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar21 = puVar21 + 1;
      }
      local_a24 = 0;
      local_a20 = 0;
      local_a1c = 0;
      local_a18 = 0.0;
      local_a14 = 0.0;
      local_a80 = 0;
      do {
        if (*(char *)(local_a80 + 0x2822 + param_1) == '\0') {
          puVar15 = local_758;
          puVar21 = local_948;
          for (iVar22 = 0x34; iVar22 != 0; iVar22 = iVar22 + -1) {
            *puVar21 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar21 = puVar21 + 1;
          }
          local_a78 = *(undefined4 **)(param_1 + 0x330);
        }
        else {
          iVar22 = *(int *)(param_1 + 0x5460);
          if (iVar22 == 0) {
            pfVar11 = (float *)(param_1 + (local_a80 * 3 + 0xa0b) * 4);
            local_914 = *pfVar11;
            local_910 = pfVar11[1];
            local_90c = pfVar11[2];
            pfVar11 = (float *)(param_1 + (local_a80 * 3 + 0xa17) * 4);
            local_908 = *pfVar11;
            local_904 = pfVar11[1];
            local_900 = pfVar11[2];
          }
          else {
            puVar15 = (undefined4 *)
                      (iVar22 + 0x2b70 + *(int *)(param_1 + 0x4fb0 + local_a80 * 4) * 0xf8);
            puVar21 = local_948;
            for (iVar19 = 0x34; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar21 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar21 = puVar21 + 1;
            }
          }
          if (iVar22 == 0) {
            local_a78 = (undefined4 *)
                        FUN_004e5437(*(undefined4 *)(param_1 + 0x330),param_1 + 0x228,&local_914);
          }
          else {
            local_a78 = *(undefined4 **)
                         (iVar22 + 0x2c40 + *(int *)(param_1 + 0x4fb0 + local_a80 * 4) * 0xf8);
          }
        }
        if (local_a78 == (undefined4 *)0x0) {
          FUN_004e1e9c(s_showNic____LampRoom__NULL_006792e4);
        }
        puVar15 = local_9d0;
        iVar22 = 3;
        do {
          puVar15[-2] = 0;
          puVar15[-1] = 0;
          *puVar15 = 0;
          puVar15 = puVar15 + 3;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        local_a68 = 0.0;
        local_a64 = 0.0;
        local_a60 = 0.0;
        local_9f8 = 0;
        local_9f4 = 0;
        local_9f0 = 0;
        if (local_a80 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00552d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&PTR_LAB_00553d6c)[local_a80])();
          return;
        }
        local_a80 = local_a80 + 1;
      } while ((int)local_a80 < 4);
    }
  }
  return;
}

