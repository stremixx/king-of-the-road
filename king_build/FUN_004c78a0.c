
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c78a0(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,float *param_5,
                 float *param_6,float *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  float *pfVar11;
  short sVar12;
  float *pfVar13;
  float local_60 [3];
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [3];
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [3];
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_60[0] = (*param_5 + *param_6) * _DAT_0064b248;
  local_60[1] = (param_6[1] + param_5[1]) * _DAT_0064b248;
  local_60[2] = (param_5[2] + param_6[2]) * _DAT_0064b248;
  uVar4 = __ftol();
  uVar5 = __ftol();
  uVar6 = __ftol();
  uVar7 = __ftol();
  local_54 = (((uint)uVar4 << 8 | uVar5 & 0xffff) << 8 | uVar6 & 0xffff) << 8 | uVar7 & 0xffff;
  local_50 = (param_6[4] + param_5[4]) * _DAT_0064b248;
  local_4c = (param_5[5] + param_6[5]) * _DAT_0064b248;
  local_48 = (param_6[6] + param_5[6]) * _DAT_0064b248;
  local_44 = (param_6[7] + param_5[7]) * _DAT_0064b248;
  local_40[0] = (*param_6 + *param_7) * _DAT_0064b248;
  local_40[1] = (param_6[1] + param_7[1]) * _DAT_0064b248;
  local_40[2] = (param_7[2] + param_6[2]) * _DAT_0064b248;
  uVar4 = __ftol();
  uVar5 = __ftol();
  uVar6 = __ftol();
  uVar7 = __ftol();
  local_34 = (((uint)uVar4 << 8 | uVar5 & 0xffff) << 8 | uVar6 & 0xffff) << 8 | uVar7 & 0xffff;
  local_30 = (param_6[4] + param_7[4]) * _DAT_0064b248;
  local_2c = (param_7[5] + param_6[5]) * _DAT_0064b248;
  local_28 = (param_6[6] + param_7[6]) * _DAT_0064b248;
  local_24 = (param_7[7] + param_6[7]) * _DAT_0064b248;
  local_20[0] = (*param_5 + *param_7) * _DAT_0064b248;
  local_20[1] = (param_7[1] + param_5[1]) * _DAT_0064b248;
  local_20[2] = (param_5[2] + param_7[2]) * _DAT_0064b248;
  uVar4 = __ftol();
  uVar5 = __ftol();
  uVar6 = __ftol();
  uVar7 = __ftol();
  local_14 = (((uint)uVar4 << 8 | uVar5 & 0xffff) << 8 | uVar6 & 0xffff) << 8 | uVar7 & 0xffff;
  local_10 = (param_5[4] + param_7[4]) * _DAT_0064b248;
  local_c = (param_5[5] + param_7[5]) * _DAT_0064b248;
  local_8 = (param_7[6] + param_5[6]) * _DAT_0064b248;
  fVar1 = param_7[7];
  fVar2 = param_5[7];
  pfVar11 = (float *)(param_8 * 0x20 + param_1);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar11 = *param_5;
    param_5 = param_5 + 1;
    pfVar11 = pfVar11 + 1;
  }
  pfVar11 = (float *)((param_8 + 1) * 0x20 + param_1);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar11 = *param_6;
    param_6 = param_6 + 1;
    pfVar11 = pfVar11 + 1;
  }
  pfVar11 = (float *)((param_8 + 2) * 0x20 + param_1);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar11 = *param_7;
    param_7 = param_7 + 1;
    pfVar11 = pfVar11 + 1;
  }
  pfVar11 = local_60;
  pfVar13 = (float *)((param_8 + 3) * 0x20 + param_1);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar13 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar13 = pfVar13 + 1;
  }
  local_4 = (fVar1 + fVar2) * _DAT_0064b248;
  pfVar11 = local_40;
  pfVar13 = (float *)((param_8 + 4) * 0x20 + param_1);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar13 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar13 = pfVar13 + 1;
  }
  sVar3 = (short)param_8;
  sVar9 = sVar3 + 3;
  pfVar11 = local_20;
  pfVar13 = (float *)((param_8 + 5) * 0x20 + param_1);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar13 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar13 = pfVar13 + 1;
  }
  sVar10 = sVar3 + 5;
  *(short *)(param_3 + param_8 * 4) = sVar3;
  *(short *)(param_3 + 2 + param_8 * 4) = sVar9;
  *(short *)(param_3 + (param_8 + 1) * 4) = sVar10;
  *(short *)(param_3 + 6 + param_8 * 4) = sVar9;
  *(short *)(param_3 + (param_8 + 2) * 4) = sVar3 + 1;
  sVar12 = sVar3 + 4;
  *(short *)(param_3 + 10 + param_8 * 4) = sVar12;
  *(short *)(param_3 + (param_8 + 3) * 4) = sVar12;
  *(short *)(param_3 + 0xe + param_8 * 4) = sVar3 + 2;
  *(short *)(param_3 + (param_8 + 4) * 4) = sVar10;
  *(short *)(param_3 + 0x12 + param_8 * 4) = sVar10;
  *(short *)(param_3 + (param_8 + 5) * 4) = sVar9;
  *(short *)(param_3 + 0x16 + param_8 * 4) = sVar12;
  *param_2 = 6;
  *param_4 = 0xc;
  return;
}

