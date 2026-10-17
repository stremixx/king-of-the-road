
void FUN_0062c3b0(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_0077a3a0;
  iVar1 = 0;
  for (iVar3 = DAT_0077a3a0; 0 < iVar3; iVar3 = iVar3 + -1) {
    iVar1 = iVar1 >> 1;
    *(int *)(&DAT_0077a338 + iVar3 * 4) = iVar1;
    *(int *)(&DAT_0077a3a8 + iVar3 * 4) = *(int *)(&DAT_0077a3a8 + iVar3 * 4) - iVar1;
    iVar1 = iVar1 + *(int *)(&DAT_0077a1cc + iVar3 * 4);
  }
  if (0xc < iVar4) {
    iVar4 = 0xc;
  }
  iVar1 = 1;
  pcVar2 = &DAT_007355ec + (1 << ((byte)iVar4 & 0x1f));
  DAT_0077a414 = iVar4;
  if (0 < iVar4) {
    piVar5 = &DAT_0077a1d0;
    do {
      iVar3 = *piVar5 << ((char)iVar4 - (char)iVar1 & 0x1fU);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar2 = pcVar2 + -1;
        *pcVar2 = (char)iVar1;
        iVar4 = DAT_0077a414;
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 <= iVar4);
  }
  while (&DAT_007355ec < pcVar2) {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = '\0';
  }
  return;
}

