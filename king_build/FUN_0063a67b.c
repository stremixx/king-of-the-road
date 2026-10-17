
int FUN_0063a67b(void)

{
  DWORD DVar1;
  
  if (DAT_0072cfd4 == 0) {
    DAT_0072cfd4 = 1;
    DVar1 = GetVersion();
    if (((byte)DVar1 < 4) && ((DVar1 & 0x80000000) != 0)) {
      DAT_0072cfd0 = 1;
    }
    else {
      DAT_0072cfd0 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0072ce20);
    }
  }
  return DAT_0072cfd4;
}

