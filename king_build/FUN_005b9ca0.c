
int __thiscall FUN_005b9ca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(ushort *)(param_1 + 0x1a) == 0) {
    return 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x1a) < param_2) {
    return 0;
  }
  if (param_2 == 0) {
    return *(int *)(param_1 + 8);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = (uint)*(ushort *)(param_1 + 0x18) * (uint)*(ushort *)(param_1 + 0x16) *
          (uint)*(ushort *)(param_1 + 0x14);
  iVar1 = iVar1 + (iVar1 >> 0x1f & 3U);
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      iVar2 = iVar2 + (iVar1 >> 2);
      iVar1 = (iVar1 >> 2) + (iVar1 >> 0x1f & 3U);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar2;
}

