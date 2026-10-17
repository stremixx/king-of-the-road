
void __fastcall FUN_00632ede(int param_1)

{
  HWND pHVar1;
  
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    pHVar1 = SetFocus(*(HWND *)(param_1 + 0x1c));
    FUN_00633451(pHVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00632ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xac))();
  return;
}

