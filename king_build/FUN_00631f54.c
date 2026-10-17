
undefined4 FUN_00631f54(void)

{
  int *piVar1;
  int *piVar2;
  HANDLE hEvent;
  HANDLE hHandle;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBP;
  
  FUN_0061f6cc();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffac;
  piVar2 = (int *)piVar1[1];
  *(int **)(unaff_EBP + -0x14) = piVar2;
  FUN_0063304a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_00639805();
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(*piVar1 + 4);
  FUN_00639a37();
  iVar3 = FUN_0063a41d(&LAB_00639396);
  *(int **)(iVar3 + 4) = piVar2;
  FUN_0063215d();
  iVar3 = FUN_00639a37();
  if ((((*(int *)(iVar3 + 4) != 0) && (piVar2[7] == 0)) &&
      (iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x1c), iVar3 != 0)) && (*(int *)(iVar3 + 0x1c) != 0))
  {
    FUN_00633496(*(undefined4 *)(iVar3 + 0x1c));
    piVar2[7] = unaff_EBP + -0x50;
    uVar4 = FUN_0063200b();
    return uVar4;
  }
  hEvent = (HANDLE)piVar1[4];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  hHandle = (HANDLE)piVar1[5];
  SetEvent(hEvent);
  WaitForSingleObject(hHandle,0xffffffff);
  CloseHandle(hHandle);
  if ((code *)piVar2[0x14] == (code *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x50))();
    if (iVar3 == 0) {
      uVar5 = (**(code **)(*piVar2 + 0x68))();
    }
    else {
      uVar5 = (**(code **)(*piVar2 + 0x54))();
    }
  }
  else {
    uVar5 = (*(code *)piVar2[0x14])(piVar2[0x13]);
  }
  CWnd::Detach((CWnd *)(unaff_EBP + -0x50));
  AfxEndThread(uVar5,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd((CWnd *)(unaff_EBP + -0x50));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}

