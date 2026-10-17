
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005accd0(int *param_1,float *param_2)

{
  int iVar1;
  float10 fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    return 1;
  }
  if (iVar1 == 2) {
    local_18 = (float)param_1[1] - *param_2;
    local_14 = (float)param_1[2] - param_2[1];
    local_10 = (float)param_1[3] - param_2[2];
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    fVar2 = (float10)FUN_005aabc0(&local_18);
    fVar2 = fVar2 - (float10)param_2[3];
    if (((float10)_DAT_0064b254 <= fVar2) &&
       ((float10)_DAT_0064b440 < fVar2 * (float10)(float)param_1[9] * fVar2)) {
      return 0;
    }
  }
  else {
    if (iVar1 != 3) {
      return 0;
    }
    local_18 = (float)param_1[1] - *param_2;
    local_14 = (float)param_1[2] - param_2[1];
    local_10 = (float)param_1[3] - param_2[2];
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    fVar2 = (float10)FUN_005aabc0(&local_18);
    fVar2 = fVar2 - (float10)param_2[3];
    if (fVar2 < (float10)_DAT_0064b254) {
      return 2;
    }
    if ((float10)_DAT_0064b440 < fVar2 * (float10)(float)param_1[9] * fVar2) {
      return 0;
    }
    fVar2 = (float10)FUN_005aabc0(&local_18);
    FUN_005aad50(&local_c,(float)fVar2);
    local_c = -local_18;
    local_8 = -local_14;
    local_4 = -local_10;
    fVar2 = (float10)FUN_0061d420();
    if ((float10)_DAT_0064c9f0 < fVar2) {
      return 0;
    }
  }
  return 2;
}

