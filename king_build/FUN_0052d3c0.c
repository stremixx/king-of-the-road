
void __thiscall FUN_0052d3c0(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 local_60 [12];
  undefined1 local_30 [48];
  
  param_1[0x37c] = param_2;
  param_1[0x62] = 1;
  param_1[0x37d] = param_3;
  iVar7 = param_2 * 0x36c;
  param_1[99] = *(int *)(&DAT_006c5b88 + iVar7);
  fVar1 = (float)(&DAT_006c5b84)[param_2 * 0xdb];
  fVar2 = (float)(&DAT_006c5b7c)[param_2 * 0xdb];
  fVar3 = (float)(&DAT_006c5b80)[param_2 * 0xdb];
  fVar4 = (float)(&DAT_006c5b84)[param_2 * 0xdb];
  fVar5 = (float)(&DAT_006c5b7c)[param_2 * 0xdb];
  fVar6 = (float)(&DAT_006c5b80)[param_2 * 0xdb];
  param_1[0x35b] =
       (int)((float)(&DAT_006c5b7c)[param_2 * 0xdb] * (float)param_1[0xad] +
             (float)param_1[0xb0] * (float)(&DAT_006c5b80)[param_2 * 0xdb] +
             (float)param_1[0xb3] * (float)(&DAT_006c5b84)[param_2 * 0xdb] + (float)param_1[0xb6]);
  param_1[0x35c] =
       (int)((float)param_1[0xb1] * fVar3 +
             (float)param_1[0xae] * fVar2 + (float)param_1[0xb4] * fVar1 + (float)param_1[0xb7]);
  param_1[0x35d] =
       (int)((float)param_1[0xb2] * fVar6 +
             (float)param_1[0xaf] * fVar5 + (float)param_1[0xb5] * fVar4 + (float)param_1[0xb8]);
  param_1[100] = *(int *)(&DAT_006c5b8c + iVar7);
  param_1[0x65] = (&DAT_006c5b70)[param_2 * 0xdb];
  param_1[0x66] = (&DAT_006c5b74)[param_2 * 0xdb];
  param_1[0x67] = (&DAT_006c5b78)[param_2 * 0xdb];
  param_1[0x336] = (&DAT_006c5b70)[param_2 * 0xdb];
  param_1[0x337] = (&DAT_006c5b74)[param_2 * 0xdb];
  param_1[0x338] = (&DAT_006c5b78)[param_2 * 0xdb];
  param_1[0x164] = *(int *)(&DAT_006c5b90 + iVar7);
  param_1[0x165] = *(int *)(&DAT_006c5b90 + iVar7);
  iVar7 = FUN_005eec70();
  param_1[200] = iVar7;
  puVar8 = local_60 + 2;
  iVar7 = 4;
  do {
    puVar8[-2] = 0;
    puVar8[-1] = 0;
    *puVar8 = 0;
    puVar8 = puVar8 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = param_1[0x51];
  puVar8 = &DAT_00701550;
  puVar11 = local_60;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_004e420a(iVar7,local_60);
  piVar9 = (int *)FUN_005ab130(local_30,param_1 + 0xb9,local_60);
  piVar12 = param_1 + 0x7d;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar12 = piVar12 + 1;
  }
  piVar9 = (int *)FUN_005aba00(local_30,param_1 + 0x7d);
  piVar12 = param_1 + 0x95;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar12 = piVar12 + 1;
  }
  param_1[0x68] = DAT_007015b0;
  param_1[0x69] = DAT_007015b4;
  param_1[0x6a] = DAT_007015b8;
  param_1[0x6b] = DAT_007015b0;
  param_1[0x6c] = DAT_007015b4;
  param_1[0x6d] = DAT_007015b8;
  param_1[0x6e] = DAT_007015b0;
  param_1[0x6f] = DAT_007015b4;
  param_1[0x70] = DAT_007015b8;
  (**(code **)(*param_1 + 0x34))();
  FUN_0057d710(param_1 + 0x331);
  FUN_0057d750();
  return;
}

