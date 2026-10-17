
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4612(int param_1,float param_2,float *param_3,int param_4)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  undefined1 local_10c [200];
  double local_44;
  double local_3c;
  float local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  double local_28;
  double local_20;
  double local_18;
  float local_10;
  double local_c;
  
  if (param_1 != 0) {
    fVar1 = (float10)FUN_0061ea40((double)*param_3);
    fVar2 = (float10)FUN_0061ea40((double)param_3[1]);
    local_3c = (double)(fVar2 + (float10)(double)fVar1);
    if ((local_3c < _DAT_0064a668) || (_DAT_0064a6a0 < local_3c)) {
      FUN_0061c369(local_10c,s_SoundPlay2D__norma__f_dv_x__f_dv_00672bd4,local_3c,(double)*param_3,
                   (double)param_3[1]);
      FUN_004e1e9c();
    }
    local_30 = 0x382d749c;
    uStack_2c = 0x4000c152;
    fVar1 = (float10)FUN_0061ecd0((double)*param_3,(double)param_3[1]);
    local_18 = (double)-fVar1;
    fVar1 = (float10)local_18 - (float10)(double)CONCAT44(uStack_2c,local_30);
    fVar3 = (float)fVar1;
    fVar1 = (float10)FUN_004e3a69((float)fVar1,s_SoundPlay2D__1_00672bfc);
    local_28 = (double)fVar1;
    fVar1 = (float10)local_18 + (float10)(double)CONCAT44(uStack_2c,local_30);
    fVar1 = (float10)FUN_004e3a69((float)fVar1,s_SoundPlay2D__2_00672c0c,(float)fVar1,fVar3);
    local_c = (double)fVar1;
    fVar1 = (float10)FUN_0061ee54(local_28 / _DAT_0064a650);
    local_20 = (double)fVar1;
    fVar1 = (float10)FUN_0061ee54(local_c / _DAT_0064a650);
    local_44 = (double)fVar1;
    local_34 = param_2 * (float)local_20 * (float)local_20;
    local_10 = param_2 * (float)fVar1 * (float)fVar1;
    if (local_34 < _DAT_0064b254) {
      local_34 = 0.0;
    }
    if (local_10 < _DAT_0064b254) {
      local_10 = 0.0;
    }
    if (_DAT_0064b240 < local_34) {
      local_34 = 1.0;
    }
    if (_DAT_0064b240 < local_10) {
      local_10 = 1.0;
    }
    if (param_4 < 0) {
      FUN_005fd160(local_34,local_10);
    }
    else {
      FUN_005fcaa0();
    }
  }
  return;
}

