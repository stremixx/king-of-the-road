
undefined4 __thiscall
FUN_005beff0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_005bcff0(param_2,param_3,param_4,param_5);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_005e9710(*(undefined4 *)(param_1 + 0xc));
    if ((*(uint *)(param_1 + 0x20) & 0x1000) == 0) {
      iVar3 = *(int *)(param_1 + 0x3c);
      if ((*(uint *)(param_1 + 0x20) & 0x2000) == 0) {
        param_3 = param_3 + (((*(int *)(param_1 + 0x34) + iVar3 * -2) - *(int *)(param_1 + 0x2c)) /
                             2 - iVar1 / 2) + *(int *)(param_1 + 0x2c) + iVar3;
      }
      else {
        param_3 = param_3 + -3 + ((*(int *)(param_1 + 0x34) - iVar3) - iVar1);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x3c);
      param_3 = param_3 + 3 + *(int *)(param_1 + 0x2c) + iVar3;
    }
    uVar2 = *(uint *)(param_1 + 0x11c);
    if (param_5 == 0) {
      uVar2 = uVar2 & 2;
    }
    FUN_005e97a0(param_2,param_3,
                 param_4 + *(int *)(*(int *)(param_1 + 0x10) + 0x14) / 2 +
                           *(int *)(param_1 + 0x30) +
                           ((*(int *)(param_1 + 0x38) + iVar3 * -2) - *(int *)(param_1 + 0x30)) / 2
                           + iVar3,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + ((uVar2 & 3) + 2) * 0x24),0);
  }
  return 0;
}

