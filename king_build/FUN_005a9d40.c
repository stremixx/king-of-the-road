
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005a9d40(float param_1,float param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)FUN_005a9bc0(param_1,param_2,param_3);
  dVar2 = (double)fVar3;
  fVar1 = (float)_DAT_0064a5a8;
  fVar3 = (float10)FUN_005a9bc0(param_1 + fVar1,param_2,param_3);
  fVar4 = (float10)FUN_005a9bc0((param_1 + fVar1) - (float)_DAT_0064a5a8,
                                param_2 + (float)_DAT_0064a5a8,param_3);
  fVar3 = ((float10)dVar2 - (float10)(double)fVar3) * (float10)_DAT_0064a770;
  fVar1 = (float)fVar3;
  *param_4 = (float)fVar3;
  fVar3 = ((float10)dVar2 - fVar4) * (float10)_DAT_0064a770;
  param_4[1] = (float)fVar3;
  param_4[2] = (float)SQRT(((float10)_DAT_0064b240 - (float10)fVar1 * (float10)fVar1) -
                           fVar3 * fVar3);
  return (float10)dVar2;
}

