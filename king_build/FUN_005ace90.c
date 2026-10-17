
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005ace90(int *param_1,float *param_2,float *param_3,double param_4)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    fVar3 = (-(float10)*param_3 * (float10)(float)param_1[4] +
             -(float10)param_3[1] * (float10)(float)param_1[5] +
             -(float10)param_3[2] * (float10)(float)param_1[6] + (float10)_DAT_0064a660) *
            (float10)_DAT_0064a6d0;
  }
  else if (iVar2 == 2) {
    local_24 = (float)param_1[1] - *param_2;
    local_20 = (float)param_1[2] - param_2[1];
    local_1c = (float)param_1[3] - param_2[2];
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
    fVar3 = (float10)FUN_005aabc0(&local_24);
    fVar1 = (float)fVar3;
    FUN_005aad50(local_c,fVar1);
    fVar3 = (float10)_DAT_0064a660 /
            ((float10)fVar1 * (float10)(float)param_1[9] * (float10)fVar1 + (float10)_DAT_0064a660);
  }
  else {
    if (iVar2 == 3) {
      local_24 = (float)param_1[1] - *param_2;
      local_20 = (float)param_1[2] - param_2[1];
      local_1c = (float)param_1[3] - param_2[2];
      local_18 = local_24;
      local_14 = local_20;
      local_10 = local_1c;
      fVar3 = (float10)FUN_005aabc0(&local_24);
      fVar1 = (float)fVar3;
      FUN_005aad50(&local_18,fVar1);
      param_3 = (float *)((float)_DAT_0064a660 /
                         (fVar1 * (float)param_1[9] * fVar1 + (float)_DAT_0064a660));
      local_18 = -local_24;
      local_14 = -local_20;
      local_10 = -local_1c;
      fVar3 = (float10)FUN_0061d420();
      fVar1 = (float)fVar3;
      if ((float)param_1[0xb] + (float)param_1[0xc] < fVar1) {
        fVar3 = (float10)_DAT_0064b254;
        goto LAB_005ad066;
      }
      if ((float)param_1[0xb] < fVar1) {
        fVar3 = (((float10)((float)param_1[0xb] + (float)param_1[0xc]) - (float10)fVar1) *
                (float10)(float)param_3) / (float10)(float)param_1[0xc];
        goto LAB_005ad066;
      }
    }
    fVar3 = (float10)(float)param_3;
  }
LAB_005ad066:
  return fVar3 * ((float10)_DAT_0064a660 - (float10)param_4) + (float10)param_4;
}

