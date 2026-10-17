
void FUN_00634128(void)

{
  int iVar1;
  HWND hWnd;
  BOOL BVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  iVar1 = FUN_00639a37();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 4);
  FUN_00639a37();
  FUN_00632ad8();
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(iVar1 + 0xb0))();
  if (iVar1 != 0) {
    (**(code **)(*extraout_ECX + 0xf0))();
  }
  SendMessageA((HWND)extraout_ECX[7],0x1f,0,0);
  FUN_00634a9e(extraout_ECX[7],0x1f,0,0,1,1);
  iVar1 = FUN_006349bc();
  SendMessageA(*(HWND *)(iVar1 + 0x1c),0x1f,0,0);
  FUN_00634a9e(*(undefined4 *)(iVar1 + 0x1c),0x1f,0,0,1,1);
  hWnd = GetCapture();
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x1f,0,0);
  }
  BVar2 = WinHelpA(*(HWND *)(iVar1 + 0x1c),*(LPCSTR *)(*(int *)(unaff_EBP + -0x10) + 0x8c),
                   *(UINT *)(unaff_EBP + 0xc),*(ULONG_PTR *)(unaff_EBP + 8));
  if (BVar2 == 0) {
    FUN_00636d9b(0xf107,0,0xffffffff);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00639a37();
  FUN_00632aed();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

