
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005aad90(float *param_1,float *param_2)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1 - *param_2;
  local_8 = param_1[1] - param_2[1];
  local_4 = param_1[2] - param_2[2];
  fVar1 = (float10)FUN_005aabc0(&local_c);
  if (ABS(fVar1) < (float10)_DAT_0064a738) {
    return 1;
  }
  return 0;
}

