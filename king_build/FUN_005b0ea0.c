
void FUN_005b0ea0(float *param_1,int param_2,uint param_3,float *param_4,int param_5,float *param_6)

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
  
  if (0 < param_5) {
    pfVar11 = (float *)(param_2 + 4);
    do {
      fVar3 = *pfVar11;
      fVar4 = param_6[4];
      fVar5 = pfVar11[1];
      fVar6 = param_6[7];
      fVar7 = pfVar11[-1];
      fVar8 = param_6[1];
      fVar9 = param_6[10];
      pfVar1 = pfVar11 + 1;
      pfVar2 = pfVar11 + -1;
      fVar10 = *pfVar11;
      pfVar11 = (float *)((int)pfVar11 + (param_3 & 0xfffffffc));
      param_5 = param_5 + -1;
      *param_1 = ((param_6[3] * fVar10 + *pfVar2 * *param_6 + param_6[6] * *pfVar1 + param_6[9]) -
                 *param_4) / (param_4[2] - *param_4);
      param_1[1] = ((fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4 + fVar9) - param_4[3]) /
                   (param_4[1] - param_4[3]);
      param_1 = param_1 + 2;
    } while (param_5 != 0);
  }
  return;
}

