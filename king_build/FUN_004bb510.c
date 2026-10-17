
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb510(undefined4 *param_1,float *param_2,float *param_3,float param_4,int param_5,
                 float param_6,int param_7)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006447d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_7 != 0) &&
     ((*(int *)(DAT_006cdbcc + 0x514) == 1 ||
      (ExceptionList = &local_c, *(int *)(DAT_006cdbcc + 0x524) != 0)))) {
    local_58[0] = 3;
    local_2c = param_5;
    local_54 = *param_1;
    local_50 = param_1[1];
    local_48 = *param_2;
    local_4c = param_1[2];
    local_44 = param_2[1];
    local_40 = param_2[2];
    local_3c = *param_3;
    local_38 = param_3[1];
    local_30 = param_4;
    local_34 = param_3[2];
    local_28 = param_6;
    ExceptionList = &local_c;
    FUN_006027f0(0x3bd,local_58,0x34);
  }
  if (_DAT_0064b248 <= _DAT_00694fc8) {
    local_8c = 0.0;
    local_88 = 0;
    local_84 = 0;
    if ((_DAT_0064b338 < *param_2) || (_DAT_0064b338 < param_2[1])) {
      FUN_0041ce10(DAT_00701598 * param_2[1] - DAT_00701594 * param_2[2],
                   DAT_00701590 * param_2[2] - DAT_00701598 * *param_2,
                   DAT_00701594 * *param_2 - DAT_00701590 * param_2[1]);
      pfVar2 = &local_98;
      pfVar4 = &local_70;
    }
    else {
      FUN_0041ce10(DAT_007015a8 * param_2[1] - DAT_007015a4 * param_2[2],
                   DAT_007015a0 * param_2[2] - DAT_007015a8 * *param_2,
                   DAT_007015a4 * *param_2 - DAT_007015a0 * param_2[1]);
      pfVar2 = &local_b0;
      pfVar4 = &local_7c;
    }
    pfVar2 = (float *)FUN_005aaad0(pfVar4,pfVar2);
    local_a0 = pfVar2[1];
    local_a4 = *pfVar2;
    local_9c = pfVar2[2];
    FUN_0041ce10(local_9c * param_2[1] - local_a0 * param_2[2],
                 local_a4 * param_2[2] - local_9c * *param_2,
                 local_a0 * *param_2 - local_a4 * param_2[1]);
    local_b0 = local_bc;
    local_ac = local_b8;
    local_a8 = local_b4;
    pfVar2 = (float *)FUN_005aaad0(&local_7c,&local_b0);
    local_98 = *pfVar2;
    local_94 = pfVar2[1];
    local_90 = pfVar2[2];
    for (; param_5 != 0; param_5 = param_5 + -1) {
      iVar3 = _rand();
      fVar1 = (float)iVar3 * _DAT_0064b244;
      iVar3 = _rand();
      local_80 = (((float)iVar3 * _DAT_0064b244 - fVar1) * _DAT_0064b1c0 + _DAT_0064b240) * param_6;
      iVar3 = _rand();
      fVar1 = (float)iVar3 * _DAT_0064b244;
      FUN_0041ce10(fVar1 * local_98,local_94 * fVar1,local_90 * fVar1);
      local_b0 = local_70;
      local_ac = local_6c;
      local_a8 = local_68;
      iVar3 = _rand();
      fVar1 = (float)iVar3 * _DAT_0064b244;
      FUN_0041ce10(local_b0 + fVar1 * local_a4,local_ac + local_a0 * fVar1,
                   local_a8 + local_9c * fVar1);
      local_8c = local_7c;
      local_88 = local_78;
      local_84 = local_74;
      iVar3 = _rand();
      fVar1 = (float)iVar3 * _DAT_0064b244;
      iVar3 = _rand();
      FUN_005aad10(local_24,(((float)iVar3 * _DAT_0064b244 - fVar1) * _DAT_0064b1c4 + _DAT_0064b240)
                            * param_4);
      iVar3 = _rand();
      fVar1 = (float)iVar3 * _DAT_0064b244;
      iVar3 = _rand();
      local_64 = ((float)iVar3 * _DAT_0064b244 - fVar1) * _DAT_0064b1c8 + _DAT_0064b240;
      local_5c = local_64 * param_3[2];
      local_60 = local_64 * param_3[1];
      local_64 = local_64 * *param_3;
      FUN_005aae00(local_18,&local_64);
      iVar3 = FUN_00578a50(0xb4,DAT_006f5a00);
      local_4 = 0;
      if (iVar3 != 0) {
        FUN_0059d5f0(DAT_00695184,param_1,&local_8c,local_80,&DAT_00694868,DAT_00695174);
      }
      local_4 = 0xffffffff;
    }
  }
  ExceptionList = local_c;
  return;
}

