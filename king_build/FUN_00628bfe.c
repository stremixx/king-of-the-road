
int FUN_00628bfe(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0072d434 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0072d434 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_0072d434 != (FARPROC)0x0) {
        DAT_0072d438 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_0072d43c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_00628c4d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_00628c4d:
    if (DAT_0072d438 != (FARPROC)0x0) {
      iVar1 = (*DAT_0072d438)();
      if ((iVar1 != 0) && (DAT_0072d43c != (FARPROC)0x0)) {
        iVar1 = (*DAT_0072d43c)(iVar1);
      }
    }
    iVar1 = (*DAT_0072d434)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

