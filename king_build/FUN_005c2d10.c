
void __thiscall FUN_005c2d10(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1f0c) != 0) {
    if (*(int *)(DAT_00706ecc + 0x1a0) != 0) {
      FUN_00601820(*(int *)(param_2 + 4),*(int *)(param_2 + 8) - *(int *)(param_2 + 4));
    }
    if ((*(int *)(param_1 + 0x1ef8) != 0) && (*(int *)(param_1 + 0x1f00) != 0)) {
      FUN_005aa830(0xffffffff,*(int *)(param_1 + 0x1ef8));
      FUN_005aa830(*(int *)(param_2 + 8) - *(int *)(param_2 + 4),*(undefined4 *)(param_1 + 0x1ef8));
      FUN_0061d9d6(*(int *)(param_2 + 4),*(int *)(param_2 + 8) - *(int *)(param_2 + 4),1,
                   *(undefined4 *)(param_1 + 0x1ef8));
      FUN_005aa830(*(int *)(param_2 + 8) - *(int *)(param_2 + 4),*(undefined4 *)(param_1 + 0x1ef8));
    }
  }
  return;
}

