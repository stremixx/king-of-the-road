
undefined4 * __thiscall FUN_005e3d70(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = 0xffffffff;
  *param_1 = &PTR_FUN_00651728;
  pcVar2 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  pcVar2 = (char *)FUN_00631d33(~uVar3);
  uVar3 = 0xffffffff;
  param_1[0x3ec] = pcVar2;
  do {
    pcVar6 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  puVar7 = param_1 + 3;
  for (iVar5 = 1000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  param_1[0x3eb] = 2;
  ExceptionList = local_c;
  return param_1;
}

