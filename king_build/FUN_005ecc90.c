
void __thiscall FUN_005ecc90(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x10) != 6) {
    if (*(int *)(param_1 + 0x40) == 0) {
      *(int *)(param_1 + 0x40) = param_2;
      *(int *)(param_2 + 0x24) = param_1;
      return;
    }
    FUN_005d1840(*(int *)(param_1 + 0x40));
    *(int *)(param_2 + 0x24) = param_1;
    return;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    *(int *)(param_1 + 0x44) = param_2;
    return;
  }
  FUN_005d1840(*(int *)(param_1 + 0x44));
  return;
}

