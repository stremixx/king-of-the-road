
undefined4 FUN_00590ef0(float *param_1,float param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0058abf0();
  FUN_0057d5a0(local_30);
  local_78 = 0.0;
  local_74 = 0.0;
  local_70 = 0.0;
  local_98 = 1;
  iVar9 = 0;
  fVar2 = local_30[3] * param_1[1] + local_18 * param_1[2] + local_30[0] * *param_1 + local_c;
  fVar3 = local_20 * param_1[1] + local_14 * param_1[2] + local_30[1] * *param_1 + local_8;
  fVar4 = local_1c * param_1[1] + local_10 * param_1[2] + local_30[2] * *param_1 + local_4;
  local_9c = -*(float *)((int)param_2 + 0xcd0);
  iVar6 = FUN_0058c8f0(&local_94);
  if (iVar6 != 0) {
    do {
      fVar5 = local_94 * (fVar2 - local_84) +
              local_90 * (fVar3 - local_80) + (fVar4 - local_7c) * local_8c;
      if (fVar5 <= param_4) {
        if (local_9c < fVar5) {
          iVar9 = iVar6 + -1;
          local_9c = fVar5;
          local_78 = fVar2;
          local_74 = fVar3;
          local_70 = fVar4;
        }
      }
      else {
        local_98 = 0;
      }
      iVar6 = FUN_0058c8f0(&local_94);
    } while (iVar6 != 0);
    if (local_98 == 0) {
      return 0;
    }
  }
  iVar9 = FUN_0058c950(&local_94,iVar9);
  if (iVar9 == 0) {
    FUN_004e1e9c(s_checkPMBintersection___mb_>get_c_0067cec0);
  }
  local_a4 = local_90 * param_4;
  local_a0 = local_8c * param_4;
  pfVar8 = param_3 + 0xd;
  local_6c = local_94 * param_4 + local_84;
  local_68 = local_a4 + local_80;
  local_64 = local_a0 + local_7c;
  pfVar7 = (float *)FUN_004e5bf2(&local_a8,&local_6c,&local_94,&local_78);
  pfVar1 = param_3 + 0x10;
  *pfVar8 = *pfVar7;
  param_3[0xe] = pfVar7[1];
  param_3[0xf] = pfVar7[2];
  *pfVar1 = local_94;
  param_3[0x11] = local_90;
  param_3[0x12] = local_8c;
  FUN_0057d570(&local_60);
  FUN_0041ce10(local_54 * param_3[0xe] + local_48 * param_3[0xf] + local_60 * *pfVar8 + local_3c,
               local_50 * param_3[0xe] + local_44 * param_3[0xf] + local_5c * *pfVar8 + local_38,
               local_4c * param_3[0xe] + local_40 * param_3[0xf] + local_58 * *pfVar8 + local_34);
  *pfVar8 = local_a8;
  param_3[0xe] = local_a4;
  param_3[0xf] = local_a0;
  pfVar8 = (float *)FUN_004cb300(&local_a8,pfVar1,&local_60);
  *pfVar1 = *pfVar8;
  param_3[0x11] = pfVar8[1];
  fVar2 = pfVar8[2];
  param_3[0x1d] = param_2;
  param_3[0x12] = fVar2;
  param_3[0x19] = 0.0;
  param_3[0x1b] = 0.0;
  pfVar8 = local_30;
  for (iVar9 = 0xc; param_3 = param_3 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_3 = *pfVar8;
    pfVar8 = pfVar8 + 1;
  }
  return 1;
}

