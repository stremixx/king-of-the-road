
void FUN_00473540(void)

{
  int *piVar1;
  int *piVar2;
  
  FUN_00477ba0(DAT_0068a8f0);
  piVar2 = (int *)*DAT_0068a8f0;
  if ((int *)*DAT_0068a8f0 != DAT_0068a8f0) {
    do {
      piVar1 = (int *)*piVar2;
      FUN_00473230();
      FUN_0044b440(piVar2,1000);
      piVar2 = piVar1;
    } while (piVar1 != DAT_0068a8f0);
  }
  *DAT_0068a8f0 = (int)DAT_0068a8f0;
  DAT_0068a8f0[1] = (int)DAT_0068a8f0;
  return;
}

