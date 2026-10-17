
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eebb0(float *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float10 fVar16;
  int local_b0;
  float local_a0 [8];
  float local_80 [8];
  float local_60 [2];
  undefined4 local_58 [22];
  
  fVar9 = _DAT_0064b254;
  puVar10 = local_58;
  iVar12 = 8;
  do {
    puVar10[-2] = 0;
    puVar10[-1] = 0;
    *puVar10 = 0;
    puVar10 = puVar10 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  if (0 < param_4) {
    pfVar15 = local_80;
    pfVar14 = local_60;
    pfVar11 = (float *)(param_2 + 4);
    local_b0 = param_4;
    do {
      fVar1 = param_1[2];
      fVar2 = pfVar11[-1];
      fVar3 = *param_1;
      fVar4 = pfVar11[1];
      *pfVar14 = param_1[1] * pfVar11[1] - param_1[2] * *pfVar11;
      fVar5 = *param_1;
      fVar6 = *pfVar11;
      fVar7 = param_1[1];
      fVar8 = pfVar11[-1];
      pfVar14[1] = fVar1 * fVar2 - fVar3 * fVar4;
      pfVar14[2] = fVar5 * fVar6 - fVar7 * fVar8;
      fVar16 = (float10)FUN_005aabc0(pfVar14);
      *pfVar15 = (float)fVar16;
      pfVar11 = pfVar11 + 3;
      pfVar14 = pfVar14 + 3;
      pfVar15 = pfVar15 + 1;
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  iVar12 = 0;
  if (0 < param_4) {
    pfVar11 = local_a0;
    do {
      *pfVar11 = 1.0;
      iVar13 = 0;
      pfVar15 = local_80;
      do {
        fVar1 = _DAT_0064b240;
        if (iVar13 != iVar12) {
          fVar1 = *pfVar15;
        }
        iVar13 = iVar13 + 1;
        pfVar15 = pfVar15 + 1;
        *pfVar11 = fVar1 * *pfVar11;
      } while (iVar13 < param_4);
      fVar9 = fVar9 + *pfVar11;
      iVar12 = iVar12 + 1;
      pfVar11 = pfVar11 + 1;
    } while (iVar12 < param_4);
  }
  fVar9 = _DAT_0064b240 / fVar9;
  if (0 < param_4) {
    pfVar11 = param_3;
    do {
      param_4 = param_4 + -1;
      *pfVar11 = fVar9 * *(float *)(((int)local_a0 - (int)param_3) + (int)pfVar11);
      pfVar11 = pfVar11 + 1;
    } while (param_4 != 0);
  }
  return;
}

