
undefined4 * __thiscall
FUN_004d2490(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041d3f0(&param_4);
  FUN_00557e00(param_2,param_3);
  *param_1 = &PTR_FUN_0064c224;
  param_1[4] = &PTR_LAB_0064c138;
  param_1[0x44] = &PTR_LAB_0064c0ec;
  param_1[0x62] = &PTR_LAB_0064c0e8;
  local_4 = 0;
  FUN_004cf280(param_1);
  ExceptionList = local_c;
  return param_1;
}

