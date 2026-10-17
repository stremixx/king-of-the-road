
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005419b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_10 = 0.0;
  local_14 = 0.0;
  local_18 = 0.0;
  local_1c = 0.0;
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0;
  iVar8 = FUN_0058c7f0(&local_c);
  fVar6 = local_10;
  while (iVar8 != 0) {
    if (local_c < local_1c) {
      local_1c = local_c;
    }
    if (local_18 < local_c) {
      local_18 = local_c;
    }
    if (local_8 < local_14) {
      local_14 = local_8;
    }
    local_10 = fVar6;
    if (fVar6 < local_8) {
      local_10 = local_8;
    }
    iVar8 = FUN_0058c7f0(&local_c);
    fVar6 = local_10;
  }
  local_10 = *(float *)(param_1 + 0x28b8);
  fVar5 = (local_1c + local_18) * _DAT_0064b248;
  fVar6 = (local_14 + fVar6) * _DAT_0064b248;
  fVar7 = _DAT_0064b254;
  if (0 < (int)local_10) {
    pfVar9 = (float *)(param_1 + 0x2958);
    iVar8 = (int)local_10;
    do {
      fVar1 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      iVar8 = iVar8 + -1;
      fVar7 = fVar1 * _DAT_0064b248 + fVar7;
    } while (iVar8 != 0);
  }
  iVar8 = 0;
  if (0 < (int)local_10) {
    pfVar9 = (float *)(param_1 + 0x5104);
    do {
      iVar8 = iVar8 + 1;
      *pfVar9 = fVar7 / (float)(int)local_10;
      local_10 = *(float *)(param_1 + 0x28b8);
      pfVar9 = pfVar9 + 1;
    } while (iVar8 < (int)local_10);
  }
  iVar8 = *(int *)(param_1 + 0x28b4) * 0x970;
  fVar1 = *(float *)(&DAT_00696978 + iVar8);
  fVar2 = *(float *)(&DAT_00696974 + iVar8);
  fVar3 = *(float *)(&DAT_00696970 + iVar8);
  fVar4 = *(float *)(&DAT_0069682c + iVar8);
  *(float *)(param_1 + 0x5230) = fVar5;
  *(float *)(param_1 + 0x5234) = fVar6;
  *(float *)(param_1 + 0x5238) =
       -((fVar7 / (float)*(int *)(param_1 + 0x28b8) + fVar4) -
        (*(float *)(param_1 + 0x2cc) * fVar3 +
         fVar2 * *(float *)(param_1 + 0x2d8) + *(float *)(param_1 + 0x2e4) * fVar1 +
        *(float *)(param_1 + 0x2f0)));
  return;
}

