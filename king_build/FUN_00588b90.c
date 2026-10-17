
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00588b90(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  if (*param_2 == _DAT_0064b254) {
    return 0;
  }
  if (param_3 == _DAT_0064b254) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  fVar1 = param_3 * *(float *)(param_1 + 0xc);
  if (*param_2 <= _DAT_0064b254) {
    fVar2 = ((float)_DAT_0064a660 - ABS(*(float *)(param_1 + 0xc))) * param_3;
    if (ABS(*param_2) < fVar2) {
      if (fVar1 <= _DAT_0064b254) {
        fVar1 = *param_2 / param_3 + *(float *)(param_1 + 0xc);
        *(float *)(param_1 + 0xc) = fVar1;
        if (fVar1 < _DAT_0064b928) {
          *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
        }
      }
      else {
        fVar1 = *(float *)(param_1 + 0xc) - *param_2 / param_3;
        *(float *)(param_1 + 0xc) = fVar1;
        if (_DAT_0064b240 < fVar1) {
          *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
        }
      }
      uVar3 = __ftol();
      *(undefined4 *)(param_1 + 4) = uVar3;
      *param_2 = 0.0;
      return 1;
    }
    *param_2 = ABS(fVar2) + *param_2;
    fVar2 = _DAT_0064b254;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
    if (fVar1 <= fVar2) {
      *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    return 0;
  }
  if (ABS(fVar1) <= *param_2) {
    *param_2 = *param_2 - ABS(fVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return 0;
  }
  if (fVar1 <= _DAT_0064b254) {
    fVar1 = *param_2 / param_3 + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xc) = fVar1;
    if (fVar1 <= _DAT_0064b254) goto LAB_00588c43;
  }
  else {
    fVar1 = *(float *)(param_1 + 0xc) - *param_2 / param_3;
    *(float *)(param_1 + 0xc) = fVar1;
    if (_DAT_0064b254 <= fVar1) goto LAB_00588c43;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
LAB_00588c43:
  uVar3 = __ftol();
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_2 = 0.0;
  return 1;
}

