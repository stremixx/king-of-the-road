
undefined4
FUN_004df4a0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00000050;
  char local_ac [2];
  undefined1 local_aa;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [12];
  char local_44 [32];
  char local_24 [4];
  char local_20 [32];
  
  local_9c = param_7 % 1000;
  local_a0 = (param_7 % 100000) / 1000;
  if (param_7 / 100000 == 2) {
    puVar1 = local_74 + 2;
    iVar2 = 4;
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_88 = DAT_007015b4;
    local_7c = DAT_007015b4;
    local_8c = DAT_007015b0;
    local_84 = DAT_007015b8;
    local_80 = DAT_007015b0;
    local_78 = DAT_007015b8;
    puVar1 = (undefined4 *)&stack0x00000020;
    puVar4 = local_74;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    _strncpy(local_44,param_3,0x1f);
    _strncpy(local_24,param_4,0x1f);
    local_90 = in_stack_00000050;
    local_98 = 1;
    local_94 = 0;
    FUN_005e48c0(param_7,param_2,0x9c,&local_a0);
  }
  else if (param_7 / 100000 == 3) {
    iVar2 = local_9c + 300000;
    local_a0 = 0;
    if (DAT_006cd2a4 < DAT_006cd28c) {
      local_a0 = DAT_006cd2a4;
    }
    puVar1 = local_74 + 2;
    iVar3 = 4;
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_88 = DAT_007015b4;
    local_7c = DAT_007015b4;
    local_9c = 0xb;
    local_98 = 0;
    local_8c = DAT_007015b0;
    local_84 = DAT_007015b8;
    local_80 = DAT_007015b0;
    local_78 = DAT_007015b8;
    puVar1 = (undefined4 *)&stack0x00000020;
    puVar4 = local_74;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    local_44[0] = '\0';
    local_44[1] = '\0';
    local_44[2] = '\x16';
    local_44[3] = 'D';
    local_94 = 1;
    local_90 = in_stack_00000050;
    _strncpy(local_44 + 4,param_3,0x1f);
    _strncpy(local_20,&DAT_00671f78,0x1f);
    _strncpy(local_ac,param_3 + 5,2);
    local_aa = 0;
    FUN_005e48c0(iVar2,local_ac,0xa0,&local_a0);
    iVar2 = FUN_005e4980(iVar2);
    if (DAT_006ee164 != 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(DAT_006ee164 + 0x10);
      return 0;
    }
    FUN_004e1e9c(s_add_helicopter___copterCluster___00671f50);
    return 0;
  }
  return 0;
}

