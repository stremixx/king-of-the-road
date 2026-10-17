
void __fastcall FUN_005ed420(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648d88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006517a0;
  iVar2 = 0;
  local_4 = 0;
  if (0 < (int)param_1[7]) {
    do {
      puVar1 = *(undefined4 **)(param_1[8] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[7]);
  }
  FUN_00631d5c(param_1[8]);
  FUN_00631d5c(param_1[9]);
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = pvStack_c;
  return;
}

