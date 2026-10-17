
void __fastcall FUN_00632d9a(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00632db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x70))();
  return;
}

