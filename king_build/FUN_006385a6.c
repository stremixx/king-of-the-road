
undefined4 FUN_006385a6(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  extraout_ECX[9] = extraout_ECX[9] & 0xffffffbf;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX[0x25];
  iVar1 = (**(code **)(*extraout_ECX + 0xd4))();
  uVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(unaff_EBP + 8);
  }
  else {
    *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_00684f18;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar1 = *(int *)(unaff_EBP + 8);
      if (iVar1 != 0) {
        if ((iVar1 == 0xef06) && (extraout_ECX[0x27] != 0)) {
          iVar1 = 0xf005;
        }
        (**(code **)(*extraout_ECX + 0xc4))(iVar1,unaff_EBP + -0x10);
        uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
      }
    }
    else {
      uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
      iVar1 = *(int *)(unaff_EBP + 8);
    }
    FUN_00632dff(uVar2);
    iVar3 = FUN_00634939();
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x94) = iVar1;
      *(int *)(iVar3 + 0x90) = iVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00635a91();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  extraout_ECX[0x25] = iVar1;
  extraout_ECX[0x24] = iVar1;
  return uVar2;
}

