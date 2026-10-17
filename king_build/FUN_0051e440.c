
void __fastcall FUN_0051e440(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00645e98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064d610;
  param_1[0x10] = &PTR_LAB_0064d5d0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5c])(1);
  }
  local_4 = 0xffffffff;
  FUN_005d8090();
  ExceptionList = pvStack_c;
  return;
}

