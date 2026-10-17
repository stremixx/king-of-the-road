
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004245b0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  
  pdVar4 = (double *)(param_1 + 8);
  iVar5 = 2;
  dVar1 = _DAT_0064a668;
  do {
    dVar2 = SQRT(*pdVar4 * *pdVar4 + pdVar4[1] * pdVar4[1] + pdVar4[-1] * pdVar4[-1]);
    dVar3 = _DAT_0064a660;
    if ((_DAT_0064a660 <= dVar2) && (dVar3 = dVar2, _DAT_0064a758 < dVar2)) {
      dVar3 = dVar2 * _DAT_0064a778;
    }
    if (dVar1 < _DAT_0064a660 / dVar3) {
      dVar1 = _DAT_0064a660 / dVar3;
    }
    pdVar4 = pdVar4 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

