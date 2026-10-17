
int * FUN_00630505(void)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    *extraout_ECX = (int)&DAT_0065458c;
    FUN_0062fb96();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar1 = FUN_00631d33(0x54);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006306ff();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0062fd5e(uVar2,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00654588;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  return extraout_ECX;
}

