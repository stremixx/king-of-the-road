
void FUN_0042bc30(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_006898d4;
  piVar2 = DAT_006898d0;
  if (DAT_006898d0 != DAT_006898d4) {
    do {
      if (*(int *)(*piVar2 + 0x24) == 2) {
        FUN_0042bb80(*piVar2);
        piVar1 = DAT_006898d4;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

