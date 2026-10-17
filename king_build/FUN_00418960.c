
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418960(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int *piVar7;
  
  dVar6 = _DAT_0064a6a0;
  for (piVar7 = (int *)*param_2; piVar7 != (int *)param_2[1]; piVar7 = piVar7 + 9) {
    if (piVar7[2] != DAT_0068a8f0) {
      iVar1 = *(int *)(DAT_0068be60 + *piVar7 * 4);
      iVar2 = *(int *)(DAT_0068be60 + *(int *)*param_1 * 4);
      dVar3 = *(double *)(iVar2 + 0x30) - *(double *)(iVar1 + 0x30);
      dVar5 = *(double *)(iVar2 + 0x38) - *(double *)(iVar1 + 0x38);
      dVar4 = *(double *)(iVar2 + 0x40) - *(double *)(iVar1 + 0x40);
      dVar3 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5);
      if (dVar3 < dVar6) {
        dVar6 = dVar3;
      }
    }
  }
  return;
}

