
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0059ef60(undefined4 *param_1,undefined4 param_2,float *param_3,float param_4,float param_5,
            float param_6,undefined4 param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
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
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  *param_1 = param_2;
  param_1[0x1e] = param_8;
  param_1[1] = param_7;
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = 0.0;
  if (param_8 != 0) {
    if (param_8 == 1) {
      FUN_0041ce10(param_4 * _DAT_0064b328,param_5 * _DAT_0064b328,param_6 * _DAT_0064b328);
      FUN_0041ce10(*param_3 - local_98,param_3[1] - local_94,param_3[2] - local_90);
      local_68 = local_80;
      local_64 = local_7c;
      local_60 = local_78;
      param_1[0x1c] = 0x3d4ccccd;
      param_1[0x1d] = 0x40533333;
      local_44 = 0x3e71a9fc;
      local_40 = 0x3e71a9fc;
      goto LAB_0059f0fb;
    }
    if (param_8 != 2) goto LAB_0059f0fb;
  }
  FUN_0041ce10(param_4 * _DAT_0064b324,param_5 * _DAT_0064b324,param_6 * _DAT_0064b324);
  FUN_0041ce10(*param_3 - local_80,param_3[1] - local_7c,param_3[2] - local_78);
  local_68 = local_98;
  local_64 = local_94;
  local_60 = local_90;
  param_1[0x1c] = 0x3d4ccccd;
  param_1[0x1d] = 0x3fc00000;
  local_44 = 0x3f4ccccd;
  local_40 = 0x3f4ccccd;
LAB_0059f0fb:
  FUN_0041ce10(param_6 * DAT_00701594 - param_5 * DAT_00701598,
               param_4 * DAT_00701598 - param_6 * DAT_00701590,
               param_5 * DAT_00701590 - param_4 * DAT_00701594);
  local_8c = local_80;
  local_88 = local_7c;
  local_84 = local_78;
  fVar7 = (float10)FUN_005aabc0(&local_8c);
  if ((float10)_DAT_00650174 <= fVar7) {
    pfVar4 = (float *)FUN_005aaad0(&local_5c,&local_8c);
    local_8c = *pfVar4;
    local_88 = pfVar4[1];
    local_84 = pfVar4[2];
  }
  else {
    local_8c = DAT_007015a0;
    local_88 = DAT_007015a4;
    local_84 = DAT_007015a8;
  }
  FUN_0041ce10(local_88 * param_6 - local_84 * param_5,local_84 * param_4 - param_6 * local_8c,
               param_5 * local_8c - local_88 * param_4);
  local_74 = local_80;
  local_70 = local_7c;
  local_6c = local_78;
  pfVar4 = (float *)FUN_005aaad0(&local_5c,&local_74);
  FUN_0041ce10(-*pfVar4,-pfVar4[1],-pfVar4[2]);
  local_48 = local_90;
  local_50 = local_98;
  local_4c = local_94;
  FUN_0041ce10(-local_98,-local_94,-local_90);
  uVar5 = local_40;
  fVar3 = local_6c;
  fVar2 = local_70;
  fVar1 = local_74;
  pfVar4 = (float *)FUN_005ab380(local_30,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_8c,local_88,
                                 local_84,local_40);
  FUN_0041ce10(fVar1 * *pfVar4 + fVar2 * pfVar4[3] + fVar3 * pfVar4[6],
               fVar1 * pfVar4[1] + fVar2 * pfVar4[4] + fVar3 * pfVar4[7],
               fVar1 * pfVar4[2] + fVar2 * pfVar4[5] + fVar3 * pfVar4[8]);
  FUN_0059eeb0(&local_5c,&local_68,param_1 + 2);
  FUN_0041ce10(-local_8c,-local_88,-local_84);
  uVar5 = FUN_005ab380(local_30,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_74,local_70,local_6c,
                       uVar5,&local_68,param_1 + 6);
  uVar5 = FUN_004cb300(&local_5c,&local_50,uVar5);
  FUN_0059eeb0(uVar5);
  uVar5 = local_44;
  uVar6 = FUN_005ab380(local_30,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_50,local_4c,local_48,
                       local_44,&local_68,param_1 + 10);
  uVar6 = FUN_004cb300(&local_5c,&local_8c,uVar6);
  FUN_0059eeb0(uVar6);
  FUN_0041ce10(-local_50,-local_4c,-local_48);
  fVar3 = local_6c;
  fVar2 = local_70;
  fVar1 = local_74;
  FUN_0041ce10(-local_8c,-local_88,-local_84);
  local_5c = local_80;
  local_58 = local_7c;
  local_54 = local_78;
  uVar5 = FUN_005ab380(local_30,DAT_007015b0,DAT_007015b4,DAT_007015b8,fVar1,fVar2,fVar3,uVar5,
                       &local_68,param_1 + 0xe);
  uVar5 = FUN_004cb300(local_3c,&local_5c,uVar5);
  FUN_0059eeb0(uVar5);
  uVar5 = FUN_004bdd80(local_3c,&param_4,param_1[0x1c],param_1 + 0x12);
  uVar5 = FUN_004bddd0(&local_5c,param_3,uVar5);
  uVar5 = FUN_004cb2c0(&local_74,&param_4,uVar5);
  FUN_0059eeb0(uVar5);
  uVar5 = FUN_004bdd80(local_3c,&param_4,param_1[0x1d],param_1 + 0x16);
  uVar5 = FUN_004bddd0(&local_5c,param_3,uVar5);
  FUN_0059eeb0(&param_4,uVar5);
  return;
}

