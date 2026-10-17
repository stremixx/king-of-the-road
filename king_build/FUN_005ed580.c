
undefined4 __fastcall FUN_005ed580(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffe;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + iVar1 * 4) + 0x24))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  return 1;
}

