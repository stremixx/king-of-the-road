
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005f9590(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float local_5c;
  double local_58;
  undefined4 local_50;
  float local_4c;
  double local_48;
  undefined4 local_40;
  undefined1 local_38 [52];
  
  iVar4 = FUN_005eee30(param_2,param_3);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    iVar5 = *(int *)(param_3 + 0x2020) * 0x30;
    iVar4 = iVar5 + 0x8c0 + param_3;
    local_5c = *(float *)(iVar4 + 4) * *(float *)(param_1 + 0x40) +
               *(float *)(param_1 + 0x44) * *(float *)(iVar4 + 0x10) +
               *(float *)(iVar5 + 0x8dc + param_3) * *(float *)(param_1 + 0x48) +
               *(float *)(iVar4 + 0x28);
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    iVar4 = *(int *)(param_3 + 0x202c) * 0x30;
    pfVar6 = (float *)(iVar4 + 0x1460 + param_3);
    local_5c = (*pfVar6 * *(float *)(param_1 + 0x40) +
                *(float *)(iVar4 + 0x1478 + param_3) * *(float *)(param_1 + 0x48) +
                *(float *)(iVar4 + 0x146c + param_3) * *(float *)(param_1 + 0x44) + pfVar6[9]) *
               *(float *)(param_3 + 0x1074) +
               (pfVar6[7] * *(float *)(param_1 + 0x48) +
                pfVar6[1] * *(float *)(param_1 + 0x40) + pfVar6[4] * *(float *)(param_1 + 0x44) +
               pfVar6[10]) * *(float *)(param_3 + 0x1080) +
               (pfVar6[8] * *(float *)(param_1 + 0x48) +
                pfVar6[2] * *(float *)(param_1 + 0x40) + pfVar6[5] * *(float *)(param_1 + 0x44) +
               pfVar6[0xb]) * *(float *)(param_3 + 0x108c) + *(float *)(param_3 + 0x1098);
  }
  else {
    local_58 = *(double *)(param_1 + 0x40);
    local_48 = *(double *)(param_1 + 0x40);
    local_50 = *(undefined4 *)(param_1 + 0x48);
    local_4c = *(float *)(param_1 + 0x4c);
    local_40 = local_50;
    FUN_005ab130(local_38,*(int *)(param_3 + 0x202c) * 0x30 + 0x1460 + param_3,param_3 + 0x1070);
    FUN_005aafe0(local_38);
    fVar7 = (float10)FUN_005aabc0(&local_58);
    local_5c = (float)((float10)local_4c / fVar7);
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    iVar4 = (*(int *)(param_3 + 0x2024) * 3 + 0x10b) * 0x10;
    fVar1 = *(float *)(*(int *)(param_3 + 0x2024) * 0x30 + 0x10a0 + param_3);
    if (fVar1 < *(float *)(iVar4 + param_3)) {
      fVar1 = *(float *)(iVar4 + param_3);
    }
    local_58._0_4_ = 100 - *(int *)(param_3 + 0x2108);
    fVar1 = (float)local_58._0_4_ * *(float *)(param_1 + 0x4c) * fVar1 * (float)_DAT_0064a590;
    local_48 = (double)fVar1;
    if (local_5c + fVar1 <= (float)_DAT_0064a660) {
      return 0;
    }
    if ((float)_DAT_0064a590 <= local_5c) {
      local_58._0_4_ = FUN_005ac850();
      iVar5 = *(int *)(param_1 + 0x34);
      local_58._0_4_ = local_58._0_4_ / 2;
      iVar4 = iVar5 + -1;
      local_5c = (float)((((float10)local_48 + (float10)local_48) / (float10)local_5c) *
                        (float10)local_58._0_4_);
      if (iVar4 < 0) {
        return 0;
      }
      pfVar6 = (float *)(*(int *)(param_1 + 0x50) + iVar4 * 4);
      while (local_5c <= *pfVar6) {
        iVar4 = iVar4 + -1;
        pfVar6 = pfVar6 + -1;
        if (iVar4 < 0) {
          return 0;
        }
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x34);
      iVar4 = iVar5 + -1;
    }
  }
  else {
    local_58._0_4_ = 100 - *(int *)(param_3 + 0x2108);
    iVar5 = *(int *)(param_1 + 0x34);
    iVar4 = 0;
    local_5c = (float)local_58._0_4_ * local_5c * (float)_DAT_0064a590;
    if (iVar5 < 1) goto LAB_005f9839;
    pfVar6 = *(float **)(param_1 + 0x50);
    do {
      if (local_5c < *pfVar6) break;
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar4 < iVar5);
  }
  if (iVar4 < 0) {
    return 0;
  }
LAB_005f9839:
  if (iVar5 <= iVar4) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
    FUN_005f16f0(iVar4,param_2,param_3);
    return 1;
  }
  iVar5 = *(int *)(param_1 + 0x50);
  uVar2 = *(undefined1 *)(param_3 + 0x20f8);
  fVar1 = (local_5c - *(float *)(iVar5 + -4 + iVar4 * 4)) /
          (*(float *)(iVar5 + iVar4 * 4) - *(float *)(iVar5 + -4 + iVar4 * 4));
  local_58 = (double)fVar1;
  if ((float)_DAT_0064a668 <= fVar1) {
    if (_DAT_0064a660 < local_58) {
      local_58 = 1.0;
    }
  }
  else {
    local_58 = 0.0;
  }
  if ((0 < iVar4) && (local_58 < _DAT_0064a6d0)) {
    uVar3 = __ftol();
    *(undefined1 *)(param_3 + 0x20f8) = uVar3;
    FUN_005f16f0(iVar4 + -1,param_2,param_3);
  }
  *(undefined1 *)(param_3 + 0x20f8) = 0xff;
  FUN_005f16f0(iVar4,param_2,param_3);
  if ((iVar4 < *(int *)(param_1 + 0x34) + -1) && (_DAT_0064a6d0 < local_58)) {
    uVar3 = __ftol();
    *(undefined1 *)(param_3 + 0x20f8) = uVar3;
    FUN_005f16f0(iVar4 + 1,param_2,param_3);
  }
  *(undefined1 *)(param_3 + 0x20f8) = uVar2;
  return 1;
}

