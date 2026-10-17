
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0054d890(int param_1,uint *param_2)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  float *pfVar25;
  int *piVar26;
  undefined4 *puVar27;
  float **ppfVar28;
  float10 fVar29;
  float *apfStack_200 [3];
  uint uStack_1f4;
  int iStack_1f0;
  float *pfStack_1ec;
  float *pfStack_1e8;
  undefined4 *puStack_1e4;
  float *pfStack_1e0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  int iStack_1a4;
  undefined4 auStack_1a0 [10];
  undefined4 uStack_178;
  undefined4 uStack_174;
  char *pcStack_170;
  char *pcStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 auStack_150 [48];
  undefined4 uStack_90;
  double dStack_88;
  undefined1 auStack_20 [32];
  
  if ((DAT_006785ec & 1) == 0) {
    pfStack_1e0 = (float *)0x1;
    puStack_1e4 = (undefined4 *)0x54d8af;
    FUN_005d29a0();
    return 0;
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    pfStack_1e0 = (float *)0x54d8d1;
    FUN_0054cda0();
    return 0;
  }
  *(undefined4 *)(param_1 + 0xdf4) = 2;
  pfStack_1e0 = (float *)0x54d8f6;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x34))();
  pfStack_1e0 = (float *)0x54d8fd;
  FUN_0058fc20();
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0x4f5c) = 1;
  *(undefined4 *)(param_1 + 4000) = 0;
  *(undefined4 *)(param_1 + 0x4f60) = 0;
  *(undefined4 *)(param_1 + 0x4f64) = 0;
  if (*(int *)(param_1 + 0x5460) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x5460) + 0x29d0) = 0;
  }
  puStack_1e4 = (undefined4 *)&LAB_0054cf40;
  iStack_1f0 = *(int *)(param_1 + 0x228);
  pfStack_1ec = *(float **)(param_1 + 0x22c);
  pfStack_1e8 = *(float **)(param_1 + 0x230);
  uStack_1f4 = *(uint *)(param_1 + 0x330);
  apfStack_200[2] = (float *)0x54d965;
  pfStack_1e0 = (float *)param_1;
  FUN_005db580();
  if (*(int *)(param_1 + 0x4f60) != 0) {
    *param_2 = *param_2 | 0x20;
  }
  if ((((DAT_006785ec & 4) != 0) && (*(int *)(param_1 + 0xf98) == 3)) ||
     (*(int *)(param_1 + 0x5464) != 0)) {
    *(undefined4 *)(param_1 + 0xf98) = 2;
  }
  if ((*(uint *)(param_1 + 0x51a4) & 0x100) != 0) {
    pfStack_1e0 = (float *)0x54d9af;
    FUN_00549310();
    pfStack_1e0 = (float *)0x54d9b6;
    iVar16 = FUN_00549300();
    if (iVar16 != 1) {
      pfStack_1e0 = (float *)0x54d9c6;
      iVar16 = FUN_00549300();
      if (iVar16 != 2) {
        piVar26 = (int *)(param_1 + 0xdc4);
        fStack_1cc = 0.0;
        iStack_1a4 = 0;
        do {
          pfStack_1e0 = (float *)*piVar26;
          if (pfStack_1e0 == (float *)0x0) break;
          puStack_1e4 = (undefined4 *)0x54d9ef;
          fVar17 = (float)FUN_0053eee0();
          if (_DAT_0064c7a8 < (float)piVar26[6]) break;
          if (fVar17 != 0.0) {
            pfStack_1e0 = (float *)0x54da1d;
            iVar16 = FUN_00549300();
            if (iVar16 != 1) {
              pfStack_1e0 = (float *)0x54da29;
              iVar16 = FUN_00549300();
              if (iVar16 != 2) goto LAB_0054db82;
            }
            iVar16 = *(int *)((int)fVar17 + 0x28b4);
            pfStack_1e0 = (float *)(auStack_1a0 + 8);
            puStack_1e4 = (undefined4 *)0x54da45;
            pfVar18 = (float *)FUN_0057d570();
            iVar16 = iVar16 * 0x970;
            pfVar25 = (float *)(&DAT_00696f38 + iVar16);
            fStack_1c4 = pfVar18[4] * *(float *)(&DAT_00696f3c + iVar16) +
                         pfVar18[7] * *(float *)(&DAT_00696f40 + iVar16) + pfVar18[1] * *pfVar25 +
                         pfVar18[10];
            fStack_1c0 = pfVar18[5] * *(float *)(&DAT_00696f3c + iVar16) +
                         pfVar18[8] * *(float *)(&DAT_00696f40 + iVar16) + pfVar18[2] * *pfVar25 +
                         pfVar18[0xb];
            iVar19 = *(int *)(param_1 + 0x28b4) * 0x970;
            pfVar20 = (float *)(&DAT_00696f38 + iVar19);
            fStack_1b8 = *(float *)(param_1 + 0x214) * *(float *)(&DAT_00696f3c + iVar19) +
                         *(float *)(param_1 + 0x208) * *pfVar20 +
                         *(float *)(param_1 + 0x220) * *(float *)(&DAT_00696f40 + iVar19) +
                         *(float *)(param_1 + 0x22c);
            fStack_1b4 = *(float *)(param_1 + 0x218) * *(float *)(&DAT_00696f3c + iVar19) +
                         *(float *)(param_1 + 0x20c) * *pfVar20 +
                         *(float *)(param_1 + 0x224) * *(float *)(&DAT_00696f40 + iVar19) +
                         *(float *)(param_1 + 0x230);
            fStack_1b0 = (*pfVar20 * *(float *)(param_1 + 0x204) +
                          *(float *)(param_1 + 0x210) * *(float *)(&DAT_00696f3c + iVar19) +
                          *(float *)(param_1 + 0x21c) * *(float *)(&DAT_00696f40 + iVar19) +
                         *(float *)(param_1 + 0x228)) -
                         (*pfVar25 * *pfVar18 +
                          pfVar18[3] * *(float *)(&DAT_00696f3c + iVar16) +
                          pfVar18[6] * *(float *)(&DAT_00696f40 + iVar16) + pfVar18[9]);
            fStack_1ac = fStack_1b8 - fStack_1c4;
            if ((fStack_1b4 - fStack_1c0) * (fStack_1b4 - fStack_1c0) +
                fStack_1ac * fStack_1ac + fStack_1b0 * fStack_1b0 < _DAT_0064b440) {
              fStack_1cc = fVar17;
            }
          }
LAB_0054db82:
          piVar26 = piVar26 + 1;
          iStack_1a4 = iStack_1a4 + 1;
        } while (iStack_1a4 < 6);
        if (fStack_1cc == 0.0) {
          pfStack_1e0 = (float *)0x54dbd2;
          fVar29 = (float10)FUN_004e2035();
          *(float *)(param_1 + 0x502c) = (float)fVar29;
        }
        else {
          pfStack_1e0 = (float *)0x54dba4;
          fVar29 = (float10)FUN_004e2035();
          if ((float10)_DAT_0064b310 < fVar29 - (float10)*(float *)(param_1 + 0x502c)) {
            pfStack_1e0 = (float *)0x0;
            puStack_1e4 = (undefined4 *)0x54dbc8;
            FUN_00549010();
          }
        }
        goto LAB_0054dd25;
      }
    }
    fStack_1cc = (float)*(double *)(DAT_006ee15c + 0xb90) / _DAT_00678600;
    if (*(int *)(param_1 + 0x5460) != 0) {
      pfStack_1e0 = (float *)0x54dc07;
      fVar29 = (float10)FUN_004eaf10();
      pfStack_1e0 = (float *)(float)(fVar29 - (float10)fStack_1cc);
      puStack_1e4 = (undefined4 *)0x54dc20;
      FUN_004eaf20();
      pfStack_1e0 = (float *)0x54dc31;
      fVar29 = (float10)FUN_004eaf10();
      pfStack_1e0 = (float *)(float)(fVar29 - (float10)fStack_1cc * (float10)_DAT_0064a830);
      puStack_1e4 = (undefined4 *)0x54dc52;
      FUN_004eaf20();
    }
    if ((float)_DAT_0064a6c0 <
        (float)*(double *)(DAT_006ee15c + 0xb98) - *(float *)(param_1 + 0x5444)) {
      pfStack_1e0 = (float *)0x0;
      puStack_1e4 = (undefined4 *)0x54dc7f;
      FUN_00548bd0();
      puVar23 = auStack_150;
      iVar16 = 0x13;
      do {
        puVar23[2] = 0;
        *puVar23 = 0;
        puVar23[3] = 0x3ff00000;
        puVar23 = puVar23 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      if (*(int *)(param_1 + 0x509c) != DAT_0068a8f0) {
        pfStack_1e0 = (float *)auStack_150;
        pfStack_1ec = (float *)0x54dcc4;
        pfStack_1e8 = (float *)(param_1 + 0x509c);
        puStack_1e4 = (undefined4 *)iVar16;
        FUN_0041d3f0();
        pfStack_1e8 = (float *)0x54dcc9;
        FUN_004769d0();
        if ((dStack_88 <= _DAT_0064a668) ||
           (dStack_88 = dStack_88 - _DAT_0064a728, dStack_88 <= _DAT_0064a668)) {
          uStack_90 = 0;
        }
        puStack_1e4 = auStack_150;
        pfStack_1ec = (float *)0x54dd1d;
        pfStack_1e8 = (float *)(param_1 + 0x509c);
        pfStack_1e0 = (float *)puStack_1e4;
        FUN_0041d3f0();
        pfStack_1e8 = (float *)0x54dd22;
        FUN_00476a80();
      }
    }
  }
LAB_0054dd25:
  uVar22 = param_1 + 0x10;
  pfStack_1e0 = (float *)0x54dd30;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x38))();
  if (*(int *)(param_1 + 0xf98) == 2) {
    fStack_1ac = *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x1b0) +
                 *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x274) +
                 *(float *)(param_1 + 0x1b8) * *(float *)(param_1 + 0x280);
    pfStack_1e0 = (float *)0x54dd75;
    FUN_005eebf0();
    if (fStack_1ac <= _DAT_0064b254) {
      iVar16 = -1;
    }
    else {
      iVar16 = 1;
    }
    iVar16 = iVar16 * (uint)((float)_DAT_0064a590 < ABS(fStack_1ac));
    if ((*(int *)(param_1 + 0x4f68) == 1) && (iVar16 == -1)) {
      pfStack_1e8 = *(float **)(param_1 + 0x330);
      pfStack_1e0 = &fStack_1c8;
      puStack_1e4 = (undefined4 *)(param_1 + 0x228);
      fStack_1bc = *(float *)(param_1 + 0x4f6c) * *(float *)(param_1 + 0x204) +
                   *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x4f74) +
                   *(float *)(param_1 + 0x210) * *(float *)(param_1 + 0x4f70) +
                   *(float *)(param_1 + 0x228);
      fStack_1b8 = *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x4f74) +
                   *(float *)(param_1 + 0x208) * *(float *)(param_1 + 0x4f6c) +
                   *(float *)(param_1 + 0x214) * *(float *)(param_1 + 0x4f70) +
                   *(float *)(param_1 + 0x22c);
      fStack_1b4 = *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x4f74) +
                   *(float *)(param_1 + 0x20c) * *(float *)(param_1 + 0x4f6c) +
                   *(float *)(param_1 + 0x218) * *(float *)(param_1 + 0x4f70) +
                   *(float *)(param_1 + 0x230);
      fStack_1c8 = *(float *)(param_1 + 0x4f78) * *(float *)(param_1 + 0x204) +
                   *(float *)(param_1 + 0x210) * *(float *)(param_1 + 0x4f7c) +
                   *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x4f80) +
                   *(float *)(param_1 + 0x228);
      fStack_1c4 = *(float *)(param_1 + 0x208) * *(float *)(param_1 + 0x4f78) +
                   *(float *)(param_1 + 0x214) * *(float *)(param_1 + 0x4f7c) +
                   *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x4f80) +
                   *(float *)(param_1 + 0x22c);
      fStack_1c0 = *(float *)(param_1 + 0x20c) * *(float *)(param_1 + 0x4f78) +
                   *(float *)(param_1 + 0x218) * *(float *)(param_1 + 0x4f7c) +
                   *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x4f80) +
                   *(float *)(param_1 + 0x230);
      pfStack_1ec = (float *)0x54df0d;
      iVar19 = FUN_004e5437();
      if (iVar19 == 0) {
        iVar19 = *(int *)(param_1 + 0x330);
      }
      pfStack_1e0 = *(float **)(param_1 + 0xce4);
      puStack_1e4 = auStack_150;
      pfStack_1e8 = &fStack_1c8;
      pfStack_1ec = &fStack_1bc;
      uStack_1f4 = -(uint)(param_1 != 0) & uVar22;
      apfStack_200[2] = (float *)0x54df44;
      iStack_1f0 = iVar19;
      uVar21 = FUN_004e51f4();
      if ((uVar21 & 1) == 0) {
        pfStack_1e0 = *(float **)(param_1 + 0xcdc);
        puStack_1e4 = auStack_150;
        pfStack_1e8 = &fStack_1c8;
        pfStack_1ec = &fStack_1bc;
        uStack_1f4 = -(uint)(param_1 != 0) & uVar22;
        apfStack_200[2] = (float *)0x54df73;
        iStack_1f0 = iVar19;
        uVar21 = FUN_004e51f4();
        if ((uVar21 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x4f68) = 0xffffffff;
          *(undefined4 *)(param_1 + 0xd88) = *(undefined4 *)(param_1 + 0x4f78);
          *(undefined4 *)(param_1 + 0xd8c) = *(undefined4 *)(param_1 + 0x4f7c);
          *(undefined4 *)(param_1 + 0xd90) = *(undefined4 *)(param_1 + 0x4f80);
        }
      }
    }
    if ((*(int *)(param_1 + 0x4f68) == -1) && (iVar16 == 1)) {
      pfStack_1e8 = *(float **)(param_1 + 0x330);
      pfStack_1e0 = &fStack_1c8;
      puStack_1e4 = (undefined4 *)(param_1 + 0x228);
      fStack_1bc = *(float *)(param_1 + 0x4f78) * *(float *)(param_1 + 0x204) +
                   *(float *)(param_1 + 0x210) * *(float *)(param_1 + 0x4f7c) +
                   *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x4f80) +
                   *(float *)(param_1 + 0x228);
      fStack_1b8 = *(float *)(param_1 + 0x214) * *(float *)(param_1 + 0x4f7c) +
                   *(float *)(param_1 + 0x208) * *(float *)(param_1 + 0x4f78) +
                   *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x4f80) +
                   *(float *)(param_1 + 0x22c);
      fStack_1b4 = *(float *)(param_1 + 0x218) * *(float *)(param_1 + 0x4f7c) +
                   *(float *)(param_1 + 0x20c) * *(float *)(param_1 + 0x4f78) +
                   *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x4f80) +
                   *(float *)(param_1 + 0x230);
      fStack_1c8 = *(float *)(param_1 + 0x204) * *(float *)(param_1 + 0x4f6c) +
                   *(float *)(param_1 + 0x210) * *(float *)(param_1 + 0x4f70) +
                   *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x4f74) +
                   *(float *)(param_1 + 0x228);
      fStack_1c4 = *(float *)(param_1 + 0x208) * *(float *)(param_1 + 0x4f6c) +
                   *(float *)(param_1 + 0x214) * *(float *)(param_1 + 0x4f70) +
                   *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x4f74) +
                   *(float *)(param_1 + 0x22c);
      fStack_1c0 = *(float *)(param_1 + 0x20c) * *(float *)(param_1 + 0x4f6c) +
                   *(float *)(param_1 + 0x218) * *(float *)(param_1 + 0x4f70) +
                   *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x4f74) +
                   *(float *)(param_1 + 0x230);
      pfStack_1ec = (float *)0x54e0fe;
      iVar16 = FUN_004e5437();
      if (iVar16 == 0) {
        iVar16 = *(int *)(param_1 + 0x330);
      }
      pfStack_1e0 = *(float **)(param_1 + 0xce4);
      puStack_1e4 = auStack_150;
      pfStack_1e8 = &fStack_1c8;
      pfStack_1ec = &fStack_1bc;
      uStack_1f4 = -(uint)(param_1 != 0) & uVar22;
      apfStack_200[2] = (float *)0x54e135;
      iStack_1f0 = iVar16;
      uVar21 = FUN_004e51f4();
      if ((uVar21 & 1) == 0) {
        pfStack_1e0 = *(float **)(param_1 + 0xcdc);
        puStack_1e4 = auStack_150;
        pfStack_1e8 = &fStack_1c8;
        pfStack_1ec = &fStack_1bc;
        uStack_1f4 = -(uint)(param_1 != 0) & uVar22;
        apfStack_200[2] = (float *)0x54e164;
        iStack_1f0 = iVar16;
        uVar22 = FUN_004e51f4();
        if ((uVar22 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x4f68) = 1;
          *(undefined4 *)(param_1 + 0xd88) = *(undefined4 *)(param_1 + 0x4f6c);
          *(undefined4 *)(param_1 + 0xd8c) = *(undefined4 *)(param_1 + 0x4f70);
          *(undefined4 *)(param_1 + 0xd90) = *(undefined4 *)(param_1 + 0x4f74);
        }
      }
    }
    if (*(int *)(param_1 + 0x4f64) != 0) {
      *param_2 = *param_2 | 0x40;
    }
  }
  else {
    puVar23 = (undefined4 *)(param_1 + 0xf38);
    pfVar18 = (float *)(param_1 + 0xf08);
    iVar16 = 4;
    do {
      fVar17 = *(float *)(param_1 + 0x1c0);
      fVar1 = pfVar18[2];
      fVar2 = pfVar18[1];
      fVar3 = *(float *)(param_1 + 0x1c4);
      fStack_1ac = *(float *)(param_1 + 0x1c4) * *pfVar18 - *(float *)(param_1 + 0x1bc) * pfVar18[2]
      ;
      fVar4 = *(float *)(param_1 + 0x1b4);
      fVar5 = *(float *)(param_1 + 0x270);
      fVar6 = *(float *)(param_1 + 0x1b0);
      fVar7 = *(float *)(param_1 + 0x264);
      fVar8 = *(float *)(param_1 + 0x1b8);
      fVar9 = *(float *)(param_1 + 0x27c);
      fVar10 = *(float *)(param_1 + 0x1b8);
      fVar11 = *(float *)(param_1 + 0x280);
      fVar12 = *(float *)(param_1 + 0x1b4);
      fVar13 = *(float *)(param_1 + 0x274);
      fVar14 = *(float *)(param_1 + 0x1b0);
      fVar15 = *(float *)(param_1 + 0x268);
      *puVar23 = 1;
      fStack_1c4 = fVar14 * fVar15 + fVar12 * fVar13 + fVar10 * fVar11;
      fVar17 = fVar8 * fVar9 + fVar6 * fVar7 + fVar4 * fVar5 + (fVar17 * fVar1 - fVar2 * fVar3);
      fStack_1b8 = fStack_1ac + fStack_1c4;
      if (_DAT_0064b254 <= fVar17) {
        if (((_DAT_0064b254 <= fStack_1b8) && (*pfVar18 <= _DAT_0064b254)) &&
           (pfVar18[1] <= _DAT_0064b254)) {
          *puVar23 = 0;
        }
        if (((fStack_1b8 <= _DAT_0064b254) && (*pfVar18 <= _DAT_0064b254)) &&
           (_DAT_0064b254 <= pfVar18[1])) {
          *puVar23 = 0;
        }
      }
      if (fVar17 <= _DAT_0064b254) {
        if (((_DAT_0064b254 <= fStack_1b8) && (_DAT_0064b254 <= *pfVar18)) &&
           (pfVar18[1] <= _DAT_0064b254)) {
          *puVar23 = 0;
        }
        if (((fStack_1b8 <= _DAT_0064b254) && (_DAT_0064b254 <= *pfVar18)) &&
           (_DAT_0064b254 <= pfVar18[1])) {
          *puVar23 = 0;
        }
      }
      puVar23 = puVar23 + 1;
      pfVar18 = pfVar18 + 3;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  if ((*(int *)(param_1 + 0x5460) == 0) || (*(int *)(*(int *)(param_1 + 0x5460) + 0x3344) != 0)) {
    uVar22 = 0;
  }
  else {
    uVar22 = 8;
  }
  *param_2 = *param_2 | uVar22;
  if ((*(int *)(param_1 + 0x4f5c) != 0) && (*(int *)(param_1 + 0x509c) != DAT_0068a8f0)) {
    auStack_1a0[0] = 0xffffffff;
    auStack_1a0[1] = 0xffffffff;
    auStack_1a0[7] = 0xffffffff;
    puStack_1e4 = auStack_1a0;
    pfStack_1e0 = (float *)0x0;
    pfStack_1e8 = &fStack_1cc;
    pfStack_1ec = (float *)(param_1 + 0x228);
    auStack_1a0[2] = 0;
    auStack_1a0[3] = 0;
    auStack_1a0[4] = 0;
    auStack_1a0[5] = 0;
    auStack_1a0[6] = 0;
    fStack_1cc = 0.0;
    iStack_1f0 = *(undefined4 *)(*(int *)(param_1 + 0x330) + 0xc);
    uStack_1f4 = 0x54e3fb;
    FUN_00532a70();
    if (fStack_1cc == 0.0) {
      *(undefined4 *)(param_1 + 0x4f5c) = 0;
    }
    else {
      puVar23 = auStack_1a0;
      ppfVar28 = apfStack_200 + 1;
      for (apfStack_200[0] = (float *)0x8; apfStack_200[0] != (float *)0x0;
          apfStack_200[0] = (float *)((int)apfStack_200[0] + -1)) {
        *ppfVar28 = (float *)*puVar23;
        puVar23 = puVar23 + 1;
        ppfVar28 = ppfVar28 + 1;
      }
      FUN_0041d3f0(param_1 + 0x509c);
      puVar23 = (undefined4 *)FUN_00445f30(auStack_20);
      pfStack_1e0 = (float *)(auStack_1a0 + 8);
      puVar27 = auStack_1a0;
      for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar27 = *puVar23;
        puVar23 = puVar23 + 1;
        puVar27 = puVar27 + 1;
      }
      auStack_1a0[8] = 0;
      puVar23 = auStack_1a0;
      ppfVar28 = apfStack_200;
      for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
        *ppfVar28 = (float *)*puVar23;
        puVar23 = puVar23 + 1;
        ppfVar28 = ppfVar28 + 1;
      }
      uStack_178 = 0;
      uStack_174 = 0;
      pcStack_170 = s_UNDEFINED_MODULE_0066c638;
      pcStack_16c = s_UNDEFINED_ROOM_0066c628;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_15c = 0xffffffff;
      uStack_158 = 0xffffffff;
      FUN_00438e50();
      apfStack_200[0] = &fStack_1b0;
      *(float *)(param_1 + 0x1428) =
           (float)((float10)(double)CONCAT44(uStack_174,uStack_178) * (float10)_DAT_0064a6d0);
      puVar23 = auStack_1a0;
      ppfVar28 = apfStack_200 + 1;
      for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
        *ppfVar28 = (float *)*puVar23;
        puVar23 = puVar23 + 1;
        ppfVar28 = ppfVar28 + 1;
      }
      puVar23 = (undefined4 *)FUN_00439660();
      *(undefined4 *)(param_1 + 0x1430) = *puVar23;
      pfVar18 = (float *)(param_1 + 0x1448);
      *(undefined4 *)(param_1 + 0x1434) = puVar23[1];
      *(undefined4 *)(param_1 + 0x1438) = puVar23[2];
      puVar23 = auStack_1a0;
      ppfVar28 = apfStack_200 + 1;
      for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
        *ppfVar28 = (float *)*puVar23;
        puVar23 = puVar23 + 1;
        ppfVar28 = ppfVar28 + 1;
      }
      apfStack_200[0] = &fStack_1b0;
      uVar24 = FUN_00439400();
      pfVar20 = (float *)FUN_005aaad0(&fStack_1bc,uVar24);
      *pfVar18 = *pfVar20;
      *(float *)(param_1 + 0x144c) = pfVar20[1];
      *(float *)(param_1 + 0x1450) = pfVar20[2];
      iVar16 = FUN_00532c40(auStack_1a0);
      if (iVar16 == 0) {
        *(undefined4 *)(param_1 + 0x1454) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x1454) = 0;
      }
      fVar17 = DAT_00701590 * *(float *)(param_1 + 0x1450);
      fVar1 = DAT_00701598 * *pfVar18;
      fVar2 = DAT_00701594 * *pfVar18;
      fVar3 = DAT_00701590 * *(float *)(param_1 + 0x144c);
      *(float *)(param_1 + 0x143c) =
           DAT_00701598 * *(float *)(param_1 + 0x144c) - DAT_00701594 * *(float *)(param_1 + 0x1450)
      ;
      *(float *)(param_1 + 0x1440) = fVar17 - fVar1;
      *(float *)(param_1 + 0x1444) = fVar2 - fVar3;
    }
  }
  if (((DAT_006785ec & 2) == 0) && (*(int *)(param_1 + 0x4f5c) != 0)) {
    *param_2 = *param_2 | 0x10;
  }
  *(uint *)(param_1 + 0x390) = *(uint *)(param_1 + 0x38c);
  *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) & 0xfffffffa;
  if (*(int *)(param_1 + 0x5464) != 0) {
    *param_2 = *param_2 | 0x100;
  }
  return 1;
}

