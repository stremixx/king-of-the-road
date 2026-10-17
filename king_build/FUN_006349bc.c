
undefined4 __fastcall FUN_006349bc(int param_1)

{
  HWND__ *pHVar1;
  undefined4 uVar2;
  HWND__ *pHVar3;
  
  if ((param_1 != 0) &&
     (pHVar1 = *(HWND__ **)(param_1 + 0x1c), *(HWND__ **)(param_1 + 0x1c) != (HWND__ *)0x0)) {
    do {
      pHVar3 = pHVar1;
      pHVar1 = AfxGetParentOwner(pHVar3);
    } while (pHVar1 != (HWND__ *)0x0);
    uVar2 = FUN_00633451(pHVar3);
    return uVar2;
  }
  return 0;
}

