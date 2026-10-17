
undefined4 FUN_0041ba70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x204) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x204) + 4), iVar1 != -1)) {
    uVar2 = *(undefined4 *)(*(int *)(DAT_0068bf38 + iVar1 * 4) + 4);
  }
  if ((*(int *)(param_1 + 0x208) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x208) + 4), iVar1 != -1)) {
    uVar2 = *(undefined4 *)(*(int *)(DAT_0068bf38 + iVar1 * 4) + 4);
  }
  return uVar2;
}

