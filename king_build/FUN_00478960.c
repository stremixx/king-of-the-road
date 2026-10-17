
void FUN_00478960(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x1c), iVar2 != *(int *)(iVar1 + 0x20))) {
    do {
      iVar1 = *(int *)(iVar2 + 0x78);
      if (iVar1 != *(int *)(iVar2 + 0x7c)) {
        do {
          FUN_004776a0(iVar1);
          iVar1 = iVar1 + 0x10;
        } while (iVar1 != *(int *)(iVar2 + 0x7c));
      }
      iVar2 = iVar2 + 0x90;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x14) + 0x20));
  }
  return;
}

