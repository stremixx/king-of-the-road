
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e3920(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  _strncpy(&DAT_0071f934,param_1,0xfa);
  uVar2 = 0xffffffff;
  DAT_0071fa2e = 0;
  pcVar4 = &DAT_0071f934;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 2;
  while( true ) {
    if (iVar3 < 0) {
      _DAT_0071fb10 = &DAT_0068196c;
      return;
    }
    cVar1 = (&DAT_0071f934)[iVar3];
    if (((cVar1 == ':') || (cVar1 == '/')) || (cVar1 == '\\')) break;
    iVar3 = iVar3 + -1;
  }
  if (iVar3 < 0) {
    DAT_0071fa2e = 0;
    _DAT_0071fb10 = &DAT_0068196c;
    return;
  }
  if (((&DAT_0071f934)[iVar3] != ':') && (iVar3 != 0)) {
    (&DAT_0071f934)[iVar3] = 0;
    _DAT_0071fb10 = &DAT_0071f934;
    return;
  }
  (&DAT_0071f935)[iVar3] = 0;
  _DAT_0071fb10 = &DAT_0071f934;
  return;
}

