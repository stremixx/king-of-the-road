
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057d9c0(int *param_1,float *param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  int local_30 [9];
  float local_c;
  float local_8;
  float local_4;
  
  FUN_004e1fd9();
  fVar3 = *param_2 + (float)_DAT_0064a648;
  pfVar1 = param_2 + 0x10;
  fVar2 = *pfVar1;
  piVar8 = param_1 + 0x319;
  piVar9 = local_30;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  local_6c = fVar3 * fVar2 + param_2[0xd];
  local_68 = fVar3 * param_2[0x11] + param_2[0xe];
  fVar2 = fVar3 * param_2[0x12] + param_2[0xf];
  local_4 = local_4 - fVar2;
  fVar5 = local_4 * param_2[0x11] - (local_8 - local_68) * param_2[0x12];
  fVar3 = (local_c - local_6c) * param_2[0x12] - local_4 * *pfVar1;
  fVar4 = (local_8 - local_68) * *pfVar1 - (local_c - local_6c) * param_2[0x11];
  local_60 = fVar3 * param_2[0x12] - fVar4 * param_2[0x11];
  local_5c = fVar4 * *pfVar1 - fVar5 * param_2[0x12];
  FUN_0041ce10(local_60 + local_6c,local_68 + local_5c,
               fVar2 + (fVar5 * param_2[0x11] - fVar3 * *pfVar1));
  local_8 = local_5c;
  local_c = local_60;
  local_4 = (float)local_58;
  piVar8 = local_30;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_3 = *piVar8;
    piVar8 = piVar8 + 1;
    param_3 = param_3 + 1;
  }
  fVar2 = ABS((float)param_1[0x339] * *pfVar1 +
              (float)param_1[0x33a] * param_2[0x11] + (float)param_1[0x33b] * param_2[0x12]);
  FUN_0041ce10(fVar2 * *pfVar1,fVar2 * param_2[0x11],fVar2 * param_2[0x12]);
  local_50 = local_5c;
  local_54 = local_60;
  local_4c = local_58;
  FUN_0041ce10(param_2[0x11] * (float)param_1[0x33b] - (float)param_1[0x33a] * param_2[0x12],
               (float)param_1[0x339] * param_2[0x12] - *pfVar1 * (float)param_1[0x33b],
               (float)param_1[0x33a] * *pfVar1 - param_2[0x11] * (float)param_1[0x339]);
  local_6c = local_60;
  local_68 = local_5c;
  local_64 = local_58;
  FUN_004bde70(local_3c,&local_6c,pfVar1);
  uVar6 = FUN_004bdd80(&local_60,&local_54,param_1[0x164]);
  FUN_004bddd0(local_48,local_3c,uVar6);
  FUN_004e20b1(local_48,s_perform_wall_collision_0067c0f8,0x43160000);
  (**(code **)(*param_1 + 0x90))(local_48,s_perform_wall_collision_0067c0f8);
  return;
}

