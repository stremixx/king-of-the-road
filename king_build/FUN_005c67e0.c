
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c67e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  float *pfVar1;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  FUN_005c6190(param_1,param_2,param_3,param_4,param_5,param_6,param_7,DAT_00701580 * _DAT_0064b320,
               DAT_00701584 * _DAT_0064b320,DAT_00701588 * _DAT_0064b320,param_8,param_9,param_10);
  FUN_005c6190(param_1,param_2,param_3,param_4,param_5,param_6,param_7,DAT_007015a0 * _DAT_0064b320,
               DAT_007015a4 * _DAT_0064b320,DAT_007015a8 * _DAT_0064b320,param_8,param_9,param_10);
  local_18 = DAT_007015a0 + DAT_00701580;
  local_14 = DAT_007015a4 + DAT_00701584;
  local_10 = DAT_007015a8 + DAT_00701588;
  pfVar1 = (float *)FUN_005aaad0(local_c,&local_18);
  FUN_005c6190(param_1,param_2,param_3,param_4,param_5,param_6,param_7,*pfVar1 * _DAT_0064b248,
               pfVar1[1] * _DAT_0064b248,pfVar1[2] * _DAT_0064b248,param_8,param_9,param_10);
  local_18 = -DAT_007015a0 + DAT_00701580;
  local_14 = -DAT_007015a4 + DAT_00701584;
  local_10 = -DAT_007015a8 + DAT_00701588;
  pfVar1 = (float *)FUN_005aaad0(local_c,&local_18);
  FUN_005c6190(param_1,param_2,param_3,param_4,param_5,param_6,param_7,*pfVar1 * _DAT_0064b248,
               pfVar1[1] * _DAT_0064b248,pfVar1[2] * _DAT_0064b248,param_8,param_9,param_10);
  return;
}

