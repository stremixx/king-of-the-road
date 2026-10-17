
undefined * Catch_00631fdb(void)

{
  int iVar1;
  int unaff_EBP;
  
  CWnd::Detach((CWnd *)(unaff_EBP + -0x50));
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 0x18) = 1;
  SetEvent(*(HANDLE *)(iVar1 + 0x10));
  AfxEndThread(0xffffffff,0);
  return &DAT_00632005;
}

