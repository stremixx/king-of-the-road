
undefined4 FUN_006379a8(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  HMENU pHVar4;
  int extraout_ECX;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_0061f6cc();
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(uint *)(extraout_ECX + 0x8c) = uVar1;
  *(undefined **)(unaff_EBP + 8) = PTR_DAT_00684f18;
  uVar5 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00635c2d(uVar1);
  if (iVar2 != 0) {
    FUN_00635cd8(extraout_ECX + 0xac,*(undefined4 *)(unaff_EBP + 8),0,10);
  }
  FUN_00635554(8);
  uVar3 = GetIconWndClass(*(undefined4 *)(unaff_EBP + 0xc),uVar1);
  iVar2 = FUN_00637795(uVar3,*(undefined4 *)(extraout_ECX + 0xac),*(undefined4 *)(unaff_EBP + 0xc),
                       &DAT_0072cac8,*(undefined4 *)(unaff_EBP + 0x10),uVar1 & 0xffff,0,
                       *(undefined4 *)(unaff_EBP + 0x14));
  if (iVar2 != 0) {
    pHVar4 = GetMenu(*(HWND *)(extraout_ECX + 0x1c));
    *(HMENU *)(extraout_ECX + 0x44) = pHVar4;
    FUN_0063712a(uVar1 & 0xffff);
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      FUN_00634a9e(*(undefined4 *)(extraout_ECX + 0x1c),0x364,0,0,1,1);
    }
    uVar5 = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00635a91();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}

