
COLORREF __thiscall FUN_00636545(int param_1,COLORREF param_2)

{
  COLORREF CVar1;
  
  CVar1 = 0xffffffff;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    CVar1 = SetBkColor(*(HDC *)(param_1 + 4),param_2);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    CVar1 = SetBkColor(*(HDC *)(param_1 + 8),param_2);
  }
  return CVar1;
}

