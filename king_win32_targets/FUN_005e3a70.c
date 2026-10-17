
void __fastcall FUN_005e3a70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    while (iVar1 == 0) {
      Sleep(10);
      iVar1 = *(int *)(param_1 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  SetEvent(*(HANDLE *)(param_1 + 0x24));
  iVar1 = *(int *)(param_1 + 0x20);
  while (iVar1 != 0) {
    Sleep(10);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  return;
}

