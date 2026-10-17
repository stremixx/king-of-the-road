
void FUN_0063215d(void)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  int iVar3;
  
  iVar1 = FUN_00639a37();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_00639805();
    dwThreadId = GetCurrentThreadId();
    pHVar2 = SetWindowsHookExA(-1,(HOOKPROC)&LAB_00632627,(HINSTANCE)0x0,dwThreadId);
    *(HHOOK *)(iVar1 + 0x30) = pHVar2;
    iVar1 = FUN_0063a4df(&LAB_006394d0);
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar3 = FUN_00639a37();
      (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar3 + 8));
    }
    FUN_0063a41d(&LAB_006394e5);
  }
  return;
}

