
void Catch_0044c0b1(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x18);
  if (uVar1 != 0) {
    if (uVar1 < 0x81) {
      FUN_00401aa0();
      puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
      *puVar2 = *(undefined4 *)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4) = puVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(*(undefined4 *)(unaff_EBP + -0x14));
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

