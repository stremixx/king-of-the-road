
undefined4 * __thiscall FUN_005c35f0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  CHAR local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006480f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005dbb90(param_2);
  local_4 = 0;
  FUN_005c2610(param_1);
  param_1[0x81c] = 0;
  param_1[0x81d] = 0;
  param_1[0x81b] = &PTR_FUN_00650938;
  param_1[0x81e] = 0xffffffff;
  param_1[0x81f] = 0xffffffff;
  param_1[0x820] = 0;
  param_1[0x823] = param_1;
  local_4._0_1_ = 2;
  FUN_006022c0();
  param_1[0x7c6] = 0;
  *param_1 = &PTR_FUN_00650a10;
  param_1[0x7bd] = 0;
  param_1[0x7be] = 0;
  param_1[0x7c0] = 0;
  param_1[0x7bf] = 0;
  param_1[0x7c7] = 0x3ff00000;
  param_1[0x7c2] = 1;
  param_1[0x7c3] = 1;
  param_1[0x7c4] = 0;
  param_1[0x7bc] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(int *)(DAT_00706ecc + 0x1a0) == 0) {
    ExceptionList = local_c;
    return param_1;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_table_0067e7c8,s_net_cfg_0067e7d0,local_4c,0x32,(LPCSTR)param_1[0xa0]);
  uVar3 = 0xffffffff;
  pcVar2 = local_4c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00631d33(~uVar3);
  uVar3 = 0xffffffff;
  param_1[0x7bd] = pcVar2;
  pcVar5 = local_4c;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

