
void FUN_00480f80(undefined4 param_1)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006400e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490d40(param_1,&DAT_0066eddc,local_10);
  local_4 = 0;
  FUN_00475bc0(param_1);
  local_4 = 0xffffffff;
  FUN_00490d90(param_1,local_10);
  ExceptionList = local_c;
  return;
}

