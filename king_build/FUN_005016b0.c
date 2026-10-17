
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005016b0(int param_1,int param_2,float *param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  if (*param_3 == _DAT_0064b254) {
    return 0;
  }
  if (param_4 == _DAT_0064b254) {
    *(undefined4 *)(param_1 + 0x3cac + param_2 * 0x14) = 0;
    *(undefined4 *)(param_1 + (param_2 * 5 + 0xf28) * 4) = 0;
    return 1;
  }
  iVar2 = param_2 * 0x14;
  piVar1 = (int *)(param_1 + (param_2 * 5 + 0xf28) * 4);
  iVar4 = param_1 + param_2 * 0x14;
  param_2 = *piVar1;
  if (*(float *)(param_1 + 0x3cac + iVar2) < _DAT_0064b254) {
    return 0;
  }
  if (param_2 == *(int *)(iVar4 + 0x3ca4)) {
    param_2 = param_2 + -1;
  }
  fVar3 = *(float *)(iVar4 + 0x3cac) - (float)param_2 / (float)*(int *)(iVar4 + 0x3ca4);
  if (ABS(fVar3) * param_4 <= *param_3) {
    *param_3 = *param_3 - ABS(fVar3) * param_4;
    fVar3 = *(float *)(iVar4 + 0x3cac) - fVar3;
    *(float *)(iVar4 + 0x3cac) = fVar3;
    if (fVar3 < _DAT_0064b254) {
      *(undefined4 *)(iVar4 + 0x3cac) = 0;
    }
    iVar4 = __ftol();
    *piVar1 = iVar4;
    return 1;
  }
  if (fVar3 <= _DAT_0064b254) {
    fVar3 = *param_3 / param_4 + *(float *)(iVar4 + 0x3cac);
    *(float *)(iVar4 + 0x3cac) = fVar3;
    if (fVar3 <= _DAT_0064b254) goto LAB_005017c0;
  }
  else {
    fVar3 = *(float *)(iVar4 + 0x3cac) - *param_3 / param_4;
    *(float *)(iVar4 + 0x3cac) = fVar3;
    if (_DAT_0064b254 <= fVar3) goto LAB_005017c0;
  }
  *(undefined4 *)(iVar4 + 0x3cac) = 0;
LAB_005017c0:
  iVar4 = __ftol();
  *piVar1 = iVar4;
  *param_3 = 0.0;
  return 0;
}

