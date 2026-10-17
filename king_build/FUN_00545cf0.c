
void FUN_00545cf0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *local_cc;
  char local_c8 [10];
  char local_be [10];
  char local_b4 [10];
  char local_aa [10];
  char local_a0 [10];
  char local_96 [10];
  char local_8c [10];
  char local_82 [10];
  char local_78 [20];
  undefined1 local_64 [100];
  
  iVar2 = FUN_00631d33(0xb4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    puVar3 = (undefined4 *)(iVar2 + 0x10);
    iVar7 = 9;
    do {
      puVar3[-2] = 1;
      *puVar3 = 0x3d4ccccd;
      puVar3[-3] = 0;
      puVar3[-1] = 0;
      puVar3[-4] = 0;
      puVar3 = puVar3 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  *param_1 = iVar2;
  *param_2 = 9;
  puVar3 = (undefined4 *)(iVar2 + 0xc);
  do {
    puVar3[-2] = 0;
    *puVar3 = 0;
    puVar3[-3] = 0;
    iVar7 = iVar7 + 1;
    puVar3 = puVar3 + 5;
  } while (iVar7 < *param_2);
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00678f84;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_c8;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00678f80;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_be;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00678f7c;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_b4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00678f78;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_aa;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00675150;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_a0;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00675168;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_96;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00678f74;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_8c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00678f70;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_82;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00678f6c;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_78;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  iVar7 = *param_2;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar10 = 0;
  if (0 < iVar7) {
    local_cc = local_c8;
    puVar3 = (undefined4 *)(iVar2 + 0xc);
    do {
      FUN_0061c369(local_64,s_Damage_sKey_00678f60,local_cc);
      uVar4 = FUN_005ee8e0(0,local_64);
      puVar3[-3] = uVar4;
      puVar3[-2] = 0;
      *puVar3 = 0;
      iVar10 = iVar10 + 1;
      local_cc = local_cc + 10;
      puVar3 = puVar3 + 5;
    } while (iVar10 < *param_2);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0x38) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0x4c) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0x60) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0x74) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0x88) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0x9c) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0xb0) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0x24) = 0x3d4ccccd;
  *(undefined4 *)(iVar2 + 8) = 4;
  *(undefined4 *)(iVar2 + 0x1c) = 3;
  *(undefined4 *)(iVar2 + 0x30) = 3;
  *(undefined4 *)(iVar2 + 0x44) = 3;
  *(undefined4 *)(iVar2 + 0x58) = 1;
  *(undefined4 *)(iVar2 + 0x6c) = 1;
  *(undefined4 *)(iVar2 + 0x80) = 3;
  *(undefined4 *)(iVar2 + 0x94) = 3;
  *(undefined4 *)(iVar2 + 0xa8) = 1;
  return;
}

