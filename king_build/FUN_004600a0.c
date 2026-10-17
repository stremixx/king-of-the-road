
undefined4 __thiscall FUN_004600a0(double *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = *param_2;
  dVar3 = *(double *)(iVar1 + 0x38) - *param_1;
  dVar5 = *(double *)(iVar1 + 0x40) - param_1[1];
  iVar2 = *param_3;
  dVar6 = *(double *)(iVar1 + 0x48) - param_1[2];
  dVar4 = *(double *)(iVar2 + 0x38) - *param_1;
  dVar7 = *(double *)(iVar2 + 0x40) - param_1[1];
  dVar8 = *(double *)(iVar2 + 0x48) - param_1[2];
  if (SQRT(dVar3 * dVar3 + dVar6 * dVar6 + dVar5 * dVar5) <
      SQRT(dVar4 * dVar4 + dVar8 * dVar8 + dVar7 * dVar7)) {
    return 1;
  }
  return 0;
}

