
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0060b7e0(float *param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = SQRT(((float10)param_1[1] - (float10)param_3) * ((float10)param_1[1] - (float10)param_3) +
               ((float10)*param_1 - (float10)param_2) * ((float10)*param_1 - (float10)param_2)) -
          (float10)param_1[2];
  if (fVar1 <= (float10)_DAT_0064b254) {
    fVar1 = (float10)_DAT_0064b254;
  }
  return fVar1;
}

