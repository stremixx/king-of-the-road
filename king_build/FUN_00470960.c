
undefined4 * __thiscall FUN_00470960(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  FUN_004709b0(param_2);
  ExceptionList = local_c;
  return param_1;
}

