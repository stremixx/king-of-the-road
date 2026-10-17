
void __fastcall FUN_005c3a10(int param_1)

{
  if (*(int *)(param_1 + 0x1ef8) != 0) {
    if (*(int *)(param_1 + 0x1f00) != 0) {
      FUN_005aa830(0xffffff00,*(int *)(param_1 + 0x1ef8));
      FUN_005aa830(4,*(undefined4 *)(param_1 + 0x1ef8));
      FUN_005aa830(*(undefined4 *)(param_1 + 0x1f04),*(undefined4 *)(param_1 + 0x1ef8));
      FUN_005aa830(4,*(undefined4 *)(param_1 + 0x1ef8));
      *(undefined4 *)(param_1 + 0x1f00) = 0;
    }
    FUN_0061c25a(*(undefined4 *)(param_1 + 0x1ef8));
    *(undefined4 *)(param_1 + 0x1ef8) = 0;
  }
  return;
}

