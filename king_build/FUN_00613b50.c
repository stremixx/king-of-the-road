
void __fastcall FUN_00613b50(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00649808;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006522dc;
  local_4 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0060b270();
  ExceptionList = pvStack_c;
  return;
}

