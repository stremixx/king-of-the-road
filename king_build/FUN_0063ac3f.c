
void FUN_0063ac3f(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  LPCSTR lpClassName;
  
  iVar2 = FUN_00639a37();
  FUN_0063a70e(1);
  lpClassName = (LPCSTR)(iVar2 + 0x34);
  while (*lpClassName != '\0') {
    puVar3 = (undefined1 *)FUN_0061fc35(lpClassName,10);
    *puVar3 = 0;
    iVar4 = FUN_00639a37();
    UnregisterClassA(lpClassName,*(HINSTANCE *)(iVar4 + 8));
    lpClassName = puVar3 + 1;
  }
  *(LPCSTR)(iVar2 + 0x34) = '\0';
  FUN_0063a77e(1);
  iVar2 = FUN_00639a37();
  if ((*(int *)(iVar2 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(iVar2 + 4) + 0x54), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,0);
  }
  iVar2 = FUN_00639805();
  if (*(int **)(iVar2 + 0xcc) != (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(iVar2 + 0xcc) + 0xb8))();
    if (iVar4 != 0) {
      *(undefined4 *)(iVar2 + 0xcc) = 0;
    }
  }
  iVar4 = FUN_00639a37();
  if (*(char *)(iVar4 + 0x14) == '\0') {
    if (*(HHOOK *)(iVar2 + 0x30) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(iVar2 + 0x30));
      *(undefined4 *)(iVar2 + 0x30) = 0;
    }
    if (*(HHOOK *)(iVar2 + 0x2c) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(iVar2 + 0x2c));
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
  }
  return;
}

