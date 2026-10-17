
void __fastcall FUN_00639304(int param_1)

{
  if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x10))();
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_00636e9c("Settings","PreviewPages",*(int *)(param_1 + 0xb4));
  }
  return;
}

