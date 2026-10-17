
void FUN_0043f690(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = param_3[7];
  fVar2 = param_2[2];
  fVar3 = param_3[4];
  fVar4 = param_2[1];
  fVar5 = param_3[1];
  fVar6 = *param_2;
  fVar7 = param_3[10];
  fVar8 = param_3[8];
  fVar9 = param_2[2];
  fVar10 = param_3[5];
  fVar11 = param_2[1];
  fVar12 = param_3[2];
  fVar13 = *param_2;
  fVar14 = param_3[0xb];
  *param_1 = *param_2 * *param_3 + param_3[3] * param_2[1] + param_3[6] * param_2[2] + param_3[9];
  param_1[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  param_1[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  return;
}

