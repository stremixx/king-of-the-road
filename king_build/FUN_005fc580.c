
void FUN_005fc580(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_00722a88 != 0) {
    DAT_00722a88 = 0;
    FUN_006044d0();
    iVar2 = 0;
    if (0 < DAT_00722a90) {
      do {
        iVar1 = *(int *)(DAT_00722a94 + iVar2 * 4);
        if (iVar1 != 0) {
          FUN_005fc8c0();
          FUN_00631d5c(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00722a90);
    }
    FUN_00631d5c(DAT_00722a94);
    puVar3 = &DAT_00722a08;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_00604710();
  }
  return;
}

