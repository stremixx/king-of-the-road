
void __fastcall FUN_005bc610(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647e5f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650784;
  param_1[4] = &PTR_LAB_00650770;
  local_4 = 1;
  FUN_00631d5c(param_1[7]);
  local_4 = 0xffffffff;
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 4)) = &PTR_LAB_0064c80c;
  *param_1 = &PTR_FUN_00650788;
  FUN_00631d5c(param_1[3]);
  FUN_00631d5c(param_1[2]);
  ExceptionList = local_c;
  return;
}

