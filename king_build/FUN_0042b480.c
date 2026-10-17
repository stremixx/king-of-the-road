
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b480(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_0068bb78 != DAT_0068bb7c) {
    iVar6 = FUN_0042b380();
    cVar5 = FUN_0042b3b0(iVar6);
    if (cVar5 != '\0') {
      iVar7 = 0;
      while( true ) {
        iVar1 = DAT_0068bb7c;
        DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
        DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
        (&DAT_0068a928)[DAT_0068aa04] =
             (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
        iVar1 = *(int *)(DAT_0068bb78 +
                        ((uint)(&DAT_0068a928)[DAT_0068aa04] % (uint)(iVar1 - DAT_0068bb78 >> 2)) *
                        4);
        cVar5 = FUN_0042b3b0(iVar1);
        if ((cVar5 != '\0') &&
           ((iVar6 == 0 ||
            (dVar3 = *(double *)(iVar1 + 0x40) - *(double *)(iVar6 + 0x40),
            dVar4 = *(double *)(iVar1 + 0x48) - *(double *)(iVar6 + 0x48),
            dVar2 = *(double *)(iVar1 + 0x50) - *(double *)(iVar6 + 0x50),
            _DAT_0064a850 < SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4))))) break;
        iVar7 = iVar7 + 1;
        if (4 < iVar7) {
          return;
        }
      }
      FUN_0042b250(iVar1);
    }
  }
  return;
}

