
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005cd140(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1[3] * (float10)param_1[3];
  fVar2 = ((float10)param_1[1] - (float10)param_2[1]) * ((float10)param_1[1] - (float10)param_2[1])
          + ((float10)*param_1 - (float10)*param_2) * ((float10)*param_1 - (float10)*param_2);
  if (fVar1 < fVar2) {
    return (float10)_DAT_0064b254;
  }
  fVar1 = (fVar1 - fVar2) / ((float10)_DAT_00650c5c * fVar1);
  if ((float10)_DAT_0064b240 < fVar1) {
    fVar1 = (float10)_DAT_0064b240;
  }
  return fVar1;
}

