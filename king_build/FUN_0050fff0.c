
void FUN_0050fff0(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  byte local_180 [128];
  char local_100 [128];
  char local_80 [128];
  
  uVar5 = 0xffffffff;
  do {
    pcVar10 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar10 = pcVar10 + -uVar5;
  pcVar11 = local_80;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar10 = param_2;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar10 = pcVar11 + -uVar5;
  pcVar11 = local_100;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar10 = &DAT_00675644;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar10 = local_100;
  do {
    pcVar9 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  pcVar10 = pcVar11 + -uVar5;
  pcVar11 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar3 = (byte *)(pcVar10 + -uVar5);
  pbVar8 = local_180;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar8 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar8 = pbVar8 + 1;
  }
  if (DAT_006cdcd0 == 4) {
LAB_005100b2:
    pcVar10 = &DAT_0067563c;
  }
  else if (DAT_006cdcd0 == 3) {
    pbVar8 = &DAT_0066bd44;
    pbVar3 = local_180;
    do {
      bVar2 = *pbVar3;
      bVar12 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) goto LAB_00510128;
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar12 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_00510128;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_0051012d:
    if (iVar7 != 0) goto LAB_005100b2;
    pcVar10 = s_1_res_00675634;
  }
  else {
    if (DAT_006cdcd0 == 2) {
      pbVar8 = &DAT_0066bd44;
      pbVar3 = local_180;
      do {
        bVar2 = *pbVar3;
        bVar12 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) goto LAB_00510128;
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar12 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_00510128;
        pbVar3 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar7 = 0;
      goto LAB_0051012d;
    }
    if (DAT_006cdcd0 == 1) {
      pbVar8 = &DAT_0066bd44;
      pbVar3 = local_180;
      do {
        bVar2 = *pbVar3;
        bVar12 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_00510179:
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_0051017e;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar12 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_00510179;
        pbVar3 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar7 = 0;
LAB_0051017e:
      if (iVar7 == 0) {
LAB_005101d4:
        pcVar10 = s_2_res_00675624;
      }
      else {
        pcVar10 = s_1_res_00675634;
      }
    }
    else {
      if (DAT_006cdcd0 != 0) goto LAB_005101fe;
      pbVar8 = &DAT_0066bd44;
      pbVar3 = local_180;
      do {
        bVar2 = *pbVar3;
        bVar12 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_005101c2:
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_005101c7;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar12 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_005101c2;
        pbVar3 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar7 = 0;
LAB_005101c7:
      pcVar10 = s_3_res_0067562c;
      if (iVar7 != 0) goto LAB_005101d4;
    }
  }
  uVar5 = 0xffffffff;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pbVar3 = local_180;
  do {
    pbVar8 = pbVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pbVar8 = pbVar3 + 1;
    bVar2 = *pbVar3;
    pbVar3 = pbVar8;
  } while (bVar2 != 0);
  pbVar3 = (byte *)(pcVar11 + -uVar5);
  pbVar8 = pbVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar8 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar8 = pbVar8 + 1;
  }
LAB_005101fe:
  pbVar3 = local_180;
  pcVar10 = local_100;
  uVar4 = FUN_005db8f0(local_80);
  FUN_005da550(uVar4,pcVar10,pbVar3);
  return;
LAB_00510128:
  iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
  goto LAB_0051012d;
}

