
void FUN_0047bf30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_5;
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ffc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047c680(param_1,param_2);
  local_4 = 0;
  if (local_10 == 0) {
    uVar4 = param_2 - param_1;
    if ((int)(uVar4 & 0xfffffff8) < 0x78) {
      if (param_1 != param_2) {
        while (iVar2 = iVar2 + 8, iVar2 != param_2) {
          FUN_0047e540(param_1,iVar2,0,param_5);
        }
      }
    }
    else {
      iVar2 = param_1 + (((int)uVar4 >> 3) - ((int)uVar4 >> 0x1f) >> 1) * 8;
      FUN_0047c9c0(param_1,iVar2,param_5);
      FUN_0047c9c0(iVar2,param_2,param_5);
      FUN_0047d780(param_1,iVar2,param_2,iVar2 - param_1 >> 3,param_2 - iVar2 >> 3,param_5);
    }
  }
  else {
    iVar5 = ((param_2 - param_1 >> 3) + 1) / 2;
    iVar1 = param_1 + iVar5 * 8;
    if (local_14 < iVar5) {
      FUN_0047cbd0(param_1,iVar1,local_10,local_14,param_5);
      FUN_0047cbd0(iVar1,param_2,local_10,local_14,param_5);
    }
    else {
      iVar5 = iVar1 - param_1 >> 3;
      param_1 = 7;
      FUN_0047e720(iVar2,iVar1,7,param_5);
      if (7 < iVar5) {
        do {
          FUN_0047e900(iVar2,iVar1,local_10,param_1,param_5);
          FUN_0047e900(local_10,local_10 + iVar5 * 8,iVar2,param_1 * 2,param_5);
          param_1 = param_1 << 2;
        } while (param_1 < iVar5);
      }
      iVar5 = param_2 - iVar1 >> 3;
      param_5 = 7;
      FUN_0047e720(iVar1,param_2,7,uVar3);
      if (7 < iVar5) {
        do {
          FUN_0047e900(iVar1,param_2,local_10,param_5,uVar3);
          FUN_0047e900(local_10,local_10 + iVar5 * 8,iVar1,param_5 * 2,uVar3);
          param_5 = param_5 << 2;
        } while (param_5 < iVar5);
      }
    }
    FUN_0047da20(iVar2,iVar1,param_2,iVar1 - iVar2 >> 3,param_2 - iVar1 >> 3,local_10,local_14,uVar3
                );
  }
  FUN_0061c888(local_10);
  ExceptionList = local_c;
  return;
}

