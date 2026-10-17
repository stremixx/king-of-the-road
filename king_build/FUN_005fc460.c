
undefined4 FUN_005fc460(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_00722a88 != 0) {
    return 0;
  }
  DAT_00722a88 = 1;
  DAT_00722a90 = 0;
  DAT_00722a94 = 0;
  iVar1 = FUN_00604140(10,FUN_005fc430);
  DAT_00722a98 = 0;
  puVar4 = &DAT_00722a08;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00603df0(iVar1);
  return uVar2;
}

