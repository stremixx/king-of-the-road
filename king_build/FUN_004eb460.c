
undefined4 __thiscall FUN_004eb460(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  switch(param_2) {
  case 0:
    break;
  case 1:
    if (*(int *)(param_1 + 0x3ca0) < *(int *)(param_1 + 0x3ca4)) {
      FUN_005010f0(0);
      return 1;
    }
    return 2;
  case 2:
    if (*(int *)(param_1 + 0x3cb4) < *(int *)(param_1 + 0x3cb8)) {
      FUN_005010f0(1);
      return 1;
    }
    return 2;
  case 3:
    iVar2 = _rand();
    iVar2 = iVar2 % *(int *)(param_1 + 0xdd4);
    iVar3 = iVar2 + 0x13;
    if (*(int *)(param_1 + (iVar2 + 0xf3b + iVar3 * 4) * 4) <
        *(int *)(param_1 + 0x3ca4 + iVar3 * 0x14)) {
      FUN_005010f0(iVar3);
      return 1;
    }
    return 2;
  default:
    return 0;
  }
  uVar1 = _rand();
  uVar1 = uVar1 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  iVar2 = uVar1 + 3;
  if (*(int *)(param_1 + (uVar1 + 0xf2b + iVar2 * 4) * 4) <
      *(int *)(param_1 + 0x3ca4 + iVar2 * 0x14) + -1) {
    FUN_005010f0(iVar2);
    return 1;
  }
  return 2;
}

