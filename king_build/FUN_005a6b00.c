
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005a6b00(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5,
            undefined4 param_6,char *param_7)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  double *pdVar8;
  char *pcVar9;
  char *pcVar10;
  double *pdVar11;
  int local_60;
  undefined4 *local_5c;
  char local_54 [4];
  char local_50 [28];
  undefined1 local_34 [24];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00647d6e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_005d2890(100,s_weatherandtime_0067d9e0);
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *param_1 = &PTR_FUN_00650618;
  local_c = 0;
  DAT_00701518 = param_1;
  FUN_005a7220(s___weather_ini_0067d9d0);
  uVar2 = FUN_005eea00(s_windSound_0067d9c4);
  param_1[0x7b] = uVar2;
  uVar4 = 0xffffffff;
  param_1[0x14] = param_2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  pcVar7 = param_3;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_0067d9c0;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x25] = uVar2;
  uVar4 = 0xffffffff;
  pcVar7 = param_3;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_00678954;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x80] = uVar2;
  uVar4 = 0xffffffff;
  pcVar7 = param_3;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = s_space_00670488;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x23] = uVar2;
  uVar4 = 0xffffffff;
  pcVar7 = param_4;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_0067d9c0;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x27] = uVar2;
  uVar4 = 0xffffffff;
  do {
    pcVar7 = param_4;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar7 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_00678954;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x81] = uVar2;
  uVar4 = 0xffffffff;
  pcVar7 = param_5;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_0067d9c0;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x26] = uVar2;
  uVar4 = 0xffffffff;
  do {
    pcVar7 = param_5;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = param_5 + 1;
    cVar1 = *param_5;
    param_5 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar7 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = s_Sound_0067d9b8;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_50;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005eea00(local_54);
  param_1[0x7f] = uVar2;
  uVar4 = 0xffffffff;
  pcVar7 = param_7;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_00676698;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x78] = uVar2;
  uVar4 = 0xffffffff;
  pcVar7 = param_7;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_00678954;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x79] = uVar2;
  uVar4 = 0xffffffff;
  pcVar7 = param_7;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_0067894c;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  param_1[0x7a] = uVar2;
  uVar4 = 0xffffffff;
  do {
    pcVar7 = param_7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = param_7 + 1;
    cVar1 = *param_7;
    param_7 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar7 + -uVar4;
  pcVar10 = local_54;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = s_space_00670488;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = local_54;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = FUN_005ee8e0(0,local_54);
  local_5c = param_1 + 0x28;
  param_1[0x24] = uVar2;
  local_60 = 0;
  pdVar8 = (double *)&DAT_0067d788;
  pdVar11 = (double *)(param_1 + 0x3a);
  do {
    FUN_0061c369(local_34,s_ILLUM_LEVEL__02d_0067d9a4,local_60);
    uVar2 = FUN_005ee8e0(0,local_34);
    *local_5c = uVar2;
    pdVar11[-1] = *pdVar8 + _DAT_00650640;
    if ((int)pdVar8 < 0x67d7c8) {
      *pdVar11 = *pdVar8 + _DAT_00650638;
    }
    else {
      *(undefined4 *)pdVar11 = 0;
      *(undefined4 *)((int)pdVar11 + 4) = 0xbff00000;
    }
    pdVar8 = pdVar8 + 1;
    local_60 = local_60 + 1;
    local_5c = local_5c + 1;
    pdVar11 = pdVar11 + 2;
  } while ((int)pdVar8 < 0x67d808);
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0x40380000;
  param_1[0x1d] = 0x3ff00000;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  iVar6 = FUN_00631d33(0x80);
  local_c._0_1_ = 1;
  if (iVar6 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005a5f60(param_1[0x14],0x4d12d84a,0xbfe921fb,0x70dbe03b,0x3fd41b2f,param_3,8
                                 ,0xd7,8);
  }
  param_1[0x7d] = piVar3;
  local_c = (uint)local_c._1_3_ << 8;
  (**(code **)(*piVar3 + 0x18))(1);
  iVar6 = FUN_00631d33(0x50);
  puStack_10._0_1_ = 2;
  if (iVar6 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005a4960(param_1[0x14],s_flash_0067d98c,s_thunderSound_0067d994,0,0x40240000
                                 ,0x33333333,0x3fd33333);
  }
  param_1[0x7e] = piVar3;
  puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
  (**(code **)(*piVar3 + 0x18))(1);
  *(uint *)(param_1[0x7e] + 0x48) = *(uint *)(param_1[0x7e] + 0x48) | 1;
  param_1[0x1e] = 0x4d12d84a;
  param_1[0x7c] = 0;
  param_1[0x84] = 0x3f800000;
  param_1[0x83] = 0x3f800000;
  param_1[0x82] = 0x3f800000;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x87] = 0x3f800000;
  param_1[0x88] = 0x3f000000;
  param_1[0x1f] = 0xbff921fb;
  param_1[0x90] = 0;
  param_1[0x89] = 0x3f800000;
  param_1[0x8a] = 0x3f800000;
  DAT_006fa33c = 0;
  DAT_006fa338 = 0;
  DAT_006fa334 = 0;
  DAT_006fa330 = 0;
  _DAT_006fa340 = 0;
  _DAT_006fa344 = 0x3ff00000;
  _DAT_006fa348 = 0;
  _DAT_006fa34c = 0x3ff00000;
  ExceptionList = pvStack_1c;
  return param_1;
}

