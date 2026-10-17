
ushort __thiscall FUN_005b96c0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x324) * (param_3 & 0xff);
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8;
  if (*(int *)(param_1 + 0x328) == 1) {
    return (ushort)*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + iVar1 * 4) + param_2);
  }
  return *(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + iVar1 * 4) + param_2 * 2);
}

