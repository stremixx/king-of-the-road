
int FUN_00636038(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00631be2(iVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_00631be2(iVar1);
      if (iVar3 == 0) {
        uVar4 = FUN_00631d21(&LAB_00636aab);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + 8) = uVar4;
        iVar3 = FUN_00635dd5();
        if (iVar3 == 0) {
          FUN_006318d9();
        }
        piVar5 = (int *)FUN_00631c15(iVar1);
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *piVar5 = iVar3;
        FUN_00631d21(uVar4);
        iVar2 = *(int *)(extraout_ECX + 0x40);
        *(int *)(iVar2 + iVar3) = iVar1;
        if (*(int *)(extraout_ECX + 0x44) == 2) {
          *(int *)(iVar2 + iVar3 + 4) = iVar1;
        }
      }
      else {
        iVar2 = *(int *)(extraout_ECX + 0x40);
        *(int *)(iVar2 + iVar3) = iVar1;
        if (*(int *)(extraout_ECX + 0x44) == 2) {
          *(int *)(iVar2 + iVar3 + 4) = iVar1;
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}

