
void FUN_00594470(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_006f5610;
  if (DAT_006f5610 == (int *)0x0) {
    DAT_006f5610 = (int *)0x0;
    return;
  }
  do {
    piVar1 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      FUN_005942d0();
      FUN_00631d5c(piVar2);
    }
    piVar2 = piVar1;
  } while (piVar1 != (int *)0x0);
  DAT_006f5610 = piVar1;
  return;
}

