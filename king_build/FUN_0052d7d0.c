
void __fastcall FUN_0052d7d0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  undefined1 auStack_c [12];
  
  if (param_1[0x5d] != 0) {
    FUN_005864e0();
    return;
  }
  (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_1 + 0x38))();
  if (param_1[0xdf] != 0) {
    FUN_004e1fd9();
    fVar9 = (float10)FUN_0061d200();
    pfVar7 = (float *)(param_1 + 0x6b);
    *pfVar7 = (float)(fVar9 * (float10)*pfVar7);
    param_1[0x6c] = (int)(float)(fVar9 * (float10)(float)param_1[0x6c]);
    param_1[0x6d] = (int)(float)(fVar9 * (float10)(float)param_1[0x6d]);
    pfVar7 = (float *)FUN_004e2984(auStack_c,pfVar7,param_1 + 0x65);
    fVar1 = pfVar7[2];
    fVar2 = pfVar7[1];
    fVar3 = *pfVar7;
    fVar4 = pfVar7[2];
    fVar5 = pfVar7[1];
    fVar6 = *pfVar7;
    param_1[0x6e] =
         (int)(*pfVar7 * (float)param_1[0x7d] +
              (float)param_1[0x80] * pfVar7[1] + (float)param_1[0x83] * pfVar7[2]);
    param_1[0x6f] =
         (int)((float)param_1[0x7e] * fVar3 +
              (float)param_1[0x81] * fVar2 + (float)param_1[0x84] * fVar1);
    param_1[0x70] =
         (int)((float)param_1[0x7f] * fVar6 +
              (float)param_1[0x82] * fVar5 + (float)param_1[0x85] * fVar4);
  }
  param_1[0xe0] = param_1[0xdf];
  param_1[0xdf] = param_1[0xdf] & 0xfffffffa;
  fVar9 = (float10)FUN_004e1fd9();
  (**(code **)(*param_1 + 0x50))((float)fVar9,0);
  if ((param_1[0xe0] == 0) && (param_1[0xdf] == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
  }
  param_1[0xe0] = iVar8;
  param_1[0xe1] = param_1[0xdf];
  FUN_005804b0();
  return;
}

