
undefined4 * __thiscall
FUN_004dbdc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006451a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d27c0(s_TankNotify_00671c84);
  local_4 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_5;
  param_1[8] = param_3;
  *param_1 = &PTR_FUN_0064c4dc;
  param_1[10] = param_2;
  param_1[9] = param_4;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  ExceptionList = local_c;
  return param_1;
}

