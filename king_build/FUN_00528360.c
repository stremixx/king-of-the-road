
undefined4 * __thiscall FUN_00528360(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7dc0(param_2,&DAT_0071f898,0);
  local_4 = 0;
  FUN_005c0960();
  *param_1 = &PTR_FUN_0064db48;
  ExceptionList = local_c;
  return param_1;
}

