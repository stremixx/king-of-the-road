
int * FUN_0062fd5e(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_0065453c;
    FUN_0062fb96();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00654538;
  FUN_0062fc5a(uVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  puVar1 = (uint *)(*(int *)(*extraout_ECX + 4) + 0x24 + (int)extraout_ECX);
  *puVar1 = *puVar1 | 1;
  extraout_ECX[2] = 0;
  extraout_ECX[1] = 0;
  return extraout_ECX;
}

