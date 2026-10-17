
void FUN_00477820(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_0068a8f0;
  if (piVar2 != DAT_0068a8f0) {
    do {
      uVar1 = FUN_0040a950(piVar2);
      FUN_00477750(uVar1);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_0068a8f0);
  }
  return;
}

