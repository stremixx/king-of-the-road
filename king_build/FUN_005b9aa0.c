
uint __thiscall FUN_005b9aa0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined3 uVar3;
  
  if (*(int *)(param_1 + 0x328) == 1) {
    return param_2 & 0xff;
  }
  if (*(int *)(param_1 + 0x328) == 2) {
    param_2 = param_2 & 0xff;
    iVar1 = param_1 + param_2 * 2;
    uVar3 = (undefined3)((uint)iVar1 >> 8);
    uVar2 = FUN_005b58c0(CONCAT31(uVar3,*(undefined1 *)(param_2 * 3 + param_1 + 0x18)),
                         CONCAT31(uVar3,*(undefined1 *)(param_2 + iVar1 + 0x19)),
                         CONCAT31(uVar3,*(undefined1 *)(param_2 + 0x1a + iVar1)));
    return uVar2;
  }
  iVar1 = param_1 + (param_2 & 0xff) * 3;
  return (uint)CONCAT21(CONCAT11(*(undefined1 *)((param_2 & 0xff) * 3 + param_1 + 0x18),
                                 *(undefined1 *)(iVar1 + 0x19)),*(undefined1 *)(iVar1 + 0x1a));
}

