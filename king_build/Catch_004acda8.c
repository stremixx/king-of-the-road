
void Catch_004acda8(void)

{
  int unaff_EBP;
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 **)(unaff_EBP + 0x30) = &local_10;
  local_c = *(undefined4 *)(unaff_EBP + -0x20);
  local_8 = *(undefined4 *)(unaff_EBP + -0x1c);
  local_4 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 **)(unaff_EBP + 0x30) = auStack_20;
  FUN_004abfc0(unaff_EBP + 0x34);
  FUN_004a2d30();
  local_4 = 0;
  local_8 = 0;
                    /* WARNING: Subroutine does not return */
  local_c = 0x4acde9;
  __CxxThrowException_8();
}

