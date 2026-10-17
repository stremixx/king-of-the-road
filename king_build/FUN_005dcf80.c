
undefined4 __thiscall FUN_005dcf80(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = false;
  uVar2 = *(uint *)(param_1 + 0x10c) & 0x400;
  if ((uVar2 != 0) && ((param_5 & 0x400) == 0)) {
    bVar1 = true;
  }
  if ((uVar2 == 0) && ((param_5 & 0x400) != 0)) {
    SetWindowLongA(*(HWND *)(param_1 + 0x184),-0x10,-0x80000000);
  }
  if (param_4 == -1) {
    param_4 = *(int *)(param_1 + 0x108);
  }
  if (param_5 == 0xffffffff) {
    param_5 = *(uint *)(param_1 + 0x10c);
  }
  iVar3 = FUN_005dd190(param_2,param_3,param_4,param_5);
  if (iVar3 == 0) {
    return 0;
  }
  if (((*(byte *)(DAT_007206b0 + 0x124) & 2) != 0) && ((param_5 & 0x400) == 0)) {
    iVar3 = FUN_005d7bf0(2);
    iVar4 = FUN_005d7bf0(1);
    param_2 = param_2 - (iVar3 + iVar4);
    iVar3 = FUN_005d7bf0(4);
    iVar4 = FUN_005d7bf0(3);
    param_3 = param_3 - (iVar3 + iVar4);
  }
  FUN_005e11e0(param_2,param_3,param_4,param_5);
  if ((*(uint *)(param_1 + 0x10c) & 0x400) == 0) {
    iVar3 = FUN_005d3620();
    iVar4 = FUN_005d3630();
    iVar5 = FUN_005d7bf0(2);
    iVar6 = FUN_005d7bf0(1);
    iVar5 = iVar5 + iVar6 + iVar3 * param_2;
    iVar3 = FUN_005d7bf0(4);
    iVar6 = FUN_005d7bf0(3);
    iVar3 = iVar6 + iVar4 * param_3 + iVar3;
    iVar4 = GetSystemMetrics(0);
    iVar6 = (iVar4 - iVar5) / 2;
    iVar4 = GetSystemMetrics(1);
    uVar2 = *(uint *)(DAT_007206b0 + 0x124);
    iVar4 = (iVar4 - iVar3) / 2;
    *(uint *)(DAT_007206b0 + 0x124) = uVar2 & 0xfffffffe;
    FUN_00632e26(&DAT_0072c9b8,iVar6,iVar4,iVar5,iVar3,0x40);
    if (bVar1) {
      SetWindowLongA(*(HWND *)(param_1 + 0x184),-0x10,0xcf0000);
      FUN_00632e26(&DAT_0072c9b8,iVar6,iVar4,iVar5,iVar3,0x60);
    }
    *(uint *)(DAT_007206b0 + 0x124) = *(uint *)(DAT_007206b0 + 0x124) | uVar2 & 1;
  }
  iVar3 = FUN_005d3160();
  FUN_005cf1d0(iVar3 == 2);
  return 1;
}

