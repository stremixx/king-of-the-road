
void __fastcall FUN_005dcc20(int param_1)

{
  if (DAT_007206b0 != 0) {
    if (*(int *)(DAT_007206b0 + 0x148) != 0) {
      *(undefined4 *)(DAT_007206b0 + 0x148) = 0;
      *(undefined4 *)(DAT_007206b0 + 0x154) = 1;
      if (*(int *)(DAT_007206b0 + 0x18c) != 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    FUN_005e31c0();
  }
  if (DAT_0071f87c != (HDC)0x0) {
    ReleaseDC(*(HWND *)(param_1 + 0x1c),DAT_0071f87c);
  }
  PostQuitMessage(0);
  return;
}

