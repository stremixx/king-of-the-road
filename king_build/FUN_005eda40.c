
void __fastcall FUN_005eda40(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (uVar2 != 0) {
      iVar3 = 0;
      for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      if ((*(int *)(iVar1 + 0x8c) != iVar3) && (iVar3 < *(int *)(iVar1 + 0x60))) {
        *(int *)(iVar1 + 0x8c) = iVar3;
        FUN_005b5b90(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 100) + iVar3 * 4));
      }
    }
  }
  return;
}

