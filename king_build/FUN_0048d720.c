
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0048d720(int param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  float10 fVar13;
  
  iVar7 = *(int *)(param_1 + 0x20);
  iVar11 = *(int *)(param_1 + 0x24) - iVar7;
  fVar13 = (float10)_DAT_0064a668;
  iVar8 = iVar11 >> 0x1f;
  uVar12 = 0;
  if (iVar11 / 0x18 + iVar8 + -1 != iVar8) {
    pdVar10 = (double *)(iVar7 + 0x28);
    pdVar9 = (double *)(iVar7 + 8);
    do {
      pdVar1 = pdVar9 + 2;
      pdVar2 = pdVar9 + -1;
      pdVar3 = pdVar10 + -1;
      dVar5 = *pdVar9;
      dVar6 = *pdVar10;
      pdVar4 = pdVar9 + 1;
      uVar12 = uVar12 + 1;
      pdVar9 = pdVar9 + 3;
      pdVar10 = pdVar10 + 3;
      fVar13 = SQRT(((float10)*pdVar1 - (float10)*pdVar2) * ((float10)*pdVar1 - (float10)*pdVar2) +
                    (float10)(dVar6 - *pdVar4) * (float10)(dVar6 - *pdVar4) +
                    ((float10)*pdVar3 - (float10)dVar5) * ((float10)*pdVar3 - (float10)dVar5)) +
               fVar13;
    } while (uVar12 < (*(int *)(param_1 + 0x24) - iVar7) / 0x18 - 1U);
  }
  return fVar13;
}

