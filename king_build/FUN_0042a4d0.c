
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a4d0(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  uint *puVar6;
  
  piVar5 = DAT_0068bb48;
  if (DAT_0068bb48 != DAT_0068bb4c) {
    do {
      iVar1 = *piVar5;
      dVar2 = _DAT_0068aa10 - *(double *)(iVar1 + 0x150);
      dVar3 = _DAT_0068aa18 - *(double *)(iVar1 + 0x158);
      dVar4 = _DAT_0068aa20 - *(double *)(iVar1 + 0x160);
      if ((_DAT_0064a720 < SQRT(dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3)) &&
         (puVar6 = *(uint **)(iVar1 + 0x168), puVar6 != *(uint **)(iVar1 + 0x16c))) {
        do {
          FUN_00568860(*puVar6 % 1000);
          puVar6 = puVar6 + 1;
        } while (puVar6 != *(uint **)(iVar1 + 0x16c));
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != DAT_0068bb4c);
  }
  return;
}

