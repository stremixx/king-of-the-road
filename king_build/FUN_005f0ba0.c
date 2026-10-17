
undefined4 * __thiscall FUN_005f0ba0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006490c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005eed00(param_2,1);
  local_4 = 0;
  FUN_005e52e0();
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_00651c58;
  ExceptionList = local_c;
  return param_1;
}

