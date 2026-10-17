
void FUN_005b0f90(float *param_1,int param_2,uint param_3,int param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  
  if (0 < param_4) {
    pfVar11 = (float *)(param_2 + 4);
    do {
      fVar3 = pfVar11[1];
      fVar4 = param_5[8];
      fVar5 = pfVar11[-1];
      fVar6 = param_5[2];
      fVar7 = param_5[5];
      fVar8 = *pfVar11;
      fVar9 = param_5[0xb];
      fVar10 = *pfVar11;
      pfVar1 = pfVar11 + 1;
      pfVar2 = pfVar11 + -1;
      pfVar11 = (float *)((int)pfVar11 + (param_3 & 0xfffffffc));
      param_4 = param_4 + -1;
      *param_1 = *pfVar2 * *param_5 + *pfVar1 * param_5[6] + param_5[3] * fVar10 + param_5[9];
      param_1[1] = fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4 + fVar9;
      param_1 = param_1 + 2;
    } while (param_4 != 0);
  }
  return;
}

