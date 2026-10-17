
void FUN_0060a070(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float local_40 [16];
  
  pfVar11 = param_3;
  FUN_00609f40(local_40);
  iVar6 = (int)local_40 - (int)param_3;
  param_3 = (float *)0x4;
  do {
    pfVar8 = (float *)(iVar6 + (int)pfVar11);
    iVar9 = 4;
    pfVar10 = param_2;
    do {
      fVar1 = *pfVar8;
      iVar7 = 4;
      pfVar4 = pfVar10;
      pfVar5 = pfVar11;
      do {
        fVar2 = *pfVar4;
        fVar3 = *pfVar5;
        pfVar4 = pfVar4 + 4;
        pfVar5 = pfVar5 + 1;
        iVar7 = iVar7 + -1;
        fVar1 = fVar2 * fVar3 + fVar1;
      } while (iVar7 != 0);
      *pfVar8 = fVar1;
      pfVar8 = pfVar8 + 1;
      pfVar10 = pfVar10 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    pfVar11 = pfVar11 + 4;
    param_3 = (float *)((int)param_3 + -1);
  } while (param_3 != (float *)0x0);
  pfVar11 = local_40;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_1 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

