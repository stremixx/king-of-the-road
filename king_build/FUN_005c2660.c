
void __fastcall FUN_005c2660(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647ff3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005c26c0();
  local_4 = 0xffffffff;
  FUN_0061ccb5(param_1,0x20,10,FUN_005d9830);
  ExceptionList = local_c;
  return;
}

