
uint __thiscall FUN_005b9720(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 >> 8;
  if (DAT_0067e02c < (int)param_3) {
    return param_2;
  }
  if ((int)param_3 <= DAT_00701de8) {
    return DAT_0067e028;
  }
  iVar1 = (int)((DAT_0067e02c - param_3) * *(int *)(param_1 + 800)) / (DAT_0067e02c - DAT_00701de8);
  if (*(int *)(param_1 + 0x328) == 1) {
    return (uint)*(byte *)(*(int *)(*(int *)(param_1 + 8) + iVar1 * 4) + param_2);
  }
  return (uint)*(ushort *)(*(int *)(*(int *)(param_1 + 8) + iVar1 * 4) + param_2 * 2);
}

