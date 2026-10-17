
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00614e60(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  float10 fVar4;
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
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_60 = *param_1;
  local_5c = param_1[1];
  local_58 = param_1[2];
  local_54 = *param_2;
  local_50 = param_2[1];
  local_4c = param_2[2];
  FUN_0041ce10(local_54 + local_60,local_50 + local_5c,local_4c + local_58);
  FUN_0041ce10(local_78 * _DAT_0064b248,local_74 * _DAT_0064b248,local_70 * _DAT_0064b248);
  fVar4 = (float10)FUN_00615460(&local_60);
  local_88 = (float)fVar4;
  fVar4 = (float10)FUN_00615460(&local_54);
  fVar4 = (fVar4 + (float10)local_88) * (float10)_DAT_0064b248;
  local_7c = (float)fVar4;
  FUN_0041ce10(local_84 - _DAT_00727780,local_80 - _DAT_00727784,
               (float)(fVar4 - (float10)_DAT_00727788));
  FUN_0041ce10(local_84 + _DAT_00727770,local_80 + _DAT_00727774,_DAT_00727778 + local_7c);
  FUN_0041ce10(local_84 + _DAT_00727780,local_80 + _DAT_00727784,_DAT_00727788 + local_7c);
  FUN_0041ce10(local_84 - _DAT_00727770,local_80 - _DAT_00727774,local_7c - _DAT_00727778);
  fVar4 = (float10)FUN_00615460(&local_24);
  local_1c = (float)fVar4;
  fVar4 = (float10)FUN_00615460(&local_18);
  local_10 = (float)fVar4;
  fVar4 = (float10)FUN_00615460(&local_c);
  local_4 = (float)fVar4;
  fVar4 = (float10)FUN_00615460(&local_30);
  local_28 = (float)fVar4;
  FUN_0041ce10(local_24 - local_c,local_20 - local_8,local_1c - local_4);
  FUN_0041ce10(local_18 - local_30,local_14 - local_2c,local_10 - local_28);
  local_94 = local_34 * local_44 - local_38 * local_40;
  local_90 = local_3c * local_40 - local_48 * local_34;
  local_8c = local_48 * local_38 - local_3c * local_44;
  local_78 = local_94;
  local_74 = local_90;
  local_70 = local_8c;
  fVar4 = (float10)FUN_004bff80(&local_78);
  local_88 = (float)SQRT(fVar4);
  FUN_004bff50(&local_6c,&local_78,local_88);
  local_88 = -(local_64 * local_7c + local_84 * local_6c + local_80 * local_68);
  fVar1 = local_64 * local_58 + local_68 * local_5c + local_6c * local_60 + local_88;
  local_88 = local_54 * local_6c + local_50 * local_68 + local_4c * local_64 + local_88;
  if ((float)_DAT_006522f0 <= fVar1) {
    if (ABS(fVar1) <= param_3 + (float)_DAT_0064a920) {
      *param_4 = local_60;
      local_94 = local_6c;
      param_4[1] = local_5c;
      local_90 = local_68;
      param_4[2] = local_58;
      local_8c = local_64;
      *param_5 = local_6c;
      param_5[1] = local_68;
      param_5[2] = local_64;
      FUN_0041ce10(param_3 * *param_5,param_3 * param_5[1],param_3 * param_5[2]);
      FUN_0041ce10(*param_4 - local_78,param_4[1] - local_74,param_4[2] - local_70);
      *param_4 = local_94;
      param_4[1] = local_90;
      param_4[2] = local_8c;
      return 1;
    }
    if ((param_3 + (float)_DAT_0064a920 < fVar1) && (local_88 < param_3 - (float)_DAT_0064a920)) {
      local_98 = (fVar1 - param_3) / (fVar1 - local_88);
      if (local_98 <= _DAT_0064b240) {
        if (local_98 < _DAT_0064b254) {
          local_98 = 0.0;
        }
      }
      else {
        local_98 = 1.0;
      }
      FUN_0041ce10(local_54 * local_98,local_50 * local_98,local_4c * local_98);
      uVar2 = FUN_004c03a0(&local_48,&local_60,_DAT_0064b240 - local_98,&local_94);
      FUN_004bfef0(&local_78,uVar2);
      pfVar3 = (float *)FUN_0041ce10(local_78,local_74,local_70);
      *param_4 = *pfVar3;
      param_4[1] = pfVar3[1];
      param_4[2] = pfVar3[2];
      pfVar3 = (float *)FUN_0041ce10(local_6c,local_68,local_64);
      *param_5 = *pfVar3;
      param_5[1] = pfVar3[1];
      param_5[2] = pfVar3[2];
      uVar2 = FUN_004bdd80(&local_94,param_5,param_3);
      pfVar3 = (float *)FUN_004bde20(&local_48,param_4,uVar2);
      *param_4 = *pfVar3;
      param_4[1] = pfVar3[1];
      param_4[2] = pfVar3[2];
      return 1;
    }
  }
  return 0;
}

