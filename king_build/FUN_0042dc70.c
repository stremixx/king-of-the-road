
void FUN_0042dc70(void)

{
  int *piVar1;
  int *piVar2;
  
  FUN_00403950();
  piVar2 = (int *)*DAT_0068a8fc;
  if (piVar2 != DAT_0068a8fc) {
    do {
      FUN_00631d5c(piVar2[2]);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_0068a8fc);
  }
  piVar2 = (int *)*DAT_0068a8fc;
  if ((int *)*DAT_0068a8fc != DAT_0068a8fc) {
    do {
      piVar1 = (int *)*piVar2;
      FUN_0044b440(piVar2,0xc);
      piVar2 = piVar1;
    } while (piVar1 != DAT_0068a8fc);
  }
  *DAT_0068a8fc = (int)DAT_0068a8fc;
  DAT_0068a8fc[1] = (int)DAT_0068a8fc;
  return;
}

