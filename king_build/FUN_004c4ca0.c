
void __fastcall FUN_004c4ca0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644b48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064b760;
  local_4 = 0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(3);
    param_1[8] = 0;
  }
  param_1[10] = 0;
  param_1[9] = 0;
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}

