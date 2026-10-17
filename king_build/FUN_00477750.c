
void FUN_00477750(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 != *(int *)(param_1 + 0x9c)) {
    do {
      FUN_004776a0(iVar1);
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != *(int *)(param_1 + 0x9c));
  }
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x98);
  FUN_004776a0(param_1 + 0xa8);
  iVar1 = *(int *)(param_1 + 0x1fc);
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
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x1fc) + 0x20));
  }
  iVar1 = *(int *)(param_1 + 0x200);
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
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x200) + 0x20));
  }
  return;
}

