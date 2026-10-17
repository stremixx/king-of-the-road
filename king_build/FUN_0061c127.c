
void __fastcall FUN_0061c127(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_00631a58();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}

