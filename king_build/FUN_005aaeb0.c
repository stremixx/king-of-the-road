
void FUN_005aaeb0(float *param_1,undefined4 param_2,float *param_3)

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
  float fVar15;
  float10 fVar16;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = 0.0;
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  FUN_005cd110(param_2);
  fVar16 = (float10)FUN_005aabc0(&local_10);
  local_4 = (float)((float10)local_4 / fVar16);
  FUN_005aab70();
  fVar13 = -local_10 * local_4;
  fVar14 = -local_c * local_4;
  fVar15 = -local_8 * local_4;
  FUN_005ab0a0(param_3);
  fVar1 = param_3[6];
  fVar2 = param_3[3];
  fVar3 = *param_3;
  fVar4 = param_3[9];
  fVar5 = param_3[7];
  fVar6 = param_3[4];
  fVar7 = param_3[1];
  fVar8 = param_3[10];
  fVar9 = param_3[8];
  fVar10 = param_3[5];
  fVar11 = param_3[2];
  fVar12 = param_3[0xb];
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = -(local_10 * (fVar13 * fVar3 + fVar14 * fVar2 + fVar15 * fVar1 + fVar4) +
                (fVar13 * fVar11 + fVar14 * fVar10 + fVar15 * fVar9 + fVar12) * local_8 +
                local_c * (fVar13 * fVar7 + fVar14 * fVar6 + fVar15 * fVar5 + fVar8));
  return;
}

