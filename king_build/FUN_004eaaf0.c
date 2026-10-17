
undefined4 * __thiscall
FUN_004eaaf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00592340(param_2,1);
  param_1[6] = param_3;
  local_4 = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_0064c95c;
  param_1[9] = param_4;
  param_1[7] = param_5;
  FUN_004eab70();
  ExceptionList = local_c;
  return param_1;
}

