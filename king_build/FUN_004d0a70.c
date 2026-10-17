
undefined4 * __thiscall FUN_004d0a70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041d3f0(&stack0x0000000c);
  FUN_0055e1f0(param_2,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064bbec;
  param_1[4] = &PTR_LAB_0064bb00;
  param_1[0x44] = &PTR_LAB_0064bab4;
  param_1[0x62] = &PTR_LAB_0064bab0;
  FUN_005d2a80();
  ExceptionList = local_c;
  return param_1;
}

