
undefined4 __fastcall FUN_004c80d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 400) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 400) + -1;
  *(int *)(param_1 + 400) = iVar1;
  return *(undefined4 *)(param_1 + iVar1 * 4);
}

