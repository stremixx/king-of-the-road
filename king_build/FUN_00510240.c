
void FUN_00510240(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064585e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00631d33(0xb4);
  iVar6 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar6 = FUN_005e9eb0(param_2);
  }
  local_4 = 0xffffffff;
  pcVar3 = (char *)FUN_005db8f0(param_1);
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = local_10c;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = param_2;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar3 = local_10c;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar2 = FUN_005686e0();
  pcVar3 = s_15_res_00675660;
  if (iVar2 != 2) {
    pcVar3 = &DAT_00675658;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar3 = local_10c;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar2 = FUN_0061c356(local_10c,&DAT_0066f3e8);
  if (iVar2 == 0) {
    FUN_005d2520(param_2,s_not_found_0067564c);
  }
  FUN_005eb720(param_1,iVar2,2,local_10c);
  iVar2 = 0;
  if (0 < *(int *)(iVar6 + 0x68)) {
    do {
      if ((*(byte *)(*(int *)(*(int *)(iVar6 + 0x6c) + iVar2 * 4) + 0x1c) & 1) != 0) {
        FUN_005bb710();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar6 + 0x68));
  }
  iVar2 = 0;
  if (0 < *(int *)(iVar6 + 0x50)) {
    do {
      if ((*(byte *)(*(int *)(*(int *)(iVar6 + 0x54) + iVar2 * 4) + 0x34) & 1) != 0) {
        FUN_005ba4e0(3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar6 + 0x50));
  }
  FUN_005dada0(iVar6);
  ExceptionList = local_c;
  return;
}

