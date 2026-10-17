
void __fastcall FUN_005ad330(int param_1)

{
  if (0 < *(int *)(param_1 + 0x2030)) {
    *(int *)(param_1 + 0x2030) = *(int *)(param_1 + 0x2030) + -1;
    FUN_0050b580(param_1);
    if (0 < *(int *)(param_1 + 0x2030)) {
      FUN_005acc60(*(int *)(param_1 + 0x2030) * 0x50 + 0x1800 + param_1);
    }
  }
  return;
}

