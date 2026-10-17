
void Catch_00489983(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_00401aa0();
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = DAT_0068c138;
  DAT_0068c164 = 0;
  DAT_0068c138 = puVar1;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

