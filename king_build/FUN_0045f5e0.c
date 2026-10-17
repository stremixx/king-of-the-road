
undefined4 __thiscall FUN_0045f5e0(double *param_1,int *param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 auStack_8c [8];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  puVar9 = (undefined4 *)(*param_2 + 0x28);
  puVar10 = auStack_8c;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  pdVar7 = (double *)FUN_00435cd0(local_30);
  dVar1 = *param_1;
  dVar2 = *pdVar7;
  dVar3 = param_1[1];
  dVar4 = pdVar7[1];
  puVar9 = (undefined4 *)(*param_3 + 0x28);
  puVar10 = auStack_8c;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  dVar5 = param_1[2];
  dVar6 = pdVar7[2];
  pdVar7 = (double *)FUN_00435cd0(local_18);
  if (SQRT((dVar1 - dVar2) * (dVar1 - dVar2) +
           (dVar5 - dVar6) * (dVar5 - dVar6) + (dVar3 - dVar4) * (dVar3 - dVar4)) <
      SQRT((*param_1 - *pdVar7) * (*param_1 - *pdVar7) +
           (param_1[2] - pdVar7[2]) * (param_1[2] - pdVar7[2]) +
           (param_1[1] - pdVar7[1]) * (param_1[1] - pdVar7[1]))) {
    return 1;
  }
  return 0;
}

