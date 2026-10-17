
void __fastcall thunk_FUN_005f10e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00649128;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00651ca4;
  iVar2 = 0;
  uStack_4 = 0;
  if (0 < (int)param_1[0xd]) {
    do {
      if (*(int *)(param_1[0xc] + iVar2 * 4) != 0) {
        while (puVar1 = *(undefined4 **)(*(int *)(param_1[0xc] + iVar2 * 4) + 8),
              puVar1 != (undefined4 *)0x0) {
          FUN_005d1860();
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(1);
          }
        }
        puVar1 = *(undefined4 **)(param_1[0xc] + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0xd]);
  }
  FUN_00631d5c(param_1[0xc]);
  uStack_4 = 0xffffffff;
  FUN_005eec90();
  ExceptionList = pvStack_c;
  return;
}

