
void __thiscall FUN_005ed9d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + iVar1 * 4) + 0x18))(param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x1c));
  }
  return;
}

