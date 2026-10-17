
void __fastcall FUN_005b57d0(int param_1)

{
  int iVar1;
  
  FUN_005adfb0();
  iVar1 = *(int *)(param_1 + 0x2028) + -1;
  *(int *)(param_1 + 0x2024) = *(int *)(param_1 + 0x2024) + -1;
  *(int *)(param_1 + 0x2028) = iVar1;
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_1 + 0x7ac + iVar1 * 4);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_1 + 0x7fc + iVar1 * 4);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_1 + 0x84c + iVar1 * 4);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x89c + iVar1 * 4);
  return;
}

