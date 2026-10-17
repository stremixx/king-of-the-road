
void FUN_0046c140(int param_1,int param_2,double param_3,double param_4,double param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  undefined4 *local_7c;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  if ((int)(param_2 - param_1 & 0xfffffffcU) < 8) {
    return;
  }
  iVar7 = param_2 - param_1 >> 2;
  iVar8 = (iVar7 + -2) / 2;
  iVar9 = iVar8 * 2 + 2;
  local_7c = (undefined4 *)(param_1 + iVar8 * 4);
  do {
    piVar2 = (int *)*local_7c;
    iVar1 = iVar8;
    for (iVar10 = iVar9; iVar10 < iVar7; iVar10 = iVar10 * 2 + 2) {
      iVar11 = **(int **)(param_1 + iVar10 * 4);
      dVar4 = *(double *)(iVar11 + 0x38) - param_3;
      dVar5 = *(double *)(iVar11 + 0x40) - param_4;
      iVar3 = **(int **)(param_1 + -4 + iVar10 * 4);
      dVar6 = *(double *)(iVar11 + 0x48) - param_5;
      FUN_00405ea0(*(double *)(iVar3 + 0x38) - param_3,*(double *)(iVar3 + 0x40) - param_4,
                   *(double *)(iVar3 + 0x48) - param_5);
      if (SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5) <
          SQRT(local_50 * local_50 + local_40 * local_40 + local_48 * local_48)) {
        iVar10 = iVar10 + -1;
      }
      *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar10 * 4);
      iVar1 = iVar10;
    }
    if (iVar10 == iVar7) {
      *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + iVar10 * 4);
      iVar1 = iVar10 + -1;
    }
    while (iVar8 < iVar1) {
      iVar11 = (iVar1 + -1) / 2;
      iVar10 = **(int **)(param_1 + iVar11 * 4);
      FUN_00405ea0(*(double *)(iVar10 + 0x38) - param_3,*(double *)(iVar10 + 0x40) - param_4,
                   *(double *)(iVar10 + 0x48) - param_5);
      iVar10 = *piVar2;
      FUN_00405ea0(*(double *)(iVar10 + 0x38) - param_3,*(double *)(iVar10 + 0x40) - param_4,
                   *(double *)(iVar10 + 0x48) - param_5);
      fVar12 = (float10)FUN_004577a0();
      if (fVar12 <= (float10)SQRT(local_28 * local_28 + local_30 * local_30 + local_38 * local_38))
      break;
      *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar11 * 4);
      iVar1 = iVar11;
    }
    *(int **)(param_1 + iVar1 * 4) = piVar2;
    if (iVar8 == 0) {
      return;
    }
    iVar8 = iVar8 + -1;
    iVar9 = iVar9 + -2;
    local_7c = local_7c + -1;
  } while( true );
}

