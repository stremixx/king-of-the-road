
undefined4 __thiscall FUN_005c4fe0(int *param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 auStack_d4 [11];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char local_90 [32];
  char local_70 [32];
  char local_50 [40];
  undefined4 local_28 [10];
  
  puVar4 = local_28;
  iVar6 = 4;
  do {
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4 = puVar4 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_1[0x7bf] != 0) {
    if ((param_2 == 900) || (param_2 == 0x387)) {
      uStack_a4 = *(undefined4 *)(param_3 + 0xa0);
      uStack_a8 = 0x5c50a0;
      iVar6 = FUN_005c2840();
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x10) == 2)) {
        iVar6 = *(int *)(iVar6 + 0x14);
        if (iVar6 == 0) {
          return 1;
        }
        bVar5 = *(byte *)(iVar6 + 0x128);
        goto LAB_005c50b7;
      }
    }
    else if (param_2 == 0x388) {
      uStack_a4 = *(undefined4 *)param_3;
      uStack_a8 = 0x5c504d;
      iVar6 = FUN_005c2840();
      if (iVar6 == 0) {
        return 0;
      }
      if (*(int *)(iVar6 + 0x10) != 2) {
        return 0;
      }
      iVar6 = *(int *)(iVar6 + 0x14);
      if (iVar6 == 0) {
        return 1;
      }
      bVar5 = *(byte *)(iVar6 + 0x128);
      if (param_3[4] != '\0') {
        *(byte *)(iVar6 + 0x128) = bVar5 & 0xfe;
        return 1;
      }
LAB_005c50b7:
      *(byte *)(iVar6 + 0x128) = bVar5 | 1;
      return 1;
    }
  }
  if (param_2 == 900) {
    uVar7 = 0xffffffff;
    pcVar10 = param_3;
    do {
      pcVar11 = pcVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    uVar1 = *(undefined4 *)(param_3 + 0x82);
    uVar7 = ~uVar7;
    pcVar10 = pcVar11 + -uVar7;
    pcVar11 = local_70;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar10 = param_3 + 0x18;
    do {
      pcVar11 = pcVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar10 = pcVar11 + -uVar7;
    pcVar11 = local_90;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar10 = param_3 + 0x30;
    do {
      pcVar11 = pcVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    iVar6 = *param_1;
    pcVar10 = pcVar11 + -uVar7;
    pcVar11 = local_50;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    uStack_a4 = *(undefined4 *)(param_3 + 0xa0);
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar3 = *(undefined4 *)(param_3 + 0x8c);
    pcVar10 = param_3 + 0x48;
    puVar4 = auStack_d4;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar4 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      puVar4 = puVar4 + 1;
    }
    (**(code **)(iVar6 + 0xe0))
              (local_70,local_90,local_50,uVar3,uVar1,*(undefined4 *)(param_3 + 0x96));
    return 1;
  }
  if (param_2 != 0x387) {
    return 0;
  }
  uVar7 = 0xffffffff;
  pcVar10 = param_3;
  do {
    pcVar11 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar1 = *(undefined4 *)(param_3 + 0x82);
  uVar7 = ~uVar7;
  pcVar10 = pcVar11 + -uVar7;
  pcVar11 = local_70;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar10 = param_3 + 0x18;
  do {
    pcVar11 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar10 = pcVar11 + -uVar7;
  pcVar11 = local_90;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar10 = param_3 + 0x30;
  do {
    pcVar11 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  iVar6 = *param_1;
  pcVar10 = pcVar11 + -uVar7;
  pcVar11 = local_50;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  uStack_a4 = *(undefined4 *)(param_3 + 0xa0);
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar3 = *(undefined4 *)(param_3 + 0x8c);
  pcVar10 = param_3 + 0x48;
  puVar4 = auStack_d4;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(iVar6 + 0xe4))
            (local_70,local_90,local_50,uVar3,uVar1,*(undefined4 *)(param_3 + 0x96));
  return 1;
}

