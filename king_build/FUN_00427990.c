
undefined4 FUN_00427990(void)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  if (DAT_0068c0e8 != 0) {
    return 0;
  }
  if (DAT_0068c0c8 == '\0') {
    return 0xffffffff;
  }
  DAT_0068c0c8 = 0;
  DAT_0066b6e0 = 1;
  piVar2 = DAT_0068bec0;
  if (DAT_0068bec0 != DAT_0068bec4) {
    do {
      FUN_00477d70(*piVar2 + 8);
      iVar1 = *piVar2;
      fVar3 = (float10)FUN_00401000();
      *(double *)(iVar1 + 0x318) = (double)fVar3;
      piVar2 = piVar2 + 1;
    } while (piVar2 != DAT_0068bec4);
  }
  return 0;
}

