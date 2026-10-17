
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00562ba0(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4,float param_5,
            float *param_6,float param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (((float)_DAT_0064a920 < ABS(*param_6)) || ((float)_DAT_0064a920 < ABS(param_6[1]))) {
    FUN_004e1e9c(s_get_cross_plane_circle____Nw_is_N_0067a3d8);
  }
  if ((float)_DAT_0064a920 <= ABS(param_7)) {
    fVar1 = ABS(param_5 / param_7);
    dVar2 = _DAT_0064ba38;
    if ((float)_DAT_0064a668 < param_7) {
      dVar2 = _DAT_0064a660;
    }
    local_10 = (float)dVar2;
    local_18 = local_10 * *param_6;
    local_14 = local_10 * param_6[1];
    local_10 = local_10 * param_6[2];
    local_c = (local_14 * param_4[2] - local_10 * param_4[1]) * fVar1 + *param_3;
    local_8 = (local_10 * *param_4 - local_18 * param_4[2]) * fVar1 + param_3[1];
    local_4 = (local_18 * param_4[1] - local_14 * *param_4) * fVar1 + param_3[2];
    uVar3 = FUN_005625c0(param_1,param_2,&local_c,&local_18,param_3,param_8,param_9,param_10);
    return uVar3;
  }
  return 0;
}

