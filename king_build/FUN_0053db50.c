
undefined4 * __thiscall FUN_0053db50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(100,s__Traffic_Light_00678224);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064e418;
  FUN_0053d960();
  FUN_005c2750(param_3,param_1 + 9,4);
  ExceptionList = local_c;
  return param_1;
}

