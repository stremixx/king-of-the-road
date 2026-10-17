
undefined4 * __thiscall
FUN_0052ca90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052ad30(param_2,param_3,param_4,param_5,param_6);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064dde0;
  param_1[0x40] = &PTR_LAB_0064dd94;
  param_1[0x5e] = &PTR_LAB_0064dd90;
  FUN_00545cf0(param_1 + 0x94c,param_1 + 0x94b);
  ExceptionList = local_c;
  return param_1;
}

