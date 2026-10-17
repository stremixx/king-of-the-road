
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00608e90(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 8);
  fVar1 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 4);
  fVar4 = SQRT(fVar4 * fVar4 + fVar1 * fVar1) - *(float *)(param_2 + 0x28);
  if (fVar4 <= _DAT_0064b254) {
LAB_00608f12:
    return (float10)_DAT_0064c7a8;
  }
  if (fVar4 <= _DAT_00651eec) {
    if (fVar4 < _DAT_0064b438) goto LAB_00608f12;
    fVar1 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 4);
    fVar2 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 8);
    fVar3 = -*(float *)(param_2 + 0x28);
    if ((fVar3 <= fVar2 * *(float *)(param_1 + 0x3c) - fVar1 * *(float *)(param_1 + 0x40)) &&
       (fVar3 <= fVar2 * *(float *)(param_1 + 0x44) - fVar1 * *(float *)(param_1 + 0x48))) {
      if (*(uint *)(param_2 + 0x18) < 8) {
        return (float10)_DAT_0064b440 / ((float10)fVar4 + (float10)_DAT_0064b240);
      }
      if (((float10)_DAT_00651ee8 <= (float10)fVar4) &&
         ((fVar2 * *(float *)(param_1 + 0x4c) - fVar1 * *(float *)(param_1 + 0x50) < fVar3 ||
          (fVar2 * *(float *)(param_1 + 0x54) - fVar1 * *(float *)(param_1 + 0x58) < fVar3)))) {
        return ((float10)*(float *)(param_2 + 0x14) / (float10)fVar4 + (float10)_DAT_0064b738) *
               (float10)_DAT_0064b248;
      }
      return (float10)*(float *)(param_2 + 0x14) / (float10)fVar4 + (float10)_DAT_0064b738;
    }
  }
  return (float10)_DAT_0064f3d0 / (float10)fVar4;
}

