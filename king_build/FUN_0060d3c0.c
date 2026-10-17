
void __fastcall FUN_0060d3c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006496a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00651fe8;
  local_4 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if (param_1[0x15] != 0) {
    FUN_00631d5c(param_1[0x15]);
    param_1[0x15] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0060c490();
  ExceptionList = pvStack_c;
  return;
}

