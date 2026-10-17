
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058c9b0(int param_1)

{
  float *pfVar1;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  int iVar24;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_30;
  float local_2c;
  float local_28;
  
  if (*(int *)(param_1 + 0x140c) == 0) {
    *(undefined4 *)(param_1 + 0x1414) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1414) = 0x461c4000;
  }
  iVar24 = 0;
  if (0 < *(int *)(param_1 + 0x140c)) {
    pfVar23 = (float *)(param_1 + 0x11c8);
    do {
      fVar20 = -pfVar23[2];
      fVar22 = fVar20 * pfVar23[-1];
      pfVar1 = pfVar23 + -0x8d;
      fVar21 = fVar20 * *pfVar23;
      fVar20 = fVar20 * pfVar23[1];
      fVar2 = *(float *)(param_1 + 0x2cc);
      fVar3 = *(float *)(param_1 + 0x2c0);
      fVar4 = *(float *)(param_1 + 0x2b4);
      fVar5 = *(float *)(param_1 + 0x2d8);
      fVar6 = *(float *)(param_1 + 0x2d0);
      fVar7 = *(float *)(param_1 + 0x2c4);
      fVar8 = *(float *)(param_1 + 0x2b8);
      fVar9 = *(float *)(param_1 + 0x2dc);
      fVar10 = *(float *)(param_1 + 0x2d4);
      fVar11 = *(float *)(param_1 + 0x2c8);
      fVar12 = *(float *)(param_1 + 700);
      fVar13 = *(float *)(param_1 + 0x2e0);
      fVar14 = *(float *)(param_1 + 0x2b8);
      fVar15 = *(float *)(param_1 + 0x2d0);
      fVar16 = *(float *)(param_1 + 0x2c4);
      fVar17 = *(float *)(param_1 + 0x2c8);
      fVar18 = *(float *)(param_1 + 700);
      fVar19 = *(float *)(param_1 + 0x2d4);
      *pfVar1 = *(float *)(param_1 + 0x2b4) * pfVar23[-1] +
                *pfVar23 * *(float *)(param_1 + 0x2c0) + *(float *)(param_1 + 0x2cc) * pfVar23[1];
      pfVar23[-0x8c] = *pfVar23 * fVar16 + fVar15 * pfVar23[1] + fVar14 * pfVar23[-1];
      pfVar23[-0x8b] = pfVar23[1] * fVar19 + fVar18 * pfVar23[-1] + *pfVar23 * fVar17;
      fVar2 = -(fVar22 * fVar8 + fVar21 * fVar7 + fVar20 * fVar6 + fVar9) * pfVar23[-0x8c] +
              pfVar23[-0x8b] * -(fVar22 * fVar12 + fVar21 * fVar11 + fVar20 * fVar10 + fVar13) +
              *pfVar1 * -(fVar22 * fVar4 + fVar21 * fVar3 + fVar20 * fVar2 + fVar5);
      pfVar23[-0x8a] = fVar2;
      fVar2 = -fVar2;
      if (fVar2 < *(float *)(param_1 + 0x1414)) {
        *(float *)(param_1 + 0x1414) = fVar2;
      }
      fVar2 = -pfVar23[-0x8a];
      iVar24 = iVar24 + 1;
      pfVar23[-0x89] = fVar2 * *pfVar1;
      pfVar23[-0x88] = fVar2 * pfVar23[-0x8c];
      pfVar23[-0x87] = fVar2 * pfVar23[-0x8b];
      pfVar23 = pfVar23 + 7;
    } while (iVar24 < *(int *)(param_1 + 0x140c));
  }
  local_2c = DAT_007015b4;
  iVar24 = *(int *)(param_1 + 0xdf4);
  local_30 = DAT_007015b0;
  local_28 = DAT_007015b8;
  local_4c = -1e+06;
  local_50 = 1e+06;
  local_48 = -1e+06;
  local_44 = 1e+06;
  local_40 = -1e+06;
  fVar2 = _DAT_0064f320;
  if (0 < iVar24) {
    pfVar23 = (float *)(param_1 + 0xe10);
    do {
      if ((local_2c < pfVar23[-1]) ||
         ((pfVar23[-1] == local_2c &&
          ((ABS(*pfVar23) < ABS(local_28) ||
           ((*pfVar23 == local_28 && (ABS(pfVar23[-2]) < ABS(local_30))))))))) {
        local_30 = pfVar23[-2];
        local_2c = pfVar23[-1];
        local_28 = *pfVar23;
      }
      fVar3 = pfVar23[-2];
      fVar4 = pfVar23[-1];
      fVar5 = *pfVar23;
      if (local_4c < fVar3) {
        local_4c = fVar3;
      }
      if (fVar3 < local_50) {
        local_50 = fVar3;
      }
      if (local_48 < fVar4) {
        local_48 = fVar4;
      }
      if (fVar4 < local_44) {
        local_44 = fVar4;
      }
      if (local_40 < fVar5) {
        local_40 = fVar5;
      }
      if (fVar5 < fVar2) {
        fVar2 = fVar5;
      }
      pfVar23 = pfVar23 + 3;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  iVar24 = *(int *)(param_1 + 0xdf8);
  if (0 < iVar24) {
    pfVar23 = (float *)(param_1 + 0xf00);
    do {
      if ((local_2c < pfVar23[-1]) ||
         ((pfVar23[-1] == local_2c &&
          ((ABS(*pfVar23) < ABS(local_28) ||
           ((*pfVar23 == local_28 && (ABS(pfVar23[-2]) < ABS(local_30))))))))) {
        local_30 = pfVar23[-2];
        local_2c = pfVar23[-1];
        local_28 = *pfVar23;
      }
      fVar3 = pfVar23[-2];
      fVar4 = pfVar23[-1];
      fVar5 = *pfVar23;
      if (local_4c < fVar3) {
        local_4c = fVar3;
      }
      if (fVar3 < local_50) {
        local_50 = fVar3;
      }
      if (local_48 < fVar4) {
        local_48 = fVar4;
      }
      if (fVar4 < local_44) {
        local_44 = fVar4;
      }
      if (local_40 < fVar5) {
        local_40 = fVar5;
      }
      if (fVar5 < fVar2) {
        fVar2 = fVar5;
      }
      pfVar23 = pfVar23 + 3;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  *(float *)(param_1 + 0x1408) = fVar2;
  *(float *)(param_1 + 0x13f4) = local_50;
  *(float *)(param_1 + 0x13f8) = local_4c;
  *(float *)(param_1 + 0x13fc) = local_48;
  *(float *)(param_1 + 0x1400) = local_44;
  *(float *)(param_1 + 0x1404) = local_40;
  return;
}

