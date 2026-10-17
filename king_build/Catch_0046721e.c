
void Catch_0046721e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  if (*(undefined4 **)(unaff_EBP + 0x10) != puVar2) {
    puVar3 = *(undefined4 **)(unaff_EBP + 0x10) + 6;
    do {
      FUN_004030a0(*puVar3,puVar3[1]);
      FUN_00451450();
      FUN_004030a0(puVar3[-3],puVar3[-2]);
      FUN_0044a450();
      puVar1 = puVar3 + 3;
      puVar3 = puVar3 + 9;
    } while (puVar1 != puVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

