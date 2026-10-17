
undefined4 * __thiscall
FUN_0052cc80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006464a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052afe0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064dde0;
  param_1[0x40] = &PTR_LAB_0064dd94;
  param_1[0x5e] = &PTR_LAB_0064dd90;
  FUN_00545cf0(param_1 + 0x94c,param_1 + 0x94b);
  ExceptionList = local_c;
  return param_1;
}

