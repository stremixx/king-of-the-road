
BOOL __fastcall FUN_0063622b(int param_1)

{
  HMENU hMenu;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  hMenu = (HMENU)Detach();
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}

