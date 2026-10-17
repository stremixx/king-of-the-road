
undefined4 FUN_006387f6(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  HWND hWnd;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_00684f18;
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  uVar4 = 0;
  iVar3 = puVar1[2];
  hWnd = (HWND)puVar1[1];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((iVar3 == -0x208) && ((*(byte *)(puVar1 + 0x19) & 1) != 0)) ||
     ((iVar3 == -0x212 && ((*(byte *)(puVar1 + 0x2d) & 1) != 0)))) {
    uVar2 = GetDlgCtrlID(hWnd);
    hWnd = (HWND)(uVar2 & 0xffff);
  }
  if (hWnd != (HWND)0x0) {
    iVar3 = FUN_00635cb1(hWnd,unaff_EBP + -0x110,0x100);
    if (iVar3 == 0) goto LAB_006388ae;
    FUN_00635cd8(unaff_EBP + -0x10,unaff_EBP + -0x110,1,10);
  }
  if (puVar1[2] == -0x208) {
    lstrcpynA((LPSTR)(puVar1 + 4),*(LPCSTR *)(unaff_EBP + -0x10),0x50);
  }
  else {
    FUN_00635bf8();
  }
  **(undefined4 **)(unaff_EBP + 0x10) = 0;
  SetWindowPos((HWND)*puVar1,(HWND)0x0,0,0,0,0,0x213);
  uVar4 = 1;
LAB_006388ae:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00635a91();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}

