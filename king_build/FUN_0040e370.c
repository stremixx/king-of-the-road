
undefined1 __thiscall FUN_0040e370(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int *local_18 [2];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bc78;
  local_c = ExceptionList;
  if (*(char *)(param_2 + 8) == '\x02') {
    ExceptionList = &local_c;
    FUN_00407e60(local_18,param_2);
    local_4 = 0;
    uVar1 = FUN_004b6670(local_18,*param_1);
    local_4 = 0xffffffff;
    if (((local_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
      local_18[0][1] = local_18[0][1] + -1;
      if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
        (**(code **)(*local_18[0] + 0xc))(1);
      }
    }
    ExceptionList = local_c;
    return uVar1;
  }
  return 0;
}

