
void FUN_0061ba10(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float local_28 [6];
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (param_3[3] - param_2[3]) * param_4 + param_2[3];
  fVar4 = (param_3[4] - param_2[4]) * param_4 + param_2[4];
  fVar3 = (param_3[5] - param_2[5]) * param_4 + param_2[5];
  fVar2 = SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
  FUN_0041ce10(fVar1 / fVar2,fVar4 / fVar2,fVar3 / fVar2);
  local_28[0] = (*param_3 - *param_2) * param_4 + *param_2;
  local_10 = param_3[6];
  local_28[1] = (param_3[1] - param_2[1]) * param_4 + param_2[1];
  local_c = param_3[7];
  local_28[2] = (param_3[2] - param_2[2]) * param_4 + param_2[2];
  local_8 = param_3[8];
  local_4 = param_3[9];
  pfVar6 = local_28;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

