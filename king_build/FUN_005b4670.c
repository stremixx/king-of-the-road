
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_005b4670(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float fVar9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
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
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [12];
  float local_10;
  undefined1 local_c [12];
  
  if ((DAT_007019f0 & 1) == 0) {
    DAT_007019f0 = DAT_007019f0 | 1;
    _DAT_007018f0 = SQRT(_DAT_0064a650) * _DAT_0064a6d0;
  }
  if (param_2[3] == (float)_DAT_0064a668) {
    *(undefined4 *)(param_1 + 0x2050) = 0x1f;
    return 0x1f;
  }
  local_a0 = 0;
  *(undefined4 *)(param_1 + 0x2050) = 0;
  FUN_005abd60(&local_5c,*(int *)(param_1 + 0x2020) * 0x30 + 0x8c0 + param_1);
  if (DAT_0071f868 == 0) {
    fVar8 = (float10)*(double *)(param_1 + 0x2118) / (float10)*(double *)(param_1 + 0x2110);
    local_b8 = 0;
    uStack_b4 = 0x3ff00000;
  }
  else {
    local_b8 = *(undefined4 *)(param_1 + 0x2110);
    uStack_b4 = *(undefined4 *)(param_1 + 0x2114);
    fVar8 = (float10)*(double *)(param_1 + 0x2118);
  }
  local_ac = local_50 * _DAT_0064b928;
  local_a8 = local_4c * _DAT_0064b928;
  local_a4 = local_48 * _DAT_0064b928;
  local_70 = (float)(fVar8 - (float10)local_34 * (float10)_DAT_0064a660);
  local_7c = local_ac;
  local_78 = local_a8;
  local_74 = local_a4;
  fVar8 = (float10)FUN_005aabc0(&local_7c);
  FUN_005aad50(&local_ac,(float)fVar8);
  local_70 = local_70 / (float)fVar8;
  fVar9 = param_2[1] * local_78 + local_74 * param_2[2] + *param_2 * local_7c + local_70;
  if (fVar9 < -param_2[3]) {
    return 0;
  }
  if (fVar9 < param_2[3]) {
    local_a0 = 0x20;
  }
  local_ac = local_50;
  local_a8 = local_4c;
  local_a4 = local_48;
  local_60 = local_34 - (float)(double)CONCAT44(uStack_b4,local_b8);
  local_6c = local_50;
  local_68 = local_4c;
  local_64 = local_48;
  fVar8 = (float10)FUN_005aabc0(&local_6c);
  FUN_005aad50(&local_ac,(float)fVar8);
  local_60 = local_60 / (float)fVar8;
  fVar9 = param_2[1] * local_68 + local_64 * param_2[2] + *param_2 * local_6c + local_60;
  if (fVar9 < -param_2[3]) {
    return 0;
  }
  if (fVar9 < param_2[3]) {
    local_a0 = local_a0 | 1;
  }
  fVar9 = (float)_DAT_007018f0;
  FUN_0041ce10(fVar9 * local_50 + fVar9 * local_5c,fVar9 * local_4c + local_58 * fVar9,
               fVar9 * local_48 + local_54 * fVar9);
  local_8c = local_ac;
  local_80 = local_34 * fVar9 + local_38 * fVar9;
  local_88 = local_a8;
  local_84 = local_a4;
  fVar8 = (float10)FUN_005aabc0(&local_8c);
  FUN_005aad50(&local_ac,(float)fVar8);
  local_80 = local_80 / (float)fVar8;
  fVar9 = param_2[1] * local_88 + local_84 * param_2[2] + local_8c * *param_2 + local_80;
  if (fVar9 < -param_2[3]) {
    return 0;
  }
  if (fVar9 < param_2[3]) {
    local_a0 = local_a0 | 2;
  }
  fVar1 = -(float)_DAT_007018f0;
  fVar9 = (float)_DAT_007018f0;
  FUN_0041ce10(fVar9 * local_50 + fVar1 * local_5c,fVar9 * local_4c + local_58 * fVar1,
               fVar9 * local_48 + local_54 * fVar1);
  fVar4 = local_a4;
  fVar3 = local_a8;
  fVar2 = local_ac;
  fVar9 = local_34 * fVar9;
  FUN_004042a0();
  local_9c = fVar2;
  local_98 = fVar3;
  local_94 = fVar4;
  local_90 = fVar9 + local_38 * fVar1;
  fVar8 = (float10)FUN_005aabc0(&local_9c);
  FUN_005aad50(&local_ac,(float)fVar8);
  local_90 = local_90 / (float)fVar8;
  fVar9 = param_2[1] * local_98 + local_94 * param_2[2] + local_9c * *param_2 + local_90;
  if (fVar9 < -param_2[3]) {
    return 0;
  }
  if (fVar9 < param_2[3]) {
    local_a0 = local_a0 | 0x10;
  }
  fVar9 = (float)_DAT_007018f0;
  FUN_0041ce10(fVar9 * local_50 + fVar9 * local_44,fVar9 * local_4c + fVar9 * local_40,
               fVar9 * local_48 + fVar9 * local_3c);
  fVar3 = local_a4;
  fVar2 = local_a8;
  fVar1 = local_ac;
  FUN_004042a0();
  local_2c = fVar1;
  local_28 = fVar2;
  local_24 = fVar3;
  local_20 = local_34 * fVar9 + local_30 * fVar9;
  fVar8 = (float10)FUN_005aabc0(&local_2c);
  FUN_005aad50(&local_ac,(float)fVar8);
  local_20 = local_20 / (float)fVar8;
  fVar8 = (float10)FUN_004e1080(&local_2c,param_2);
  if (fVar8 + (float10)local_20 < -(float10)param_2[3]) {
    return 0;
  }
  uVar7 = local_a0;
  if (fVar8 + (float10)local_20 < (float10)param_2[3]) {
    uVar7 = local_a0 | 8;
  }
  FUN_0041ce10(0,(float)_DAT_007018f0,-(float)_DAT_007018f0);
  fVar8 = (float10)FUN_004e1080(local_c,&local_38);
  fVar9 = (float)fVar8;
  puVar5 = (undefined4 *)FUN_004cb300(&local_ac,local_c,&local_5c,fVar9);
  FUN_005b4d90(*puVar5,puVar5[1],puVar5[2],fVar9);
  fVar8 = (float10)FUN_005aabc0(local_1c);
  FUN_005aad50(&local_ac,(float)fVar8);
  local_10 = local_10 / (float)fVar8;
  fVar8 = (float10)FUN_004e1080(local_1c,param_2);
  if (fVar8 + (float10)local_10 < -(float10)param_2[3]) {
    return 0;
  }
  if (fVar8 + (float10)local_10 < (float10)param_2[3]) {
    uVar7 = uVar7 | 4;
  }
  *(uint *)(param_1 + 0x2050) = uVar7;
  uVar6 = 0x40;
  if (uVar7 != 0) {
    uVar6 = uVar7;
  }
  return uVar6;
}

