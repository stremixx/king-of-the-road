
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fa3a0(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float10 fVar6;
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
  
  local_34 = *(float *)(param_1 + 0x2528);
  local_3c = local_34 * *param_2;
  pfVar1 = (float *)(param_1 + 0x2334);
  local_38 = local_34 * param_2[1];
  local_34 = local_34 * param_2[2];
  local_30 = local_3c;
  local_2c = local_38;
  local_28 = local_34;
  FUN_005aae00(&local_24,&local_30);
  fVar2 = *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0x233c) -
          *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0x2338);
  fVar4 = *(float *)(param_1 + 0xd8) * *pfVar1 -
          *(float *)(param_1 + 0x233c) * *(float *)(param_1 + 0xd0);
  fVar3 = *(float *)(param_1 + 0x2338) * *(float *)(param_1 + 0xd0) -
          *(float *)(param_1 + 0xd4) * *pfVar1;
  local_30 = fVar4 * *(float *)(param_1 + 0xd8) - fVar3 * *(float *)(param_1 + 0xd4);
  local_2c = fVar3 * *(float *)(param_1 + 0xd0) - fVar2 * *(float *)(param_1 + 0xd8);
  local_28 = fVar2 * *(float *)(param_1 + 0xd4) - fVar4 * *(float *)(param_1 + 0xd0);
  local_24 = local_30;
  local_20 = local_2c;
  local_1c = local_28;
  fVar6 = (float10)FUN_005aabc0(&local_24);
  *(float *)(param_1 + 0xdc4) = (float)fVar6;
  if (((fVar6 < (float10)*(float *)(param_1 + 0x251c) * (float10)_DAT_0064a6c0) &&
      (*(int *)(param_1 + 0x1abc) != 0)) && (*(char *)(param_1 + 0x19ba) == '\0')) {
    fVar2 = *(float *)(param_1 + 0xd0) * *pfVar1 +
            *(float *)(param_1 + 0x2338) * *(float *)(param_1 + 0xd4) +
            *(float *)(param_1 + 0x233c) * *(float *)(param_1 + 0xd8);
    *pfVar1 = fVar2 * *(float *)(param_1 + 0xd0);
    *(float *)(param_1 + 0x2338) = fVar2 * *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0x233c) = fVar2 * *(float *)(param_1 + 0xd8);
  }
  local_28 = *(float *)(param_1 + 0x2524);
  local_30 = local_28 * *param_3;
  local_2c = local_28 * param_3[1];
  local_28 = local_28 * param_3[2];
  local_18 = local_30;
  local_14 = local_2c;
  local_10 = local_28;
  FUN_004e2984(local_c,&local_18,param_1 + 0x1f48);
  FUN_005aae00(&local_24,local_c);
  FUN_004e29c2(&local_3c,param_1 + 0x234c,param_1 + 0x1f48);
  local_30 = local_3c - *(float *)(param_1 + 0x2358);
  local_2c = local_38 - *(float *)(param_1 + 0x235c);
  local_28 = local_34 - *(float *)(param_1 + 0x2360);
  *(float *)(param_1 + 0x2364) = local_30;
  *(float *)(param_1 + 0x2368) = local_2c;
  *(float *)(param_1 + 0x236c) = local_28;
  *(float *)(param_1 + 0x2358) = local_3c;
  *(float *)(param_1 + 0x235c) = local_38;
  *(float *)(param_1 + 0x2360) = local_34;
  puVar5 = (undefined4 *)FUN_004cb300(&local_24,param_1 + 0x234c,param_1 + 0x22a4);
  *(undefined4 *)(param_1 + 0x2340) = *puVar5;
  *(undefined4 *)(param_1 + 0x2344) = puVar5[1];
  *(undefined4 *)(param_1 + 0x2348) = puVar5[2];
  return;
}

