
void __thiscall FUN_0063a225(DWORD *param_1,int param_2,int param_3)

{
  undefined4 *lpTlsValue;
  HLOCAL pvVar1;
  DWORD *pDVar2;
  
  lpTlsValue = TlsGetValue(*param_1);
  if (lpTlsValue == (undefined4 *)0x0) {
    lpTlsValue = (undefined4 *)FUN_00639feb(0x10);
    if (lpTlsValue == (undefined4 *)0x0) {
      lpTlsValue = (undefined4 *)0x0;
    }
    else {
      *lpTlsValue = &PTR_FUN_00653598;
    }
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    pDVar2 = lpTlsValue + 2;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    FUN_00639f92(lpTlsValue);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  }
  else {
    pDVar2 = lpTlsValue + 2;
    if ((param_2 < (int)*pDVar2) || (param_3 == 0)) goto LAB_0063a2fc;
  }
  if ((HLOCAL)lpTlsValue[3] == (HLOCAL)0x0) {
    pvVar1 = LocalAlloc(0,param_1[3] << 2);
  }
  else {
    pvVar1 = LocalReAlloc((HLOCAL)lpTlsValue[3],param_1[3] << 2,2);
  }
  lpTlsValue[3] = pvVar1;
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_006318d9();
  }
  _memset((void *)(lpTlsValue[3] + *pDVar2 * 4),0,(*pDVar2 * 0x3fffffff + param_1[3]) * 4);
  *pDVar2 = param_1[3];
  TlsSetValue(*param_1,lpTlsValue);
LAB_0063a2fc:
  *(int *)(lpTlsValue[3] + param_2 * 4) = param_3;
  return;
}

