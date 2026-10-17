
undefined4 __thiscall FUN_005ed930(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x1c)) {
    return 0;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    return 0;
  }
  *(int *)(param_2 + 0x28) = param_1;
  *(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4) = param_2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return 1;
}

