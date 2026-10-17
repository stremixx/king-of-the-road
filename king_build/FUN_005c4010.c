
void __fastcall FUN_005c4010(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1ef0);
  while (0 < iVar1) {
    *(int *)(param_1 + 0x1ef0) = iVar1 + -1;
    iVar1 = *(int *)(param_1 + 0xf50 + (iVar1 + -1) * 4);
    if (iVar1 != 0) {
      FUN_00602560();
      FUN_00631d5c(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x1ef0);
  }
  *(undefined4 *)(param_1 + 0x1f20) = 0;
  *(undefined4 *)(param_1 + 0x1f08) = 1;
  *(undefined4 *)(param_1 + 0x1f0c) = 1;
  *(undefined4 *)(param_1 + 0x1f24) = 0;
  FUN_005dfa70();
  return;
}

