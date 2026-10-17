
undefined4 __thiscall FUN_005fc8f0(int param_1,int param_2)

{
  if (DAT_00722a88 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != param_2)) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  FUN_00604590(*(undefined4 *)(param_1 + 0xc));
  FUN_00604550(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 4));
  return 1;
}

