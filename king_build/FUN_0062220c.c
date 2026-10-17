
undefined4 FUN_0062220c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_0062387b();
  DAT_00685940 = TlsAlloc();
  if (DAT_00685940 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_0062431d(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00685940,lpTlsValue);
      if (BVar1 != 0) {
        FUN_00622260(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

