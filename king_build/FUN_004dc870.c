
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc870(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (_DAT_0064b3f8 <= param_2[2] * _DAT_0064b320 + param_1[2]) {
    local_c = *param_2 * _DAT_0064b320 + *param_1;
    local_8 = param_2[1] * _DAT_0064b320 + param_1[1];
    local_4 = param_2[2] * _DAT_0064b320 + param_1[2];
    iVar2 = FUN_004dc820(&local_c);
    if (iVar2 != 0) {
      fVar1 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = fVar1;
      param_3[2] = 4.0;
      fVar1 = param_2[1];
      *param_4 = *param_2;
      param_4[1] = fVar1;
      param_4[2] = 0.0;
      return;
    }
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  return;
}

