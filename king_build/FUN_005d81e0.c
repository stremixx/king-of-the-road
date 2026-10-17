
void __fastcall FUN_005d81e0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648618;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00651228;
  local_4 = 0;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe])(1);
  }
  local_4 = 0xffffffff;
  FUN_005d7f00();
  ExceptionList = pvStack_c;
  return;
}

