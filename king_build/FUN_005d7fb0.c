
undefined4 * __thiscall
FUN_005d7fb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006485d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d81a0(param_2,param_3,param_4,param_5,param_6);
  local_4 = 0;
  FUN_005bf4a0(&DAT_0068c120,param_7,param_8,4,param_3,param_4,param_5,param_6,param_9);
  *param_1 = &PTR_FUN_006511e0;
  uVar1 = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x10);
  param_1[0x10] = &PTR_LAB_006511a0;
  param_1[0xe] = uVar1;
  *(undefined4 *)(uVar1 + 0x2c) = 0;
  *(undefined4 *)(param_1[0xe] + 0x30) = 0;
  *(uint *)(param_1[0xe] + 0x34) = (uint)*(ushort *)param_1[3];
  *(uint *)(param_1[0xe] + 0x38) = (uint)*(ushort *)(param_1[3] + 2);
  ExceptionList = local_c;
  return param_1;
}

