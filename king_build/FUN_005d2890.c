
undefined4 * __thiscall FUN_005d2890(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = ExceptionList;
  puStack_8 = &LAB_00648528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00650eb8;
  param_1[5] = param_2;
  param_1[4] = 0;
  param_1[3] = 0;
  if (param_3 == (char *)0x0) {
    param_1[7] = 0;
    ExceptionList = pvVar2;
    return param_1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_00631d33(~uVar4);
  uVar4 = 0xffffffff;
  param_1[7] = pcVar3;
  do {
    pcVar6 = param_3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar3 = pcVar3 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

