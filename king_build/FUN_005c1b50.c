
undefined4 __fastcall FUN_005c1b50(int param_1)

{
  if (*(int *)(param_1 + 0x8a0) == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x8a0) != 1) {
    *(undefined4 *)(param_1 + 0x8a0) = 1;
    *(undefined4 *)(param_1 + 0x884) = 0;
    *(undefined4 *)(param_1 + 0x88c) = 0;
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  return 0;
}

