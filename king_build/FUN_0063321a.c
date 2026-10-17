
undefined4 FUN_0063321a(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  
  if (((param_2 == -2) && (((param_3 == 0x201 || (param_3 == 0x207)) || (param_3 == 0x204)))) &&
     (iVar1 = FUN_006349bc(), iVar1 != 0)) {
    pHVar2 = GetLastActivePopup(*(HWND *)(iVar1 + 0x1c));
    iVar1 = FUN_00633451(pHVar2);
    if (iVar1 != 0) {
      pHVar2 = GetForegroundWindow();
      iVar3 = FUN_00633451(pHVar2);
      if ((iVar1 != iVar3) && (iVar3 = FUN_00632e9c(), iVar3 != 0)) {
        SetForegroundWindow(*(HWND *)(iVar1 + 0x1c));
        return 1;
      }
    }
  }
  return 0;
}

