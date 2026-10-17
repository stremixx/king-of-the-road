
DWORD * FUN_00622273(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_00685940);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_0062431d(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00685940,lpTlsValue);
      if (BVar1 != 0) {
        FUN_00622260(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_006222ce;
      }
    }
    __amsg_exit(0x10);
  }
LAB_006222ce:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

