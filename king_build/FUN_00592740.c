
undefined4 * __thiscall FUN_00592740(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f1020(param_2,0xb,1);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064f898;
  uVar1 = FUN_00631d33(8000);
  param_1[0xe] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

