
void FUN_00639eab(COLORREF param_1,undefined4 param_2)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  HBRUSH pHVar3;
  
  iVar1 = FUN_00639a37();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_00639805();
    if (*(int *)(iVar1 + 0x2c) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,FUN_0063370d,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(iVar1 + 0x2c) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_006318d9();
      }
    }
  }
  iVar1 = FUN_0063a4df(&LAB_006396f3);
  FUN_006369e5((undefined4 *)(iVar1 + 4));
  pHVar3 = CreateSolidBrush(param_1);
  *(undefined4 *)(iVar1 + 4) = pHVar3;
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (pHVar3 == (HBRUSH)0x0) {
    FUN_006368b5();
  }
  return;
}

