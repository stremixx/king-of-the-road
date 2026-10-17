
void __fastcall thunk_FUN_005cdc70(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar2 = ExceptionList;
  puStack_8 = &LAB_00648388;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650da0;
  puVar3 = (undefined4 *)param_1[6];
  uStack_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    *param_1 = &PTR_LAB_0064c80c;
    ExceptionList = pvVar2;
    return;
  }
  do {
    puVar1 = (undefined4 *)puVar3[2];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    puVar3 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = pvStack_c;
  return;
}

