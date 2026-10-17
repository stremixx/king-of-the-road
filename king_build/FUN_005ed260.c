
undefined4 __thiscall FUN_005ed260(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x40)) {
    return 0;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_2 + 4);
  *(int *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40) * 4) = param_2;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return 1;
}

