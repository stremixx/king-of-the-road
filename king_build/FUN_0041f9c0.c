
undefined4 * __thiscall FUN_0041f9c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  param_1[2] = 0;
  fVar1 = (float10)FUN_00401000();
  param_1[6] = 0;
  *(double *)(param_1 + 4) = (double)fVar1;
  param_1[7] = 0;
  param_1[8] = s_PresentPick_0066c7f8;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_0064a70c;
  param_1[2] = param_1[2] | 1;
  fVar1 = (float10)FUN_00401000();
  *(double *)(param_1 + 4) = (double)fVar1;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  *param_1 = &PTR_LAB_0064a708;
  return param_1;
}

