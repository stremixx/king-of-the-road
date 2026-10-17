
void __fastcall FUN_0051a230(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00645c68;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0061ccb5(param_1 + 0x228,0x20,8,FUN_00600ae0);
  local_4 = 0xffffffff;
  FUN_005d8090();
  ExceptionList = local_c;
  return;
}

