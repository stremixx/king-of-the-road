
undefined4 * __thiscall FUN_005e9eb0(undefined4 *param_1,char *param_2)

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
  
  puStack_8 = &LAB_00648c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0065173c;
  uVar3 = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
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
  param_1[0xf] = pcVar2;
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
  param_1[0x21] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  puVar7 = param_1 + 0x27;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

