
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00581580(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                int param_6,float *param_7)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 *puVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  int local_1f8;
  int local_1f4;
  float local_1e0 [2];
  undefined4 local_1d8;
  float local_1d4 [57];
  float local_f0 [60];
  
  iVar19 = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  puVar14 = &local_1d8;
  iVar17 = 0x14;
  do {
    puVar14[-2] = 0;
    puVar14[-1] = 0;
    *puVar14 = 0;
    puVar14 = puVar14 + 3;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  pfVar16 = local_f0 + 2;
  iVar17 = 0x14;
  do {
    pfVar16[-2] = 0.0;
    pfVar16[-1] = 0.0;
    *pfVar16 = 0.0;
    pfVar16 = pfVar16 + 3;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  *param_5 = 1.0;
  iVar17 = FUN_0058c7f0(local_1e0);
  if (iVar17 != 0) {
    pfVar16 = local_1e0;
    iVar17 = 0;
    pfVar18 = param_7;
    do {
      fVar1 = pfVar16[2];
      fVar2 = param_2[7];
      fVar3 = pfVar16[1];
      fVar4 = param_2[4];
      fVar5 = *pfVar16;
      fVar6 = param_2[1];
      fVar7 = param_2[10];
      fVar8 = param_2[8];
      fVar9 = pfVar16[2];
      fVar10 = *pfVar16;
      fVar11 = param_2[2];
      fVar12 = param_2[5];
      fVar13 = pfVar16[1];
      *(float *)((int)local_f0 + iVar17) =
           pfVar16[2] * param_2[6] + *pfVar16 * *param_2 + pfVar16[1] * param_2[3] + param_2[9];
      *(float *)((int)local_f0 + iVar17 + 4) = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7
      ;
      *(float *)((int)local_f0 + iVar17 + 8) =
           fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + param_2[0xb];
      if (param_6 != 0) {
        *(undefined4 *)((param_6 - (int)param_7) + (int)pfVar18) = 0;
      }
      fVar1 = (*(float *)((int)local_f0 + iVar17 + 4) - param_3[1]) * param_4[1] +
              (*(float *)((int)local_f0 + iVar17) - *param_3) * *param_4 +
              (*(float *)((int)local_f0 + iVar17 + 8) - param_3[2]) * param_4[2];
      if (param_7 != (float *)0x0) {
        *pfVar18 = fVar1;
      }
      if (fVar1 < *param_5) {
        *param_5 = fVar1;
      }
      if (fVar1 < (float)_DAT_0064a648) {
        if (fVar1 < *param_5) {
          *param_5 = fVar1;
        }
        local_1f4 = local_1f4 + 1;
        if (param_6 != 0) {
          *(undefined4 *)((param_6 - (int)param_7) + (int)pfVar18) = 1;
        }
        if (param_7 != (float *)0x0) {
          *pfVar18 = fVar1;
        }
      }
      iVar19 = local_1f8 + 1;
      pfVar18 = pfVar18 + 1;
      pfVar16 = (float *)((int)local_1d4 + iVar17);
      iVar15 = FUN_0058c7f0(pfVar16);
      iVar17 = iVar17 + 0xc;
      local_1f8 = iVar19;
    } while (iVar15 != 0);
    if (0x13 < iVar19) {
      return local_1f4;
    }
  }
  pfVar16 = param_7 + iVar19;
  iVar19 = 0x14 - iVar19;
  do {
    if (param_6 != 0) {
      *(undefined4 *)((int)pfVar16 + (param_6 - (int)param_7)) = 0;
    }
    if (param_7 != (float *)0x0) {
      *pfVar16 = 1.0;
    }
    pfVar16 = pfVar16 + 1;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  return local_1f4;
}

