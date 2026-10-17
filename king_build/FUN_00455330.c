
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00455330(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
  iVar3 = iVar2 >> 0x1f;
  uVar4 = 0;
  iVar1 = -iVar3;
  if (iVar2 / 0x638 + iVar3 != iVar3) {
    do {
      FUN_0048e500();
      iVar3 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
      iVar1 = iVar3 * 0x5254e78f;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(iVar3 / 0x638));
  }
  return iVar1;
}

