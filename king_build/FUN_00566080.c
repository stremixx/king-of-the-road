
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00566080(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int *piVar14;
  int iVar15;
  float *pfVar16;
  float fVar17;
  float10 fVar18;
  float10 fVar19;
  float fStack_170;
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
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [12];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  param_1[0x313] = 0.0;
  if (param_1[0x32c] != 0.0) {
    piVar14 = (int *)FUN_0053ee80(param_1[0x32c]);
    param_1[0x32c] = (float)piVar14;
    if ((piVar14 == (int *)0x0) || (iVar15 = (**(code **)(*piVar14 + 4))(), iVar15 != 1)) {
      param_1[0x32d] = 0.0;
    }
    else {
      param_1[0x32d] = *(float *)((int)param_1[0x32c] + 0x5578);
    }
  }
  if ((param_1[0x32c] == 0.0) &&
     (((fVar17 = param_1[0x329], fVar17 == 8.40779e-45 || (fVar17 == 7.00649e-45)) ||
      (fVar17 == 9.80909e-45)))) {
    FUN_00565a00(3);
  }
  fVar17 = DAT_00701580 * *param_1 + DAT_00701584 * param_1[3] + DAT_00701588 * param_1[6];
  fVar8 = DAT_00701580 * param_1[1] + DAT_00701584 * param_1[4] + DAT_00701588 * param_1[7];
  fVar1 = DAT_00701580 * param_1[2] + DAT_00701584 * param_1[5] + DAT_00701588 * param_1[8];
  fStack_148 = fVar1 * DAT_00701594 - fVar8 * DAT_00701598;
  fStack_144 = fVar17 * DAT_00701598 - fVar1 * DAT_00701590;
  fVar17 = fVar8 * DAT_00701590 - fVar17 * DAT_00701594;
  fStack_154 = fStack_144 * DAT_00701598 - fVar17 * DAT_00701594;
  fStack_150 = fVar17 * DAT_00701590 - fStack_148 * DAT_00701598;
  fStack_14c = fStack_148 * DAT_00701594 - fStack_144 * DAT_00701590;
  fStack_130 = fStack_154;
  fStack_12c = fStack_150;
  fStack_128 = fStack_14c;
  FUN_005aaad0(auStack_108,&fStack_154);
  param_1[0x350] = 1.4013e-45;
  param_1[0x34f] = 1.4013e-45;
  param_1[0x34e] = 1.4013e-45;
  param_1[0x35c] = 0.0;
  param_1[0x35b] = 0.0;
  param_1[0x35a] = 0.0;
  param_1[0x35f] = 0.0;
  param_1[0x35e] = 0.0;
  param_1[0x35d] = 0.0;
  switch(param_1[0x329]) {
  case 1.4013e-45:
  case 2.8026e-45:
    FUN_00560ae0();
    if ((0 < (int)param_1[0x35c]) || (0x14 < (int)param_1[0x361])) {
      FUN_004e1fd9();
      FUN_004e1fd9();
      fVar17 = (float)__ftol();
      param_1[0x361] = fVar17;
    }
    param_1[0x35c] = 0.0;
    param_1[0x35f] = 0.0;
    break;
  case 4.2039e-45:
switchD_00566254_caseD_3:
    FUN_00565fd0();
    goto LAB_0056628d;
  case 5.60519e-45:
    iVar15 = FUN_00565cd0();
    if (iVar15 != 0) {
      FUN_00565a00(3);
    }
    FUN_00565c60();
    break;
  case 7.00649e-45:
    param_1[0x35b] = 0.0;
    param_1[0x35c] = 0.0;
    param_1[0x35a] = 0.0;
    param_1[0x35f] = 0.0;
    param_1[0x35e] = 0.0;
    param_1[0x35d] = 0.0;
    if (param_1[0x32c] != 0.0) {
      param_1[0x362] = 1.4013e-45;
      iVar15 = FUN_0057d570(auStack_60);
      param_1[0x363] = *(float *)(iVar15 + 0x24);
      param_1[0x364] = *(float *)(iVar15 + 0x28);
      param_1[0x365] = *(float *)(iVar15 + 0x2c);
    }
    break;
  case 8.40779e-45:
  case 9.80909e-45:
  case 1.4013e-44:
    fStack_148 = param_1[0x32e] - param_1[9];
    fStack_12c = param_1[0x32f] - param_1[10];
    fStack_140 = param_1[0x330] - param_1[0xb];
    fStack_128 = 0.0;
    fStack_130 = fStack_148;
    if (fStack_12c * fStack_12c + fStack_148 * fStack_148 <= param_1[0x331] * param_1[0x331]) {
      fVar17 = param_1[0x32c];
      uStack_120 = *(undefined4 *)((int)fVar17 + 0x1b0);
      uStack_11c = *(undefined4 *)((int)fVar17 + 0x1b4);
      fStack_144 = param_1[0xd] * param_1[0x19] +
                   param_1[0x1a] * param_1[0x10] + param_1[0x1b] * param_1[0x13];
      uStack_118 = *(undefined4 *)((int)fVar17 + 0x1b8);
      fVar18 = (float10)FUN_005aabc0(&uStack_120);
      fVar8 = param_1[0x32c];
      fVar17 = (float)fVar18;
      param_1[0x35b] = 0.0;
      param_1[0x35c] = 0.0;
      param_1[0x35a] = 0.0;
      param_1[0x35f] = 0.0;
      param_1[0x35e] = 0.0;
      param_1[0x35d] = 0.0;
      if (fVar8 != 0.0) {
        param_1[0x362] = 1.4013e-45;
        uStack_114 = *(undefined4 *)((int)fVar8 + 0x1b0);
        uStack_110 = *(undefined4 *)((int)fVar8 + 0x1b4);
        uStack_10c = *(undefined4 *)((int)fVar8 + 0x1b8);
        fVar18 = (float10)FUN_005aabc0(&uStack_114);
        fStack_170 = 30.0;
        if (param_1[0x329] == 1.4013e-44) {
          fStack_170 = (float)(((fVar18 + (float10)_DAT_0064a6d0) * (float10)_DAT_0064a908) /
                              (fVar18 + (float10)_DAT_0064c2e8));
        }
        fVar11 = DAT_00701580 * fStack_170;
        fVar8 = param_1[0x32c];
        fVar12 = DAT_00701584 * fStack_170;
        fVar13 = DAT_00701588 * fStack_170;
        fStack_13c = *(float *)((int)fVar8 + 0x1b0) * _DAT_0064b248;
        fStack_138 = *(float *)((int)fVar8 + 0x1b4) * _DAT_0064b248;
        fStack_134 = *(float *)((int)fVar8 + 0x1b8) * _DAT_0064b248;
        pfVar16 = (float *)FUN_0057d570(auStack_f0);
        fStack_154 = fVar11 * *pfVar16 + fVar12 * pfVar16[3] + fVar13 * pfVar16[6] + pfVar16[9];
        fStack_150 = fVar11 * pfVar16[1] + fVar12 * pfVar16[4] + fVar13 * pfVar16[7] + pfVar16[10];
        fStack_14c = fVar11 * pfVar16[2] + fVar12 * pfVar16[5] + fVar13 * pfVar16[8] + pfVar16[0xb];
        fVar11 = fVar11 * _DAT_0064b340;
        fVar12 = fVar12 * _DAT_0064b340;
        fVar13 = fVar13 * _DAT_0064b340;
        pfVar16 = (float *)FUN_0057d570(auStack_c0);
        fVar8 = pfVar16[7];
        fVar1 = pfVar16[4];
        fVar2 = pfVar16[1];
        fVar3 = pfVar16[10];
        fVar4 = pfVar16[8];
        fVar5 = pfVar16[5];
        fVar6 = pfVar16[2];
        fVar7 = pfVar16[0xb];
        param_1[0x363] =
             fVar11 * *pfVar16 + fVar12 * pfVar16[3] + fVar13 * pfVar16[6] + pfVar16[9] + fStack_13c
        ;
        param_1[0x364] = fStack_138 + fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar8 + fVar3;
        param_1[0x365] = fStack_134 + fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar4 + fVar7;
        fStack_13c = fStack_154 - param_1[9];
        fStack_138 = fStack_150 - param_1[10];
        fStack_134 = fStack_14c - param_1[0xb];
        fStack_128 = 0.0;
        fStack_130 = fStack_13c;
        fStack_12c = fStack_138;
        fVar18 = (float10)FUN_005aabc0(&fStack_130);
        fVar8 = (float)fVar18;
        if ((float10)_DAT_0064a668 < fVar18) {
          FUN_005aad10(auStack_fc,(float)_DAT_0064a660 / fVar8);
        }
        iVar15 = FUN_00565ad0();
        if (iVar15 == 0) {
          param_1[0x34f] = 0.0;
          if (param_1[0x329] == 1.4013e-44) {
            fVar1 = fVar17;
            if (fVar17 < (float)_DAT_0064a660) {
              fVar1 = (float)_DAT_0064a660;
            }
            fVar3 = ABS(fStack_144);
            fVar2 = (float)_DAT_0064c308;
            fVar17 = (fVar17 + (float)_DAT_0064a5a8) / (fVar17 + (float)_DAT_0064a6c0);
            if ((float)_DAT_0064a660 <= fVar8) {
              fVar18 = (float10)fVar8;
            }
            else {
              fVar18 = (float10)_DAT_0064a660;
            }
            fStack_124 = (float)((float10)_DAT_0064dd80 / fVar18);
            iVar15 = FUN_0057d570(auStack_90);
            fStack_150 = param_1[0xd] * *(float *)(iVar15 + 0x24) +
                         param_1[0x13] * *(float *)(iVar15 + 0x2c) +
                         param_1[0x10] * *(float *)(iVar15 + 0x28) + param_1[0x16];
            fVar4 = ABS(param_1[0xc] * *(float *)(iVar15 + 0x24) +
                        param_1[0x12] * *(float *)(iVar15 + 0x2c) +
                        param_1[0xf] * *(float *)(iVar15 + 0x28) + param_1[0x15]);
            if (fVar4 < fStack_150 * (float)_DAT_0064a6d0) {
              param_1[0x335] = 1.4013e-45;
            }
            if (fStack_150 * (float)_DAT_0064e750 < fVar4) {
              param_1[0x335] = 0.0;
            }
            if (param_1[0x32b] == 0.0) {
              param_1[0x35b] = 1.4013e-45;
              param_1[0x35e] =
                   ((float)_DAT_0064a660 /
                   (fStack_124 + (fVar3 / fVar1) * fVar2 + (float)_DAT_0064c0e0)) * fVar17 * fVar17;
              if (_DAT_0064b440 < fVar8) break;
              param_1[0x32b] = 1.4013e-45;
            }
            else if (param_1[0x32b] != 1.4013e-45) break;
            fVar1 = param_1[0x32c];
            fStack_154 = *(float *)((int)fVar1 + 0x1b0);
            fStack_150 = *(float *)((int)fVar1 + 0x1b4);
            fStack_14c = *(float *)((int)fVar1 + 0x1b8);
            iVar15 = FUN_0057d570(auStack_30);
            fStack_13c = fStack_154 + *(float *)(iVar15 + 0x24);
            fStack_138 = fStack_150 + *(float *)(iVar15 + 0x28);
            fStack_134 = fStack_14c + *(float *)(iVar15 + 0x2c);
            param_1[0x363] = fStack_13c;
            param_1[0x364] = fStack_138;
            param_1[0x35b] = 1.4013e-45;
            param_1[0x365] = fStack_134;
            param_1[0x35e] = fVar17 * fVar17 * fVar17 * (float)_DAT_0064a828;
            if (fStack_170 < fVar8) {
              param_1[0x32b] = 0.0;
            }
          }
          else {
            if (param_1[0x329] == 8.40779e-45) {
              if ((float)_DAT_0064a908 <= fVar8) {
                if ((float)_DAT_0064a5a8 <= fVar17) {
                  fVar18 = (float10)fVar17;
                }
                else {
                  fVar18 = (float10)_DAT_0064a5a8;
                }
                fVar10 = (float10)_DAT_0064c308;
                if ((float)_DAT_0064a660 <= fVar8) {
                  fVar19 = (float10)fVar8;
                }
                else {
                  fVar19 = (float10)_DAT_0064a660;
                }
                fVar9 = (float10)_DAT_0064dd80;
                param_1[0x35b] = 1.4013e-45;
                param_1[0x35e] =
                     (float)((float10)_DAT_0064c308 /
                            (fVar9 / fVar19 + (ABS((float10)fStack_144) / fVar18) * fVar10 +
                            (float10)_DAT_0064c0e0));
                break;
              }
              fVar8 = (float)_DAT_0064a710;
              fVar17 = (float)_DAT_0064a770;
              param_1[0x34f] = 0.0;
              fVar17 = (fStack_144 * fVar8) / (ABS(fStack_144) + fVar17);
              param_1[0x35e] = fVar17;
              if ((float)_DAT_0064a668 <= fVar17) {
                param_1[0x35b] = 1.4013e-45;
                break;
              }
            }
            else {
              if ((float)_DAT_0064a908 <= fVar8) {
                if ((float)_DAT_0064a660 <= fVar8) {
                  fVar18 = (float10)fVar8;
                }
                else {
                  fVar18 = (float10)_DAT_0064a660;
                }
                fVar10 = (float10)_DAT_0064a908;
                param_1[0x35b] = 1.4013e-45;
                param_1[0x35e] =
                     (float)((float10)_DAT_0064a5a8 / (fVar10 / fVar18 + (float10)_DAT_0064c0e0));
                break;
              }
              fVar17 = fStack_144 * _DAT_0064b95c;
              fVar8 = (float)_DAT_0064a770;
              param_1[0x34f] = 0.0;
              fVar17 = fVar17 / (ABS(fStack_144) + fVar8);
              param_1[0x35e] = fVar17;
              if ((float)_DAT_0064a668 <= fVar17) {
                param_1[0x35b] = 1.4013e-45;
                break;
              }
            }
            param_1[0x35b] = -NAN;
          }
        }
        else {
          param_1[0x32a] = param_1[0x329];
          if (iVar15 == -1) {
            param_1[0x32a] = 0.0;
            FUN_00565a00(4);
          }
          else if (iVar15 == 1) {
            FUN_00565a00(4);
          }
          else if (iVar15 == 2) {
            FUN_00565a00(3);
          }
        }
      }
    }
    else {
      param_1[0x32c] = 0.0;
      param_1[0x32d] = 0.0;
      fStack_144 = fStack_12c;
      FUN_00565a00(0xb);
    }
    break;
  case 1.54143e-44:
    iVar15 = FUN_00565cd0();
    if (iVar15 != 0) goto switchD_00566254_caseD_3;
LAB_0056628d:
    FUN_00565c60();
  }
  if ((param_1[0x32a] == 1.4013e-44) || (param_1[0x32a] == 8.40779e-45)) {
    if ((param_1[0x329] != 5.60519e-45) && (param_1[0x329] != 4.2039e-45)) {
      param_1[0x32a] = 0.0;
      return;
    }
    iVar15 = FUN_00565ad0();
    if (iVar15 == 0) {
      FUN_00565a00(param_1[0x32a]);
    }
  }
  return;
}

