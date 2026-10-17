
undefined4 * __thiscall FUN_004b0c70(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  *param_1 = &PTR_LAB_0064b034;
  fVar1 = (float10)FUN_0048a870(param_3,param_3 + 4);
  *(double *)(param_1 + 4) = (double)fVar1;
  fVar1 = (float10)FUN_0048a870(param_4,param_4 + 4);
  *(double *)(param_1 + 6) = (double)fVar1;
  if (param_2 != 0) {
    param_1[2] = param_1[2] | 1;
  }
  ExceptionList = local_c;
  return param_1;
}

