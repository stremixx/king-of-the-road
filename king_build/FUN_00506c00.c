
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00506c00(float param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  
  if (param_1 < param_2 * (float)_DAT_0064a5a8) {
    param_1 = param_2 * (float)_DAT_0064a5a8;
  }
  fVar3 = ABS(param_1 - param_2);
  fVar1 = (float10)FUN_0061d200(fVar3);
  fVar2 = ROUND((float10)1.4426950408889634 * -fVar1);
  fVar1 = (float10)f2xm1((float10)1.4426950408889634 * -fVar1 - fVar2);
  fVar1 = (float10)fscale((float10)1 + fVar1,fVar2);
  param_3 = (float)(((float10)param_3 / (float10)param_4) * fVar1);
  if (param_1 < param_2) {
    fVar1 = (float10)fsin(((float10)param_1 / (float10)param_2) * (float10)_DAT_0064c9f0);
    param_3 = (float)(SQRT(fVar1) * (float10)param_3);
  }
  fVar1 = (float10)_DAT_0064b240;
  if (param_1 < param_2) {
    fVar1 = (float10)FUN_0061d200(fVar3);
  }
  return fVar1 * (float10)param_3;
}

