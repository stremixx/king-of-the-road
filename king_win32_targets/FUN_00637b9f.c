
void __fastcall FUN_00637b9f(int param_1)

{
  HMENU hMenu;
  HMENU pHVar1;
  int iVar2;
  
  FUN_006386c9();
  if (*(int *)(param_1 + 0x44) != 0) {
    hMenu = *(HMENU *)(param_1 + 0x44);
    pHVar1 = GetMenu(*(HWND *)(param_1 + 0x1c));
    if (pHVar1 != hMenu) {
      SetMenu(*(HWND *)(param_1 + 0x1c),hMenu);
    }
  }
  iVar2 = FUN_00639a37();
  if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(*(int *)(iVar2 + 4) + 0x1c) == param_1)) {
    WinHelpA(*(HWND *)(param_1 + 0x1c),(LPCSTR)0x0,2,0);
  }
  FUN_00633b3f();
  return;
}

