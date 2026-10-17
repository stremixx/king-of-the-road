
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00500890(int param_1,float *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float10 extraout_ST0;
  float10 fVar16;
  undefined4 uVar17;
  undefined1 local_c [12];
  
  pfVar12 = param_2;
  if (*(short *)(param_1 + 0x274a) == 0) {
    return;
  }
  if (param_4 < _DAT_0064b3fc) {
    return;
  }
  if ((ABS(param_2[1]) < param_2[2]) && (ABS(*param_2) < param_2[2])) {
    return;
  }
  param_4 = param_4 - _DAT_0064b240;
  fVar1 = *param_2;
  fVar3 = DAT_00701598 * *(float *)(param_1 + 0x28);
  fVar5 = DAT_00701594 * *(float *)(param_1 + 0x1c);
  fVar4 = DAT_00701590 * *(float *)(param_1 + 0x10);
  fVar6 = DAT_00701598 * *(float *)(param_1 + 0x2c);
  fVar8 = DAT_00701594 * *(float *)(param_1 + 0x20);
  fVar7 = DAT_00701590 * *(float *)(param_1 + 0x14);
  fVar9 = DAT_00701598 * *(float *)(param_1 + 0x30);
  fVar11 = DAT_00701594 * *(float *)(param_1 + 0x24);
  fVar10 = DAT_00701590 * *(float *)(param_1 + 0x18);
  pfVar13 = (float *)FUN_005aaad0(local_c,param_3);
  param_2 = (float *)(*pfVar13 * (fVar4 + fVar5 + fVar3) +
                     pfVar13[1] * (fVar7 + fVar8 + fVar6) + pfVar13[2] * (fVar10 + fVar11 + fVar9));
  if ((float)param_2 < _DAT_0064b254) {
    param_2 = (float *)0x0;
  }
  iVar15 = 0;
  if (0 < (int)(&DAT_00697028)[*(int *)(param_1 + 0x8cc) * 0x25c]) {
    pfVar13 = (float *)(param_1 + 0x1cc4);
    do {
      fVar3 = (pfVar13[-2] - *pfVar12) * (pfVar13[-2] - *pfVar12) +
              (pfVar13[-1] - pfVar12[1]) * (pfVar13[-1] - pfVar12[1]) +
              (*pfVar13 - pfVar12[2]) * (*pfVar13 - pfVar12[2]);
      if ((((fVar3 < (float)_DAT_0064a6c0) &&
           (FUN_00500770(param_1 + 0x3ca0,iVar15,
                         ((param_4 * (float)_DAT_0064a6d0) / (fVar3 + (float)_DAT_0064a6d0)) *
                         (float)param_2), *(short *)(param_1 + 0x2740) != 0)) &&
          (fVar3 < _DAT_0064b3f8)) &&
         (((pfVar12[2] < _DAT_0064b254 && (_DAT_0064b310 < param_4)) &&
          (iVar14 = _rand(), _DAT_0064ca60 - param_4 * _DAT_0064ca64 < (float)iVar14)))) {
        if (*(int *)(param_1 + 0x3cc8) == 0) {
          iVar14 = _rand();
          FUN_00501090(2,((iVar14 < 0x3e81) - 1 & 2) - 1);
        }
        else {
          FUN_005010f0(2);
        }
      }
      iVar15 = iVar15 + 1;
      pfVar13 = pfVar13 + 3;
    } while (iVar15 < (int)(&DAT_00697028)[*(int *)(param_1 + 0x8cc) * 0x25c]);
  }
  if (pfVar12[1] * (float)_DAT_0064ca58 <= ABS(fVar1)) {
    if (pfVar12[1] * (float)_DAT_0064c300 <= ABS(fVar1)) {
      return;
    }
    fVar1 = param_4 * (float)_DAT_0064a6d0 * *(float *)(param_1 + 0x3cb0) +
            *(float *)(param_1 + 0x3cac);
    *(float *)(param_1 + 0x3cac) = fVar1;
    if (_DAT_0064b240 < fVar1) {
      *(undefined4 *)(param_1 + 0x3cac) = 0x3f800000;
    }
    uVar17 = __ftol();
    *(undefined4 *)(param_1 + 0x3ca0) = uVar17;
    fVar16 = extraout_ST0 * (float10)*(float *)(param_1 + 0x3cc4) * extraout_ST0 +
             (float10)*(float *)(param_1 + 0x3cc0);
    *(float *)(param_1 + 0x3cc0) = (float)fVar16;
    if ((float10)_DAT_0064b240 < fVar16) {
      *(undefined4 *)(param_1 + 0x3cc0) = 0x3f800000;
    }
    goto LAB_00500ca5;
  }
  iVar14 = *(int *)(param_1 + 0x3ca0);
  iVar2 = *(int *)(param_1 + 0x3ca4);
  fVar1 = param_4 * *(float *)(param_1 + 0x3cb0) + *(float *)(param_1 + 0x3cac);
  iVar15 = iVar2;
  if (iVar14 < iVar2) {
    iVar15 = iVar14 + 1;
  }
  if ((float)iVar15 / (float)iVar2 < fVar1) {
    fVar1 = ((float)iVar15 / (float)iVar2) * (float)_DAT_0064ca50;
  }
  if (_DAT_0064b240 < fVar1) {
    fVar1 = _DAT_0064b240;
  }
  *(float *)(param_1 + 0x3cac) = fVar1;
  iVar15 = __ftol();
  if (iVar14 != iVar15) {
    if (iVar15 == 2) {
      uVar17 = 0x3f000000;
    }
    else {
      if (iVar15 != 3) goto LAB_00500bd9;
      uVar17 = 0x3f4ccccd;
    }
    FUN_004eaf60(uVar17);
  }
LAB_00500bd9:
  *(int *)(param_1 + 0x3ca0) = iVar15;
  fVar1 = param_4 * *(float *)(param_1 + 0x3cc4) + *(float *)(param_1 + 0x3cc0);
  *(float *)(param_1 + 0x3cc0) = fVar1;
  if (_DAT_0064b240 < fVar1) {
    *(undefined4 *)(param_1 + 0x3cc0) = 0x3f800000;
  }
LAB_00500ca5:
  uVar17 = __ftol();
  *(undefined4 *)(param_1 + 0x3cb4) = uVar17;
  return;
}

