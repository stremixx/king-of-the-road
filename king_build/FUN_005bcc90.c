
undefined4 * __thiscall FUN_005bcc90(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0064c80c;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  puVar3 = param_1 + 0x11;
  iVar6 = 6;
  do {
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0x3f000000;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3 = puVar3 + 9;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *param_1 = &PTR_FUN_0064cc74;
  iVar2 = DAT_00701ea0;
  iVar4 = 0;
  param_1[4] = DAT_00701ea0;
  iVar6 = 0;
  param_1[5] = DAT_00701ea4;
  if (iVar2 != 0) {
    iVar6 = *(int *)(iVar2 + 0x14);
    iVar4 = FUN_005e9710(param_2);
  }
  param_1[0xd] = iVar4 + 6;
  param_1[0xe] = iVar6 + 4;
  uVar7 = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  pcVar5 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)FUN_00631d33(~uVar7);
  param_1[8] = param_3;
  uVar7 = 0xffffffff;
  param_1[3] = pcVar5;
  do {
    pcVar9 = param_2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x47] = 0;
  param_1[9] = 0;
  param_1[7] = 0xffffffff;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  ExceptionList = local_c;
  return param_1;
}

