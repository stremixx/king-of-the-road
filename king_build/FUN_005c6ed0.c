
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6ed0(int param_1,float *param_2,float *param_3,float *param_4,float param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  float unaff_EDI;
  float unaff_retaddr;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 uStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float *local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float *local_80;
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
  float *local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float *local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  
  local_20 = _DAT_0064b240 / _DAT_0067e87c;
  fVar4 = _DAT_0064b954 - local_20;
  fVar2 = *param_3 - *param_2;
  local_b0 = param_3[1] - param_2[1];
  local_ac = param_3[2] - param_2[2];
  local_c0 = (local_b0 * param_4[2] - local_ac * param_4[1]) / param_5;
  local_60 = *param_2;
  fVar1 = param_2[1];
  local_58 = param_2[2];
  local_bc = (local_ac * *param_4 - fVar2 * param_4[2]) / param_5;
  local_b8 = (fVar2 * param_4[1] - local_b0 * *param_4) / param_5;
  local_b0 = local_b0 * param_6;
  local_ac = local_ac * param_6;
  local_a8 = fVar2 * param_6 + *param_2;
  local_a4 = local_b0 + param_2[1];
  local_a0 = local_ac + param_2[2];
  local_98 = (float *)(fVar4 * _DAT_0064b248);
  local_9c = DAT_0067e884;
  local_84 = DAT_0067e884;
  local_94 = _DAT_0064b240 - param_6;
  fVar2 = local_c0 * _DAT_0064b248;
  local_90 = local_a8 - fVar2;
  local_2c = local_bc * _DAT_0064b248;
  local_8c = local_a4 - local_2c;
  local_28 = local_b8 * _DAT_0064b248;
  local_88 = local_a0 - local_28;
  local_80 = (float *)local_20;
  if (param_1 == 0) {
    local_80 = (float *)(local_20 + fVar4);
  }
  local_78 = local_60 - fVar2;
  local_6c = DAT_0067e888;
  local_74 = fVar1 - local_2c;
  local_70 = local_58 - local_28;
  local_68 = local_20;
  if (param_1 == 0) {
    local_68 = local_20 + fVar4;
  }
  local_48 = fVar2 + local_60;
  local_64 = 1.0;
  local_44 = local_2c + fVar1;
  local_54 = DAT_0067e888;
  local_4c = 1.0;
  local_3c = DAT_0067e888;
  local_40 = local_28 + local_58;
  local_38 = (float *)local_20;
  if (param_1 != 0) {
    local_38 = (float *)(local_20 + fVar4);
  }
  local_30 = fVar2 + local_a8;
  local_34 = 0x3f800000;
  local_24 = DAT_0067e884;
  local_2c = local_2c + local_a4;
  local_28 = local_28 + local_a0;
  if (param_1 != 0) {
    local_20 = local_20 + fVar4;
  }
  fVar5 = 0.0;
  pfVar3 = &local_a8;
  fVar4 = 8.40779e-45;
  local_7c = local_94;
  local_5c = fVar1;
  local_50 = local_98;
  local_1c = local_94;
  (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,6,0x142,pfVar3,6,0);
  local_c0 = *param_3;
  local_bc = param_3[1];
  local_b8 = param_3[2];
  uStack_b4 = DAT_0067e880;
  local_ac = 0.0;
  local_78 = (*param_3 - *param_2) * unaff_retaddr + *param_2;
  local_74 = (param_3[1] - param_2[1]) * unaff_retaddr + param_2[1];
  local_70 = (param_3[2] - param_2[2]) * unaff_retaddr + param_2[2];
  local_9c = DAT_0067e880;
  local_a8 = local_c0 - fVar5;
  local_a4 = local_bc - unaff_ESI;
  local_a0 = local_b8 - unaff_EDI;
  local_98 = pfVar3;
  if (param_1 == 0) {
    local_98 = (float *)((float)pfVar3 + fVar4);
  }
  local_90 = local_78 - fVar5;
  local_94 = 0.0;
  local_84 = DAT_0067e884;
  local_8c = local_74 - unaff_ESI;
  local_88 = local_70 - unaff_EDI;
  local_80 = pfVar3;
  if (param_1 == 0) {
    local_80 = (float *)((float)pfVar3 + fVar4);
  }
  local_6c = DAT_0067e884;
  local_60 = fVar5 + local_78;
  local_54 = DAT_0067e884;
  local_5c = unaff_ESI + local_74;
  local_58 = unaff_EDI + local_70;
  local_50 = pfVar3;
  if (param_1 != 0) {
    local_50 = (float *)((float)pfVar3 + fVar4);
  }
  local_48 = fVar5 + local_c0;
  local_44 = unaff_ESI + local_bc;
  local_3c = DAT_0067e880;
  local_40 = unaff_EDI + local_b8;
  local_38 = pfVar3;
  if (param_1 != 0) {
    local_38 = (float *)((float)pfVar3 + fVar4);
  }
  local_34 = 0;
  local_b0 = fVar1;
  local_7c = fVar2;
  local_68 = fVar1;
  local_64 = fVar2;
  local_4c = fVar2;
  (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,6,0x142,&local_c0,6,0);
  return;
}

