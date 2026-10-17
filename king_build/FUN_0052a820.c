
void __thiscall FUN_0052a820(int *param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60 [12];
  undefined1 local_30 [48];
  
  param_1[0x953] = param_3;
  param_1[0x951] = param_1[0x129];
  param_1[0x37c] = 1;
  FUN_0058e8e0(2);
  FUN_0058e930(1);
  FUN_0058e990(3);
  param_1[0x952] = param_2;
  iVar2 = param_2 * 0x36c;
  param_1[99] = *(int *)(&DAT_006c5b88 + iVar2);
  local_6c = (float)(&DAT_006c5b7c)[param_2 * 0xdb] * (float)param_1[0xad] +
             (float)param_1[0xb3] * (float)(&DAT_006c5b84)[param_2 * 0xdb] +
             (float)param_1[0xb0] * (float)(&DAT_006c5b80)[param_2 * 0xdb] + (float)param_1[0xb6];
  local_68 = (float)param_1[0xb4] * (float)(&DAT_006c5b84)[param_2 * 0xdb] +
             (float)param_1[0xae] * (float)(&DAT_006c5b7c)[param_2 * 0xdb] +
             (float)param_1[0xb1] * (float)(&DAT_006c5b80)[param_2 * 0xdb] + (float)param_1[0xb7];
  local_64 = (float)param_1[0xb5] * (float)(&DAT_006c5b84)[param_2 * 0xdb] +
             (float)param_1[0xaf] * (float)(&DAT_006c5b7c)[param_2 * 0xdb] +
             (float)param_1[0xb2] * (float)(&DAT_006c5b80)[param_2 * 0xdb] + (float)param_1[0xb8];
  param_1[0x35b] = (int)local_6c;
  param_1[0x35c] = (int)local_68;
  param_1[0x35d] = (int)local_64;
  param_1[100] = *(int *)(&DAT_006c5b8c + iVar2);
  param_1[0x65] = (&DAT_006c5b70)[param_2 * 0xdb];
  param_1[0x66] = (&DAT_006c5b74)[param_2 * 0xdb];
  param_1[0x67] = (&DAT_006c5b78)[param_2 * 0xdb];
  param_1[0x336] = (&DAT_006c5b70)[param_2 * 0xdb];
  param_1[0x337] = (&DAT_006c5b74)[param_2 * 0xdb];
  iVar7 = 0;
  param_1[0x338] = (&DAT_006c5b78)[param_2 * 0xdb];
  iVar6 = 0;
  if (0 < *(int *)(&DAT_006c5ca8 + iVar2)) {
    do {
      iVar3 = param_2 * 0x49 + iVar6;
      iVar2 = iVar3 * 0xc;
      pfVar1 = (float *)(&DAT_006c5b94 + iVar2);
      local_68 = (float)param_1[0xb4] * *(float *)(&DAT_006c5b9c + iVar2) +
                 (float)param_1[0xae] * *pfVar1 +
                 *(float *)(&DAT_006c5b98 + iVar3 * 0xc) * (float)param_1[0xb1] +
                 (float)param_1[0xb7];
      local_64 = (float)param_1[0xaf] * *pfVar1 +
                 (float)param_1[0xb5] * *(float *)(&DAT_006c5b9c + iVar2) +
                 *(float *)(&DAT_006c5b98 + iVar2) * (float)param_1[0xb2] + (float)param_1[0xb8];
      local_6c = *(float *)(&DAT_006c5b9c + iVar2) * (float)param_1[0xb3] +
                 (float)param_1[0xad] * *pfVar1 +
                 *(float *)(&DAT_006c5b98 + iVar2) * (float)param_1[0xb0] + (float)param_1[0xb6];
      FUN_0058c580(0,&local_6c,0);
      param_2 = param_1[0x952];
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(&DAT_006c5ca8 + param_2 * 0x36c));
  }
  iVar2 = param_1[0x952];
  iVar6 = 0;
  if (0 < *(int *)(&DAT_006c5cac + iVar2 * 0x36c)) {
    do {
      iVar2 = iVar6 + iVar2 * 0x49;
      iVar3 = iVar2 * 0xc;
      local_68 = (float)param_1[0xb4] * *(float *)(&DAT_006c5cb8 + iVar3) +
                 *(float *)(&DAT_006c5cb0 + iVar2 * 0xc) * (float)param_1[0xae] +
                 (float)param_1[0xb1] * *(float *)(&DAT_006c5cb4 + iVar2 * 0xc) +
                 (float)param_1[0xb7];
      local_64 = *(float *)(&DAT_006c5cb0 + iVar3) * (float)param_1[0xaf] +
                 (float)param_1[0xb5] * *(float *)(&DAT_006c5cb8 + iVar3) +
                 (float)param_1[0xb2] * *(float *)(&DAT_006c5cb4 + iVar3) + (float)param_1[0xb8];
      local_6c = (float)param_1[0xb0] * *(float *)(&DAT_006c5cb4 + iVar3) +
                 (float)param_1[0xad] * *(float *)(&DAT_006c5cb0 + iVar3) +
                 *(float *)(&DAT_006c5cb8 + iVar3) * (float)param_1[0xb3] + (float)param_1[0xb6];
      FUN_0058c580(1,&local_6c,0);
      iVar2 = param_1[0x952];
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(&DAT_006c5cac + iVar2 * 0x36c));
  }
  iVar6 = 0;
  iVar2 = param_1[0x952] * 0x36c;
  if (0 < *(int *)(&DAT_006c5e20 + iVar2)) {
    do {
      FUN_0058ac50(&DAT_006c5ce0 + iVar2 + iVar7);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x10;
      iVar2 = param_1[0x952] * 0x36c;
    } while (iVar6 < *(int *)(&DAT_006c5e20 + iVar2));
  }
  FUN_0058c990();
  param_1[0x503] = iVar6;
  FUN_0058c9b0();
  param_1[0x381] = 0;
  iVar2 = FUN_005eec70();
  param_1[200] = iVar2;
  puVar4 = local_60 + 2;
  iVar2 = 4;
  do {
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4 = puVar4 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = param_1[0x51];
  puVar4 = &DAT_00701550;
  puVar8 = local_60;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_004e420a(iVar2,local_60);
  piVar5 = (int *)FUN_005ab130(local_30,param_1 + 0xb9,local_60);
  piVar9 = param_1 + 0x7d;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar9 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar9 = piVar9 + 1;
  }
  piVar5 = (int *)FUN_005aba00(local_30,param_1 + 0x7d);
  piVar9 = param_1 + 0x95;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar9 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar9 = piVar9 + 1;
  }
  FUN_005902a0(1);
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

