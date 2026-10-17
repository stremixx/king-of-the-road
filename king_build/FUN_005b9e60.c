
uint __thiscall FUN_005b9e60(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = ((int)param_3 % (int)(uint)*(ushort *)(param_1 + 0x16)) *
          (uint)*(ushort *)(param_1 + 0x14) + param_2 % (int)(uint)*(ushort *)(param_1 + 0x14);
  if (*(short *)(param_1 + 0x18) == 1) {
    return (uint)*(byte *)(*(int *)(param_1 + 8) + iVar1);
  }
  if (*(short *)(param_1 + 0x18) == 2) {
    return (uint)*(ushort *)(*(int *)(param_1 + 8) + iVar1 * 2);
  }
  return param_3;
}

