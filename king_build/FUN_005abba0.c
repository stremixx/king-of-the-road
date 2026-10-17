
void FUN_005abba0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1] * param_2[5] - param_2[4] * param_2[2];
  fVar6 = param_2[3] * param_2[2] - *param_2 * param_2[5];
  fVar5 = param_2[4] * *param_2 - param_2[1] * param_2[3];
  fVar2 = fVar6 * param_2[7] + fVar5 * param_2[8] + fVar1 * param_2[6];
  *param_1 = (param_2[4] * param_2[8] - param_2[7] * param_2[5]) / fVar2;
  param_1[1] = (param_2[7] * param_2[2] - param_2[8] * param_2[1]) / fVar2;
  fVar1 = fVar1 / fVar2;
  param_1[2] = fVar1;
  param_1[3] = (param_2[6] * param_2[5] - param_2[8] * param_2[3]) / fVar2;
  param_1[4] = (param_2[8] * *param_2 - param_2[6] * param_2[2]) / fVar2;
  fVar6 = fVar6 / fVar2;
  param_1[5] = fVar6;
  param_1[6] = (param_2[7] * param_2[3] - param_2[4] * param_2[6]) / fVar2;
  param_1[7] = (param_2[6] * param_2[1] - param_2[7] * *param_2) / fVar2;
  fVar5 = fVar5 / fVar2;
  param_1[8] = fVar5;
  fVar3 = -param_2[9];
  fVar4 = -param_2[10];
  fVar2 = -param_2[0xb];
  param_1[9] = fVar4 * param_1[3] + fVar3 * *param_1 + fVar2 * param_1[6];
  param_1[10] = fVar4 * param_1[4] + fVar2 * param_1[7] + fVar3 * param_1[1];
  param_1[0xb] = fVar1 * fVar3 + fVar6 * fVar4 + fVar5 * fVar2;
  return;
}

