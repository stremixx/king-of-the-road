
/* WARNING (jumptable): Unable to track spacebase fully for stack */

float10 __fastcall FUN_0050aea0(int param_1)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double local_80;
  float local_38 [13];
  
  local_80 = 0.0;
  iVar6 = 0;
  do {
    pfVar3 = local_38 + 2;
    iVar5 = 4;
    do {
      pfVar3[-2] = 0.0;
      pfVar3[-1] = 0.0;
      *pfVar3 = 0.0;
      pfVar3 = pfVar3 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pfVar3 = (float *)&DAT_00701550;
    pfVar7 = local_38;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar7 = pfVar7 + 1;
    }
    switch(iVar6) {
    case 0:
      pdVar4 = (double *)(param_1 + 0x30);
      iVar5 = 3;
      pfVar3 = local_38;
      do {
        dVar1 = *pdVar4;
        dVar2 = pdVar4[1];
        *pfVar3 = (float)pdVar4[-1];
        pfVar3[1] = (float)dVar1;
        pdVar4 = pdVar4 + 4;
        iVar5 = iVar5 + -1;
        pfVar3[2] = (float)dVar2;
        pfVar3 = pfVar3 + 3;
      } while (iVar5 != 0);
      break;
    case 1:
      pdVar4 = (double *)(param_1 + 0x38);
      iVar5 = 3;
      pfVar3 = local_38;
      do {
        dVar1 = pdVar4[-1];
        dVar2 = *pdVar4;
        *pfVar3 = (float)pdVar4[-3];
        pfVar3[1] = (float)dVar1;
        pdVar4 = pdVar4 + 4;
        iVar5 = iVar5 + -1;
        pfVar3[2] = (float)dVar2;
        pfVar3 = pfVar3 + 3;
      } while (iVar5 != 0);
      break;
    case 2:
      pdVar4 = (double *)(param_1 + 0x38);
      iVar5 = 3;
      pfVar3 = local_38;
      do {
        dVar1 = pdVar4[-2];
        dVar2 = *pdVar4;
        *pfVar3 = (float)pdVar4[-3];
        pfVar3[1] = (float)dVar1;
        pdVar4 = pdVar4 + 4;
        iVar5 = iVar5 + -1;
        pfVar3[2] = (float)dVar2;
        pfVar3 = pfVar3 + 3;
      } while (iVar5 != 0);
      break;
    case 3:
      pdVar4 = (double *)(param_1 + 0x30);
      iVar5 = 3;
      pfVar3 = local_38;
      do {
        dVar1 = pdVar4[-1];
        dVar2 = *pdVar4;
        *pfVar3 = (float)pdVar4[-2];
        pfVar3[1] = (float)dVar1;
        pdVar4 = pdVar4 + 4;
        iVar5 = iVar5 + -1;
        pfVar3[2] = (float)dVar2;
        pfVar3 = pfVar3 + 3;
      } while (iVar5 != 0);
    }
    fVar8 = (float10)FUN_005ab8d0(0,0);
    fVar9 = (float10)FUN_005ab8d0(0,1);
    fVar10 = (float10)FUN_005ab8d0(0,2);
    fVar11 = (float10)local_38[2];
    fVar12 = (float10)local_38[1];
    fVar13 = (float10)local_38[0];
    fVar14 = (float10)FUN_0050ae80(iVar6);
    iVar5 = iVar6 * 8;
    iVar6 = iVar6 + 1;
    local_80 = (double)(fVar14 * (float10)*(double *)(param_1 + iVar5) *
                        (float10)(double)(fVar13 * (float10)(double)fVar8 +
                                         fVar12 * (float10)(double)fVar9 + fVar11 * fVar10) +
                       (float10)local_80);
  } while (iVar6 < 4);
  return (float10)local_80;
}

