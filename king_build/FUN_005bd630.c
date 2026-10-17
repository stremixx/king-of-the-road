
void __thiscall FUN_005bd630(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_8;
  
  if ((*(uint *)(param_1 + 0x20) & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x120);
  iVar4 = 0;
  while (iVar1 != 0) {
    iVar1 = FUN_005d2730();
    iVar4 = iVar4 + 1;
  }
  iVar1 = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  else {
    param_2 = (uint)(iVar4 % param_2 != 0) + iVar4 / param_2;
  }
  iVar3 = *(int *)(param_1 + 0x120);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x34) - *(int *)(iVar3 + 0x2c);
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
      local_10 = iVar2;
    }
    iVar3 = *(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x30);
    if (local_14 < iVar3) {
      local_14 = iVar3;
    }
    iVar3 = FUN_005d2730();
  }
  if (param_3 < 0) {
    param_3 = -(iVar1 + param_3);
  }
  if (param_4 < 0) {
    param_4 = -(local_14 + param_4);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar2 = 0;
  local_8 = 0;
  while (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x3c);
    while (iVar2 < iVar4) {
      *(int *)(iVar1 + 0x34) = local_10;
      *(int *)(iVar1 + 0x38) = local_14;
      *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + iVar3;
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + iVar3;
      iVar2 = iVar2 + 1;
      *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + iVar5;
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + iVar5;
      if (iVar2 % param_2 == 0) {
        iVar5 = iVar5 + local_14 + param_4;
        break;
      }
      iVar5 = iVar5 + local_14 + param_4;
      iVar1 = FUN_005d2730();
    }
    if (local_8 < iVar5) {
      local_8 = iVar5;
    }
    if ((iVar1 == 0) || (iVar1 = FUN_005d2730(), iVar1 == 0)) break;
    iVar3 = iVar3 + local_10 + param_3;
    iVar1 = FUN_005d2730();
  }
  FUN_005bd330();
  return;
}

