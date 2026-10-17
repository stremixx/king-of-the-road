
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005a88b0(float param_1,float param_2,float *param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 + (float10)param_1;
  if ((float10)_DAT_0064b240 < fVar1) {
    fVar1 = (float10)_DAT_0064b3fc - fVar1;
  }
  return ((float10)param_2 * (float10)param_3[1] +
         ((float10)_DAT_0064b240 - (float10)param_2) * (float10)param_3[3]) * fVar1 +
         ((float10)_DAT_0064b240 - fVar1) *
         ((float10)param_2 * (float10)*param_3 +
         ((float10)_DAT_0064b240 - (float10)param_2) * (float10)param_3[2]);
}

