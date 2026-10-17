
undefined4 Catch_00633655(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0x14);
  pCVar1 = AfxGetThread();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x6c))(*(undefined4 *)(unaff_EBP + -0x20),unaff_EBP + -0x4c)
  ;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  FUN_00635d5c();
  return 0x6335c3;
}

