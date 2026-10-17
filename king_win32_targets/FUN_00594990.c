
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00594990(int *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined1 **ppuVar9;
  undefined1 *apuStack_158 [4];
  undefined4 uStack_148;
  undefined1 *puStack_144;
  float *pfStack_140;
  int iStack_13c;
  undefined1 *puStack_138;
  float *pfStack_134;
  float *pfStack_130;
  float *pfStack_12c;
  int iStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [6];
  float fStack_b0;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  undefined1 auStack_38 [52];
  
  if (DAT_006d0fd8 == 0) {
    return;
  }
  if (*(int *)(DAT_006d0fd8 + 0x268) == 0) {
    return;
  }
  if (*(int *)(DAT_006d0fd8 + 0x578) != 0) {
    return;
  }
  if ((*(byte *)(DAT_00695c00 + 0x10) & 2) == 0) {
    return;
  }
  iVar2 = param_1[0x76];
  iVar7 = *(int *)(*(int *)(DAT_006cdbcc + 0x54c) + 0x1d8);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar7 + 0x14);
  iVar2 = param_1[0x76];
  iVar7 = *(int *)(*(int *)(DAT_006cdbcc + 0x54c) + 0x1d8);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar7 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar7 + 0x1c);
  iVar2 = param_1[0x76];
  iVar7 = *(int *)(*(int *)(DAT_006cdbcc + 0x54c) + 0x1d8);
  *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar7 + 0x30);
  *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar7 + 0x34);
  iVar2 = param_1[0x76];
  iVar7 = *(int *)(*(int *)(DAT_006cdbcc + 0x54c) + 0x1d8);
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar7 + 0x38);
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar7 + 0x3c);
  iVar2 = param_1[0x76];
  iVar7 = *(int *)(*(int *)(DAT_006cdbcc + 0x54c) + 0x1d8);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar7 + 0x40);
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar7 + 0x44);
  *(undefined4 *)(param_1[0x76] + 0x4c) =
       *(undefined4 *)(*(int *)(*(int *)(DAT_006cdbcc + 0x54c) + 0x1d8) + 0x4c);
  pfStack_12c = (float *)0x594ab5;
  iVar2 = (**(code **)(*DAT_006957ac + 0x14))();
  pfStack_12c = (float *)0x594ac2;
  iStack_e4 = (**(code **)(*DAT_006957ac + 0x18))();
  pfVar3 = afStack_c8 + 2;
  iVar7 = 4;
  do {
    pfVar3[-2] = 0.0;
    pfVar3[-1] = 0.0;
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pfStack_12c = afStack_c8;
  pfVar3 = (float *)&DAT_00701550;
  pfVar4 = afStack_c8;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfStack_130 = (float *)0x594b00;
  FUN_005f1c30();
  fStack_108 = 0.0;
  fStack_104 = 0.0;
  fStack_100 = 0.0;
  fStack_fc = *(float *)(DAT_006d0fd8 + 0x22c) - *(float *)(DAT_006d0fd8 + 0x25c);
  iStack_e8 = 0;
  fStack_f8 = *(float *)(DAT_006d0fd8 + 0x230) - *(float *)(DAT_006d0fd8 + 0x260);
  fStack_f4 = *(float *)(DAT_006d0fd8 + 0x234) - *(float *)(DAT_006d0fd8 + 0x264);
  if ((DAT_006f59a4 == 0) ||
     ((float)_DAT_0064a5a8 <=
      ABS(afStack_c8[0] * DAT_00701580 + afStack_c8[3] * DAT_00701584 + fStack_b0 * DAT_00701588)))
  {
    if (DAT_0067d0b8 == 0) {
      return;
    }
    if (_DAT_0064b254 <=
        afStack_c8[0] * DAT_00701580 + afStack_c8[3] * DAT_00701584 + fStack_b0 * DAT_00701588) {
      pfStack_130 = *(float **)(DAT_006d0fd8 + 0x268);
      pfStack_12c = (float *)0x2;
      pfStack_134 = afStack_e0;
      puStack_138 = (undefined1 *)0x594e8f;
      pfVar3 = (float *)FUN_00594500();
      fStack_108 = *pfVar3;
      fStack_104 = pfVar3[1];
      pfStack_134 = (float *)(fStack_fc + fStack_108);
      fStack_100 = pfVar3[2];
      pfStack_130 = (float *)(fStack_f8 + fStack_104);
      DAT_006f598c = DAT_006f5984;
      pfStack_12c = (float *)(fStack_f4 + fStack_100);
      DAT_006f5990 = DAT_006f5978;
      DAT_006f5994 = DAT_006f58b4;
      DAT_006f5998 = DAT_006f58a4;
      uStack_ec = DAT_006f5864;
      puStack_138 = auStack_38;
      iStack_13c = 0x594f22;
      fStack_114 = (float)pfStack_134;
      fStack_110 = (float)pfStack_130;
      fStack_10c = (float)pfStack_12c;
      pfStack_12c = (float *)FUN_005ab330();
      pfStack_134 = (float *)auStack_68;
      pfStack_130 = (float *)0x40490fda;
      puStack_138 = (undefined1 *)0x594f38;
      pfStack_130 = (float *)FUN_005ab7d0();
    }
    else {
      pfStack_130 = *(float **)(DAT_006d0fd8 + 0x268);
      pfStack_12c = (float *)0x0;
      pfStack_134 = afStack_e0;
      puStack_138 = (undefined1 *)0x594dc4;
      pfVar3 = (float *)FUN_00594500();
      fStack_108 = *pfVar3;
      fStack_104 = pfVar3[1];
      pfStack_134 = (float *)(fStack_fc + fStack_108);
      fStack_100 = pfVar3[2];
      pfStack_130 = (float *)(fStack_f8 + fStack_104);
      DAT_006f598c = DAT_006f5980;
      pfStack_12c = (float *)(fStack_f4 + fStack_100);
      DAT_006f5990 = DAT_006f5970;
      DAT_006f5994 = DAT_006f58b0;
      DAT_006f5998 = DAT_006f589c;
      uStack_ec = DAT_006f5860;
      puStack_138 = auStack_38;
      iStack_13c = 0x594e55;
      fStack_114 = (float)pfStack_134;
      fStack_110 = (float)pfStack_130;
      fStack_10c = (float)pfStack_12c;
      pfStack_12c = (float *)FUN_005ab330();
      pfStack_134 = (float *)auStack_68;
      pfStack_130 = (float *)0x40490fda;
      puStack_138 = (undefined1 *)0x594e6b;
      pfStack_130 = (float *)FUN_005ab7d0();
    }
    pfStack_134 = (float *)auStack_98;
    puStack_138 = (undefined1 *)0x594f49;
    puVar5 = (undefined4 *)FUN_005ab130();
    ppuVar9 = apuStack_158;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppuVar9 = (undefined1 *)*puVar5;
      puVar5 = puVar5 + 1;
      ppuVar9 = ppuVar9 + 1;
    }
    FUN_00595b60(0);
    pfStack_130 = afStack_e0;
    pfStack_12c = (float *)(DAT_006d0fd8 + 0x25c);
    pfStack_134 = (float *)0x594f7f;
    FUN_005aae40();
    fStack_114 = 1.0;
    fStack_110 = 1.0;
    pfStack_134 = (float *)0x3f800000;
    fStack_10c = 1.3333334;
    pfStack_130 = (float *)0x3f800000;
    puStack_138 = auStack_38;
    pfStack_12c = (float *)0x3faaaaab;
    iStack_13c = 0x594fbd;
    iStack_13c = FUN_005ab580();
    pfStack_140 = afStack_c8;
    puStack_144 = auStack_68;
    uStack_148 = 0x594fd0;
    uStack_148 = FUN_005ab130();
    apuStack_158[3] = auStack_98;
    apuStack_158[2] = (undefined1 *)0x594fde;
    pfStack_12c = (float *)FUN_005aba00();
    pfStack_130 = (float *)0x594feb;
    FUN_005ab040();
    iVar7 = DAT_006f5994;
    if (fStack_104 <= (float)_DAT_0064a5a8) {
      return;
    }
    pfStack_12c = (float *)0x595035;
    iVar6 = __ftol();
    pfStack_12c = (float *)0x59506f;
    iStack_f0 = iVar6;
    iStack_118 = __ftol();
    if (iVar6 < 0) {
      return;
    }
    if (iVar2 + -1 <= iVar7 + iVar6) {
      return;
    }
  }
  else {
    if (DAT_0067d0b8 != 0) {
      return;
    }
    iVar7 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460);
    if (((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x8cc), iVar7 < DAT_006cd290)) ||
       (DAT_006cd294 <= iVar7)) {
      pfStack_130 = *(float **)(DAT_006d0fd8 + 0x268);
      pfStack_12c = (float *)0x0;
      pfStack_134 = afStack_e0;
      puStack_138 = (undefined1 *)0x594c7d;
      pfVar3 = (float *)FUN_00594500();
      fStack_108 = *pfVar3;
      fStack_104 = pfVar3[1];
      fStack_100 = pfVar3[2];
    }
    else {
      pfStack_130 = *(float **)(DAT_006d0fd8 + 0x268);
      pfStack_12c = (float *)0x0;
      pfStack_134 = &fStack_114;
      iStack_e8 = 1;
      puStack_138 = (undefined1 *)0x594bf4;
      pfVar3 = (float *)FUN_00594500();
      puStack_138 = (undefined1 *)0x2;
      pfStack_140 = afStack_e0;
      iStack_13c = *(undefined4 *)(DAT_006d0fd8 + 0x268);
      puStack_144 = (undefined1 *)0x594c0f;
      pfVar4 = (float *)FUN_00594500();
      fStack_d0 = pfVar3[1] + pfVar4[1];
      fStack_cc = pfVar3[2] + pfVar4[2];
      fStack_108 = (*pfVar4 + *pfVar3) * _DAT_0064b248;
      fStack_104 = fStack_d0 * _DAT_0064b248;
      fStack_100 = fStack_cc * _DAT_0064b248;
    }
    pfStack_134 = (float *)(fStack_fc + fStack_108);
    DAT_006f598c = DAT_006f597c;
    pfStack_130 = (float *)(fStack_f8 + fStack_104);
    DAT_006f5990 = DAT_006f5974;
    DAT_006f5994 = DAT_006f58ac;
    DAT_006f5998 = DAT_006f58a0;
    pfStack_12c = (float *)(fStack_f4 + fStack_100);
    uStack_ec = DAT_006f5868;
    puStack_138 = auStack_98;
    iStack_13c = 0x594d16;
    fStack_114 = (float)pfStack_134;
    fStack_110 = (float)pfStack_130;
    fStack_10c = (float)pfStack_12c;
    pfStack_12c = (float *)FUN_005ab330();
    pfStack_134 = (float *)auStack_68;
    pfStack_130 = (float *)0x40490fda;
    puStack_138 = (undefined1 *)0x594d2c;
    pfStack_130 = (float *)FUN_005ab7d0();
    pfStack_134 = (float *)auStack_38;
    puStack_138 = (undefined1 *)0x594d3d;
    puVar5 = (undefined4 *)FUN_005ab130();
    ppuVar9 = apuStack_158;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppuVar9 = (undefined1 *)*puVar5;
      puVar5 = puVar5 + 1;
      ppuVar9 = ppuVar9 + 1;
    }
    FUN_00595b60(0);
    iStack_f0 = DAT_006f599c;
    iStack_118 = DAT_006f59a0;
    iVar6 = DAT_006f599c;
  }
  *(undefined4 *)(param_1[0x7a] + 100) = 1;
  *(undefined4 *)(param_1[0x7a] + 0x58) = 0x3f800000;
  *(float *)(param_1[0x7a] + 0x54) =
       ((float)DAT_006f5998 * *(float *)(param_1[0x7a] + 0x58)) / (float)DAT_006f5994;
  if (DAT_006f5878 == 1) {
    puStack_138 = (undefined1 *)(DAT_006f598c + iVar6);
    pfStack_134 = (float *)(iStack_118 + DAT_006f5990);
    pfStack_12c = (float *)((int)pfStack_134 + DAT_006f5998);
    pfStack_130 = (float *)(puStack_138 + DAT_006f5994);
    if ((int)puStack_138 < 1) {
      return;
    }
    if (iVar2 + -1 <= (int)pfStack_130) {
      return;
    }
    if ((int)pfStack_134 < 1) {
      return;
    }
    if (iStack_e4 + -1 <= (int)pfStack_12c) {
      return;
    }
    iStack_13c = 0x595126;
    (**(code **)(*param_1 + 0x2c))();
    iVar6 = iStack_f0;
    if ((DAT_00701dec & 0x4000) != 0) {
      pfStack_12c = (float *)0x595138;
      FUN_005b6580();
      iVar6 = iStack_f0;
    }
  }
  iVar2 = 0;
  if (*(int *)(DAT_006d0fd8 + 0x268) != 0) {
    pfStack_12c = (float *)0x595152;
    iVar2 = FUN_005477f0();
    if (iStack_e8 == 0) {
      pfStack_12c = (float *)0x59517f;
      (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 100))();
    }
    else {
      pfStack_12c = (float *)0x59516d;
      (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x68))();
    }
  }
  if (DAT_006f5878 == 0) {
    pfStack_12c = (float *)0x1;
    pfStack_130 = (float *)0x595200;
    FUN_005d7ce0();
  }
  else {
    if (*(int *)(param_1[0x76] + 0x4c) == -1) {
      pfStack_12c = (float *)0x8;
      pfStack_130 = (float *)0x59519d;
      FUN_005d7ce0();
    }
    if (DAT_006f585c == 0) {
      bVar8 = (byte)iStack_e8;
    }
    else {
      bVar8 = *(byte *)(DAT_006f585c + 0x28) & 1;
    }
    iVar7 = param_1[0x74];
    iVar1 = *(int *)(*(int *)(DAT_006cdbcc + 0x54c) + 0x1d0);
    *(undefined4 *)(iVar7 + 0x2128) = *(undefined4 *)(iVar1 + 0x2128);
    *(undefined4 *)(iVar7 + 0x212c) = *(undefined4 *)(iVar1 + 0x212c);
    pfStack_12c = (float *)0x5951e9;
    FUN_005d9730();
    if (DAT_006f585c != 0) {
      *(byte *)(DAT_006f585c + 0x28) = *(byte *)(DAT_006f585c + 0x28) | bVar8;
    }
  }
  pfStack_12c = (float *)0x0;
  pfStack_130 = (float *)uStack_ec;
  iStack_13c = DAT_006957ac[3];
  pfStack_134 = (float *)iStack_118;
  pfStack_140 = (float *)0x59521b;
  puStack_138 = (undefined1 *)iVar6;
  FUN_005b8030();
  if (iVar2 == 0) {
    pfStack_12c = (float *)0x59524c;
    (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 100))();
    return;
  }
  pfStack_12c = (float *)0x595233;
  (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x68))();
  return;
}

