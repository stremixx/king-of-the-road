
void __fastcall FUN_005bd140(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647ea0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0065078c;
  puVar1 = (undefined4 *)param_1[0x48];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005d2730();
    while (puVar2 != (undefined4 *)0x0) {
      FUN_005d1860();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      puVar2 = (undefined4 *)FUN_005d2730();
    }
    (**(code **)*puVar1)(1);
  }
  *param_1 = &PTR_FUN_0064cc74;
  local_4 = 1;
  FUN_00631d5c(param_1[3]);
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = pvStack_c;
  return;
}

