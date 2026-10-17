
void Catch_00453058(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  for (puVar4 = puVar1; puVar4 != puVar2; puVar4 = puVar4 + 0x30) {
    FUN_00418590();
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    uVar3 = *(int *)(unaff_EBP + -0x14) * 0xc0;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *puVar1 = *(undefined4 *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = puVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(puVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

