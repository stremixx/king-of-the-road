
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005ac890(int param_1,int *param_2)

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
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float afStack_110 [26];
  int iStack_a8;
  int *piStack_a4;
  float local_68 [4];
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x2030) < 0x14) {
    iVar11 = *(int *)(param_1 + 0x202c) * 0x30;
    pfVar12 = (float *)(iVar11 + 0x1460 + param_1);
    fVar5 = *pfVar12 * (float)param_2[1] +
            *(float *)(iVar11 + 0x146c + param_1) * (float)param_2[2] +
            *(float *)(iVar11 + 0x1478 + param_1) * (float)param_2[3] + pfVar12[9];
    fVar6 = pfVar12[1] * (float)param_2[1] +
            pfVar12[4] * (float)param_2[2] + pfVar12[7] * (float)param_2[3] + pfVar12[10];
    fVar7 = pfVar12[2] * (float)param_2[1] +
            pfVar12[5] * (float)param_2[2] + pfVar12[8] * (float)param_2[3] + pfVar12[0xb];
    fVar8 = (float)param_2[4] * *pfVar12 +
            pfVar12[6] * (float)param_2[6] + pfVar12[3] * (float)param_2[5];
    fVar9 = pfVar12[7] * (float)param_2[6] +
            pfVar12[1] * (float)param_2[4] + pfVar12[4] * (float)param_2[5];
    fVar10 = pfVar12[8] * (float)param_2[6] +
             pfVar12[2] * (float)param_2[4] + pfVar12[5] * (float)param_2[5];
    if (DAT_0071f868 != 0) {
      fVar1 = (float)param_2[0xd];
      fVar2 = (float)param_2[10];
      fVar3 = (float)param_2[0xe];
      fVar4 = (float)param_2[10];
      pfVar12 = local_68;
      for (iVar11 = 0x1a; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar12 = 0.0;
        pfVar12 = pfVar12 + 1;
      }
      local_54 = fVar1 * fVar2;
      local_68[1] = fVar1 * fVar2;
      local_50 = fVar3 * fVar4;
      local_68[2] = fVar3 * fVar4;
      local_4c = (float)param_2[0xf] * (float)param_2[10];
      local_68[3] = (float)param_2[0xf] * (float)param_2[10];
      local_3c = 0;
      local_44 = 0;
      local_40 = 0;
      local_30 = fVar6;
      local_38 = 0x3f800000;
      local_34 = fVar5;
      local_24 = fVar9;
      local_2c = fVar7;
      local_28 = fVar8;
      local_14 = param_2[7];
      iVar11 = *param_2;
      local_20 = fVar10;
      local_8 = param_2[0xb];
      local_4 = (float)param_2[0xc] + (float)param_2[0xb];
      local_48 = 0x3f800000;
      local_58 = 0x3f800000;
      local_18 = 0x3f800000;
      local_10 = param_2[8];
      local_c = param_2[9];
      if (iVar11 == 1) {
        local_68[0] = 4.2039e-45;
        local_1c = 10000.0;
      }
      else if (iVar11 == 2) {
        local_68[0] = 1.4013e-45;
        local_1c = (float)_DAT_0064a7b0 / SQRT((float)param_2[9]);
      }
      else if (iVar11 == 3) {
        local_68[0] = 2.8026e-45;
        local_1c = (float)_DAT_0064a7b0 / SQRT((float)param_2[9]);
      }
      piStack_a4 = param_2;
      pfVar12 = local_68;
      pfVar13 = afStack_110;
      iStack_a8 = param_1;
      for (iVar11 = 0x1a; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar13 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar13 = pfVar13 + 1;
      }
      FUN_0050b560();
    }
    piStack_a4 = param_2;
    iStack_a8 = 0x5acb35;
    FUN_005acc60();
    piStack_a4 = param_2;
    iStack_a8 = 0x5acb41;
    FUN_005acc60();
    pfVar12 = (float *)(*(int *)(param_1 + 0x2030) * 0x50 + 0x1854 + param_1);
    *pfVar12 = fVar5;
    pfVar12[1] = fVar6;
    pfVar12[2] = fVar7;
    *(float *)(param_1 + 0x1e94) = fVar5;
    *(float *)(param_1 + 0x1e98) = fVar6;
    pfVar12 = (float *)((*(int *)(param_1 + 0x2030) + 0x4e) * 0x50 + param_1);
    *(float *)(param_1 + 0x1e9c) = fVar7;
    *pfVar12 = fVar8;
    pfVar12[1] = fVar9;
    pfVar12[2] = fVar10;
    *(float *)(param_1 + 0x1ea0) = fVar8;
    *(float *)(param_1 + 0x1ea4) = fVar9;
    *(int *)(param_1 + 0x2030) = *(int *)(param_1 + 0x2030) + 1;
    *(float *)(param_1 + 0x1ea8) = fVar10;
  }
  return;
}

