
void FUN_004915f0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 0x107c) == 0x400) {
    FUN_00602180(&param_2,param_2);
    return;
  }
  *(int *)(param_1 + 0x7c + *(int *)(param_1 + 0x107c) * 4) = param_2;
  *(int *)(param_1 + 0x107c) = *(int *)(param_1 + 0x107c) + 1;
  return;
}

