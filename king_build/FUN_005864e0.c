
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005864e0(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  float fStack_180;
  undefined8 uStack_178;
  float fStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int aiStack_12c [9];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 auStack_fc [9];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [36];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [36];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_6c [104];
  
  param_1[0x379] = 2;
  (**(code **)(*param_1 + 0x4c))();
  fVar12 = (float10)FUN_004e1fd9();
  fStack_198 = (float)fVar12;
  puVar5 = auStack_fc + 2;
  iVar8 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar5 = &DAT_00701550;
  puVar9 = auStack_fc;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_005f1c10();
  piVar7 = aiStack_12c;
  uVar15 = CONCAT44(auStack_fc,param_1 + 0xb9);
  FUN_005ab130();
  FUN_005ab130(auStack_9c,param_1 + 0xad,param_1 + 0x89,piVar7,uVar15);
  if (DAT_00695bcc != 0) {
    FUN_004e9b0e();
    puVar14 = auStack_6c;
    dVar19 = (double)fStack_d0;
    dVar17 = (double)fStack_d4;
    dVar16 = (double)fStack_d8;
    uVar15 = CONCAT44(*(undefined4 *)(param_1[0x50] + 0xc),s__s_M0__6_3f__6_3f__6_3f_0067c078);
    FUN_0061c369();
    FUN_004e9b0e(auStack_6c,puVar14,uVar15,dVar16,dVar17,dVar19);
    puVar14 = auStack_6c;
    dVar19 = (double)(float)param_1[0x88];
    dVar17 = (double)(float)param_1[0x87];
    dVar16 = (double)(float)param_1[0x86];
    uVar15 = CONCAT44(*(undefined4 *)(param_1[0x50] + 0xc),s_A__s_M__6_3f__6_3f__6_3f_0067c05a + 2);
    FUN_0061c369();
    FUN_004e9b0e(auStack_6c,puVar14,uVar15,dVar16,dVar17,dVar19);
  }
  if (1 < *(int *)(DAT_006cdbcc + 0x514)) {
    piVar7 = aiStack_12c;
    piVar10 = param_1 + 0x7d;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar10 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
    }
    pfVar6 = (float *)FUN_005aba00(auStack_cc,param_1 + 0x7d);
    pfVar11 = (float *)(param_1 + 0x95);
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar11 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar11 = pfVar11 + 1;
    }
    fStack_194 = (float)param_1[0x95] * (float)param_1[0x6e] +
                 (float)param_1[0x9b] * (float)param_1[0x70] +
                 (float)param_1[0x98] * (float)param_1[0x6f];
    fStack_190 = (float)param_1[0x96] * (float)param_1[0x6e] +
                 (float)param_1[0x9c] * (float)param_1[0x70] +
                 (float)param_1[0x99] * (float)param_1[0x6f];
    fStack_18c = (float)param_1[0x97] * (float)param_1[0x6e] +
                 (float)param_1[0x9d] * (float)param_1[0x70] +
                 (float)param_1[0x9a] * (float)param_1[0x6f];
    piVar7 = (int *)FUN_004e29c2();
    param_1[0x6b] = *piVar7;
    param_1[0x6c] = piVar7[1];
    param_1[0x6d] = piVar7[2];
    FUN_005eec70();
    iVar8 = FUN_004e5437();
    param_1[200] = iVar8;
    goto LAB_005870b6;
  }
  if ((*(byte *)(param_1 + 299) & 4) != 0) {
    iVar8 = 0;
    piVar7 = param_1 + 0x36d;
    do {
      if (((*piVar7 != 0) && (*(int *)(*piVar7 + 0x4b4) != 0)) && ((float)piVar7[6] < _DAT_0064ca64)
         ) break;
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar8 < 6);
    if (((iVar8 != 6) && (param_1[iVar8 + 0x36d] != 0)) &&
       (*(int *)(param_1[iVar8 + 0x36d] + 0x4b4) != 0)) {
      fStack_138 = fStack_198 * (float)param_1[0x68];
      fStack_134 = fStack_198 * (float)param_1[0x69];
      fStack_130 = fStack_198 * (float)param_1[0x6a];
      fStack_194 = (float)param_1[0xd5] - fStack_78;
      fStack_190 = (float)param_1[0xd6] - fStack_74;
      fStack_18c = (float)param_1[0xd7] - fStack_70;
      fStack_150 = fStack_194;
      fStack_14c = fStack_190;
      fStack_148 = fStack_18c;
      fVar12 = (float10)FUN_005aabc0();
      uStack_188 = (double)CONCAT44(uStack_188._4_4_,(float)fVar12);
      if (fVar12 <= (float10)_DAT_0064a590) {
        fStack_108 = fStack_138 + (float)param_1[0x92];
        fStack_104 = fStack_134 + (float)param_1[0x93];
        uStack_188 = (double)CONCAT44(fStack_104,fStack_108);
        fStack_100 = fStack_130 + (float)param_1[0x94];
        fStack_180 = fStack_100;
      }
      else {
        fVar12 = (float10)FUN_005aabc0();
        fVar12 = (fVar12 / (float10)(float)uStack_188) * (float10)_DAT_0067c054;
        fVar12 = fVar12 / (fVar12 + (float10)_DAT_0064b240);
        fVar13 = (float10)_DAT_0064b240 - fVar12;
        fStack_108 = (float)((float10)fStack_194 * fVar13) * fStack_198 * _DAT_0064b440;
        fStack_104 = (float)((float10)fStack_190 * fVar13) * fStack_198 * _DAT_0064b440;
        uStack_188 = (double)CONCAT44(fStack_104,fStack_108);
        fStack_180 = (float)(fVar13 * (float10)fStack_18c * (float10)fStack_198 *
                            (float10)_DAT_0064b440);
        fStack_15c = (float)((float10)fStack_138 * fVar12) + (float)param_1[0x92];
        fStack_158 = (float)((float10)fStack_134 * fVar12) + (float)param_1[0x93];
        fStack_108 = fStack_15c + fStack_108;
        fStack_104 = fStack_104 + fStack_158;
        uStack_178 = (double)CONCAT44(fStack_104,fStack_108);
        fStack_100 = (float)((float10)fStack_180 +
                            fVar12 * (float10)fStack_130 + (float10)(float)param_1[0x94]);
        fStack_170 = fStack_100;
      }
      uVar20 = CONCAT44(&fStack_13c,&fStack_140);
      uVar18 = CONCAT44(&fStack_144,&fStack_148);
      puVar14 = auStack_9c;
      uVar15 = CONCAT44(&fStack_14c,&fStack_150);
      fStack_168 = 0.0;
      fStack_164 = 0.0;
      fStack_160 = 0.0;
      fStack_150 = 0.0;
      fStack_14c = 0.0;
      fStack_148 = 0.0;
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      fStack_13c = 0.0;
      FUN_004e2844();
      FUN_004e2844(param_1 + 0xcc,&fStack_150,&fStack_14c,&fStack_148,&fStack_168,&fStack_164,
                   &fStack_160,puVar14,uVar15,uVar18,uVar20);
      uStack_188 = 0.6;
      FUN_004e1fd9();
      fVar12 = (float10)FUN_0061d200();
      fVar1 = (float)fVar12;
      if ((float)_DAT_0064a818 < ABS(fStack_168 - fStack_144)) {
        if ((float)_DAT_0064a818 < fStack_168 - fStack_144) {
          fStack_168 = fStack_168 - (float)_DAT_0064a810;
        }
        if (fStack_168 - fStack_144 < (float)_DAT_0064a808) {
          fStack_168 = fStack_168 + (float)_DAT_0064a810;
        }
      }
      if ((float)_DAT_0064a818 < ABS(fStack_164 - fStack_140)) {
        if ((float)_DAT_0064a818 < fStack_164 - fStack_140) {
          fStack_164 = fStack_164 - (float)_DAT_0064a810;
        }
        if (fStack_164 - fStack_140 < (float)_DAT_0064a808) {
          fStack_164 = fStack_164 + (float)_DAT_0064a810;
        }
      }
      if ((float)_DAT_0064a818 < ABS(fStack_160 - fStack_13c)) {
        if ((float)_DAT_0064a818 < fStack_160 - fStack_13c) {
          fStack_160 = fStack_160 - (float)_DAT_0064a810;
        }
        if (fStack_160 - fStack_13c < (float)_DAT_0064a808) {
          fStack_160 = fStack_160 + (float)_DAT_0064a810;
        }
      }
      fVar4 = _DAT_0064b240 - fVar1;
      fStack_15c = fVar4 * fStack_168;
      fStack_158 = fVar4 * fStack_164;
      uStack_188 = (double)CONCAT44(fStack_140 * fVar1,(float)uStack_188);
      fStack_180 = fStack_13c * fVar1;
      fVar3 = fStack_144 * fVar1 + fStack_15c;
      fVar1 = fStack_158 + fStack_140 * fVar1;
      uStack_178 = (double)CONCAT44(fVar1,fVar3);
      piVar7 = (int *)FUN_005da010(auStack_cc,(double)fStack_108,(double)fStack_104,
                                   (double)fStack_100,(double)fVar3,(double)fVar1,
                                   (double)(fVar4 * fStack_160 + fStack_180));
      piVar10 = aiStack_12c;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar10 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar10 = piVar10 + 1;
      }
    }
  }
  if ((param_1[299] & 4U) == 0) {
LAB_00586d2b:
    if ((param_1[299] & 4U) == 0) goto LAB_00586e29;
    fStack_194 = fStack_108 - (float)param_1[0x92];
    fStack_190 = fStack_104 - (float)param_1[0x93];
    fStack_18c = fStack_100 - (float)param_1[0x94];
    param_1[0x313] = (int)fStack_194;
    param_1[0x314] = (int)fStack_190;
    param_1[0x315] = (int)fStack_18c;
    puVar14 = auStack_cc;
    uVar15 = CONCAT44(param_1 + 0xa1,aiStack_12c);
    FUN_005ab130();
    uStack_a8 = DAT_007015b0;
    uStack_a4 = DAT_007015b4;
    pfVar6 = (float *)(param_1 + 0x316);
    uStack_a0 = DAT_007015b8;
    fStack_194 = 0.0;
    fStack_190 = 0.0;
    fStack_18c = 0.0;
    FUN_004e2844(auStack_cc,&fStack_194,&fStack_190,&fStack_18c,param_1 + 0x318,pfVar6,
                 param_1 + 0x317,puVar14,uVar15);
    *pfVar6 = -*pfVar6;
    iVar8 = *param_1;
    fVar12 = (float10)FUN_004e1fd9();
    (**(code **)(iVar8 + 0x50))((float)fVar12);
  }
  else {
    iVar8 = 0;
    piVar7 = param_1 + 0x36d;
    do {
      iVar2 = *piVar7;
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x4b4) != 0)) &&
         (SQRT((float)piVar7[6]) <
          ((*(float *)(iVar2 + 0xd84) + (float)param_1[0x361]) * fStack_198 +
           *(float *)(iVar2 + 0xcc8) + (float)param_1[0x332]) * (float)_DAT_0064a658)) {
        uStack_178 = (double)(fStack_100 - (float)param_1[0x94]);
        uStack_188 = (double)(fStack_104 - (float)param_1[0x93]);
        if (uStack_178 * uStack_178 +
            uStack_188 * uStack_188 +
            ((double)fStack_108 - (double)(float)param_1[0x92]) *
            ((double)fStack_108 - (double)(float)param_1[0x92]) <= _DAT_0064a690) break;
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar8 < 6);
    if (iVar8 != 6) goto LAB_00586d2b;
LAB_00586e29:
    piVar7 = aiStack_12c;
    piVar10 = param_1 + 0x7d;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar10 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
    }
    pfVar6 = (float *)FUN_005aba00(auStack_cc,param_1 + 0x7d);
    pfVar11 = (float *)(param_1 + 0x95);
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar11 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar11 = pfVar11 + 1;
    }
    fStack_15c = (float)param_1[0x95] * (float)param_1[0x6e] +
                 (float)param_1[0x9b] * (float)param_1[0x70] +
                 (float)param_1[0x98] * (float)param_1[0x6f];
    fStack_158 = (float)param_1[0x9c] * (float)param_1[0x70] +
                 (float)param_1[0x96] * (float)param_1[0x6e] +
                 (float)param_1[0x99] * (float)param_1[0x6f];
    fStack_154 = (float)param_1[0x9d] * (float)param_1[0x70] +
                 (float)param_1[0x97] * (float)param_1[0x6e] +
                 (float)param_1[0x9a] * (float)param_1[0x6f];
    piVar7 = (int *)FUN_004e29c2();
    param_1[0x6b] = *piVar7;
    param_1[0x6c] = piVar7[1];
    param_1[0x6d] = piVar7[2];
    FUN_005eec70();
    iVar8 = FUN_004e5437();
    param_1[200] = iVar8;
    param_1[0xdf] = 0;
    param_1[0xe0] = 0;
    param_1[0x362] = 0;
    if ((*(byte *)(param_1 + 299) & 4) != 0) {
      (**(code **)(*param_1 + 0x3c))();
    }
  }
  if ((float)_DAT_0064a660 < (float)*(double *)(DAT_006ee15c + 0xb98) - (float)param_1[0xca]) {
    fVar12 = (float10)FUN_005aabc0();
    uStack_178 = (double)CONCAT44(uStack_178._4_4_,(float)fVar12);
    fVar12 = (float10)FUN_005aabc0(param_1 + 0x6b);
    uStack_188 = (double)CONCAT44(uStack_188._4_4_,(float)fVar12);
    fVar1 = (float)uStack_178 - fStack_198 * _DAT_0064c2e8;
    fStack_198 = (float)fVar12 - fStack_198;
    if (fVar1 < _DAT_0064b254) {
      fVar1 = _DAT_0064b254;
    }
    if (fStack_198 < _DAT_0064b254) {
      fStack_198 = 0.0;
    }
    if (_DAT_0064b254 < (float)uStack_178) {
      FUN_005aad10(&fStack_15c,fVar1 / (float)uStack_178);
    }
    if (_DAT_0064b254 < (float)uStack_188) {
      FUN_005aad10(&fStack_15c,fStack_198 / (float)uStack_188);
    }
    pfVar6 = (float *)FUN_004e2984();
    fStack_194 = *pfVar6 * (float)param_1[0x7d] +
                 (float)param_1[0x80] * pfVar6[1] + (float)param_1[0x83] * pfVar6[2];
    fStack_190 = (float)param_1[0x81] * pfVar6[1] +
                 (float)param_1[0x7e] * *pfVar6 + (float)param_1[0x84] * pfVar6[2];
    fStack_18c = (float)param_1[0x82] * pfVar6[1] +
                 (float)param_1[0x7f] * *pfVar6 + (float)param_1[0x85] * pfVar6[2];
    param_1[0x6e] = (int)fStack_194;
    param_1[0x6f] = (int)fStack_190;
    param_1[0x70] = (int)fStack_18c;
  }
LAB_005870b6:
  (**(code **)(*param_1 + 0x34))();
  FUN_0057d750();
  FUN_005d29a0();
  if (DAT_00695bcc != 0) {
    FUN_004e9b0e();
    FUN_005f1c10();
    puVar14 = auStack_6c;
    dVar19 = (double)fStack_d0;
    dVar17 = (double)fStack_d4;
    dVar16 = (double)fStack_d8;
    uVar15 = CONCAT44(*(undefined4 *)(param_1[0x50] + 0xc),s__s_M0__6_3f__6_3f__6_3f_0067c078);
    FUN_0061c369();
    FUN_004e9b0e(auStack_6c,puVar14,uVar15,dVar16,dVar17,dVar19);
    puVar14 = auStack_6c;
    dVar19 = (double)(float)param_1[0x88];
    dVar17 = (double)(float)param_1[0x87];
    dVar16 = (double)(float)param_1[0x86];
    uVar15 = CONCAT44(*(undefined4 *)(param_1[0x50] + 0xc),s_A__s_M__6_3f__6_3f__6_3f_0067c05a + 2);
    FUN_0061c369();
    FUN_004e9b0e(auStack_6c,puVar14,uVar15,dVar16,dVar17,dVar19);
  }
  param_1[0x379] = 0;
  return;
}

