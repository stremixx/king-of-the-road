
void __thiscall FUN_0061c1de(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 **)(param_1 + 0xc) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

