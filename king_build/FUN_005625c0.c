
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005625c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                float *param_6,float *param_7,undefined4 *param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  undefined8 local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c [3];
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined1 local_1f4 [500];
  
  local_278 = *param_5 - *param_3;
  local_274 = param_5[1] - param_3[1];
  local_270 = param_5[2] - param_3[2];
  local_240 = local_278;
  local_23c = local_274;
  local_238 = local_270;
  fVar5 = (float10)FUN_005aabc0(&local_278);
  fVar1 = (float)fVar5;
  local_268 = (float)((float10)_DAT_0064a660 / fVar5);
  local_270 = param_1[2] - param_5[2];
  local_264 = *param_3 - *param_5;
  local_260 = param_3[1] - param_5[1];
  local_25c = param_3[2] - param_5[2];
  local_220 = (double)fVar1;
  if (fVar1 < ABS((local_264 - (*param_1 - *param_5)) * *param_2 +
                  (local_25c - local_270) * param_2[2] +
                  param_2[1] * (local_260 - (param_1[1] - param_5[1])))) {
    return 0;
  }
  fVar2 = (*param_1 - *param_5) * *param_2 +
          param_2[2] * local_270 + (param_1[1] - param_5[1]) * param_2[1];
  if (ABS(*param_2) <= ABS(param_2[1])) {
    fVar2 = fVar2 / param_2[1] - local_260;
    local_26c = (*param_2 * *param_2) / (param_2[1] * param_2[1]) + (float)_DAT_0064a660;
    local_228 = ((fVar2 * *param_2) / param_2[1] + local_264) * (float)_DAT_0064c950;
    iVar3 = FUN_004e7119(local_26c,local_228,(fVar2 * fVar2 + local_264 * local_264) - fVar1 * fVar1
                         ,&local_224,&local_230);
    if (iVar3 == 0) {
      return 0;
    }
    local_234 = (local_260 + fVar2) - (local_224 * *param_2) / param_2[1];
    local_22c = (local_260 + fVar2) - (local_230 * *param_2) / param_2[1];
  }
  else {
    fVar2 = fVar2 / *param_2 - local_264;
    local_26c = (param_2[1] * param_2[1]) / (*param_2 * *param_2) + (float)_DAT_0064a660;
    local_228 = ((fVar2 * param_2[1]) / *param_2 + local_260) * (float)_DAT_0064c950;
    iVar3 = FUN_004e7119(local_26c,local_228,(fVar2 * fVar2 + local_260 * local_260) - fVar1 * fVar1
                         ,&local_234,&local_22c);
    if (iVar3 == 0) {
      return 0;
    }
    local_224 = (local_264 + fVar2) - (local_234 * param_2[1]) / *param_2;
    local_230 = (local_264 + fVar2) - (local_22c * param_2[1]) / *param_2;
  }
  local_250 = -local_25c;
  local_20c[0] = local_250 * param_4[1] - (local_234 - local_260) * param_4[2];
  if ((float)_DAT_0064a668 <=
      *param_2 * local_20c[0] +
      ((local_234 - local_260) * *param_4 - (local_224 - local_264) * param_4[1]) * param_2[2] +
      param_2[1] * ((local_224 - local_264) * param_4[2] - local_250 * *param_4)) {
    *param_6 = local_230;
    param_6[1] = local_22c;
    param_6[2] = 0.0;
  }
  else {
    *param_6 = local_224;
    param_6[1] = local_234;
    param_6[2] = 0.0;
  }
  local_258 = -local_264;
  local_254 = -local_260;
  local_24c = *param_6 - local_264;
  local_248 = param_6[1] - local_260;
  local_244 = param_6[2] - local_25c;
  local_278 = local_254 * local_244 - local_250 * local_248;
  local_274 = local_250 * local_24c - local_244 * local_258;
  local_270 = local_248 * local_258 - local_254 * local_24c;
  local_240 = local_278;
  local_23c = local_274;
  local_238 = local_270;
  local_218 = local_258;
  local_214 = local_254;
  local_210 = local_250;
  local_200 = local_24c;
  local_1fc = local_248;
  local_1f8 = local_244;
  fVar5 = (float10)FUN_005aabc0(&local_200);
  local_26c = (float)fVar5;
  fVar5 = (float10)FUN_005aabc0(&local_218);
  if (((float)_DAT_0064a590 < ABS(local_26c - fVar1) * local_268) ||
     ((float10)_DAT_0064a590 < ABS(fVar5 - (float10)fVar1) * (float10)local_268)) {
    FUN_0061c369(local_1f4,s_get_cross_plane_circle____lenDc__0067a398,(double)fVar5,
                 (double)local_26c,(undefined4)local_220,local_220._4_4_);
    FUN_004e1e9c(local_1f4);
  }
  FUN_005aad10(local_20c,local_268 * local_268);
  local_26c = *param_4 * local_240 + local_23c * param_4[1] + local_238 * param_4[2];
  fVar5 = (float10)FUN_0061e4b0();
  *param_7 = (float)(ABS(fVar5) * (float10)fVar1);
  FUN_0041ce10();
  local_258 = local_278;
  local_254 = local_274;
  local_250 = local_270;
  puVar4 = (undefined4 *)FUN_004bde70();
  *param_8 = *puVar4;
  param_8[1] = puVar4[1];
  param_8[2] = puVar4[2];
  FUN_0041ce10();
  *param_6 = local_278;
  param_6[1] = local_274;
  param_6[2] = local_270;
  return iVar3;
}

