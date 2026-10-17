
void __fastcall FUN_004c2ae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00631d33(*(int *)(param_1 + 8) * 0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  iVar2 = 0;
  *(int *)(param_1 + 0x38) = iVar1;
  if (*(int *)(param_1 + 8) != 1 && -1 < *(int *)(param_1 + 8) + -1) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(int *)(iVar1 + *(int *)(param_1 + 0x38)) = iVar1 + 0x18 + *(int *)(param_1 + 0x38);
      iVar1 = iVar1 + 0x18;
    } while (iVar2 < *(int *)(param_1 + 8) + -1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + -0x18 + *(int *)(param_1 + 8) * 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

