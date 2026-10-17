
undefined4 FUN_0063200b(void)

{
  HANDLE hEvent;
  HANDLE hHandle;
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  hEvent = *(HANDLE *)(unaff_EDI + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  hHandle = *(HANDLE *)(unaff_EDI + 0x14);
  SetEvent(hEvent);
  WaitForSingleObject(hHandle,0xffffffff);
  CloseHandle(hHandle);
  if ((code *)unaff_ESI[0x14] == (code *)0x0) {
    iVar2 = (**(code **)(*unaff_ESI + 0x50))();
    if (iVar2 == 0) {
      uVar1 = (**(code **)(*unaff_ESI + 0x68))();
    }
    else {
      uVar1 = (**(code **)(*unaff_ESI + 0x54))();
    }
  }
  else {
    uVar1 = (*(code *)unaff_ESI[0x14])(unaff_ESI[0x13]);
  }
  CWnd::Detach((CWnd *)(unaff_EBP + -0x50));
  AfxEndThread(uVar1,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd((CWnd *)(unaff_EBP + -0x50));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}

