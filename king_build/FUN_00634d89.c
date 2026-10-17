
undefined4 FUN_00634d89(void)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0061f6cc();
  iVar1 = FUN_006333df(0);
  if (iVar1 != 0) {
    hWnd = *(HWND *)(unaff_EBP + 8);
    iVar1 = FUN_00631be2(hWnd);
    if (iVar1 != 0) {
      uVar3 = FUN_00634d5c(*(undefined4 *)(unaff_EBP + 0xc));
      goto LAB_00634e1d;
    }
    pHVar2 = GetParent(hWnd);
    iVar1 = FUN_00631be2(pHVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) {
      iVar1 = FUN_00631be2(hWnd);
      if (iVar1 != 0) {
        FUN_00633088(hWnd);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x10) = iVar1;
        uVar3 = FUN_00634d5c(*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        CWnd::~CWnd((CWnd *)(unaff_EBP + -0x48));
        goto LAB_00634e1d;
      }
    }
  }
  uVar3 = 0;
LAB_00634e1d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

