
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057dc20(int *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float *pfVar6;
  float10 fVar7;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  undefined1 local_48 [12];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_c [12];
  
  local_c4 = *(float *)(param_2 + 0x40);
  local_c0 = *(float *)(param_2 + 0x44);
  fVar1 = (float)param_1[0x68];
  local_bc = *(float *)(param_2 + 0x48);
  fVar2 = (float)param_1[0x69];
  local_84 = (float)param_1[0x6b];
  fVar3 = (float)param_1[0x6a];
  local_80 = (float)param_1[0x6c];
  local_7c = (float)param_1[0x6d];
  local_b8 = fVar1;
  local_b4 = fVar2;
  local_b0 = fVar3;
  FUN_0041ce10(fVar3 * local_c0 - fVar2 * local_bc,local_bc * fVar1 - fVar3 * local_c4,
               fVar2 * local_c4 - local_c0 * fVar1);
  FUN_0041ce10(local_a8 * local_bc - local_a4 * local_c0,local_a4 * local_c4 - local_ac * local_bc,
               local_ac * local_c0 - local_a8 * local_c4);
  local_9c = local_90;
  local_98 = local_8c;
  local_94 = local_88;
  FUN_005aaad0(&local_64,&local_9c);
  local_78 = local_84;
  local_74 = local_80;
  local_70 = local_7c;
  local_58 = fVar1;
  local_54 = fVar2;
  local_50 = fVar3;
  fVar7 = (float10)FUN_004e1fd9();
  local_68 = (float)fVar7;
  local_a0 = local_c4 * local_b8 + local_b4 * local_c0 + local_bc * local_b0;
  FUN_0041ce10(local_b0 * local_c0 - local_b4 * local_bc,local_bc * local_b8 - local_b0 * local_c4,
               local_b4 * local_c4 - local_c0 * local_b8);
  FUN_0041ce10(local_a8 * local_bc - local_a4 * local_c0,local_a4 * local_c4 - local_ac * local_bc,
               local_ac * local_c0 - local_a8 * local_c4);
  local_90 = local_9c;
  local_8c = local_98;
  local_88 = local_94;
  fVar7 = (float10)FUN_005aabc0(&local_90);
  local_6c = (float)-((float10)local_a0 * (float10)(float)param_1[0x164]);
  fVar7 = fVar7 - ABS(-((float10)local_a0 * (float10)(float)param_1[0x164]) - (float10)local_a0) *
                  (float10)_DAT_0064c9d0;
  local_a0 = (float)fVar7;
  if ((float10)_DAT_0064b254 < fVar7) {
    FUN_005aba00(&local_3c,param_3);
    FUN_0041ce10(local_5c * local_c0 - local_60 * local_bc,local_bc * local_64 - local_5c * local_c4
                 ,local_60 * local_c4 - local_c0 * local_64);
    FUN_0041ce10(local_ac * local_3c + local_a8 * local_30 + local_a4 * local_24,
                 local_ac * local_38 + local_a8 * local_2c + local_a4 * local_20,
                 local_ac * local_34 + local_a8 * local_28 + local_a4 * local_1c);
    fVar1 = local_b8 * local_84 + local_b4 * local_80 + local_b0 * local_7c;
    FUN_0041ce10(local_b8 * fVar1,local_b4 * fVar1,local_b0 * fVar1);
    local_90 = local_9c;
    local_8c = local_98;
    local_88 = local_94;
    FUN_004bde20(local_48,&local_84,&local_90);
    local_4c = local_a0 / (float)param_1[0x334];
    FUN_004e1080(&local_b8,&local_90);
    FUN_005aabc0(&local_90);
    uVar5 = FUN_004e2984(&local_9c,param_1 + 0x336,&local_b8,&local_b8);
    FUN_004e1080(uVar5);
    fVar7 = (float10)FUN_0061d200();
    uVar5 = FUN_004bdd80(&local_9c,local_48,(float)fVar7);
    uVar5 = FUN_004bdd80(&local_ac,&local_b8,local_4c,uVar5);
    puVar4 = (undefined4 *)FUN_004bddd0(local_c,uVar5);
    local_78 = (float)*puVar4;
    local_74 = (float)puVar4[1];
    local_70 = (float)puVar4[2];
  }
  else {
    local_a0 = 0.0;
    fVar7 = (float10)FUN_0061d200();
    FUN_0041ce10((float)((float10)local_84 * fVar7),(float)((float10)local_80 * fVar7),
                 (float)((float10)local_7c * fVar7));
    local_78 = (float)local_9c;
    local_74 = (float)local_98;
    local_70 = (float)local_94;
  }
  uVar5 = FUN_004bdd80(local_c,&local_c4,local_6c);
  uVar5 = FUN_004bdd80(local_48,&local_64,local_a0,uVar5);
  pfVar6 = (float *)FUN_004bddd0(&local_9c,uVar5);
  local_58 = *pfVar6;
  local_54 = pfVar6[1];
  local_50 = pfVar6[2];
  FUN_004e20b1(&local_58,s_perform_bwc__1_0067c130,0x43160000);
  (**(code **)(*param_1 + 0x90))(&local_58,s_perform_bwc__2_0067c120);
  (**(code **)(*param_1 + 0x94))(&local_80,s_perform_bwc__3_0067c110);
  return;
}

