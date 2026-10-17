
void __thiscall FUN_00636b2f(int param_1,int param_2)

{
  HCURSOR pHVar1;
  
  FUN_0063a70e(2);
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + param_2;
  if (*(int *)(param_1 + 0xa0) < 1) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    SetCursor(*(HCURSOR *)(param_1 + 0xa4));
  }
  else {
    pHVar1 = SetCursor(DAT_0072d014);
    if ((0 < param_2) && (*(int *)(param_1 + 0xa0) == 1)) {
      *(HCURSOR *)(param_1 + 0xa4) = pHVar1;
    }
  }
  FUN_0063a77e(2);
  return;
}

