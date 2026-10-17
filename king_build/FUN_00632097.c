
int * FUN_00632097(void)

{
  CWinThread *this;
  int iVar1;
  int unaff_EBP;
  int *piVar2;
  
  FUN_0061f6cc();
  this = (CWinThread *)FUN_00631d33(0x68);
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  piVar2 = (int *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (CWinThread *)0x0) {
    piVar2 = (int *)CWinThread::CWinThread
                              (this,*(_func_uint_void_ptr **)(unaff_EBP + 8),
                               *(void **)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_0063224c(*(uint *)(unaff_EBP + 0x18) | 4,*(undefined4 *)(unaff_EBP + 0x14),
                       *(undefined4 *)(unaff_EBP + 0x1c));
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0x78))();
    piVar2 = (int *)0x0;
  }
  else {
    SetThreadPriority((HANDLE)piVar2[10],*(int *)(unaff_EBP + 0x10));
    if ((*(byte *)(unaff_EBP + 0x18) & 4) == 0) {
      ResumeThread((HANDLE)piVar2[10]);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}

