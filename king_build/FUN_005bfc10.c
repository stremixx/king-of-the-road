
undefined4 * __thiscall
FUN_005bfc10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647f43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bcc90(param_2,param_3);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_006508a0;
  param_1[0x54] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x53) = 0;
  iVar1 = FUN_00631d33(0x158);
  local_4._0_1_ = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005bddb0(&DAT_0068c120,param_3,param_3,0);
  }
  param_1[0x55] = iVar1;
  *(undefined4 *)(iVar1 + 0x154) = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005bd2a0(param_1[0x55],0);
  param_1[0x4d] = param_4;
  param_1[0x52] = 0;
  param_1[0x4e] = 1;
  param_1[0xe] = param_1[0xe] + param_4 + 2;
  if (param_1[4] == 0) {
    param_1[0x4f] = 2;
  }
  else {
    param_1[0x4f] = *(int *)(param_1[4] + 0x14) + 2;
  }
  param_1[0x51] = param_1[0x4f] + param_4;
  param_1[0x50] = (param_1[0xd] - param_1[0xb]) + -1;
  param_1[0x56] = 5;
  param_1[0x57] = 0;
  ExceptionList = local_c;
  return param_1;
}

