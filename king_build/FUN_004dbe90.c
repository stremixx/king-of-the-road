
void __fastcall FUN_004dbe90(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006451c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064c4dc;
  local_4 = 0;
  if ((code *)param_1[8] != (code *)0x0) {
    (*(code *)param_1[8])(&DAT_007015b0,1,param_1[9]);
  }
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}

