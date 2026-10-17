
void FUN_0063a6c0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
  if ((DAT_0072cfd4 != 0) && (DAT_0072cfd4 = DAT_0072cfd4 + -1, DAT_0072cfd0 == 0)) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0072ce20);
    piVar1 = &DAT_0072cddc;
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_0072ce38;
    do {
      if (*piVar1 != 0) {
        DeleteCriticalSection(lpCriticalSection);
        *piVar1 = *piVar1 + -1;
      }
      lpCriticalSection = lpCriticalSection + 1;
      piVar1 = piVar1 + 1;
    } while ((int)lpCriticalSection < 0x72cfd0);
  }
  return;
}

