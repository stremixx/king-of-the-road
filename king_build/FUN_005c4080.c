
int __thiscall FUN_005c4080(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1ef8);
  uVar2 = FUN_0061db0f(uVar1);
  if (param_2 == 0) {
    iVar3 = FUN_0061db0f(uVar1,0);
    FUN_0061dd53(uVar1,iVar3 + -4);
    iVar3 = FUN_005aa810(uVar1);
    if (iVar3 == 4) {
      iVar3 = FUN_0061db0f(uVar1,0);
      FUN_0061dd53(uVar1,iVar3 + -8);
      uVar5 = FUN_005aa810(uVar1);
      *(uint *)(param_1 + 0x1f04) = uVar5 & 0xfffff;
      iVar3 = ((int)uVar5 >> 0x14) * 1000;
      iVar4 = FUN_0061db0f(uVar1,0);
      iVar4 = iVar4 + -0x10;
    }
    else {
      iVar3 = FUN_0061db0f(uVar1,0);
      FUN_0061dd53(uVar1,iVar3 + -0xc);
      uVar2 = FUN_005aa810(uVar1);
      *(undefined4 *)(param_1 + 0x1f04) = uVar2;
      iVar3 = FUN_005aa810(uVar1);
      iVar4 = FUN_0061db0f(uVar1,0);
      iVar4 = iVar4 + -0x14;
    }
    FUN_0061dd53(uVar1,iVar4);
    iVar4 = FUN_005aa810(uVar1);
    iVar4 = iVar4 + 0xc;
    iVar6 = FUN_0061db0f(uVar1,0);
    FUN_0061dd53(uVar1,iVar6 - iVar4);
    iVar6 = FUN_005aa810(uVar1);
    while( true ) {
      if (iVar6 == -0x10) {
        iVar6 = FUN_0061db0f(uVar1,0);
        FUN_0061dd53(uVar1,iVar6 + -4 + iVar4);
        return iVar3;
      }
      if (iVar6 == -0x1000) break;
      if (iVar6 == -1) {
        iVar4 = FUN_0061db0f(uVar1);
        FUN_005c4400(0,0);
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        iVar4 = FUN_0061db0f(uVar1,0);
      }
      FUN_0061dd53(uVar1,iVar4 + -8,uVar2);
      iVar4 = FUN_005aa810(uVar1);
      iVar4 = iVar4 + 0xc;
      iVar6 = FUN_0061db0f(uVar1,0);
      FUN_0061dd53(uVar1,iVar6 - iVar4);
      iVar6 = FUN_005aa810(uVar1);
    }
    iVar3 = FUN_0061db0f(uVar1,0);
    FUN_0061dd53(uVar1,iVar3 + -4 + iVar4);
    return -1;
  }
  iVar3 = FUN_005aa810(uVar1);
  while (iVar3 != -0x10) {
    if (iVar3 == -0x100) {
      FUN_0061dd53(uVar1,uVar2,0);
      return -1;
    }
    if (iVar3 == -1) {
      FUN_005c4400(0,0);
    }
    else {
      iVar3 = FUN_005aa810(uVar1);
      iVar4 = FUN_0061db0f(uVar1,0);
      FUN_0061dd53(uVar1,iVar4 + iVar3 + 4);
    }
    iVar3 = FUN_005aa810(uVar1);
  }
  iVar3 = FUN_005aa810(uVar1);
  if (iVar3 != 4) {
    uVar2 = FUN_005aa810(uVar1);
    *(undefined4 *)(param_1 + 0x1f04) = uVar2;
    iVar3 = FUN_005aa810(uVar1);
    FUN_005aa810(uVar1);
    return iVar3;
  }
  uVar5 = FUN_005aa810(uVar1);
  *(uint *)(param_1 + 0x1f04) = uVar5 & 0xfffff;
  FUN_005aa810(uVar1);
  return ((int)uVar5 >> 0x14) * 1000;
}

