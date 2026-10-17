
void __thiscall FUN_005c44f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1ef8);
  uVar2 = FUN_0061db0f(uVar1);
  iVar3 = FUN_005aa810(uVar1);
  while (iVar3 != -0x10) {
    if (iVar3 == -0x100) {
      FUN_0061dd53(uVar1,uVar2,0);
      return;
    }
    if (iVar3 == -1) {
      FUN_005c4400(param_2,param_3);
    }
    else {
      iVar3 = FUN_005aa810(uVar1);
      iVar4 = FUN_0061db0f(uVar1,0);
      FUN_0061dd53(uVar1,iVar4 + iVar3 + 4);
    }
    iVar3 = FUN_005aa810(uVar1);
  }
  iVar3 = FUN_005aa810(uVar1);
  if (iVar3 == 4) {
    iVar3 = FUN_005aa810(uVar1);
    *(uint *)(param_1 + 0x1f04) = (uint)(iVar3 != 0);
    FUN_005aa810(uVar1);
    return;
  }
  uVar2 = FUN_005aa810(uVar1);
  *(undefined4 *)(param_1 + 0x1f04) = uVar2;
  FUN_005aa810(uVar1);
  FUN_005aa810(uVar1);
  return;
}

