
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aaad0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  if (fVar3 < (float)_DAT_0064a738) {
    *param_1 = DAT_007015b0;
    param_1[1] = DAT_007015b4;
    param_1[2] = DAT_007015b8;
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *param_2 / fVar3;
  param_1[1] = fVar1 / fVar3;
  param_1[2] = fVar2 / fVar3;
  return;
}

