
HANDLE FUN_0061f716(LPSECURITY_ATTRIBUTES param_1,SIZE_T param_2,undefined4 param_3,
                   undefined4 param_4,DWORD param_5,LPDWORD param_6)

{
  LPVOID lpParameter;
  HANDLE pvVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  lpParameter = (LPVOID)FUN_0062431d(1,0x74);
  if (lpParameter != (LPVOID)0x0) {
    FUN_00622260(lpParameter);
    *(undefined4 *)((int)lpParameter + 4) = 0xffffffff;
    *(undefined4 *)((int)lpParameter + 0x48) = param_3;
    *(undefined4 *)((int)lpParameter + 0x4c) = param_4;
    pvVar1 = CreateThread(param_1,param_2,FUN_0061f781,lpParameter,param_5,param_6);
    if (pvVar1 != (HANDLE)0x0) {
      return pvVar1;
    }
    DVar2 = GetLastError();
  }
  FUN_0061c888(lpParameter);
  if (DVar2 != 0) {
    FUN_00620430(DVar2);
  }
  return (HANDLE)0x0;
}

