
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0048d7c0(int param_1,double param_2,int param_3,double param_4,int param_5)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double local_20;
  double local_18;
  double local_10;
  
  if (param_3 + 1 == (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) / 0x18) {
    param_2 = param_2 + _DAT_0064a660;
    param_3 = param_3 + -1;
  }
  if (param_5 + 1 == (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) / 0x18) {
    param_4 = param_4 + _DAT_0064a660;
    param_5 = param_5 + -1;
  }
  if (param_3 != param_5) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar5 = param_3 + 1;
    pdVar3 = (double *)(iVar1 + param_3 * 0x18);
    pdVar4 = (double *)(iVar1 + iVar5 * 0x18);
    FUN_00405ea0(*pdVar4 - *pdVar3,pdVar4[1] - pdVar3[1],
                 *(double *)(iVar1 + 0x10 + iVar5 * 0x18) - pdVar3[2]);
    fVar9 = ((float10)_DAT_0064a660 - (float10)param_2) *
            SQRT((float10)local_20 * (float10)local_20 +
                 (float10)local_10 * (float10)local_10 + (float10)local_18 * (float10)local_18);
    if (iVar5 < param_5) {
      iVar1 = *(int *)(param_1 + 0x20) + iVar5 * 0x18;
      iVar5 = param_5 - iVar5;
      pdVar3 = (double *)(iVar1 + 8);
      pdVar4 = (double *)(iVar1 + 0x28);
      do {
        iVar5 = iVar5 + -1;
        fVar9 = SQRT(((float10)pdVar3[2] - (float10)pdVar3[-1]) *
                     ((float10)pdVar3[2] - (float10)pdVar3[-1]) +
                     ((float10)*pdVar4 - (float10)pdVar3[1]) *
                     ((float10)*pdVar4 - (float10)pdVar3[1]) +
                     (float10)(pdVar4[-1] - *pdVar3) * (float10)(pdVar4[-1] - *pdVar3)) + fVar9;
        pdVar3 = pdVar3 + 3;
        pdVar4 = pdVar4 + 3;
      } while (iVar5 != 0);
    }
    iVar2 = *(int *)(param_1 + 0x20);
    iVar1 = param_5 * 3 + 3;
    pdVar3 = (double *)(iVar2 + param_5 * 0x18);
    iVar5 = iVar2 + iVar1 * 8;
    fVar6 = (float10)*(double *)(iVar2 + iVar1 * 8) - (float10)*pdVar3;
    fVar7 = (float10)*(double *)(iVar5 + 0x10) - (float10)pdVar3[2];
    fVar8 = (float10)(*(double *)(iVar5 + 8) - pdVar3[1]);
    return SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) * (float10)param_4 + fVar9;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = param_3 * 3 + 3;
  pdVar3 = (double *)(iVar2 + param_3 * 0x18);
  iVar5 = iVar2 + iVar1 * 8;
  fVar9 = (float10)*(double *)(iVar2 + iVar1 * 8) - (float10)*pdVar3;
  fVar6 = (float10)*(double *)(iVar5 + 0x10) - (float10)pdVar3[2];
  fVar7 = (float10)(*(double *)(iVar5 + 8) - pdVar3[1]);
  return ((float10)param_4 - (float10)param_2) * SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7)
  ;
}

