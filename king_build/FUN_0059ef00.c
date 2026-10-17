
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0059ef00(int param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = ABS((float10)*(float *)(param_1 + 0x48) * (float10)*param_2 +
              (float10)*(float *)(param_1 + 0x4c) * (float10)param_2[1] +
              (float10)*(float *)(param_1 + 0x50) * (float10)param_2[2] +
              (float10)*(float *)(param_1 + 0x54)) /
          ((float10)*(float *)(param_1 + 0x74) - (float10)*(float *)(param_1 + 0x70));
  if ((float10)_DAT_0064b240 < fVar1) {
    return (float10)_DAT_0064b240;
  }
  if (fVar1 < (float10)_DAT_0064b254) {
    fVar1 = (float10)_DAT_0064b254;
  }
  return fVar1;
}

