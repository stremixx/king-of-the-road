
void FUN_004789b0(void)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_0068becc;
  if (piVar1 != DAT_0068becc) {
    do {
      FUN_00478960(piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != DAT_0068becc);
  }
  return;
}

