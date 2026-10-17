
undefined4 * __thiscall
FUN_005a4960(undefined4 *param_1,int param_2,char *param_3,char *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(100,s_thunders_0067d880);
  uVar4 = 0xffffffff;
  *param_1 = &PTR_FUN_006504c4;
  param_1[8] = param_2;
  param_1[0x12] = 0;
  pcVar3 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  pcVar3 = (char *)FUN_00631d33(~uVar4);
  uVar4 = 0xffffffff;
  param_1[10] = pcVar3;
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
  uVar4 = 0xffffffff;
  pcVar3 = param_4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_00631d33(~uVar4);
  uVar4 = 0xffffffff;
  param_1[9] = pcVar3;
  do {
    pcVar6 = param_4;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar6;
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
  param_1[0xc] = *(undefined4 *)(param_2 + 0xb98);
  uVar2 = *(undefined4 *)(param_2 + 0xb9c);
  param_1[0xe] = param_5;
  param_1[0xd] = uVar2;
  param_1[0xf] = param_6;
  param_1[0x10] = param_7;
  param_1[0x11] = param_8;
  FUN_005d2c20(param_1);
  ExceptionList = local_c;
  return param_1;
}

