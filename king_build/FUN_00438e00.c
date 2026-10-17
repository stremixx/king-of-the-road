
void FUN_00438e00(int param_1)

{
  int *piVar1;
  
  if ((DAT_0068c0e8 == 2) && (param_1 == 1)) {
    piVar1 = (int *)FUN_00477c00(&param_1);
    if (*(int *)(*piVar1 + 100) == 5) {
      piVar1 = (int *)FUN_00477c00(&param_1);
      *(undefined4 *)(*piVar1 + 0x2d4) = 1;
    }
  }
  return;
}

