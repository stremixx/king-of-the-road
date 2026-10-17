
undefined4 __fastcall FUN_005dcab0(int param_1)

{
  UINT_PTR UVar1;
  
  DAT_0071f87c = GetDC(*(HWND *)(param_1 + 0x1c));
  FUN_005d3350(DAT_0071f87c);
  DAT_0071f880 = *(undefined4 *)(param_1 + 0x1c);
  UVar1 = SetTimer(*(HWND *)(param_1 + 0x1c),0,0x14,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0xbc) = UVar1;
  return 1;
}

