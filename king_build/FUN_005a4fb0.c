
void __fastcall FUN_005a4fb0(int param_1)

{
  if ((*(uint *)(param_1 + 0xa4) & 0x60) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = 100;
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x20;
  }
  return;
}

