
LRESULT __thiscall FUN_00638edb(int param_1,int param_2,LPARAM param_3)

{
  SHORT SVar1;
  uint uVar2;
  HWND hWnd;
  HWND pHVar3;
  LRESULT LVar4;
  uint uVar5;
  
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    uVar5 = 8;
  }
  else {
    uVar5 = 0;
  }
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  hWnd = GetFocus();
  pHVar3 = GetDesktopWindow();
  if (hWnd == (HWND)0x0) {
    LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x20a,param_2 << 0x10 | uVar5 | uVar2,param_3);
  }
  else {
    do {
      LVar4 = SendMessageA(hWnd,0x20a,param_2 << 0x10 | uVar5 | uVar2,param_3);
      hWnd = GetParent(hWnd);
      if (LVar4 != 0) {
        return LVar4;
      }
      if (hWnd == (HWND)0x0) {
        return 0;
      }
      LVar4 = 0;
    } while (hWnd != pHVar3);
  }
  return LVar4;
}

