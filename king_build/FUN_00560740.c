
undefined4 __thiscall FUN_00560740(int param_1,undefined2 param_2)

{
  int iVar1;
  
  if (999 < *(int *)(param_1 + 3000)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 3000) + 1;
  *(int *)(param_1 + 3000) = iVar1;
  *(undefined2 *)(param_1 + iVar1 * 2) = param_2;
  *(undefined1 *)(param_1 + 2000 + *(int *)(param_1 + 3000)) = 0;
  return *(undefined4 *)(param_1 + 3000);
}

