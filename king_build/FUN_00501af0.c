
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00501af0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  bool bVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  double *pdVar16;
  float10 fVar17;
  float local_10c;
  float local_108;
  float local_104;
  int local_100 [4];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0 [10];
  float afStack_98 [6];
  float local_80 [12];
  float local_50 [12];
  double local_20 [4];
  
  FUN_005ab7d0(&local_f0,0x3fc90fdb);
  pfVar6 = local_c0 + 2;
  iVar8 = 4;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  pfVar6 = local_80 + 2;
  iVar8 = 4;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 0;
  pfVar9 = local_c0;
  pfVar10 = afStack_98 + 2;
  pfVar6 = (float *)(param_1 + 0x14);
  do {
    if (iVar8 < 2) {
      fVar15 = pfVar6[-1];
      fVar1 = pfVar6[-4];
      *pfVar9 = pfVar6[-2] - pfVar6[-5];
      fVar2 = *pfVar6;
      fVar3 = pfVar6[-3];
      pfVar9[1] = fVar15 - fVar1;
      pfVar9[2] = fVar2 - fVar3;
      fVar17 = (float10)FUN_005aabc0(pfVar9);
      *pfVar10 = (float)fVar17;
      if (fVar17 != (float10)_DAT_0064a668) {
        FUN_005aad10(local_100,(float)((float10)_DAT_0064b240 / fVar17));
      }
    }
    else {
      fVar15 = pfVar9[-6];
      fVar1 = pfVar9[-5];
      fVar2 = pfVar9[-4];
      *pfVar10 = pfVar10[-2];
      *pfVar9 = -fVar15;
      pfVar9[1] = -fVar1;
      pfVar9[2] = -fVar2;
    }
    iVar8 = iVar8 + 1;
    pfVar10 = pfVar10 + 1;
    pfVar6 = pfVar6 + 3;
    pfVar9 = pfVar9 + 3;
  } while (iVar8 < 4);
  iVar8 = 0;
  pfVar6 = local_c0 + 1;
  pfVar9 = afStack_98 + 2;
  do {
    if (iVar8 < 2) {
      fVar15 = pfVar6[1];
      fVar1 = pfVar6[-1];
      pfVar9[4] = local_e4 * *pfVar6 + local_f0 * pfVar6[-1] + local_d8 * pfVar6[1] + local_cc;
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[-1];
      pfVar9[5] = local_e0 * *pfVar6 + local_ec * fVar1 + local_d4 * fVar15 + local_c8;
      fVar15 = local_dc * *pfVar6 + local_e8 * fVar3 + local_d0 * fVar2 + local_c4;
    }
    else {
      fVar15 = -*pfVar9;
      pfVar9[4] = -pfVar9[-2];
      pfVar9[5] = -pfVar9[-1];
    }
    iVar8 = iVar8 + 1;
    pfVar6 = pfVar6 + 3;
    pfVar9[6] = fVar15;
    pfVar9 = pfVar9 + 3;
  } while (iVar8 < 4);
  bVar5 = true;
  iVar14 = (int)local_80 - param_1;
  pfVar6 = (float *)(param_1 + 8);
  pfVar9 = local_80;
  iVar8 = 4;
  pfVar10 = pfVar6;
  do {
    if ((!bVar5) ||
       ((float)_DAT_0064a668 <=
        (*param_2 - pfVar10[-2]) * *pfVar9 +
        (param_2[1] - pfVar10[-1]) * pfVar9[1] +
        (param_2[2] - *pfVar10) * *(float *)((int)pfVar10 + iVar14))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pfVar10 = pfVar10 + 3;
    pfVar9 = pfVar9 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (!bVar5) {
    bVar5 = true;
    pfVar9 = local_80;
    iVar8 = 4;
    do {
      if ((!bVar5) ||
         ((float)_DAT_0064a668 <=
          (*param_3 - pfVar6[-2]) * *pfVar9 +
          (param_3[1] - pfVar6[-1]) * pfVar9[1] +
          (param_3[2] - *pfVar6) * *(float *)((int)pfVar6 + iVar14))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pfVar6 = pfVar6 + 3;
      pfVar9 = pfVar9 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (!bVar5) {
      local_10c = *param_3 - *param_2;
      local_108 = param_3[1] - param_2[1];
      local_104 = param_3[2] - param_2[2];
      fVar17 = (float10)FUN_005aabc0(&local_10c);
      if (fVar17 != (float10)_DAT_0064a668) {
        FUN_005aad10(local_100,(float)((float10)_DAT_0064a660 / fVar17));
        pfVar6 = local_50 + 2;
        iVar8 = 4;
        do {
          pfVar6[-2] = 0.0;
          pfVar6[-1] = 0.0;
          *pfVar6 = 0.0;
          pfVar6 = pfVar6 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        pdVar16 = local_20;
        iVar13 = 4;
        iVar8 = param_1;
        do {
          puVar7 = (undefined4 *)
                   FUN_004e5d92(local_100,iVar8,iVar8 + iVar14,param_2,&local_10c,pdVar16);
          puVar11 = (undefined4 *)(((int)local_50 - param_1) + iVar8);
          pdVar16 = pdVar16 + 1;
          iVar8 = iVar8 + 0xc;
          *puVar11 = *puVar7;
          iVar13 = iVar13 + -1;
          uVar4 = puVar7[2];
          puVar11[1] = puVar7[1];
          puVar11[2] = uVar4;
        } while (iVar13 != 0);
        iVar8 = 0;
        pdVar16 = local_20;
        pfVar6 = (float *)(param_1 + 4);
        iVar14 = 0;
        do {
          if ((*pdVar16 < _DAT_0064a668) || ((double)fVar17 < *pdVar16)) {
            iVar13 = 0;
          }
          else {
            iVar13 = 1;
          }
          *(int *)((int)local_100 + iVar14) = iVar13;
          if ((iVar13 != 0) &&
             ((fVar15 = (*(float *)((int)local_50 + (4 - param_1) + (int)pfVar6) - pfVar6[1]) *
                        *(float *)((int)local_c0 + (4 - param_1) + (int)pfVar6) +
                        (*(float *)((int)pfVar6 + ((int)local_50 - param_1)) - *pfVar6) *
                        *(float *)(((int)local_c0 - param_1) + (int)pfVar6) +
                        (*(float *)((int)local_50 + iVar8) - pfVar6[-1]) *
                        *(float *)((int)local_c0 + iVar8), fVar15 < (float)_DAT_0064a668 ||
              (*(float *)((int)afStack_98 + iVar14 + 8) < fVar15)))) {
            *(undefined4 *)((int)local_100 + iVar14) = 0;
          }
          iVar8 = iVar8 + 0xc;
          pdVar16 = pdVar16 + 1;
          pfVar6 = pfVar6 + 3;
          iVar14 = iVar14 + 4;
        } while (iVar8 < 0x30);
        iVar8 = 0;
        piVar12 = local_100;
        iVar14 = 4;
        do {
          if ((iVar8 == 0) && (*piVar12 == 0)) {
            iVar8 = 0;
          }
          else {
            iVar8 = 1;
          }
          piVar12 = piVar12 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        return iVar8;
      }
      return 0;
    }
    return 1;
  }
  return 1;
}

