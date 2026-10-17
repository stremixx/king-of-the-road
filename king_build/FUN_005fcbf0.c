
int FUN_005fcbf0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_00722a88 == 0) {
    return -1;
  }
  iVar1 = 0;
  piVar2 = &DAT_00722a08;
  do {
    if (*piVar2 == 0) {
      if (0x1f < iVar1) {
        return -1;
      }
      (&DAT_00722a08)[iVar1] = param_1;
      return iVar1;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x722a88);
  return -1;
}

