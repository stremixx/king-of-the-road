
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005e4b90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_3c = *param_1 - *param_2;
  local_38 = param_1[1] - param_2[1];
  local_34 = param_1[2] - param_2[2];
  local_18 = local_3c;
  local_14 = local_38;
  local_10 = local_34;
  FUN_005aaad0(&local_3c,&local_18);
  fVar1 = param_1[3];
  local_24 = local_3c * fVar1 + *param_1;
  local_20 = local_38 * fVar1 + param_1[1];
  local_28 = fVar1 * local_34 + param_1[2];
  fVar1 = param_2[3];
  local_18 = *param_2 - local_3c * fVar1;
  local_14 = param_2[1] - local_38 * fVar1;
  fVar1 = param_2[2] - fVar1 * local_34;
  fVar2 = (local_20 + local_14) * _DAT_0064b248;
  fVar3 = (local_28 + fVar1) * _DAT_0064b248;
  *param_1 = (local_18 + local_24) * _DAT_0064b248;
  local_30 = local_24 - local_18;
  param_1[1] = fVar2;
  local_2c = local_20 - local_14;
  param_1[2] = fVar3;
  local_28 = local_28 - fVar1;
  local_c = local_30;
  local_8 = local_2c;
  local_4 = local_28;
  fVar4 = (float10)FUN_005aabc0(&local_c);
  param_1[3] = (float)(fVar4 * (float10)_DAT_0064b248);
  return;
}

