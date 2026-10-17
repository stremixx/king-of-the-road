
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005691c0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  float *pfVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  float10 fVar16;
  int iStack_170;
  undefined8 uStack_160;
  float fStack_158;
  int iStack_150;
  char acStack_14c [20];
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [36];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  char acStack_f8 [64];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_70;
  undefined1 auStack_38 [52];
  
  piVar4 = DAT_006957ac;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
  iVar5 = (**(code **)(*piVar4 + 0x14))();
  iStack_138 = 0xaa;
  iStack_150 = 0x32;
  iVar15 = -10;
  uVar14 = 0xfffffe21;
  if (iVar5 < 0x4b5) {
    if (iVar5 < 0x321) {
      if (0x280 < iVar5) {
        iStack_138 = 0xfa;
        iStack_150 = 0x32;
        iVar15 = 0x46;
        uVar14 = 0xfffffe71;
      }
    }
    else {
      iStack_138 = 0x2aa;
      iStack_150 = 0xb;
      uVar14 = 0xfffffe21;
    }
  }
  else {
    iStack_138 = 0x489;
    iStack_150 = 0xb;
    uVar14 = 0;
    iVar15 = 0x1d5;
  }
  iVar5 = *(int *)(param_1 + 0x4fc) + 1;
  *(int *)(param_1 + 0x4fc) = iVar5;
  uStack_160 = (double)CONCAT44(uStack_160._4_4_,*(int *)(DAT_00695c00 + 0xbb0) + 1);
  iStack_170 = __ftol();
  if (((DAT_006957a8 == DAT_006cdc10) || (DAT_006957a8 == DAT_006cdc0c)) ||
     (DAT_006957a8 == DAT_006cdc14)) {
    iStack_170 = 1;
  }
  iVar13 = iVar5 % iStack_170;
  if (iVar13 == 0) {
LAB_005692f8:
    DAT_006f23a0 = DAT_006f23a0 ^ 1;
  }
  else {
    if ((iVar13 != 1) && (9 < iVar5)) goto switchD_00569c18_default;
    if (iVar13 == 0) goto LAB_005692f8;
  }
  DAT_006f239c = 0;
  FUN_005b7d70(piVar4[3],uVar14,0,*(undefined4 *)(param_1 + 0x4e8));
  iVar5 = *(int *)(DAT_006d0fd8 + 0x268);
  if (iVar5 == 0) {
    return;
  }
  uStack_160 = (double)CONCAT44(uStack_160._4_4_,(uint)(DAT_00695bb4 == 0));
  if ((*(int *)(param_1 + 0x4fc) % iStack_170 == 0) || (*(int *)(param_1 + 0x4fc) < 10)) {
    iVar13 = *(int *)(iVar5 + 0x509c);
    piVar1 = (int *)(iVar5 + 0x509c);
    if (iVar13 != DAT_0068a8f0) {
      pcVar6 = acStack_f8;
      FUN_0041d3f0(piVar1);
      FUN_0043fd20(iVar13,pcVar6);
      if (cStack_70 == '\0') {
        DAT_0067a668 = -1;
      }
      else {
        DAT_0067a668 = *(int *)(*piVar1 + 0x210) + 1;
        DAT_006f23a4 = *(int *)(*piVar1 + 0x20c) + 1;
      }
      _DAT_006f23c0 = uStack_80;
      DAT_006f23b8 = *(int *)(*piVar1 + 0x94) - *(int *)(*piVar1 + 0x90) >> 3;
      _DAT_006f23c4 = uStack_7c;
      if (0 < DAT_006f23b8) {
        _DAT_006f23c8 = uStack_b8;
        _DAT_006f23cc = uStack_b4;
      }
    }
    uStack_134 = *(undefined4 *)(iVar5 + 0x1b0);
    uStack_130 = *(undefined4 *)(iVar5 + 0x1b4);
    uStack_12c = *(undefined4 *)(iVar5 + 0x1b8);
    FUN_005aabc0(&uStack_134);
    DAT_006f23a8 = __ftol();
    DAT_006f2288 = *(int *)(iVar5 + 0x521c);
    DAT_006f23ac = *(int *)(iVar5 + 0x5204);
    DAT_006f23b0 = *(int *)(iVar5 + 0x5220);
    DAT_006f23b4 = __ftol();
    DAT_006f23bc = *(undefined4 *)(*piVar1 + 0x294);
  }
  if (*(int *)(iVar5 + 0x509c) != DAT_0068a8f0) {
    if (-1 < DAT_0067a668) {
      uVar14 = FUN_005d2500(0x59);
      FUN_005e97a0(piVar4[3],iVar15 + 0x1a,0x17,*(undefined4 *)(param_1 + 0x508),uVar14,0,0);
      FUN_0061c369(acStack_14c,&DAT_0066b8cc,DAT_0067a668);
      if (acStack_14c[0] != '\0') {
        pcVar6 = acStack_14c;
        cVar12 = acStack_14c[0];
        do {
          *pcVar6 = cVar12 + '\x10';
          cVar12 = pcVar6[1];
          pcVar6 = pcVar6 + 1;
        } while (cVar12 != '\0');
      }
      FUN_005e97a0(piVar4[3],iVar15 + 0x1a,0x2b,*(undefined4 *)(param_1 + 0x50c),acStack_14c,0,0);
      uVar7 = FUN_005d2500(0x5f);
      uVar14 = *(undefined4 *)(param_1 + 0x508);
      uVar8 = FUN_005d2500(0x5f);
      iVar13 = FUN_005e9710(uVar8);
      FUN_005e97a0(piVar4[3],(iVar15 - iVar13 / 2) + 0x32,0x26,uVar14,uVar7,0,0);
      FUN_0061c369(acStack_14c,&DAT_0066b8cc,DAT_006f23a4);
      if (acStack_14c[0] != '\0') {
        pcVar6 = acStack_14c;
        cVar12 = acStack_14c[0];
        do {
          *pcVar6 = cVar12 + '\x10';
          cVar12 = pcVar6[1];
          pcVar6 = pcVar6 + 1;
        } while (cVar12 != '\0');
      }
      FUN_005e97a0(piVar4[3],iVar15 + 0x3f,0x2b,*(undefined4 *)(param_1 + 0x50c),acStack_14c,0,0);
    }
    uVar14 = FUN_005d2500(0x5a);
    FUN_005e97a0(piVar4[3],iVar15 + 0x55,0x17,*(undefined4 *)(param_1 + 0x508),uVar14,0,0);
    iVar13 = __ftol();
    FUN_0061c369(acStack_14c,s__02d__02d_0067a838,iVar13 / 0x3c,iVar13 % 0x3c);
    if (acStack_14c[0] != '\0') {
      pcVar6 = acStack_14c;
      cVar12 = acStack_14c[0];
      do {
        *pcVar6 = cVar12 + '\x10';
        cVar12 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
      } while (cVar12 != '\0');
    }
    FUN_005e97a0(piVar4[3],iVar15 + 0x55,0x2b,*(undefined4 *)(param_1 + 0x50c),acStack_14c,0,0);
    if (0 < DAT_006f23b8) {
      uVar14 = FUN_005d2500(0x65);
      FUN_005e97a0(piVar4[3],iVar15 + 0x9a,0x17,*(undefined4 *)(param_1 + 0x508),uVar14,0,0);
      FUN_0061c369(acStack_14c,&DAT_0066b8cc,DAT_006f23b8);
      FUN_005e97a0(piVar4[3],iVar15 + 0xd2,0x17,*(undefined4 *)(param_1 + 0x508),acStack_14c,0,0);
      iVar13 = __ftol();
      FUN_0061c369(acStack_14c,s__02d__02d_0067a838,iVar13 / 0x3c,iVar13 % 0x3c);
      if (acStack_14c[0] != '\0') {
        pcVar6 = acStack_14c;
        cVar12 = acStack_14c[0];
        do {
          *pcVar6 = cVar12 + '\x10';
          cVar12 = pcVar6[1];
          pcVar6 = pcVar6 + 1;
        } while (cVar12 != '\0');
      }
      FUN_005e97a0(piVar4[3],iVar15 + 0x9e,0x2b,*(undefined4 *)(param_1 + 0x50c),acStack_14c,0,0);
    }
  }
  FUN_0061c369(acStack_14c,&DAT_0066b8cc,DAT_006f23a8);
  iVar13 = FUN_005e9710(acStack_14c);
  FUN_005e97a0(piVar4[3],(iVar15 - iVar13) + 0x11f,0x26,*(undefined4 *)(param_1 + 0x50c),acStack_14c
               ,0,0);
  if ((float)uStack_160 == 0.0) {
    puVar9 = (undefined *)FUN_005d2500(0x5d);
  }
  else {
    puVar9 = &DAT_0067a834;
  }
  FUN_005e97a0(piVar4[3],iVar15 + 0x123,0x28,*(undefined4 *)(param_1 + 0x508),puVar9,0,0);
  if (((*(int *)(iVar5 + 0x5460) != 0) && (DAT_006f2288 != 0)) && (DAT_006f23a0 != 0)) {
    FUN_005e97a0(piVar4[3],iVar15 + 0x13b,0x28,*(undefined4 *)(param_1 + 0x50c),&DAT_0067a830,0,0);
  }
  if (DAT_006f23ac < 2) {
    iVar13 = (int)(char)((-(DAT_006f23ac != 0) & 0xfcU) + 0x52);
  }
  else {
    iVar13 = DAT_006f23ac + 0x2f;
  }
  if (DAT_006f23b0 == 0) {
    uVar14 = 0x5c;
  }
  else {
    uVar14 = 0x5b;
  }
  uVar14 = FUN_005d2500(uVar14);
  FUN_0061c369(acStack_14c,uVar14,iVar13);
  FUN_005e97a0(piVar4[3],(-(uint)(DAT_006f23b0 != 0) & 0xf) + 0x169 + iVar15,0x17,
               *(undefined4 *)(param_1 + 0x508),acStack_14c,0,0);
  FUN_0061c369(acStack_14c,&DAT_0066b8cc,DAT_006f23b4);
  if (acStack_14c[0] != '\0') {
    pcVar6 = acStack_14c;
    do {
      *pcVar6 = acStack_14c[0] + '\x10';
      acStack_14c[0] = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (acStack_14c[0] != '\0');
  }
  iVar13 = FUN_005e9710(acStack_14c);
  FUN_005e97a0(piVar4[3],(iVar15 - iVar13) + 0x182,0x2b,*(undefined4 *)(param_1 + 0x50c),acStack_14c
               ,0,0);
  uVar14 = FUN_005d2500(0x5e);
  FUN_005e97a0(piVar4[3],iVar15 + 0x182,0x28,*(undefined4 *)(param_1 + 0x508),uVar14,0,0);
  if (*(int *)(param_1 + 0x4f4) == 0) {
    puVar9 = &DAT_0067a82c;
  }
  else if ((*(int *)(param_1 + 0x4f4) == 1) || (DAT_006f239c = 1, DAT_006f23a0 == 0)) {
    puVar9 = &DAT_0067a828;
  }
  else {
    puVar9 = &DAT_0067a82c;
  }
  FUN_005e97a0(piVar4[3],iVar15 + 0x1ca,0x28,*(undefined4 *)(param_1 + 0x50c),puVar9,0,0);
  uStack_160 = (double)*(float *)(iVar5 + 0x51fc);
  if (*(float *)(iVar5 + 0x51fc) <= (float)_DAT_0064a668) {
    iVar13 = 0;
  }
  else {
    iVar13 = __ftol();
    iVar13 = 2 - iVar13;
    if (9 < iVar13) {
      iVar13 = 9;
    }
  }
  FUN_0061c369(acStack_14c,&PTR_LAB_0063253e_1_0067a824,iVar13 + 0x50);
  if ((3 < iVar13) || (DAT_006f23a0 != 0)) {
    FUN_005e97a0(piVar4[3],iVar15 + 0x200,0x28,*(undefined4 *)(param_1 + 0x50c),acStack_14c,0,0);
  }
  if (uStack_160 < _DAT_0064a948) {
    DAT_006f239c = 1;
  }
  iVar13 = __ftol();
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  else if (9 < iVar13) {
    iVar13 = 9;
  }
  if (((*(int *)(iVar5 + 0x5460) == 0) ||
      (iVar2 = *(int *)(*(int *)(iVar5 + 0x5460) + 0x8cc), iVar2 < DAT_006cd290)) ||
     (DAT_006cd294 <= iVar2)) {
    FUN_0061c369(acStack_14c,&PTR_LAB_0067a818,iVar13 + 0x50);
  }
  else {
    FUN_0061c369(acStack_14c,&DAT_0067a81c,0x5f,iVar13 + 0x50);
  }
  if ((3 < iVar13) || (DAT_006f23a0 != 0)) {
    FUN_005e97a0(piVar4[3],iVar15 + 0x229,0x28,*(undefined4 *)(param_1 + 0x50c),acStack_14c,0,0);
  }
  if ((*(int *)(iVar5 + 0x509c) == DAT_0068a8f0) ||
     (uVar10 = FUN_0043f700(*(int *)(iVar5 + 0x509c)), (uVar10 & 0x2000) == 0)) {
    if ((*(int *)(DAT_006cdbcc + 0x524) == 0) || (*(int *)(DAT_006cdbf8 + 0x180) != 1))
    goto switchD_00569c18_default;
    FUN_0057d570(auStack_128);
    if (DAT_006f2318 == 0) {
      uStack_160 = (double)CONCAT44(_DAT_0064ee08 - fStack_100,_DAT_0064ee0c - fStack_104);
      fStack_158 = fStack_fc - fStack_fc;
    }
    else if (DAT_006f2318 == 1) {
      uStack_160 = (double)CONCAT44(_DAT_0064ee00 - fStack_100,_DAT_0064ee04 - fStack_104);
      fStack_158 = fStack_fc - fStack_fc;
    }
    else {
      uStack_160 = (double)CONCAT44(DAT_007015b4,DAT_007015b0);
      fStack_158 = DAT_007015b8;
    }
    fVar16 = (float10)FUN_005aabc0(&uStack_160);
    if (fVar16 <= (float10)_DAT_0064b440) goto switchD_00569c18_default;
    FUN_005aab70();
    pfVar11 = (float *)FUN_005aba00(auStack_38,auStack_128);
    fVar3 = (float)uStack_160 * *pfVar11 + uStack_160._4_4_ * pfVar11[3] + fStack_158 * pfVar11[6];
    if ((float)uStack_160 * pfVar11[1] + uStack_160._4_4_ * pfVar11[4] + fStack_158 * pfVar11[7] <=
        _DAT_0064b254) {
      if (fVar3 <= (float)_DAT_0064a6e8) {
        if ((float)_DAT_0064edf8 < fVar3) {
          puVar9 = &DAT_0067a7f8;
          goto LAB_00569f38;
        }
        if (fVar3 <= (float)_DAT_0064edf0) {
          if (fVar3 <= (float)_DAT_0064ede8) {
            puVar9 = &DAT_0067a7fc;
            goto LAB_00569f38;
          }
          uVar14 = *(undefined4 *)(param_1 + 0x50c);
          iVar5 = piVar4[3];
          puVar9 = &DAT_0067a7f0;
        }
        else {
          uVar14 = *(undefined4 *)(param_1 + 0x50c);
          iVar5 = piVar4[3];
          puVar9 = &DAT_0067a7f4;
        }
      }
      else {
        uVar14 = *(undefined4 *)(param_1 + 0x50c);
        iVar5 = piVar4[3];
        puVar9 = &DAT_0067a80c;
      }
    }
    else {
      if ((float)_DAT_0064a6e8 < fVar3) {
        puVar9 = &DAT_0067a80c;
        goto LAB_00569f38;
      }
      if (fVar3 <= (float)_DAT_0064edf8) {
        if (fVar3 <= (float)_DAT_0064edf0) {
          if ((float)_DAT_0064ede8 < fVar3) {
            puVar9 = &DAT_0067a800;
            goto LAB_00569f38;
          }
          uVar14 = *(undefined4 *)(param_1 + 0x50c);
          iVar5 = piVar4[3];
          puVar9 = &DAT_0067a7fc;
        }
        else {
          uVar14 = *(undefined4 *)(param_1 + 0x50c);
          iVar5 = piVar4[3];
          puVar9 = &DAT_0067a804;
        }
      }
      else {
        uVar14 = *(undefined4 *)(param_1 + 0x50c);
        iVar5 = piVar4[3];
        puVar9 = &DAT_0067a808;
      }
    }
    goto LAB_00569f46;
  }
  if ((*(int *)(DAT_006cdbf8 + 0x180) == 2) && (*(int *)(DAT_006cdbcc + 0x524) != 0))
  goto switchD_00569c18_default;
  if ((_DAT_0064ba70 < _DAT_006952a8) && (_DAT_006952a8 < _DAT_0064a690)) {
    DAT_006f239c = 1;
  }
  if (_DAT_0064a690 < _DAT_006952a8) goto switchD_00569c18_default;
  if (_DAT_0064a7e8 < _DAT_006952a8) {
    uVar10 = __ftol();
    uVar10 = uVar10 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uStack_160 = (double)CONCAT44(uStack_160._4_4_,uVar10);
    if (uVar10 == 0) goto switchD_00569c18_default;
  }
  switch(DAT_006f23bc) {
  case 1:
    uVar14 = *(undefined4 *)(param_1 + 0x50c);
    iVar5 = piVar4[3];
    puVar9 = &DAT_006702a4;
    break;
  case 2:
    puVar9 = &DAT_0067a810;
    goto LAB_00569f38;
  case 3:
    puVar9 = &DAT_0067a814;
LAB_00569f38:
    uVar14 = *(undefined4 *)(param_1 + 0x50c);
    iVar5 = piVar4[3];
    break;
  case 4:
    uVar14 = *(undefined4 *)(param_1 + 0x50c);
    iVar5 = piVar4[3];
    puVar9 = &DAT_006702a8;
    break;
  default:
    goto switchD_00569c18_default;
  }
LAB_00569f46:
  FUN_005e97a0(iVar5,iVar15 + 0x260,0x28,uVar14,puVar9,0,0);
switchD_00569c18_default:
  if (DAT_006f239c != 0) {
    FUN_005fcaa0(0x3f19999a,0x3f19999a,0);
  }
  FUN_005e97a0(piVar4[3],0x14,0x14,*(undefined4 *)(param_1 + 0x508),&DAT_0067a7ec,0,0);
  iVar15 = iStack_138;
  iVar5 = iStack_150;
  if (*(int *)(param_1 + 0x4ac) == 1) {
    if (*(int *)(param_1 + 0x4c0) != 0) {
      FUN_005b8030(piVar4[3],iStack_138,iStack_150,*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      FUN_005e97e0(piVar4[3],iVar15 + 0x22,iVar5 + 0x17,0xf7,*(undefined4 *)(param_1 + 0x508),
                   param_1 + 0x22c,0,0);
      return;
    }
  }
  else {
    FUN_005b8030(piVar4[3],iStack_138,iStack_150,*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    iVar13 = *(int *)(param_1 + 0x4ac);
    if (((1 < iVar13) && (iVar13 < 0x14)) && ((iVar13 / 2 & 1U) != 0)) {
      FUN_005b8030(piVar4[3],iVar15 + 5,iVar5 + 6,*(undefined4 *)(param_1 + 0x4ec),0xffffffff);
    }
    iVar5 = *(int *)(param_1 + 0x4ac);
    if (iVar5 != 1) {
      iVar13 = 0;
      if (0 < iVar5 + -1) {
        do {
          cVar12 = *(char *)(param_1 + 0x22c + iVar13);
          acStack_f8[iVar13] = cVar12;
          if (cVar12 == '\0') {
            if (iVar5 < 1000) {
              *(undefined4 *)(param_1 + 0x4ac) = 1000;
            }
            break;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar5 + -1);
      }
      acStack_f8[iVar13] = '\0';
      iVar5 = FUN_005e9710(acStack_f8);
      iVar13 = 0;
      if (0xf7 < iVar5) {
        iVar13 = (iVar5 + -0xf7) / *(int *)(*(int *)(param_1 + 0x508) + 0x18) + 1;
      }
      FUN_005e97a0(piVar4[3],iVar15 + 0x22,iStack_150 + 0x17,*(undefined4 *)(param_1 + 0x508),
                   acStack_f8 + iVar13,0,0);
    }
  }
  return;
}

