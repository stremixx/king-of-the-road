
void __fastcall FUN_00462cc0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0063f520;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00462d10(*(undefined4 *)(param_1 + 4));
  ExceptionList = local_10;
  return;
}

