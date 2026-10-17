
void __fastcall FUN_004d9e20(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00645108;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064c414;
  local_4 = 0;
  if (DAT_00695694 != (int *)0x0) {
    (**(code **)(*DAT_00695694 + 0x24))();
    if (DAT_00695694 != (int *)0x0) {
      (**(code **)*DAT_00695694)(1);
    }
    DAT_00695694 = (int *)0x0;
  }
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}

