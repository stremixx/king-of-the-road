
undefined4 * __thiscall
FUN_00435730(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  float10 fVar1;
  
  param_1[2] = 0;
  fVar1 = (float10)FUN_00401000();
  param_1[6] = param_3;
  param_1[7] = param_4;
  *(double *)(param_1 + 4) = (double)fVar1;
  param_1[10] = param_2;
  param_1[8] = param_5;
  *param_1 = &PTR_LAB_0064a910;
  return param_1;
}

