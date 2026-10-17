
void __thiscall FUN_005ab040(float *param_1,float *param_2)

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
  
  fVar1 = param_2[7];
  fVar2 = param_1[2];
  fVar3 = param_2[1];
  fVar4 = *param_1;
  fVar5 = param_2[4];
  fVar6 = param_2[10];
  fVar7 = param_2[6];
  fVar8 = param_1[2];
  fVar9 = param_2[3];
  fVar10 = *param_2;
  fVar11 = param_2[9];
  param_1[2] = param_2[5] * param_1[1] + param_2[2] * *param_1 + param_2[8] * param_1[2] +
               param_2[0xb];
  *param_1 = fVar10 * *param_1 + fVar9 * param_1[1] + fVar7 * fVar8 + fVar11;
  param_1[1] = fVar5 * param_1[1] + fVar3 * fVar4 + fVar1 * fVar2 + fVar6;
  return;
}

