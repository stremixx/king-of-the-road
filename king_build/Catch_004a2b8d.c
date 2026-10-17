
void Catch_004a2b8d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  for (puVar2 = *(undefined4 **)(unaff_EBP + 8); puVar2 < puVar1; puVar2 = puVar2 + 1) {
    FUN_0061c888(*puVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

