
undefined4 * __thiscall
FUN_005cdd90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9,
            float *param_10,int param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_006483a8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  param_1[4] = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = param_3;
  local_c = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = param_4;
  *param_1 = &PTR_FUN_00650dbc;
  param_1[7] = param_5;
  param_1[8] = param_6;
  param_1[9] = param_7;
  uVar1 = FUN_00631d33(param_7 * 4 + 4);
  param_1[10] = uVar1;
  iVar2 = 0;
  if (0 < (int)param_1[9]) {
    do {
      *(undefined4 *)(param_1[10] + iVar2 * 4) = *(undefined4 *)(param_8 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[9]);
  }
  param_1[0xc] = param_12;
  param_1[0xd] = param_13;
  uVar1 = FUN_00631d33(param_1[9] * 0xc + 4);
  param_1[0xe] = uVar1;
  iVar2 = 0;
  if (0 < (int)param_1[9]) {
    iVar4 = 0;
    pfVar3 = param_10;
    do {
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
      *(float *)(param_1[0xe] + -0xc + iVar4) =
           *(float *)((param_9 - (int)param_10) + (int)pfVar3) * (float)*(double *)(param_1 + 0xc) +
           (float)param_1[6];
      *(float *)(param_1[0xe] + -8 + iVar4) =
           *pfVar3 * (float)*(double *)(param_1 + 0xc) + (float)param_1[7];
      *(float *)(param_1[0xe] + -4 + iVar4) =
           *(float *)((param_11 - (int)param_10) + -4 + (int)(pfVar3 + 1)) *
           (float)*(double *)(param_1 + 0xc) + (float)param_1[8];
      pfVar3 = pfVar3 + 1;
    } while (iVar2 < (int)param_1[9]);
  }
  puVar5 = param_1 + 0xf;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0xf] = param_1[0xe];
  param_1[0x13] = param_1[10];
  param_1[0x15] = param_1[10];
  param_1[0x10] = 0xc;
  param_1[0x14] = 4;
  param_1[0x16] = 4;
  ExceptionList = local_14;
  return param_1;
}

