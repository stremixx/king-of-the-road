
int __thiscall FUN_005b0df0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_0071f834 != 0) {
    return 0;
  }
  if ((DAT_00701dec & 0x2000000) != 0) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x2c);
  if (-1 < iVar2) {
    do {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x2044) + 0x20 + iVar2 * 0x7c);
      iVar2 = *(int *)(param_1 + 0x2044) + iVar2 * 0x7c;
      if ((uVar1 & 0x4000) != 0) {
        (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1b,0);
        return 0;
      }
      if ((uVar1 & 0x80000) == 0) {
        FUN_005afec0(iVar2,0,1);
        (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1b,1);
        DAT_00701dcc = 0;
        return iVar2;
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
    } while (-1 < iVar2);
  }
  (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1b,0);
  return 0;
}

