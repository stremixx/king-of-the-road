
undefined4 FUN_006367c1(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_0061f6cc();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x20) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    uVar2 = FUN_00631d21(&LAB_00636aab);
    iVar3 = FUN_00631d33(0x48);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00635fd3(&PTR_s_CTempGdiObject_00653290,4,1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(pAVar1 + 0x20) = uVar4;
    FUN_00631d21(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x20);
}

