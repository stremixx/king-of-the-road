
void __fastcall FUN_005a68a0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      piVar2 = *(int **)(*(int *)(param_1 + 0x24) + iVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x24))();
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x24) + iVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 0x24));
  }
  return;
}

