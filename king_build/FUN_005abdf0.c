
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall
FUN_005abdf0(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float10 fVar4;
  
  fVar3 = param_8 - param_2;
  fVar1 = param_9 - param_3;
  param_8 = param_5 - param_2;
  param_9 = param_6 - param_3;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *param_1 = (param_10 - param_4) * param_9 - fVar1 * (param_7 - param_4);
  param_1[1] = (param_7 - param_4) * fVar3 - (param_10 - param_4) * param_8;
  param_1[2] = fVar1 * param_8 - param_9 * fVar3;
  fVar4 = (float10)FUN_005aabc0(param_1);
  if ((float10)_DAT_0064a920 <= fVar4) {
    pfVar2 = (float *)FUN_005aaad0(&param_8,param_1);
    *param_1 = *pfVar2;
    param_1[1] = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  else {
    *param_1 = 0.0;
    fVar3 = 0.0;
    param_1[1] = -1.0;
  }
  param_1[2] = fVar3;
  param_1[3] = param_2 * -*param_1 + -param_1[2] * param_4 + param_3 * -param_1[1];
  return param_1;
}

