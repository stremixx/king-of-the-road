
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ccb40(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x4c) == 3) {
    fVar1 = *(float *)(param_1 + 0x40) - (float)*(double *)(DAT_00695184 + 0xb90) * _DAT_0064b248;
    *(float *)(param_1 + 0x40) = fVar1;
    if (_DAT_0064b254 < fVar1) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else if (*(int *)(param_1 + 0x4c) == 4) {
    fVar1 = (float)*(double *)(DAT_00695184 + 0xb90) * _DAT_0064b248 + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x40) = fVar1;
    if (fVar1 < _DAT_0064b240) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    return 1;
  }
  return 0;
}

