
void Catch_005ffb67(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  for (puVar2 = *(undefined4 **)(unaff_EBP + 0x10); puVar2 != puVar1; puVar2 = puVar2 + 0xe) {
    FUN_004030a0(*puVar2,puVar2[1]);
    FUN_0044a450();
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

