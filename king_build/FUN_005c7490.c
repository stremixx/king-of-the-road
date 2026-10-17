
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_24 = DAT_00701580 * _DAT_0064b320;
  local_20 = DAT_00701584 * _DAT_0064b320;
  local_1c = DAT_00701588 * _DAT_0064b320;
  FUN_005c6ed0(param_1,param_2,param_3,&local_24,param_4,param_5);
  local_24 = DAT_007015a0 * _DAT_0064b320;
  local_20 = DAT_007015a4 * _DAT_0064b320;
  local_1c = DAT_007015a8 * _DAT_0064b320;
  FUN_005c6ed0(param_1,param_2,param_3,&local_24,param_4,param_5);
  local_24 = DAT_007015a0 + DAT_00701580;
  local_20 = DAT_007015a4 + DAT_00701584;
  local_1c = DAT_007015a8 + DAT_00701588;
  pfVar1 = (float *)FUN_005aaad0(local_c,&local_24);
  local_18 = *pfVar1 * _DAT_0064b248;
  local_14 = pfVar1[1] * _DAT_0064b248;
  local_10 = pfVar1[2] * _DAT_0064b248;
  FUN_005c6ed0(param_1,param_2,param_3,&local_18,param_4,param_5);
  local_18 = -DAT_007015a0 + DAT_00701580;
  local_14 = -DAT_007015a4 + DAT_00701584;
  local_10 = -DAT_007015a8 + DAT_00701588;
  pfVar1 = (float *)FUN_005aaad0(local_c,&local_18);
  local_24 = *pfVar1 * _DAT_0064b248;
  local_20 = pfVar1[1] * _DAT_0064b248;
  local_1c = pfVar1[2] * _DAT_0064b248;
  FUN_005c6ed0(param_1,param_2,param_3,&local_24,param_4,param_5);
  return;
}

