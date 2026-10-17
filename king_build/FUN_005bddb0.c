
undefined4 * __thiscall
FUN_005bddb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647ed9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bcc90(param_2,param_3);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_006507f4;
  param_1[0x52] = param_5;
  puVar1 = (undefined4 *)FUN_00631d33(0x120);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005beed0(&DAT_0068c120,param_4,0);
    *puVar1 = &PTR_FUN_006507c0;
  }
  local_4._0_1_ = 0;
  FUN_005bd2a0(puVar1,0);
  puVar1 = (undefined4 *)FUN_00631d33(0x120);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005beed0(&DAT_0068c120,param_4,1);
    *puVar1 = &PTR_FUN_006507c0;
  }
  local_4._0_1_ = 0;
  FUN_005bd2a0(puVar1,0);
  puVar1 = (undefined4 *)FUN_00631d33(0x120);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005beed0(&DAT_0068c120,param_4,2);
    *puVar1 = &PTR_FUN_006507c0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005bd2a0(puVar1,0);
  param_1[0x51] = 0xffffffff;
  param_1[0x55] = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  ExceptionList = local_c;
  return param_1;
}

