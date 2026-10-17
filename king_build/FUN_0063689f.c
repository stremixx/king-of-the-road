
BOOL __fastcall FUN_0063689f(int param_1)

{
  HGDIOBJ ho;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  ho = (HGDIOBJ)Detach();
  BVar1 = DeleteObject(ho);
  return BVar1;
}

