
void __fastcall FUN_004b9ff0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)();
        FUN_00631d5c(*(undefined4 *)(*(int *)(param_1 + 0x20) + uVar2 * 4));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_005d29a0(1);
  return;
}

