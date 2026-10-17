
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004be750(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  if ((float10)_DAT_0064b3f0 < fVar1) {
    fVar1 = fVar1 - (float10)_DAT_0064b3f0;
  }
  if (fVar1 < (float10)_DAT_0064b254) {
    fVar1 = fVar1 + (float10)_DAT_0064b3f0;
  }
  if (fVar1 < (float10)_DAT_0064b3f4) {
    return ((float10)param_2 - (float10)param_1) * fVar1 * (float10)_DAT_0064b410 + (float10)param_1
    ;
  }
  if (fVar1 < (float10)_DAT_0064b40c) {
    return (float10)param_2;
  }
  if (fVar1 < (float10)_DAT_0064b408) {
    return ((float10)_DAT_0064b408 - fVar1) * ((float10)param_2 - (float10)param_1) *
           (float10)_DAT_0064b410 + (float10)param_1;
  }
  return (float10)param_1;
}

