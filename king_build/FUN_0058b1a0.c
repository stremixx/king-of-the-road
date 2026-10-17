
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0058b1a0(float *param_1,undefined4 *param_2,float *param_3,float *param_4,undefined4 param_5,
            float *param_6,float *param_7,float param_8,undefined4 param_9,undefined4 *param_10,
            undefined4 *param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined1 local_2b8 [12];
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  float local_2a0 [4];
  undefined4 local_290;
  undefined4 local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined1 local_240 [12];
  undefined1 local_234 [12];
  undefined1 local_228 [12];
  float local_21c [3];
  undefined1 local_210 [12];
  float local_204 [9];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4 [9];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  float local_1a4 [12];
  float local_174 [4];
  float local_164;
  undefined1 local_144 [60];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  local_2ec = (float)*(double *)(DAT_006ee15c + 0xb90);
  local_310 = *param_6 - param_1[9];
  local_30c = param_6[1] - param_1[10];
  local_308 = param_6[2] - param_1[0xb];
  FUN_005aaad0(&local_304,&local_310);
  fVar1 = local_2fc * param_7[1] - local_300 * param_7[2];
  fVar2 = local_304 * param_7[2] - local_2fc * *param_7;
  fVar3 = local_300 * *param_7 - local_304 * param_7[1];
  local_2e8 = fVar1;
  local_2e4 = fVar2;
  local_2e0 = fVar3;
  FUN_005aaad0(&local_2f8,&local_2e8);
  FUN_0041ce10(local_2f0 * local_300 - local_2f4 * local_2fc,
               local_2fc * local_2f8 - local_2f0 * local_304,
               local_2f4 * local_304 - local_2f8 * local_300);
  FUN_0041ce10(*param_1 * *param_4 + param_1[3] * param_4[1] + param_1[6] * param_4[2],
               param_1[1] * *param_4 + param_1[4] * param_4[1] + param_1[7] * param_4[2],
               param_1[2] * *param_4 + param_1[5] * param_4[1] + param_1[8] * param_4[2]);
  FUN_0041ce10(local_308 * fVar2 - local_30c * fVar3,fVar3 * local_310 - local_308 * fVar1,
               local_30c * fVar1 - fVar2 * local_310);
  FUN_0041ce10(local_2e8 + *param_3,local_2e4 + param_3[1],local_2e0 + param_3[2]);
  FUN_0041ce10(DAT_006f5338 * local_2ec,DAT_006f533c * local_2ec,DAT_006f5340 * local_2ec);
  FUN_0041ce10(local_2dc + local_2e8,local_2d8 + local_2e4,local_2d4 + local_2e0);
  if (((local_2f4 * local_2f4 + local_2f0 * local_2f0 + local_2f8 * local_2f8 !=
        (float)_DAT_0064a668) &&
      ((float)_DAT_0064a668 <= fVar1 * local_310 + fVar3 * local_308 + fVar2 * local_30c)) &&
     (*param_7 * fVar1 + param_7[1] * fVar2 + param_7[2] * fVar3 <= _DAT_0064b254)) {
    pfVar6 = local_204;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *param_1;
      param_1 = param_1 + 1;
      pfVar6 = pfVar6 + 1;
    }
    local_1d8 = DAT_007015b8;
    puVar7 = local_1d4;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    }
    local_1a8 = DAT_007015b8;
    local_1e0 = DAT_007015b0;
    pfVar6 = (float *)&DAT_00701550;
    pfVar8 = local_2a0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    local_1b0 = DAT_007015b0;
    local_2a0[0] = local_2f8;
    local_2a0[1] = local_2f4;
    local_1dc = DAT_007015b4;
    local_1ac = DAT_007015b4;
    local_2a0[3] = (float)local_2ac;
    local_290 = local_2a8;
    local_2a0[2] = local_2f0;
    local_288 = local_304;
    local_284 = local_300;
    local_28c = local_2a4;
    local_280 = local_2fc;
    FUN_005aba00(&local_270,local_2a0);
    FUN_005ab130(local_144,local_204,&local_270);
    FUN_005aba00(local_f0,local_144);
    uVar4 = FUN_004e2a00(local_c0,&DAT_00701550,param_5,local_204);
    uVar4 = FUN_005ab130(local_90,local_1d4,uVar4);
    FUN_005ab130(local_30,uVar4);
    uVar4 = FUN_004e2a00(local_90,&DAT_00701550,param_5,local_144);
    uVar4 = FUN_005ab130(local_c0,local_f0,uVar4);
    FUN_005ab130(local_1a4,uVar4);
    FUN_0041ce10(local_270 * *param_3 + local_264 * param_3[1] + local_258 * param_3[2],
                 local_26c * *param_3 + local_260 * param_3[1] + local_254 * param_3[2],
                 local_268 * *param_3 + local_25c * param_3[1] + local_250 * param_3[2]);
    FUN_004cb300(local_210,param_4,local_144);
    FUN_004cb300(local_fc,local_210,local_1a4);
    pfVar6 = local_1a4;
    pfVar8 = local_174;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    fVar1 = (local_30c * local_30c + local_308 * local_308 + local_310 * local_310) * param_8;
    local_174[0] = fVar1 + local_1a4[0];
    local_164 = fVar1 + local_164;
    FUN_005aba00(local_60,local_174);
    FUN_004bde70(local_234,&local_310,&DAT_006f5338);
    FUN_004cb300(local_21c,local_234,&local_270);
    FUN_0041ce10(-(local_21c[0] * param_8),0,0);
    FUN_004cb300(local_2b8,local_228,local_60);
    FUN_004cb300(local_108,local_2b8,local_1a4);
    FUN_004cb300(local_240,local_2b8,local_2a0);
    FUN_004bde70(&local_2c4,&local_310,local_240);
    FUN_004cb300(&local_2d0,local_2b8,local_f0);
    *param_11 = local_2d0;
    param_11[1] = local_2cc;
    param_11[2] = local_2c8;
    *param_10 = local_2c4;
    param_10[1] = local_2c0;
    param_10[2] = local_2bc;
    return 1;
  }
  *param_10 = DAT_007015b0;
  param_10[1] = DAT_007015b4;
  param_10[2] = DAT_007015b8;
  *param_11 = DAT_007015b0;
  param_11[1] = DAT_007015b4;
  param_11[2] = DAT_007015b8;
  return 0;
}

