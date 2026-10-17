
void __fastcall FUN_005efea0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00648e08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00651830;
  uStack_4 = 0;
  FUN_00631d5c(param_1[3]);
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = pvStack_c;
  return;
}

