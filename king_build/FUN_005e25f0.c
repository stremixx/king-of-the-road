
void __fastcall FUN_005e25f0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648ac8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00651560;
  local_4 = 0;
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 4))(1);
  }
  local_4 = 0xffffffff;
  FUN_00637062();
  ExceptionList = pvStack_c;
  return;
}

