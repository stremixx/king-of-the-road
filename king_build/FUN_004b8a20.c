
void FUN_004b8a20(void)

{
  int *piVar1;
  
  piVar1 = &DAT_00695664;
  do {
    if (*piVar1 != 0) {
      FUN_00631d5c(*piVar1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_0069568c);
  return;
}

