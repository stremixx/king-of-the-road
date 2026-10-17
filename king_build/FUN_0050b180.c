
/* WARNING: Type propagation algorithm not settling */

float10 __thiscall FUN_0050b180(int param_1,int param_2,int param_3)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  double local_58 [2];
  int aiStack_44 [3];
  int local_38 [13];
  
  piVar6 = &DAT_00701550;
  piVar7 = aiStack_44 + 3;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  iVar3 = 0;
  pdVar2 = local_58;
  pfVar4 = (float *)(aiStack_44 + 1);
  do {
    pfVar5 = pfVar4;
    if (iVar3 != param_2) {
      *(int *)pdVar2 = iVar3;
      pdVar2 = (double *)((int)pdVar2 + 4);
      local_58[0] = (double)CONCAT44(local_58[0]._4_4_,pdVar2);
      pfVar5 = pfVar4 + 3;
      iVar1 = 0;
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        if (iVar1 != param_3) {
          aiStack_44[iVar8] = iVar1;
          iVar9 = iVar8 + 1;
          if (iVar8 == 0) {
            pfVar4[2] = (float)*(double *)(param_1 + (iVar1 + iVar3 * 4) * 8);
          }
          else if (iVar8 == 1) {
            *pfVar5 = (float)*(double *)(param_1 + (iVar1 + iVar3 * 4) * 8);
          }
          else if (iVar8 == 2) {
            pfVar4[4] = (float)*(double *)(param_1 + (iVar1 + iVar3 * 4) * 8);
          }
        }
        iVar1 = iVar1 + 1;
        iVar8 = iVar9;
      } while (iVar1 < 4);
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar5;
  } while (iVar3 < 4);
  fVar10 = (float10)FUN_0050ae80(param_2 + param_3);
  local_58[0] = (double)fVar10;
  fVar10 = (float10)FUN_005ab9c0();
  return fVar10 * (float10)local_58[0];
}

