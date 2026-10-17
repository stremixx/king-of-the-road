
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0061b0d0(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar6 = FUN_00606970();
  if (uVar1 < uVar6) {
    fVar5 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 8);
    fVar2 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 4);
    fVar5 = SQRT(fVar5 * fVar5 + fVar2 * fVar2) - *(float *)(param_2 + 0x28);
    if (fVar5 <= _DAT_0064b254) {
LAB_0061b165:
      return (float10)_DAT_0064c7a8;
    }
    if (fVar5 <= _DAT_00651eec) {
      if (fVar5 < _DAT_0064b438) goto LAB_0061b165;
      fVar2 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 4);
      fVar3 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 8);
      fVar4 = -*(float *)(param_2 + 0x28);
      if ((fVar4 <= fVar3 * *(float *)(param_1 + 0x3c) - fVar2 * *(float *)(param_1 + 0x40)) &&
         (fVar4 <= fVar3 * *(float *)(param_1 + 0x44) - fVar2 * *(float *)(param_1 + 0x48))) {
        if (*(uint *)(param_2 + 0x18) < 8) {
          return (float10)_DAT_0064b440 / ((float10)fVar5 + (float10)_DAT_0064b240);
        }
        if ((float10)_DAT_00651ee8 <= (float10)fVar5) {
          if (fVar3 * *(float *)(param_1 + 0x4c) - fVar2 * *(float *)(param_1 + 0x50) < fVar4) {
            return ((float10)*(float *)(param_2 + 0x14) * (float10)_DAT_0064b248) / (float10)fVar5;
          }
          if (fVar3 * *(float *)(param_1 + 0x54) - fVar2 * *(float *)(param_1 + 0x58) < fVar4) {
            return ((float10)*(float *)(param_2 + 0x14) * (float10)_DAT_0064b248) / (float10)fVar5;
          }
        }
        return (float10)*(float *)(param_2 + 0x14) / (float10)fVar5;
      }
    }
  }
  return (float10)_DAT_0064b254;
}

