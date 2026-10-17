
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005895b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  FUN_0057d5a0(&local_30);
  fVar1 = local_24 * param_2[1] + local_18 * param_2[2] + local_30 * *param_2 + local_c;
  fVar2 = local_20 * param_2[1] + local_14 * param_2[2] + local_2c * *param_2 + local_8;
  local_c = local_30 * *param_3 + local_24 * param_3[1] + local_18 * param_3[2] + local_c;
  local_8 = local_2c * *param_3 + local_20 * param_3[1] + local_14 * param_3[2] + local_8;
  fVar3 = *(float *)(param_1 + 0x13fc) + (float)_DAT_0064a590;
  fVar4 = *(float *)(param_1 + 0x1400) - (float)_DAT_0064a590;
  fVar5 = *(float *)(param_1 + 0x13f4) - (float)_DAT_0064a590;
  fVar6 = *(float *)(param_1 + 0x13f8) + (float)_DAT_0064a590;
  if ((fVar3 < fVar2) && (fVar3 < local_8)) {
    return 0;
  }
  if ((fVar2 < fVar4) && (local_8 < fVar4)) {
    return 0;
  }
  if ((fVar1 < fVar5) && (local_c < fVar5)) {
    return 0;
  }
  if ((fVar6 < fVar1) && (fVar6 < local_c)) {
    return 0;
  }
  return 1;
}

