
undefined4 * __thiscall
FUN_005a35d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(param_3,s_touch_0067d828);
  local_4 = 0;
  *param_1 = &PTR_FUN_006502b0;
  FUN_005a3640(param_4);
  param_1[9] = param_2;
  FUN_005d2c20(param_1);
  ExceptionList = local_c;
  return param_1;
}

