
void FUN_0063a70e(int param_1)

{
  int *piVar1;
  
  if (DAT_0072cfd4 == 0) {
    FUN_0063a67b();
  }
  if (DAT_0072cfd0 == 0) {
    piVar1 = &DAT_0072cddc + param_1;
    if ((&DAT_0072cddc)[param_1] == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0072ce20);
      if (*piVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_0072ce38 + param_1 * 0x18));
        *piVar1 = *piVar1 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0072ce20);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_0072ce38 + param_1 * 0x18));
  }
  return;
}

