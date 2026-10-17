
void __thiscall FUN_005db4d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  if ((iVar1 != *(int *)(param_1 + 0x1c8) + -1) &&
     ((iVar1 != 99 || (*(int *)(param_1 + 0x1c8) != 0)))) {
    *(undefined4 *)(param_1 + 0x38 + iVar1 * 4) = param_2;
    iVar1 = *(int *)(param_1 + 0x1cc) + 1;
    *(int *)(param_1 + 0x1cc) = iVar1;
    if (99 < iVar1) {
      *(undefined4 *)(param_1 + 0x1cc) = 0;
    }
  }
  return;
}

