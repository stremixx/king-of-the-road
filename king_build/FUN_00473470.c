
int FUN_00473470(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined1 *local_3f4 [250];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fbeb;
  local_c = ExceptionList;
  local_3f8 = param_1;
  uStack_3fc = 0x47349c;
  ExceptionList = &local_c;
  local_3f8 = FUN_00472a30();
  local_4 = 0;
  FUN_004896a0(&uStack_3fc);
  FUN_00478f00(local_3f4);
  local_4 = 0xffffffff;
  local_3f8 = 0x4734d7;
  FUN_00473230();
  local_3f4[0] = (undefined1 *)&local_3f8;
  local_3f8 = *(undefined4 *)(DAT_0068a8f0 + 4);
  uStack_3fc = 0x4734f2;
  puVar1 = (undefined4 *)FUN_004042b0();
  *(undefined4 *)(*(int *)(DAT_0068a8f0 + 4) + 0x68) = *puVar1;
  ExceptionList = local_c;
  return *(int *)(DAT_0068a8f0 + 4) + 8;
}

