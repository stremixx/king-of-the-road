
undefined4 __fastcall FUN_005db520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (iVar1 == *(int *)(param_1 + 0x1cc)) {
    return 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x38 + iVar1 * 4);
  *(int *)(param_1 + 0x1c8) = iVar1 + 1;
  if (99 < iVar1 + 1) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return uVar2;
}

