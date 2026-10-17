
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055e710(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int *piStack_44;
  int *piStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if ((param_2 == (int *)0x0) || (param_1 == (int *)0x0)) {
    return 1;
  }
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 == 1) {
    iVar2 = (**(code **)(*param_2 + 4))();
    if (iVar2 == 2) {
      if ((param_2[0x1518] == 0) || (param_1[0x1518] == 0)) {
        return 3;
      }
      if (param_1[0x155e] != 0) {
        return 4;
      }
      iVar2 = param_1[0xa2d];
      pfVar3 = (float *)(param_1 + 0xb1);
      pfVar6 = afStack_84;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
      pfVar3 = (float *)(&DAT_00696f98 + iVar2 * 0x25c);
      FUN_0041ce10(afStack_84[0] * *pfVar3 +
                   afStack_84[3] * (float)(&DAT_00696f9c)[iVar2 * 0x25c] +
                   fStack_6c * (float)(&DAT_00696fa0)[iVar2 * 0x25c] + fStack_60,
                   afStack_84[1] * *pfVar3 +
                   fStack_74 * (float)(&DAT_00696f9c)[iVar2 * 0x25c] +
                   fStack_68 * (float)(&DAT_00696fa0)[iVar2 * 0x25c] + fStack_5c,
                   afStack_84[2] * *pfVar3 +
                   fStack_70 * (float)(&DAT_00696f9c)[iVar2 * 0x25c] +
                   fStack_64 * (float)(&DAT_00696fa0)[iVar2 * 0x25c] + fStack_58);
      piStack_44 = param_1 + 4;
      pfVar3 = (float *)FUN_0057d570(afStack_84);
      FUN_0041ce10(fStack_a8 * *pfVar3 + fStack_a4 * pfVar3[3] + fStack_a0 * pfVar3[6] + pfVar3[9],
                   fStack_a8 * pfVar3[1] + fStack_a4 * pfVar3[4] + fStack_a0 * pfVar3[7] +
                   pfVar3[10],
                   fStack_a8 * pfVar3[2] + fStack_a4 * pfVar3[5] + fStack_a0 * pfVar3[8] +
                   pfVar3[0xb]);
      iVar2 = param_1[0xa2d];
      pfVar3 = (float *)(param_2 + 0xb1);
      pfVar6 = afStack_84;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
      fVar1 = *(float *)(&DAT_00696fc8 + iVar2 * 0x970);
      FUN_0041ce10(fVar1 * DAT_00701580,fVar1 * DAT_00701584,fVar1 * DAT_00701588);
      iVar2 = param_2[0xa2d];
      FUN_0041ce10(fStack_54 + (float)(&DAT_00696fa4)[iVar2 * 0x25c],
                   fStack_50 + (float)(&DAT_00696fa8)[iVar2 * 0x25c],
                   fStack_4c + (float)(&DAT_00696fac)[iVar2 * 0x25c]);
      FUN_0041ce10(fStack_9c * afStack_84[0] + fStack_98 * afStack_84[3] + fStack_94 * fStack_6c +
                   fStack_60,
                   fStack_9c * afStack_84[1] + fStack_98 * fStack_74 + fStack_94 * fStack_68 +
                   fStack_5c,
                   fStack_9c * afStack_84[2] + fStack_98 * fStack_70 + fStack_94 * fStack_64 +
                   fStack_58);
      piStack_40 = param_2 + 4;
      pfVar3 = (float *)FUN_0057d570(afStack_84);
      FUN_0041ce10(fStack_90 * *pfVar3 + fStack_8c * pfVar3[3] + fStack_88 * pfVar3[6] + pfVar3[9],
                   fStack_90 * pfVar3[1] + fStack_8c * pfVar3[4] + fStack_88 * pfVar3[7] +
                   pfVar3[10],
                   fStack_90 * pfVar3[2] + fStack_8c * pfVar3[5] + fStack_88 * pfVar3[8] +
                   pfVar3[0xb]);
      FUN_004bde20(auStack_3c,auStack_c,auStack_30);
      fVar7 = (float10)FUN_004e1080(auStack_3c,auStack_3c);
      if ((float10)_DAT_0064b2e8 < fVar7) {
        return 5;
      }
      iVar2 = param_2[0xa2d];
      pfVar3 = (float *)(param_2 + 0xb1);
      pfVar6 = afStack_84;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
      iVar2 = FUN_0043f690(&fStack_54,&DAT_00696fa4 + iVar2 * 0x25c,afStack_84);
      fVar1 = *(float *)(iVar2 + 8);
      iVar2 = param_1[0xa2d];
      pfVar3 = (float *)(param_1 + 0xb1);
      pfVar6 = afStack_84;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
      fStack_48 = fVar1 - (float)param_2[0x148e];
      iVar2 = FUN_0043f690(&fStack_54,&DAT_00696f98 + iVar2 * 0x25c,afStack_84);
      if ((float)_DAT_0064c0e0 < ABS(fStack_48 - (*(float *)(iVar2 + 8) - (float)param_1[0x148e])))
      {
        return 6;
      }
      uVar4 = FUN_0057d570(afStack_84);
      FUN_004cb300(auStack_24,&DAT_00701580,uVar4);
      uVar4 = FUN_0057d570(afStack_84);
      FUN_004cb300(auStack_18,&DAT_00701580,uVar4);
      fVar7 = (float10)FUN_004e1080(auStack_24,auStack_18);
      if (fVar7 < (float10)_DAT_0064a830) {
        return 7;
      }
      return 0;
    }
  }
  return 2;
}

