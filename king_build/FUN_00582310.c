
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00582310(int *param_1,byte param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float10 fVar14;
  undefined1 *puVar15;
  char *pcVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float *pfStack_884;
  undefined8 uStack_880;
  float fStack_860;
  float fStack_85c;
  float fStack_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float fStack_848;
  float *pfStack_844;
  float fStack_840;
  float fStack_83c;
  float fStack_838;
  float fStack_834;
  float fStack_830;
  float fStack_82c;
  undefined8 uStack_828;
  float fStack_820;
  float fStack_818;
  float fStack_814;
  undefined4 uStack_810;
  int iStack_80c;
  int iStack_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float fStack_7f8;
  undefined1 auStack_7f4 [8];
  undefined1 auStack_7ec [4];
  int iStack_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float fStack_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float afStack_7c0 [12];
  undefined1 auStack_790 [48];
  undefined1 auStack_760 [48];
  float afStack_730 [12];
  undefined1 auStack_700 [80];
  undefined1 auStack_6b0 [200];
  float afStack_5e8 [63];
  undefined1 auStack_4ec [252];
  undefined1 auStack_3f0 [1004];
  
  uStack_880 = 5.595488982355765e+29;
  piVar10 = param_1 + (param_1[0x166] + 0xaa) * 3;
  *piVar10 = param_1[0x6b];
  piVar10[1] = param_1[0x6c];
  piVar10[2] = param_1[0x6d];
  piVar10 = param_1 + 0x16e;
  piVar13 = param_1 + param_1[0x166] * 0x34 + 0x20e;
  for (iVar11 = 0x34; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar13 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar13 = piVar13 + 1;
  }
  pfStack_884 = (float *)(param_1 + 0x17b);
  FUN_004e20b1();
  FUN_004e20b1(param_1 + 0x17e,s_MoveItem_2_3__1_MI_col_n_0067c6ac,0x40000000);
  if (param_1[0x1a2] != 0) {
    uStack_880 = (double)CONCAT44(param_1 + 0x16e,0x5823b5);
    (**(code **)(*param_1 + 0xa0))();
  }
  if (param_1[0x101] == 0) {
    if (((float)_DAT_0064a798 < (float)param_1[0xf6]) && ((*(byte *)(param_1 + 0xdf) & 4) == 0)) {
      param_1[0x1a3] = 1;
    }
    if ((((param_1[0x101] == 0) && ((int *)param_1[0xfd] != (int *)0x0)) &&
        (*(int *)param_1[0xfd] == 1)) && ((*(byte *)(param_1 + 0xdf) & 4) == 0)) {
      param_1[0x126] = param_1[0xf4];
      param_1[0x127] = param_1[0xf5];
      param_1[0x128] = param_1[0xf6];
      param_1[0x123] = param_1[0xf1];
      param_1[0x124] = param_1[0xf2];
      param_1[0x125] = param_1[0xf3];
    }
  }
  fStack_814 = _DAT_0064b240 - param_3;
  param_1[0x16c] = (int)param_3;
  param_1[0x16b] = (int)(fStack_814 * (float)param_1[0x16b]);
  param_1[0x118] = param_1[0xf4];
  param_1[0x119] = param_1[0xf5];
  param_1[0x11a] = param_1[0xf6];
  piVar10 = param_1 + 0x16e;
  piVar13 = param_1 + 0xe4;
  for (iVar11 = 0x34; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar13 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar13 = piVar13 + 1;
  }
  param_1[0xdf] = param_1[0xdf] | 1;
  uStack_880 = (double)CONCAT44(0x5824a4,(int *)uStack_880);
  fVar14 = (float10)FUN_004e2035();
  piVar10 = param_1 + 0x316;
  param_1[0x362] = param_1[0x362] | 1;
  param_1[0xe2] = (int)(float)fVar14;
  fStack_800 = (float)param_1[0x313];
  param_1[0x1a7] = 0;
  fStack_7fc = (float)param_1[0x314];
  iStack_80c = *piVar10;
  fStack_7f8 = (float)param_1[0x315];
  iStack_7e8 = param_1[0x169];
  iStack_808 = param_1[0x317];
  fStack_804 = (float)param_1[0x318];
  if (param_1[0x1a3] == 0) {
    pfStack_884 = (float *)(param_1 + 0xa1);
    uStack_880 = (double)CONCAT44(&iStack_80c,&fStack_800);
    FUN_00580fb0(param_1 + 0x1a8,param_1 + 0x89);
    fVar14 = (float10)FUN_005aabc0(&iStack_80c);
    fStack_838 = (float)fVar14;
    pfStack_884 = (float *)(fStack_800 * param_3);
    fStack_840 = fStack_7fc * param_3;
    fStack_83c = fStack_7f8 * param_3;
    uStack_880 = (double)CONCAT44(fStack_83c,fStack_840);
    pfStack_844 = pfStack_884;
    uStack_880._4_4_ = FUN_005ab330(afStack_7c0);
    pfStack_884 = (float *)(fStack_838 * param_3);
    uStack_880._0_4_ = param_1 + 0x89;
    pfStack_884 = (float *)FUN_005ab380(auStack_790,DAT_007015b0,DAT_007015b4,DAT_007015b8,
                                        iStack_80c,iStack_808,fStack_804);
    uVar9 = FUN_005ab130(auStack_760);
    pfStack_884 = afStack_730;
    uStack_880 = (double)CONCAT44(uStack_880._4_4_,uVar9);
    piVar10 = (int *)FUN_005ab130();
  }
  else {
    uStack_880 = (double)CONCAT44(piVar10,0x58251f);
    fVar14 = (float10)FUN_005aabc0();
    param_1[0x169] = (int)(float)fVar14;
    pfStack_884 = (float *)(param_3 * (float)param_1[0x313]);
    fStack_840 = param_3 * (float)param_1[0x314];
    fStack_83c = param_3 * (float)param_1[0x315];
    uStack_880 = (double)CONCAT44(fStack_83c,fStack_840);
    pfStack_844 = pfStack_884;
    uStack_880._4_4_ = FUN_005ab330(afStack_730);
    pfStack_884 = (float *)(param_3 * (float)param_1[0x169]);
    uStack_880._0_4_ = param_1 + 0x1d8;
    pfStack_884 = (float *)FUN_005ab380(auStack_760,DAT_007015b0,DAT_007015b4,DAT_007015b8,*piVar10,
                                        param_1[0x317],param_1[0x318]);
    uVar9 = FUN_005ab130(auStack_790);
    pfStack_884 = afStack_7c0;
    uStack_880 = (double)CONCAT44(uStack_880._4_4_,uVar9);
    piVar10 = (int *)FUN_005ab130();
  }
  uStack_880._4_4_ = param_1[0x101];
  piVar13 = param_1 + 0x1c0;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar13 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar13 = piVar13 + 1;
  }
  uStack_880._0_4_ = (int *)0x582713;
  uStack_810 = FUN_0057c0a0();
  pfStack_884 = &fStack_818;
  uStack_880 = (double)CONCAT44(uStack_880._4_4_,auStack_700);
  fStack_838 = (float)FUN_005817a0(param_1,param_1 + 0x1c0);
  pfVar1 = (float *)(param_1 + 0x1c9);
  FUN_004e20b1(pfVar1,s_MoveItem_2_3__2_MI_goodM_v_3__0067c68c,0x461c4000);
  if (fStack_838 != 0.0) {
    dVar19 = _DAT_0064a590;
    if (param_1[0x1a3] != 0) {
      dVar19 = _DAT_0064a648;
    }
    fStack_854 = (float)dVar19 - fStack_818;
    fStack_838 = fStack_854;
    fStack_860 = (float)param_1[0xf4];
    fStack_85c = (float)param_1[0xf5];
    fStack_858 = (float)param_1[0xf6];
    uStack_880 = (double)CONCAT44(&fStack_850,0x5827b5);
    (**(code **)(*param_1 + 0xdc))();
    fVar6 = fStack_858 * fStack_848 + fStack_85c * fStack_84c + fStack_860 * fStack_850;
    fVar3 = fStack_858 * fStack_84c - fStack_85c * fStack_848;
    fVar5 = fStack_860 * fStack_848 - fStack_858 * fStack_850;
    fVar4 = fStack_85c * fStack_850 - fStack_860 * fStack_84c;
    pfStack_844 = (float *)(fVar5 * fStack_848 - fVar4 * fStack_84c);
    fStack_840 = fVar4 * fStack_850 - fVar3 * fStack_848;
    fStack_83c = fVar3 * fStack_84c - fVar5 * fStack_850;
    uStack_828 = (double)fVar6;
    fStack_820 = fStack_83c;
    if ((float)_DAT_0064dd88 <= fVar6) {
      if (fVar6 < _DAT_0064b254) {
        uStack_880 = (double)CONCAT44(&pfStack_844,0x582889);
        fVar14 = (float10)FUN_005aabc0();
        fVar14 = (float10)_DAT_0064b240 / fVar14;
        fStack_860 = (float)((float10)(float)pfStack_844 * fVar14);
        fStack_85c = (float)((float10)fStack_840 * fVar14);
        fStack_858 = (float)((float10)fStack_83c * fVar14);
        fVar14 = fVar14 * (float10)fStack_854;
        fStack_838 = (float)fVar14;
        fStack_854 = (float)fVar14;
        if ((float10)_DAT_0064a6d0 < fVar14) {
          fStack_854 = 0.5;
        }
      }
    }
    else {
      fStack_854 = 0.0;
    }
    fStack_834 = fStack_860 * fStack_854;
    fStack_830 = fStack_85c * fStack_854;
    fStack_82c = fStack_858 * fStack_854;
    uStack_880 = (double)CONCAT44(&fStack_834,auStack_7f4);
    pfStack_884 = (float *)0x582939;
    FUN_005aae00();
    uStack_880 = (double)CONCAT44(0x461c4000,pfVar1);
    pfStack_884 = (float *)0x582944;
    iVar11 = FUN_004e2140();
    if (iVar11 != 0) {
      uStack_880 = (double)fStack_848;
      pfStack_884 = (float *)((ulonglong)(double)fStack_84c >> 0x20);
      FUN_0061c369(afStack_5e8,s_mMetr__f_sMetr__f_depth1__f_d1___0067c634,0xd2f1a9fc,0x3f50624d,
                   0x47ae147b,0x3f847ae1,(double)fStack_818,(double)fStack_854,(double)fStack_838,
                   (undefined4)uStack_828,uStack_828._4_4_,(double)fStack_860,(double)fStack_85c,
                   (double)fStack_858,(double)fStack_850,SUB84((double)fStack_84c,0));
      fVar14 = (float10)FUN_005aabc0(&pfStack_844);
      uStack_880 = (double)((float10)_DAT_0064b240 / fVar14);
      pfStack_884 = (float *)((ulonglong)(double)fStack_83c >> 0x20);
      FUN_0061c369(auStack_4ec,s_Nxy__f__f__f___cos_a__f_0067c618,(double)(float)pfStack_844,
                   (double)fStack_840,SUB84((double)fStack_83c,0));
      uStack_880 = (double)(float)param_1[0x94];
      pfStack_884 = (float *)((ulonglong)(double)(float)param_1[0x93] >> 0x20);
      FUN_0061c369();
      pfStack_884 = afStack_5e8;
      uStack_880 = (double)CONCAT44(auStack_6b0,auStack_4ec);
      puVar15 = auStack_3f0;
      dVar19 = (double)(float)param_1[0x1cb];
      dVar18 = (double)(float)param_1[0x1ca];
      dVar17 = (double)*pfVar1;
      pcVar16 = s_MoveItem_2_3__3_MI_goodM_v_3______0067c5cc;
      FUN_0061c369();
      FUN_004e1e9c(auStack_3f0,puVar15,pcVar16,dVar17,dVar18,dVar19);
    }
  }
  param_1[0x313] = (int)fStack_800;
  param_1[0x314] = (int)fStack_7fc;
  param_1[0x316] = iStack_80c;
  param_1[0x317] = iStack_808;
  param_1[0x315] = (int)fStack_7f8;
  uStack_880 = (double)CONCAT44(param_1 + 0x1c0,afStack_7c0);
  param_1[0x318] = (int)fStack_804;
  param_1[0x169] = iStack_7e8;
  pfStack_884 = (float *)0x582b34;
  piVar10 = (int *)FUN_005aba00();
  iVar11 = param_1[0x1fd];
  pfStack_884 = (float *)(param_1 + 0x1c9);
  piVar13 = param_1 + 0x1cc;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *piVar13 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar13 = piVar13 + 1;
  }
  iVar11 = FUN_004e5437(iVar11,param_1 + 0x1e1);
  param_1[0x1fc] = iVar11;
  if (iVar11 == 0) {
    param_1[0x1fc] = param_1[0x1fd];
    uStack_880 = 2.12485064900444e-314;
    (**(code **)(*param_1 + 0x1c))();
  }
  fStack_7d8 = (float)param_1[0x68] - fStack_814 * (float)param_1[0x77];
  fStack_7d4 = (float)param_1[0x69] - fStack_814 * (float)param_1[0x78];
  fStack_7d0 = (float)param_1[0x6a] - fStack_814 * (float)param_1[0x79];
  fStack_834 = fStack_814 * (float)param_1[0x7a];
  fStack_830 = fStack_814 * (float)param_1[0x7b];
  fStack_7e4 = (float)param_1[0x6b] - fStack_834;
  fStack_7e0 = (float)param_1[0x6c] - fStack_830;
  fStack_7dc = (float)param_1[0x6d] - fStack_814 * (float)param_1[0x7c];
  uStack_880 = (double)CONCAT44(param_3,auStack_7f4);
  pfStack_884 = (float *)0x582c5c;
  FUN_005aad10();
  uStack_880 = (double)CONCAT44(param_3,auStack_7f4);
  pfStack_884 = (float *)0x582c6c;
  FUN_005aad10();
  uStack_880 = (double)CONCAT44(s_V_ts_dV__1_enableIterMove__0067c5b0,&fStack_7d8);
  pfStack_884 = (float *)0x582c83;
  (**(code **)(*param_1 + 0x90))();
  pfStack_884 = (float *)s_iW_ts_diW__1_enableIterMove__0067c590;
  (**(code **)(*param_1 + 0x94))(auStack_7ec);
  if (param_1[0x166] <= param_1[0x1a4]) {
    iVar11 = param_1[0x1a2];
    if (iVar11 < 1) {
      piVar10 = param_1 + 0x89;
      piVar13 = param_1 + 0x319;
      for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar13 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar13 = piVar13 + 1;
      }
      piVar10 = param_1 + 0xa1;
      piVar13 = param_1 + 0x325;
      iVar12 = 0xc;
    }
    else {
      piVar10 = param_1 + 0x1c0;
      piVar13 = param_1 + 0x319;
      for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar13 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar13 = piVar13 + 1;
      }
      iVar12 = 0xc;
      piVar10 = param_1 + 0x1cc;
      piVar13 = param_1 + 0x325;
    }
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar13 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar13 = piVar13 + 1;
    }
    param_1[0x1f9] = param_1[0x68];
    param_1[0x1fa] = param_1[0x69];
    param_1[0x1fb] = param_1[0x6a];
    if ((param_2 & 4) != 0) {
      FUN_0057d9c0(param_1,param_1 + 0xe4,param_1 + 0x7d);
      return;
    }
    if ((param_1[0x62] == 1) && (param_1[0x101] == 0)) {
      FUN_0057dc20(param_1,param_1 + 0xe4,param_1 + 0x7d);
      return;
    }
    if (fStack_820 != 0.0) {
      if (param_1[0x1a6] != 0) {
        FUN_00581070(param_1,param_1 + 0xe4,iVar11,param_1[0x16c]);
      }
      param_1[0x362] = param_1[0x362] | 8;
      return;
    }
    if ((*(byte *)(param_1 + 0xdf) & 4) != 0) {
      param_1[0x362] = param_1[0x362] | 4;
      iVar11 = FUN_00587780();
      if (iVar11 == 0) {
        FUN_005800e0(param_1,param_1 + 0xf1,param_1 + 0xf4);
      }
      param_1[0x1a7] = 1;
      param_1[0xdf] = param_1[0xdf] & 0xfffffffb;
      return;
    }
    pfVar1 = (float *)(param_1 + 0xf1);
    param_1[0x362] = param_1[0x362] | 0x10;
    fStack_860 = *pfVar1 - (float)param_1[0x322];
    uStack_880 = (double)CONCAT44(fStack_860,(int *)uStack_880);
    fStack_85c = (float)param_1[0xf2] - (float)param_1[0x323];
    fStack_858 = (float)param_1[0xf3] - (float)param_1[0x324];
    FUN_005aaad0(&fStack_7dc,&fStack_860);
    fVar3 = (float)param_1[0x6b] * (float)param_1[0x319] +
            (float)param_1[799] * (float)param_1[0x6d] +
            (float)param_1[0x31c] * (float)param_1[0x6c];
    fVar5 = (float)param_1[0x31a] * (float)param_1[0x6b] +
            (float)param_1[800] * (float)param_1[0x6d] +
            (float)param_1[0x31d] * (float)param_1[0x6c];
    fVar4 = (float)param_1[0x31b] * (float)param_1[0x6b] +
            (float)param_1[0x321] * (float)param_1[0x6d] +
            (float)param_1[0x31e] * (float)param_1[0x6c];
    pfStack_844 = (float *)(fStack_858 * fVar5 - fStack_85c * fVar4);
    fStack_840 = fVar4 * fStack_860 - fStack_858 * fVar3;
    fVar4 = (float)pfStack_844 + (float)param_1[0x68];
    uStack_880 = (double)CONCAT44(fVar4,(int *)uStack_880);
    fStack_820 = (fStack_840 + (float)param_1[0x69]) * fStack_85c +
                 fStack_858 * ((fStack_85c * fVar3 - fVar5 * fStack_860) + (float)param_1[0x6a]) +
                 fVar4 * fStack_860;
    if ((((param_2 & 8) == 0) && ((param_1[0x1a2] & 0x4000000U) == 0)) &&
       ((fVar14 = (float10)FUN_004e2035(),
        (float10)_DAT_0064a660 <= fVar14 - (float10)(float)param_1[0x312] &&
        ((((float)_DAT_0064c308 <= (float)param_1[0xf6] && (param_1[0x163] == 0)) &&
         (fStack_820 <= _DAT_0064b254)))))) {
      FUN_0057ffa0(param_1,pfVar1,param_1 + 0xf4);
      return;
    }
    FUN_005800e0(param_1,pfVar1,param_1 + 0xf4);
    iVar11 = param_1[0x166];
    if (0 < iVar11) {
      iVar11 = iVar11 + -1;
      if (-1 < iVar11) {
        piVar10 = param_1 + iVar11 * 0x34 + 0x22b;
        do {
          iVar12 = FUN_0057c0a0(*piVar10);
          if (iVar12 == 0) {
            if (-1 < iVar11) goto LAB_00582ff3;
            break;
          }
          iVar11 = iVar11 + -1;
          piVar10 = piVar10 + -0x34;
        } while (-1 < iVar11);
      }
      iVar11 = param_1[0x166];
    }
LAB_00582ff3:
    iVar12 = param_1[0x166];
    if (iVar11 != iVar12) {
      pfVar1 = (float *)(param_1 + iVar11 * 0x34 + 0x21b);
      pfStack_844 = (float *)((float)param_1[iVar12 * 0x34 + 0x21b] - *pfVar1);
      uStack_880 = (double)CONCAT44(pfStack_844,(int *)uStack_880);
      fStack_840 = (float)param_1[iVar12 * 0x34 + 0x21c] - pfVar1[1];
      fStack_83c = (float)param_1[iVar12 * 0x34 + 0x21d] - pfVar1[2];
      FUN_005aaad0(&fStack_854,&pfStack_844);
      iVar11 = param_1[0x166];
      pfVar1 = (float *)(param_1 + iVar11 * 3 + 0x1fe);
      pfVar2 = (float *)(param_1 + iVar11 * 0x34 + 0x21e);
      fVar3 = fStack_850 * (float)param_1[iVar11 * 0x34 + 0x220] -
              fStack_84c * (float)param_1[iVar11 * 0x34 + 0x21f];
      fVar4 = fStack_84c * *pfVar2 - fStack_854 * pfVar2[2];
      fVar5 = fStack_854 * pfVar2[1] - fStack_850 * *pfVar2;
      fVar6 = (float)param_1[0x6b] * fVar3 +
              (float)param_1[0x6c] * fVar4 + (float)param_1[0x6d] * fVar5;
      if (((fVar3 * *pfVar1 + pfVar1[1] * fVar4 + pfVar1[2] * fVar5) * fVar6 < _DAT_0064b254) &&
         (ABS(fVar6) < (float)_DAT_0064a5a8)) {
        fVar6 = fVar4 * (float)param_1[0x6d] - fVar5 * (float)param_1[0x6c];
        fVar8 = fVar5 * (float)param_1[0x6b] - fVar3 * (float)param_1[0x6d];
        fVar7 = fVar3 * (float)param_1[0x6c] - fVar4 * (float)param_1[0x6b];
        fStack_804 = fVar5 * fVar8 - fVar4 * fVar7;
        fStack_800 = fVar7 * fVar3 - fVar5 * fVar6;
        fStack_7fc = fVar4 * fVar6 - fVar8 * fVar3;
        fStack_834 = pfVar2[1] * _DAT_0064b2f4;
        fStack_830 = pfVar2[2] * _DAT_0064b2f4;
        uStack_880 = (double)CONCAT44(((pfVar2[2] * (float)param_1[0x68] -
                                       *pfVar2 * (float)param_1[0x6a]) * pfVar2[2] -
                                      (*pfVar2 * (float)param_1[0x69] -
                                      (float)param_1[0x68] * pfVar2[1]) * pfVar2[1]) +
                                      *pfVar2 * _DAT_0064b2f4,(int *)uStack_880);
        (**(code **)(*param_1 + 0x94))(&fStack_804,s_after_pmwsc__1_0067c580);
        (**(code **)(*param_1 + 0x90))(&pfStack_884,s_after_pmwsc__2_0067c570);
        return;
      }
    }
  }
  return;
}

