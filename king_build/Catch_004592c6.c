
void Catch_004592c6(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  
  uVar2 = *(int *)(unaff_EBP + 0xc) + 8U & 0xfffffff8;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
      *puVar1 = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = puVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(*(undefined4 *)(unaff_EBP + -0x14));
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

