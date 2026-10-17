
undefined4 * __thiscall FUN_00491450(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  local_4 = 0;
  *param_1 = &PTR_LAB_0064af28;
  puVar1 = (undefined4 *)FUN_004914f0(&param_2,param_2,param_1);
  param_1[4] = *puVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_LAB_0064af14;
  ExceptionList = local_c;
  return param_1;
}

