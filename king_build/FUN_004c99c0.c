
undefined4 * __thiscall FUN_004c99c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(0x62,s_CWindDebris_006718dc);
  param_1[9] = param_3;
  local_4 = 0;
  *param_1 = &PTR_FUN_0064b8fc;
  param_1[8] = param_2;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  ExceptionList = local_c;
  return param_1;
}

