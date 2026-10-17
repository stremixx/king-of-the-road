
void Catch_004a2188(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  puVar2 = (undefined4 *)*puVar1;
  if (puVar1[1] != 0) {
    uVar3 = puVar1[1] * 4;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *puVar2 = *(undefined4 *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = puVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(puVar2);
    }
  }
  *puVar1 = 0;
  puVar1[1] = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

