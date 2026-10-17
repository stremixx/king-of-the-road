
void __thiscall
FUN_004d31a0(int *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,double param_8,double param_9,uint param_10)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
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
  undefined1 local_c [12];
  
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 0.0;
  local_54 = 0.0;
  local_50 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  FUN_0041ce10(param_6 * DAT_00701598 - param_7 * DAT_00701594,
               param_7 * DAT_00701590 - param_5 * DAT_00701598,
               param_5 * DAT_00701594 - param_6 * DAT_00701590);
  local_24 = local_30;
  local_20 = local_2c;
  local_1c = local_28;
  FUN_005aaad0(&local_6c,&local_24);
  uVar7 = param_10 & 1;
  if (uVar7 != 0) {
    fVar3 = (float)param_8;
    FUN_0041ce10(local_6c * fVar3,local_68 * fVar3,local_64 * fVar3);
    FUN_0041ce10(param_2 + local_24,param_3 + local_20,param_4 + local_1c);
    fVar3 = (float)param_9;
    local_58 = local_28;
    local_60 = local_30;
    local_5c = local_2c;
    FUN_0041ce10(local_6c * fVar3,local_68 * fVar3,local_64 * fVar3);
    FUN_0041ce10(local_24 + param_2,local_20 + param_3,local_1c + param_4);
    local_54 = local_30;
    local_50 = local_2c;
    local_4c = local_28;
  }
  uVar4 = param_10 & 2;
  if (uVar4 != 0) {
    fVar3 = (float)param_8;
    FUN_0041ce10(local_6c * fVar3,local_68 * fVar3,local_64 * fVar3);
    FUN_0041ce10(param_2 - local_24,param_3 - local_20,param_4 - local_1c);
    fVar3 = (float)param_9;
    local_40 = local_28;
    local_48 = local_30;
    local_44 = local_2c;
    FUN_0041ce10(fVar3 * local_6c,local_68 * fVar3,local_64 * fVar3);
    FUN_0041ce10(param_2 - local_24,param_3 - local_20,param_4 - local_1c);
    local_3c = local_30;
    local_38 = local_2c;
    local_34 = local_28;
  }
  if (*param_1 == 0) {
    FUN_005b4090(param_1[2],param_1[3],param_1[4],param_2,param_3,param_4,5);
    if ((uVar7 != 0) && ((*(byte *)(param_1 + 1) & 1) != 0)) {
      FUN_0041ce10(local_60 - (float)param_1[5],local_5c - (float)param_1[6],
                   local_58 - (float)param_1[7]);
      FUN_0041ce10(local_24,local_20,local_1c);
      FUN_0041ce10(local_30 + (float)param_1[5],local_2c + (float)param_1[6],
                   local_28 + (float)param_1[7]);
      FUN_005b4090(param_1[5],param_1[6],param_1[7],local_18,local_14,local_10,6);
      pfVar1 = (float *)(param_1 + 8);
      FUN_0041ce10(local_54 - *pfVar1,local_50 - (float)param_1[9],local_4c - (float)param_1[10]);
      local_24 = local_18;
      uVar8 = 7;
      local_20 = local_14;
      local_1c = local_10;
      uVar5 = FUN_004bdd80(&local_30,&local_24,0x3f800000,7);
      puVar6 = (undefined4 *)FUN_004bddd0(local_c,pfVar1,uVar5);
      FUN_005b4090(*pfVar1,param_1[9],param_1[10],*puVar6,puVar6[1],puVar6[2],uVar8);
    }
    if ((uVar4 != 0) && ((*(byte *)(param_1 + 1) & 2) != 0)) {
      piVar2 = param_1 + 0xb;
      uVar8 = 6;
      uVar5 = FUN_004bde20(local_c,&local_48,piVar2,0x3f800000,6);
      uVar5 = FUN_004bdd80(&local_18,uVar5);
      puVar6 = (undefined4 *)FUN_004bddd0(&local_24,piVar2,uVar5);
      FUN_005b4090(*piVar2,param_1[0xc],param_1[0xd],*puVar6,puVar6[1],puVar6[2],uVar8);
      piVar2 = param_1 + 0xe;
      uVar8 = 7;
      uVar5 = FUN_004bde20(local_c,&local_3c,piVar2,0x3f800000,7);
      uVar5 = FUN_004bdd80(&local_18,uVar5);
      puVar6 = (undefined4 *)FUN_004bddd0(&local_24,piVar2,uVar5);
      FUN_005b4090(*piVar2,param_1[0xf],param_1[0x10],*puVar6,puVar6[1],puVar6[2],uVar8);
    }
  }
  else {
    *param_1 = 0;
  }
  param_1[1] = param_10;
  param_1[2] = (int)param_2;
  param_1[3] = (int)param_3;
  param_1[4] = (int)param_4;
  if (uVar7 != 0) {
    param_1[5] = (int)local_60;
    param_1[6] = (int)local_5c;
    param_1[7] = (int)local_58;
    param_1[8] = (int)local_54;
    param_1[9] = (int)local_50;
    param_1[10] = (int)local_4c;
  }
  if (uVar4 != 0) {
    param_1[0xb] = (int)local_48;
    param_1[0xc] = (int)local_44;
    param_1[0xe] = (int)local_3c;
    param_1[0xd] = (int)local_40;
    param_1[0xf] = (int)local_38;
    param_1[0x10] = (int)local_34;
  }
  return;
}

