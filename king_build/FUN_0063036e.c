
int __thiscall FUN_0063036e(int param_1,int param_2,int param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if ((param_4 & 1) != 0) {
    FUN_0063032e();
    if (param_3 == 0) {
      iVar3 = *(int *)(param_1 + 0x24);
    }
    else if (param_3 == 1) {
      iVar3 = *(int *)(param_1 + 0x28);
    }
    else {
      if (param_3 != 2) {
        return -1;
      }
      iVar3 = *(int *)(param_1 + 0x2c);
    }
    uVar1 = iVar3 + param_2;
    iVar3 = uVar1 - *(uint *)(param_1 + 0x24);
    if (uVar1 < *(uint *)(param_1 + 0x24)) {
      return -1;
    }
    if (*(uint *)(param_1 + 0x2c) < uVar1) {
      return -1;
    }
    if (*(uint *)(param_1 + 0x2c) != 0) {
      *(uint *)(param_1 + 0x28) = uVar1;
    }
  }
  if ((param_4 & 2) == 0) {
    return iVar3;
  }
  if ((*(int *)(param_1 + 0x20) == 0) && (iVar3 = FUN_006302b7(0xffffffff), iVar3 == -1)) {
    return -1;
  }
  if (param_3 == 0) {
    iVar3 = *(int *)(param_1 + 0x18);
  }
  else if (param_3 == 1) {
    iVar3 = *(int *)(param_1 + 0x1c);
  }
  else {
    if (param_3 != 2) {
      return -1;
    }
    iVar3 = *(int *)(param_1 + 0x20);
  }
  uVar1 = iVar3 + param_2;
  iVar3 = uVar1 - *(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x18) <= uVar1) {
    if (uVar1 <= *(uint *)(param_1 + 0x20)) {
LAB_0063042a:
      if (*(int *)(param_1 + 0x20) != 0) {
        *(uint *)(param_1 + 0x1c) = uVar1;
        return iVar3;
      }
      return iVar3;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      iVar2 = *(int *)(param_1 + 0x50);
      if (*(int *)(param_1 + 0x50) <= iVar3) {
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 0x50) = iVar2;
      iVar2 = FUN_0063019e();
      if (iVar2 != -1) goto LAB_0063042a;
    }
  }
  return -1;
}

