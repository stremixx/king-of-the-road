
undefined4 __thiscall FUN_005bb560(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x10) != param_2)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x10) = param_2;
  uVar2 = uVar1 | 4;
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x1c) = CONCAT31((int3)(uVar1 >> 8),(char)uVar2) | 1;
  }
  return 1;
}

