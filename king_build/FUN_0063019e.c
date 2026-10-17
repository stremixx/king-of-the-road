
undefined4 __fastcall FUN_0063019e(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x50);
  iVar7 = 1;
  if (1 < local_8) {
    iVar7 = local_8;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 < uVar1) {
    iVar2 = uVar1 - uVar4;
  }
  else {
    iVar2 = 0;
  }
  if (local_8 <= iVar2 + iVar7) {
    if (local_8 < 2) {
      local_8 = 1;
    }
    if (uVar4 < uVar1) {
      iVar7 = uVar1 - uVar4;
    }
    else {
      iVar7 = 0;
    }
    local_8 = iVar7 + local_8;
  }
  iVar7 = 0;
  if (*(code **)(param_1 + 0x5c) == (code *)0x0) {
    iVar2 = FUN_00631d33(local_8);
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x5c))();
  }
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar4 = *(uint *)(param_1 + 0x10);
    if (uVar4 < uVar1) {
      iVar6 = uVar1 - uVar4;
    }
    else {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      if (uVar4 < uVar1) {
        iVar7 = uVar1 - uVar4;
      }
      else {
        iVar7 = 0;
      }
      FUN_0061f900(iVar2,uVar4,iVar7);
      uVar4 = *(uint *)(param_1 + 0x10);
      iVar7 = iVar2 - uVar4;
    }
    if (*(code **)(param_1 + 0x60) == (code *)0x0) {
      FUN_00631d5c(uVar4);
    }
    else {
      (**(code **)(param_1 + 0x60))();
    }
    FUN_00630c81(iVar2,local_8 + iVar2,0);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar7;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar7;
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar7;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      iVar6 = *(int *)(param_1 + 0x1c);
      iVar5 = *(int *)(param_1 + 0x20) + iVar7;
      iVar7 = iVar2 + iVar7;
      *(int *)(param_1 + 0x20) = iVar5;
      *(int *)(param_1 + 0x18) = iVar7;
      *(int *)(param_1 + 0x1c) = iVar7;
      if (iVar5 != 0) {
        *(int *)(param_1 + 0x1c) = (iVar7 - iVar2) + iVar6;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

