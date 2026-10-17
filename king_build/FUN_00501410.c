
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00501410(int param_1,int param_2,float *param_3,float param_4)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (((*param_3 == _DAT_0064b254) || (param_2 < 0)) || (0x1a < param_2)) {
    return 0;
  }
  if (param_4 == _DAT_0064b254) {
    *(undefined4 *)(param_1 + 0x3cac + param_2 * 0x14) = 0;
    *(undefined4 *)(param_1 + (param_2 * 5 + 0xf28) * 4) = 0;
    return 1;
  }
  fVar3 = param_4 * *(float *)(param_1 + 0x3cac + param_2 * 0x14);
  iVar1 = param_1 + param_2 * 0x14;
  if (*param_3 <= _DAT_0064b254) {
    fVar4 = ((float)_DAT_0064a660 - ABS(*(float *)(iVar1 + 0x3cac))) * param_4;
    if (fVar4 <= ABS(*param_3)) {
      piVar2 = (int *)(param_1 + (param_2 * 5 + 0xf28) * 4);
      *param_3 = ABS(fVar4) + *param_3;
      fVar4 = _DAT_0064b254;
      *piVar2 = *(int *)(iVar1 + 0x3ca4);
      if (fVar3 <= fVar4) {
        *(undefined4 *)(iVar1 + 0x3cac) = 0xbf800000;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3cac) = 0x3f800000;
      }
      if (param_2 < 3) {
        return 0;
      }
      if (10 < param_2) {
        return 0;
      }
      iVar6 = *(int *)(iVar1 + 0x3ca4) + -2;
      if (*piVar2 != iVar6) {
        return 0;
      }
      *piVar2 = iVar6;
      *(float *)(iVar1 + 0x3cac) = (float)iVar6 / (float)*(int *)(iVar1 + 0x3ca4);
      return 0;
    }
    if (fVar3 < _DAT_0064b254) {
      fVar3 = *param_3 / param_4 + *(float *)(iVar1 + 0x3cac);
      *(float *)(iVar1 + 0x3cac) = fVar3;
      if (fVar3 < _DAT_0064b928) {
        *(undefined4 *)(iVar1 + 0x3cac) = 0xbf800000;
      }
    }
    else {
      fVar3 = *(float *)(iVar1 + 0x3cac) - *param_3 / param_4;
      *(float *)(iVar1 + 0x3cac) = fVar3;
      if (_DAT_0064b240 < fVar3) {
        *(undefined4 *)(iVar1 + 0x3cac) = 0x3f800000;
      }
    }
    iVar6 = __ftol();
    piVar2 = (int *)(param_1 + (param_2 * 5 + 0xf28) * 4);
    *piVar2 = iVar6;
    if (((2 < param_2) && (param_2 < 0xb)) &&
       (iVar7 = *(int *)(iVar1 + 0x3ca4) + -2, iVar7 <= iVar6)) {
      *piVar2 = iVar7;
      *(float *)(iVar1 + 0x3cac) = (float)iVar7 / (float)*(int *)(iVar1 + 0x3ca4);
      return 1;
    }
    goto LAB_0050151e;
  }
  if (ABS(fVar3) <= *param_3) {
    *param_3 = *param_3 - ABS(fVar3);
    *(undefined4 *)(iVar1 + 0x3cac) = 0;
    *(undefined4 *)(param_1 + (param_2 * 5 + 0xf28) * 4) = 0;
    return 0;
  }
  if (fVar3 <= _DAT_0064b254) {
    fVar3 = *param_3 / param_4 + *(float *)(iVar1 + 0x3cac);
    *(float *)(iVar1 + 0x3cac) = fVar3;
    if (_DAT_0064b254 < fVar3) goto LAB_005014fc;
  }
  else {
    fVar3 = *(float *)(iVar1 + 0x3cac) - *param_3 / param_4;
    *(float *)(iVar1 + 0x3cac) = fVar3;
    if (fVar3 < _DAT_0064b254) {
LAB_005014fc:
      *(undefined4 *)(iVar1 + 0x3cac) = 0;
    }
  }
  uVar5 = __ftol();
  *(undefined4 *)(param_1 + (param_2 * 5 + 0xf28) * 4) = uVar5;
LAB_0050151e:
  *param_3 = 0.0;
  return 1;
}

