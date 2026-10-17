
undefined4 FUN_00636d9b(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_00684f18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00635c2d(*(undefined4 *)(unaff_EBP + 8));
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar1 == -1) {
    iVar1 = *(int *)(unaff_EBP + 8);
  }
  uVar2 = FUN_00636d63(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00635a91();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

