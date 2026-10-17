
undefined4 __fastcall FUN_005ed650(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + iVar1 * 4) + 0x30))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(param_1);
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
  return 1;
}

