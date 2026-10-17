
uint __thiscall FUN_0057d820(int *param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_4;
  
  piVar6 = &DAT_00701550;
  piVar7 = param_2;
  for (iVar5 = 0xc; piVar7 = piVar7 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
  }
  param_2[0x13] = param_1[0x92];
  param_2[0x14] = param_1[0x93];
  param_2[0x15] = param_1[0x94];
  param_2[0x16] = param_1[0x86];
  param_2[0x17] = param_1[0x87];
  iVar5 = param_1[0x88];
  param_2[0x1e] = (int)param_1;
  param_2[0x18] = iVar5;
  param_2[0x1d] = 0;
  param_2[0x19] = 0;
  *param_2 = param_1[100];
  uStack_4 = (**(code **)(*(int *)param_1[0xc9] + 0x34))(6,param_2);
  if (((uStack_4 & 2) != 0) && (param_2[0x1a] == 0)) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  if ((uStack_4 & 1) != 0) {
    FUN_005aba00(&fStack_38,param_2 + 1);
    fVar2 = (float)param_2[0xd];
    fVar3 = (float)param_2[0xe];
    fVar4 = (float)param_2[0xd];
    param_2[0xd] = (int)(fStack_38 * (float)param_2[0xd] +
                         fStack_2c * (float)param_2[0xe] + fStack_20 * (float)param_2[0xf] +
                        fStack_14);
    param_2[0xe] = (int)(fStack_34 * fVar2 +
                         fStack_28 * (float)param_2[0xe] + fStack_1c * (float)param_2[0xf] +
                        fStack_10);
    param_2[0xf] = (int)(fStack_30 * fVar4 + fStack_24 * fVar3 + fStack_18 * (float)param_2[0xf] +
                        fStack_c);
    pfVar1 = (float *)(param_2 + 0x10);
    fVar2 = *pfVar1;
    fVar3 = *pfVar1;
    fVar4 = (float)param_2[0x11];
    *pfVar1 = fStack_2c * (float)param_2[0x11] +
              fStack_20 * (float)param_2[0x12] + fStack_38 * *pfVar1;
    param_2[0x11] =
         (int)(fStack_28 * (float)param_2[0x11] +
              fStack_1c * (float)param_2[0x12] + fStack_34 * fVar2);
    param_2[0x12] = (int)(fStack_24 * fVar4 + fStack_18 * (float)param_2[0x12] + fStack_30 * fVar3);
  }
  return uStack_4;
}

