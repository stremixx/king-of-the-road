
void __fastcall FUN_00632e9c(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    IsWindowEnabled(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00632eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xa4))();
  return;
}

