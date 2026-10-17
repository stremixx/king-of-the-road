
void __fastcall FUN_005a3ee0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00647b51;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650348;
  param_1[0x40] = &PTR_LAB_006502fc;
  local_4 = 1;
  (**(code **)(*(int *)param_1[8] + 0x24))();
  if ((undefined4 *)param_1[0x51] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x51])(1);
  }
  FUN_005d2a60();
  local_4 = local_4 & 0xffffff00;
  FUN_005eec90();
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}

