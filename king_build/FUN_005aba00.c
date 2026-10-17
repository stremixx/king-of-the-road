
void FUN_005aba00(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar4 = local_30 + 2;
  iVar5 = 4;
  do {
    pfVar4[-2] = 0.0;
    pfVar4[-1] = 0.0;
    *pfVar4 = 0.0;
    pfVar4 = pfVar4 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_30[2] = param_2[1] * param_2[5] - param_2[2] * param_2[4];
  local_1c = param_2[3] * param_2[2] - param_2[5] * *param_2;
  local_10 = *param_2 * param_2[4] - param_2[1] * param_2[3];
  fVar1 = local_1c * param_2[7] + local_10 * param_2[8] + local_30[2] * param_2[6];
  local_30[0] = (param_2[8] * param_2[4] - param_2[7] * param_2[5]) / fVar1;
  local_30[1] = (param_2[7] * param_2[2] - param_2[8] * param_2[1]) / fVar1;
  local_30[2] = local_30[2] / fVar1;
  local_30[3] = (param_2[6] * param_2[5] - param_2[8] * param_2[3]) / fVar1;
  local_20 = (param_2[8] * *param_2 - param_2[6] * param_2[2]) / fVar1;
  local_1c = local_1c / fVar1;
  local_18 = (param_2[7] * param_2[3] - param_2[6] * param_2[4]) / fVar1;
  local_14 = (param_2[6] * param_2[1] - param_2[7] * *param_2) / fVar1;
  local_10 = local_10 / fVar1;
  fVar1 = -param_2[9];
  fVar3 = -param_2[10];
  fVar2 = -param_2[0xb];
  local_c = fVar1 * local_30[0] + fVar3 * local_30[3] + fVar2 * local_18;
  local_8 = fVar1 * local_30[1] + fVar3 * local_20 + fVar2 * local_14;
  local_4 = fVar1 * local_30[2] + fVar3 * local_1c + fVar2 * local_10;
  pfVar4 = local_30;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

