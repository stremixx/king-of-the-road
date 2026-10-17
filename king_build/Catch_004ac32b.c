
void Catch_004ac32b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puVar2 = *(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 0x24);
  while (puVar2 = puVar2 + 1, puVar2 < (undefined4 *)(iVar1 + 4U)) {
    FUN_0061c888(*puVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

