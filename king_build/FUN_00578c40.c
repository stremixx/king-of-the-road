
undefined4 * __thiscall FUN_00578c40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(param_3,s_UnManager_0067bf00);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064f330;
  FUN_005d2c20(param_1);
  param_1[0x6c] = 0;
  ExceptionList = local_c;
  return param_1;
}

