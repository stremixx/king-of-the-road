
void __fastcall FUN_0051df80(int param_1)

{
  int iVar1;
  
  FUN_005c03f0();
  FUN_0051c8c0(DAT_006cdc38 + 0x278,*(undefined4 *)(param_1 + 0x1f8));
  if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 500) + 0x28) = 1;
    FUN_005d7cc0();
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1f8) + 300);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 500) + 0x28) = 0;
    FUN_005d7cc0();
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 500) + 0x28) = 1;
  FUN_005d7cc0();
  return;
}

