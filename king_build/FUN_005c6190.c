
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6190(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,float param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_retaddr;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fStack_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 uStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar6 = _DAT_006506f8;
  if (param_11 < _DAT_0064b254) {
    param_11 = 0.0;
    fVar6 = _DAT_0064b954;
  }
  local_20 = _DAT_0064b240 / _DAT_0067e87c + param_11;
  fVar6 = fVar6 - _DAT_0064b240 / _DAT_0067e87c;
  fVar3 = param_5 - param_2;
  param_6 = param_6 - param_3;
  local_b8 = param_7 - param_4;
  local_b4 = (param_6 * param_10 - local_b8 * param_9) / param_12;
  local_b0 = (local_b8 * param_8 - param_10 * fVar3) / param_12;
  local_bc = param_6 * param_13;
  local_b8 = local_b8 * param_13;
  fVar1 = fVar3 * param_13 + param_2;
  fVar2 = local_bc + param_3;
  local_a0 = local_b8 + param_4;
  local_9c = DAT_0067e884;
  local_98 = fVar6 * _DAT_0064b248 + local_20;
  local_84 = DAT_0067e884;
  local_94 = _DAT_0064b240 - param_13;
  fVar4 = local_b4 * _DAT_0064b248;
  local_90 = fVar1 - fVar4;
  fVar5 = local_b0 * _DAT_0064b248;
  local_8c = fVar2 - fVar5;
  fVar3 = ((param_9 * fVar3 - param_6 * param_8) / param_12) * _DAT_0064b248;
  local_88 = local_a0 - fVar3;
  local_80 = local_20;
  if (param_1 == 0.0) {
    local_80 = fVar6 + local_20;
  }
  local_78 = param_2 - fVar4;
  local_6c = DAT_0067e888;
  local_74 = param_3 - fVar5;
  local_70 = param_4 - fVar3;
  local_68 = local_20;
  if (param_1 == 0.0) {
    local_68 = fVar6 + local_20;
  }
  local_48 = fVar4 + param_2;
  local_64 = 1.0;
  local_60 = param_2;
  local_5c = param_3;
  local_44 = fVar5 + param_3;
  local_58 = param_4;
  local_54 = DAT_0067e888;
  local_40 = fVar3 + param_4;
  local_4c = 1.0;
  local_3c = DAT_0067e888;
  local_38 = local_20;
  if (param_1 != 0.0) {
    local_38 = fVar6 + local_20;
  }
  local_30 = fVar4 + fVar1;
  local_34 = 0x3f800000;
  local_24 = DAT_0067e884;
  local_2c = fVar5 + fVar2;
  local_28 = fVar3 + local_a0;
  if (param_1 != 0.0) {
    local_20 = fVar6 + local_20;
  }
  pfVar8 = &local_a8;
  fVar9 = 8.40779e-45;
  fVar7 = 4.51218e-43;
  fVar6 = 8.40779e-45;
  local_a8 = fVar1;
  local_a4 = fVar2;
  local_7c = local_94;
  local_50 = local_98;
  local_1c = local_94;
  (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,6,0x142,pfVar8,6,0);
  fStack_c0 = fStack_4;
  local_b4 = (float)DAT_0067e880;
  local_b8 = param_1;
  local_78 = fVar4 * param_7 + fStack_10;
  local_74 = fVar2 * param_7 + fStack_c;
  local_70 = fVar1 * param_7 + fStack_8;
  uStack_ac = 0;
  local_a8 = fStack_4 - fVar9;
  local_9c = DAT_0067e880;
  local_a4 = unaff_retaddr - (float)pfVar8;
  local_a0 = param_1 - fVar7;
  if (param_1 == 0.0) {
    local_98 = fVar6 + param_5;
  }
  else {
    local_98 = param_5;
  }
  local_90 = local_78 - fVar9;
  local_94 = 0.0;
  local_84 = DAT_0067e884;
  local_8c = local_74 - (float)pfVar8;
  local_88 = local_70 - fVar7;
  if (param_1 == 0.0) {
    local_80 = fVar6 + param_5;
  }
  else {
    local_80 = param_5;
  }
  local_6c = DAT_0067e884;
  local_60 = fVar9 + local_78;
  local_54 = DAT_0067e884;
  local_5c = (float)pfVar8 + local_74;
  local_58 = fVar7 + local_70;
  if (param_1 == 0.0) {
    local_50 = param_5;
  }
  else {
    local_50 = fVar6 + param_5;
  }
  local_48 = fVar9 + fStack_4;
  local_3c = DAT_0067e880;
  local_44 = (float)pfVar8 + unaff_retaddr;
  local_40 = fVar7 + param_1;
  if (param_1 == 0.0) {
    local_38 = param_5;
  }
  else {
    local_38 = fVar6 + param_5;
  }
  local_34 = 0;
  local_b0 = fVar5;
  local_7c = fVar3;
  local_68 = fVar5;
  local_64 = fVar3;
  local_4c = fVar3;
  (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,6,0x142,&fStack_c0,6,0);
  return;
}

