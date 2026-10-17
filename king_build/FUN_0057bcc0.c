
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0057bcc0(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  undefined1 local_18 [8];
  float local_10;
  undefined1 local_c [12];
  
  local_58 = 0;
  local_60 = *param_3;
  local_5c = *param_4;
  fVar1 = param_3[1];
  fVar2 = param_4[1];
  local_54 = param_3[2];
  local_50 = param_4[2];
  local_38 = param_2;
  local_1c = (fVar2 - local_5c) * (param_1 - local_60) - (param_2 - local_5c) * (fVar1 - local_60);
  local_4c = 0;
  local_3c = param_1;
  local_48 = local_54 - fVar1;
  local_34 = 0;
  local_44 = local_50 - fVar2;
  FUN_0041ce10(param_1 - fVar1,param_2 - fVar2,0);
  local_28 = local_30 * local_44 - local_2c * local_48;
  uVar3 = FUN_004be230(&local_48,&local_60,&local_54);
  uVar3 = FUN_004be230(local_c,&local_3c,&local_54,uVar3);
  FUN_004be260(local_18,uVar3);
  if (((local_1c <= _DAT_0064b3e0) && (local_28 <= _DAT_0064b3e0)) && (local_10 <= _DAT_0064b3e0)) {
    return 1;
  }
  return 0;
}

