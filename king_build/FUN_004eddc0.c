
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004eddc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float10 fVar14;
  undefined1 local_5c [4];
  float local_58;
  float local_54;
  float local_50 [8];
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined4 *)(param_1 + 0x2640) = param_2;
  *(undefined4 *)(param_1 + 0x1f48) = *param_4;
  *(undefined4 *)(param_1 + 0x1f4c) = param_4[1];
  *(undefined4 *)(param_1 + 0x1f50) = param_4[2];
  puVar9 = (undefined4 *)FUN_004e29c2(local_5c,&DAT_00696408,(undefined4 *)(param_1 + 0x1f48));
  *(undefined4 *)(param_1 + 0x1f54) = *puVar9;
  *(undefined4 *)(param_1 + 0x1f58) = puVar9[1];
  *(undefined4 *)(param_1 + 0x1f5c) = puVar9[2];
  FUN_005aba00(local_30,param_3);
  iVar13 = *(int *)(param_1 + 0xdd4);
  pfVar10 = local_30;
  pfVar12 = (float *)(param_1 + 0x2790);
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar12 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar12 = pfVar12 + 1;
  }
  iVar11 = 0;
  if (0 < iVar13) {
    iVar13 = -0x1cbc - param_1;
    pfVar10 = (float *)(param_1 + 0x1d1c);
    pfVar12 = (float *)(param_1 + 0x1cbc);
    do {
      iVar8 = *(int *)(param_1 + 0x8cc);
      pfVar1 = (float *)((int)pfVar12 + iVar13 + iVar8 * 0x970 + 0x696970);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[1];
      fVar5 = *pfVar1;
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[1];
      *pfVar12 = local_30[0] * *pfVar1 +
                 local_30[3] * *(float *)((int)pfVar12 + iVar13 + iVar8 * 0x970 + 0x696974) +
                 local_18 * *(float *)((int)pfVar12 + iVar13 + iVar8 * 0x970 + 0x696978) + local_c;
      pfVar12[1] = local_20 * fVar4 + local_14 * fVar3 + local_30[1] * fVar2 + local_8;
      pfVar12[2] = local_1c * fVar7 + local_10 * fVar6 + local_30[2] * fVar5 + local_4;
      if ((iVar11 == *(int *)(param_1 + 0xdd4) + -1) && (*(int *)(param_1 + 0x2778) == 2)) {
        FUN_004ee200(0);
      }
      fVar14 = (float10)FUN_005aabc0(pfVar12);
      *pfVar10 = (float)fVar14;
      iVar11 = iVar11 + 1;
      pfVar12[0x5c2] = *pfVar12;
      pfVar12[0x5c3] = pfVar12[1];
      pfVar12[0x5c4] = pfVar12[2];
      pfVar10[0x5c2] = *pfVar10;
      local_58 = DAT_00701594 * _DAT_0064b2f0;
      local_54 = DAT_00701598 * _DAT_0064b2f0;
      pfVar12[-0x11e] = *pfVar12 - DAT_00701590 * _DAT_0064b2f0;
      pfVar12[-0x11d] = pfVar12[1] - local_58;
      pfVar12[-0x11c] = pfVar12[2] - local_54;
      pfVar10 = pfVar10 + 1;
      pfVar12 = pfVar12 + 3;
    } while (iVar11 < *(int *)(param_1 + 0xdd4));
  }
  *(float *)(param_1 + 0x1f74) = ABS(*(float *)(param_1 + 0x1cc0));
  *(float *)(param_1 + 0x1f78) = ABS(*(float *)(param_1 + 0x1cd8));
  if (*(int *)(param_1 + 0xdd4) == 6) {
    *(float *)(param_1 + 0x1f78) = ABS(*(float *)(param_1 + 0x1cf0));
  }
  fVar2 = _DAT_0067338c * *(float *)(param_1 + 0x1f9c);
  *(undefined4 *)(param_1 + 0x34b0) = *(undefined4 *)(param_1 + 0x2640);
  *(undefined4 *)(param_1 + 0x34b8) = *(undefined4 *)(param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x34bc) = *(undefined4 *)(param_1 + 0x1f4c);
  *(float *)(param_1 + 0x2220) =
       fVar2 + (*(float *)(param_1 + 0x1b70) - *(float *)(param_1 + 0x1cc4));
  *(undefined4 *)(param_1 + 0x34c0) = *(undefined4 *)(param_1 + 0x1f50);
  FUN_004eed00();
  local_58 = -DAT_00701594;
  fVar2 = *(float *)(param_1 + 0x2640);
  local_54 = -DAT_00701598;
  fVar3 = local_58 * fVar2 * _DAT_0064c980;
  *(float *)(param_1 + 0xc54) = -DAT_00701590 * fVar2 * _DAT_0064c980;
  fVar2 = local_54 * fVar2 * _DAT_0064c980;
  *(float *)(param_1 + 0xc58) = fVar3;
  *(float *)(param_1 + 0xc5c) = fVar2;
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar10 = (float *)(param_1 + 0x1f7c);
    pfVar12 = local_50;
    do {
      iVar13 = iVar13 + 1;
      fVar3 = ABS(pfVar10[0x1b5] * *(float *)(param_1 + 0xc5c));
      *pfVar12 = fVar3;
      fVar2 = *pfVar12;
      fVar4 = *pfVar10 - _DAT_0067338c * pfVar10[8];
      pfVar10[0x10] = fVar3 / ((fVar4 / *pfVar10 + _DAT_0064b240) * fVar4);
      pfVar10[-0x90] = fVar2;
      pfVar10[-0xb9] = *pfVar12 * (float)_DAT_0064a658;
      pfVar10 = pfVar10 + 1;
      pfVar12 = pfVar12 + 1;
    } while (iVar13 < *(int *)(param_1 + 0xdd4));
  }
  if (*(int *)(param_1 + 0x2778) == 1) {
    FUN_004ee370(*(undefined4 *)(param_1 + 0x2788));
  }
  return;
}

