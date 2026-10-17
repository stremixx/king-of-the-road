
void __thiscall FUN_0058ac50(float *param_1,float *param_2)

{
  float fVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  fVar1 = param_2[3];
  param_1[3] = fVar1;
  fVar1 = -fVar1;
  param_1[4] = fVar1 * *param_1;
  param_1[5] = fVar1 * param_1[1];
  param_1[6] = fVar1 * param_1[2];
  return;
}

