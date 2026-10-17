
int FUN_00429840(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  iVar1 = DAT_0068a8f0;
  piVar2 = (int *)FUN_00477c00(local_4);
  if (*piVar2 != iVar1) {
    piVar2 = (int *)FUN_00477c00(local_4);
    if (*(int *)(*piVar2 + 0xa0) != *(int *)(*piVar2 + 0xa4)) {
      return DAT_0068c0ec + -1;
    }
  }
  return DAT_0068c0ec;
}

