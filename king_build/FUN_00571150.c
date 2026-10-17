
int FUN_00571150(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000040;
  int local_a4;
  char *local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [12];
  char local_40 [32];
  char local_20 [32];
  
  iVar1 = in_stack_00000040;
  iVar2 = FUN_0052e200(in_stack_00000040);
  local_a4 = (iVar2 * 5 + 1000) * 200;
  FUN_005685e0(&local_a4);
  FUN_005e4740(local_a4,param_2);
  local_a0 = (char *)(&DAT_006c5ac8 + iVar1 * 0xdb);
  iVar3 = FUN_005ee8e0(0,local_a0);
  if (iVar3 == 0) {
    FUN_005d2520(local_a0,s_not_found_0067564c);
  }
  local_a0 = *(char **)(iVar3 + 0xc);
  local_98 = local_a4 % 1000;
  puVar4 = local_70 + 2;
  iVar3 = 4;
  do {
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4 = puVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_84 = DAT_007015b4;
  local_78 = DAT_007015b4;
  local_88 = DAT_007015b0;
  local_80 = DAT_007015b8;
  local_7c = DAT_007015b0;
  local_74 = DAT_007015b8;
  puVar4 = (undefined4 *)&stack0x00000010;
  puVar5 = local_70;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_9c = iVar2;
  _strncpy(local_40,param_3,0x1f);
  _strncpy(local_20,local_a0,0x1f);
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  FUN_005e48c0(local_a4,param_2,0x9c,&local_9c);
  iVar2 = FUN_005e4980(local_a4);
  if ((&DAT_006cdcf8)[iVar1 * 0xb] != 0) {
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)((&DAT_006cdcf8)[iVar1 * 0xb] + 0x10);
  }
  FUN_005e3f10(param_1 + 0x2c0);
  return local_a4;
}

