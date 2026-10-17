
void FUN_004170a0(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  int local_5c;
  int local_58 [8];
  undefined1 local_38 [24];
  undefined1 local_20 [28];
  
  FUN_004365f0(&local_5c,s_finish1_1_0066c1b0);
  if (*(int *)(param_1 + 0x2d4) == 1) {
    pdVar9 = (double *)FUN_0040b030(local_38,param_1);
    iVar1 = *(int *)(DAT_0068be60 + local_5c * 4);
    dVar3 = *(double *)(iVar1 + 0x30) - *pdVar9;
    dVar5 = *(double *)(iVar1 + 0x38) - pdVar9[1];
    dVar4 = *(double *)(iVar1 + 0x40) - pdVar9[2];
    *(double *)(param_1 + 0x1f8) = -SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5);
    return;
  }
  FUN_004365f0(local_58,s_check1_1_0066c1a4);
  pdVar9 = (double *)FUN_0040b030(local_20,param_1);
  iVar1 = *(int *)(DAT_0068be60 + local_58[0] * 4);
  dVar3 = *(double *)(iVar1 + 0x30) - *pdVar9;
  dVar6 = *(double *)(iVar1 + 0x38) - pdVar9[1];
  dVar7 = *(double *)(iVar1 + 0x40) - pdVar9[2];
  iVar2 = *(int *)(DAT_0068be60 + local_5c * 4);
  dVar4 = *(double *)(iVar1 + 0x30) - *(double *)(iVar2 + 0x30);
  dVar8 = *(double *)(iVar1 + 0x38) - *(double *)(iVar2 + 0x38);
  dVar5 = *(double *)(iVar1 + 0x40) - *(double *)(iVar2 + 0x40);
  *(double *)(param_1 + 0x1f8) =
       -(SQRT(dVar5 * dVar5 + dVar8 * dVar8 + dVar4 * dVar4) +
        SQRT(dVar3 * dVar3 + dVar7 * dVar7 + dVar6 * dVar6));
  return;
}

