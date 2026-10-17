
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00531b60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char local_48 [20];
  undefined1 local_34 [52];
  
  puVar6 = &DAT_00701550;
  puVar8 = (undefined4 *)(param_1 + 0x590);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = &DAT_00701550;
  puVar8 = (undefined4 *)(param_1 + 0x620);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = &DAT_00701550;
  puVar8 = (undefined4 *)(param_1 + 0x5f0);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x650) = 0;
  *(undefined4 *)(param_1 + 0x654) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x658) = DAT_007015b4;
  uVar2 = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x2c) = 0x49742400;
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x65c) = uVar2;
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x424) = 0x13;
  iVar3 = DAT_006cdbd0;
  pcVar7 = &DAT_0068c120;
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = local_48;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if (((byte)*(undefined4 *)(DAT_006cdbd0 + 0x198) & 0xf) == 1) {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_00677a08;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = local_48;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if (((byte)*(undefined4 *)(iVar3 + 0x198) & 0xf) == 2) {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_00677a04;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = local_48;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  iVar3 = 1;
  puVar6 = (undefined4 *)(param_1 + 0x388);
  do {
    FUN_0061c369(local_34,s_________0067205c);
    if (((byte)*(undefined4 *)(DAT_006cdbd0 + 0x198) & 0xf) == 1) {
      FUN_0061c369(local_34,s_msk_m_rul__02d_msk_006779f0,iVar3);
    }
    if (((byte)*(undefined4 *)(DAT_006cdbd0 + 0x198) & 0xf) == 2) {
      FUN_0061c369(local_34,s_m16_m_rul__02d_msk_006779dc,iVar3);
    }
    uVar2 = FUN_005eea00(local_34);
    *puVar6 = uVar2;
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar3 < 0x28);
  FUN_0061c369(local_34,s_________0067205c);
  *(undefined4 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar3 = 0;
  puVar6 = (undefined4 *)(param_1 + 0x294);
  do {
    FUN_0061c369(local_34,s__s_big_d_msk_006779cc,local_48,iVar3);
    uVar2 = FUN_005eea00(local_34);
    puVar6[10] = uVar2;
    FUN_0061c369(local_34,s__s_small_d_msk_006779bc,local_48,iVar3);
    uVar2 = FUN_005eea00(local_34);
    *puVar6 = uVar2;
    FUN_0061c369(local_34,s__s_smallr_d_msk_006779ac,local_48,iVar3);
    uVar2 = FUN_005eea00(local_34);
    puVar6[0x31] = uVar2;
    FUN_0061c369(local_34,s__s_gear_02d_msk_0067799c,local_48,iVar3);
    uVar2 = FUN_005eea00(local_34);
    puVar6[0x27] = uVar2;
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar3 < 10);
  FUN_0061c369(local_34,s__s_gear_r_msk_0067798c,local_48);
  uVar2 = FUN_005eea00(local_34);
  *(undefined4 *)(param_1 + 0x32c) = uVar2;
  iVar3 = 0;
  puVar6 = (undefined4 *)(param_1 + 0x2e4);
  do {
    FUN_0061c369(local_34,s__s_rpm_02d_msk_0067797c,local_48,iVar3);
    uVar2 = FUN_005eea00(local_34);
    *puVar6 = uVar2;
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar3 < 0x12);
  FUN_0061c369(local_34,s__s_autogear_msk_0067796c,local_48);
  uVar2 = FUN_005eea00(local_34);
  *(undefined4 *)(param_1 + 0x380) = uVar2;
  FUN_0061c369(local_34,s__s_park_msk_00677960,local_48);
  uVar2 = FUN_005eea00(local_34);
  *(undefined4 *)(param_1 + 900) = uVar2;
  FUN_0061c369(local_34,s__s_f_panel_msk_00677950,local_48);
  uVar2 = FUN_005eea00(local_34);
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  *(undefined4 *)(param_1 + 0x560) = 0;
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(DAT_006cdbcc + 0x548);
  DAT_006ce310 = *(undefined4 *)(param_1 + 0x58);
  DAT_006ce314 = *(undefined4 *)(param_1 + 0x5c);
  DAT_006ce318 = *(undefined4 *)(param_1 + 0x60);
  DAT_006ce394 = DAT_00701580 * *(float *)(param_1 + 0x34) +
                 DAT_00701584 * *(float *)(param_1 + 0x40) +
                 DAT_00701588 * *(float *)(param_1 + 0x4c);
  DAT_006ce398 = DAT_00701580 * *(float *)(param_1 + 0x38) +
                 DAT_00701584 * *(float *)(param_1 + 0x44) +
                 DAT_00701588 * *(float *)(param_1 + 0x50);
  DAT_006ce39c = DAT_00701580 * *(float *)(param_1 + 0x3c) +
                 DAT_00701584 * *(float *)(param_1 + 0x48) +
                 DAT_00701588 * *(float *)(param_1 + 0x54);
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_0068c120;
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_006ce30c = 1;
  _DAT_006ce308 = 0;
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = (char *)&DAT_006ce418;
  DAT_006ce388 = DAT_006ce310;
  DAT_006ce38c = DAT_006ce314;
  DAT_006ce390 = DAT_006ce318;
  DAT_006ce40c = DAT_006ce394;
  DAT_006ce410 = DAT_006ce398;
  DAT_006ce414 = DAT_006ce39c;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if ((*(byte *)(param_1 + 0x57c) & 0x40) != 0) {
    uVar2 = FUN_005e8290(s_d1_sft_00677948);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb30);
  }
  FUN_00531a60();
  DAT_006d1040 = 0;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0xd8) = DAT_007015a0;
  *(undefined4 *)(param_1 + 0xdc) = DAT_007015a4;
  *(undefined4 *)(param_1 + 0xe0) = DAT_007015a8;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x60);
  uVar4 = 0xffffffff;
  pcVar7 = *(char **)(*(int *)(param_1 + 100) + 0xc);
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = (char *)(param_1 + 0xe4);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  _DAT_006d1044 = 0;
  _DAT_006d1048 = (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb98);
  FUN_005d2a80(1);
  return;
}

