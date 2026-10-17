
void FUN_005ab130(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar1 = local_30 + 2;
  iVar3 = 4;
  do {
    pfVar1[-2] = 0.0;
    pfVar1[-1] = 0.0;
    *pfVar1 = 0.0;
    pfVar1 = pfVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_30[0] = param_2[2] * param_3[6] + *param_2 * *param_3 + param_3[3] * param_2[1];
  local_30[1] = *param_2 * param_3[1] + param_3[7] * param_2[2] + param_3[4] * param_2[1];
  local_30[2] = param_3[8] * param_2[2] + param_3[2] * *param_2 + param_3[5] * param_2[1];
  local_30[3] = param_2[5] * param_3[6] + param_2[3] * *param_3 + param_3[3] * param_2[4];
  local_20 = param_3[4] * param_2[4] + param_3[7] * param_2[5] + param_2[3] * param_3[1];
  local_1c = param_2[3] * param_3[2] + param_3[5] * param_2[4] + param_3[8] * param_2[5];
  local_3c = param_3[3] * param_2[7] + param_2[8] * param_3[6] + param_2[6] * *param_3;
  local_38 = param_2[6] * param_3[1] + param_3[4] * param_2[7] + param_3[7] * param_2[8];
  local_34 = param_3[2] * param_2[6] + param_3[5] * param_2[7] + param_3[8] * param_2[8];
  local_18 = local_3c;
  local_14 = local_38;
  local_10 = local_34;
  puVar2 = (undefined4 *)FUN_0043f690(&local_3c,param_2 + 9,param_3);
  local_c = *puVar2;
  local_8 = puVar2[1];
  local_4 = puVar2[2];
  pfVar1 = local_30;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

