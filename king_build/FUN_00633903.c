
void FUN_00633903(int param_1)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  iVar1 = FUN_0063a41d(&LAB_0063949c);
  if (*(int *)(iVar1 + 0x14) != param_1) {
    if (*(int *)(iVar1 + 0x2c) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,FUN_0063370d,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(iVar1 + 0x2c) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_006318d9();
      }
    }
    *(int *)(iVar1 + 0x14) = param_1;
  }
  return;
}

