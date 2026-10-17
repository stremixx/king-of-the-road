
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00615be0(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
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
  float local_c;
  float local_8;
  
  local_48 = *param_2 - *param_1;
  local_44 = param_2[1] - param_1[1];
  local_40 = param_2[2] - param_1[2];
  local_30 = local_48;
  local_2c = local_44;
  local_28 = local_40;
  FUN_005aabc0(&local_30);
  uVar2 = __ftol();
  local_30 = *param_2 - *param_1;
  local_2c = param_2[1] - param_1[1];
  local_28 = param_2[2] - param_1[2];
  FUN_005aaad0(&local_24,&local_30);
  local_24 = local_24 * _DAT_006522c4;
  local_48 = *param_1;
  local_20 = local_20 * _DAT_006522c4;
  local_44 = param_1[1];
  local_40 = param_1[2];
  local_54 = *param_1;
  local_1c = local_1c * _DAT_006522c4;
  local_50 = param_1[1];
  local_4c = param_1[2];
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      fVar1 = (float)uVar3;
      uVar3 = uVar3 + 1;
      local_18 = local_24 * fVar1;
      local_14 = local_20 * fVar1;
      local_48 = local_18 + *param_1;
      local_44 = local_14 + param_1[1];
      local_40 = fVar1 * local_1c + param_1[2];
      fVar1 = (float)uVar3;
      local_c = local_24 * fVar1;
      local_8 = local_20 * fVar1;
      local_54 = local_c + *param_1;
      local_50 = local_8 + param_1[1];
      local_4c = fVar1 * local_1c + param_1[2];
      local_3c = local_48;
      local_38 = local_44;
      local_34 = local_40;
      local_30 = local_54;
      local_2c = local_50;
      local_28 = local_4c;
      iVar4 = FUN_00614e60(&local_48,&local_54,param_3,param_4,param_5);
      if (iVar4 != 0) {
        return true;
      }
    } while (uVar3 < uVar2);
  }
  iVar4 = FUN_00614e60(&local_54,param_2,param_3,param_4,param_5);
  return iVar4 != 0;
}

