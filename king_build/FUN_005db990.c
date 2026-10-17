
undefined4 * __thiscall FUN_005db990(int param_1,byte *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  
  pbVar7 = &DAT_00670204;
  pbVar3 = *(byte **)(param_1 + 0x288);
  do {
    bVar2 = *pbVar3;
    bVar11 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_005db9c8:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_005db9cd;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar11 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_005db9c8;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_005db9cd:
  if (iVar4 == 0) {
    DAT_0071fcec._0_1_ = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar3 = *(byte **)(param_1 + 0x288);
    do {
      pbVar7 = pbVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar7 = pbVar3 + 1;
      bVar2 = *pbVar3;
      pbVar3 = pbVar7;
    } while (bVar2 != 0);
    uVar5 = ~uVar5;
    pbVar3 = pbVar7 + -uVar5;
    pbVar7 = (byte *)&DAT_0071fcec;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar7 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar7 = pbVar7 + 1;
    }
  }
  pbVar7 = &DAT_00670204;
  pbVar3 = param_2;
  do {
    bVar2 = *pbVar3;
    bVar11 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_005dba2b:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_005dba30;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar11 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_005dba2b;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_005dba30:
  if (iVar4 != 0) {
    uVar5 = 0xffffffff;
    do {
      pbVar3 = param_2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar3 = param_2 + 1;
      bVar2 = *param_2;
      param_2 = pbVar3;
    } while (bVar2 != 0);
    uVar5 = ~uVar5;
    iVar4 = -1;
    pcVar8 = (char *)&DAT_0071fcec;
    do {
      pcVar10 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pbVar3 = pbVar3 + -uVar5;
    pbVar7 = (byte *)(pcVar10 + -1);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar7 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar7 = pbVar7 + 1;
    }
  }
  uVar5 = 0xffffffff;
  do {
    pcVar8 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar10 = (char *)&DAT_0071fcec;
  do {
    pcVar9 = pcVar10;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  return &DAT_0071fcec;
}

