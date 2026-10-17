
undefined4 * __thiscall FUN_00525c50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_74 [16];
  undefined1 local_64 [24];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646154;
  local_c = ExceptionList;
  uVar10 = 0;
  ExceptionList = &local_c;
  uVar2 = DAT_006cdc84;
  uVar11 = DAT_006cdc8c;
  puVar1 = (undefined4 *)FUN_00510960(local_74,param_2,0,DAT_006cdc84,DAT_006cdc8c);
  FUN_005d7fb0(param_2,*puVar1,puVar1[1],puVar1[2],puVar1[3],uVar10,uVar2,uVar11);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064da60;
  param_1[0x10] = &PTR_LAB_0064da20;
  uVar2 = FUN_0050c190();
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar2;
  puVar1 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    *puVar1 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  iVar3 = FUN_005686e0();
  pcVar4 = s_m_15_BackMy_txr_00677198;
  if (iVar3 != 2) {
    pcVar4 = s_m_16_BackMy_txr_00677188;
  }
  DAT_006cd35c = FUN_005eea00(pcVar4);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar5[0x48] = 0;
    puVar5[0x49] = 0;
    *puVar5 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  iVar3 = FUN_0050d740(&DAT_00677180,0xb9);
  param_1[0x5c] = iVar3;
  FUN_005bd2a0(iVar3,0);
  *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (0xba - *(int *)(iVar3 + 0x2c));
  *(undefined4 *)(iVar3 + 0x2c) = 0xba;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (0x306 - *(int *)(iVar3 + 0x30));
  *(undefined4 *)(iVar3 + 0x30) = 0x306;
  iVar3 = FUN_0050d740(&DAT_00674d50,0xba);
  FUN_005bd2a0(iVar3,0);
  *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (0x55 - *(int *)(iVar3 + 0x2c));
  *(undefined4 *)(iVar3 + 0x2c) = 0x55;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (0x306 - *(int *)(iVar3 + 0x30));
  *(undefined4 *)(iVar3 + 0x30) = 0x306;
  FUN_005bd2a0(puVar5,0);
  puVar6 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    *puVar6 = &PTR_FUN_0064cc40;
    puVar5 = puVar6;
  }
  local_4._0_1_ = 0;
  iVar3 = FUN_00631d33(0x160);
  local_4._0_1_ = 4;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005bfc10(s__00677174,4,0xc9);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x102] = uVar2;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  FUN_005bfe90(10);
  FUN_0050d450(*(undefined4 *)(param_1[0x102] + 0x154),&PTR_DAT_006766dc,s_mdown_006766e0);
  iVar3 = *(int *)(param_1[0x102] + 0x154);
  iVar7 = *(int *)(iVar3 + 0x2c);
  *(undefined4 *)(iVar3 + 0x2c) = 0x13f;
  iVar9 = *(int *)(iVar3 + 0x30);
  *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (0x13f - iVar7);
  *(undefined4 *)(iVar3 + 0x30) = 0xfffffff4;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (-0xc - iVar9);
  FUN_005be380(0xdb);
  iVar3 = param_1[0x102];
  iVar7 = *(int *)(iVar3 + 0x30);
  *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (0x14 - *(int *)(iVar3 + 0x2c));
  *(int *)(iVar3 + 0x2c) = 0x14;
  *(undefined4 *)(iVar3 + 0x30) = 0x219;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (0x219 - iVar7);
  *(undefined4 *)(param_1[0x102] + 0x158) = 8;
  *(undefined4 *)(*(int *)(param_1[0x102] + 0x154) + 0x1c) = 0xbb;
  *(undefined4 *)(param_1[0x102] + 0x1c) = 0xbb;
  FUN_005bd2a0(param_1[0x102],0);
  FUN_005bd2a0(puVar5,0);
  FUN_005bd330();
  iVar7 = DAT_006cdc70;
  iVar9 = DAT_006cdc6c - puVar1[0xb];
  iVar3 = puVar1[0xc];
  puVar1[0xb] = DAT_006cdc6c;
  puVar1[0xd] = puVar1[0xd] + iVar9;
  puVar1[0xc] = iVar7;
  puVar1[0xe] = puVar1[0xe] + (iVar7 - iVar3);
  FUN_005bd2a0(puVar1,0);
  param_1[0x103] = 0;
  iVar3 = 0;
  puVar1 = param_1 + 0x5d;
  do {
    iVar7 = FUN_005686e0();
    pcVar4 = s_m15_escphoto_02d_txr_0067715c;
    if (iVar7 != 2) {
      pcVar4 = s_m16_escphoto_02d_txr_00677144;
    }
    iVar3 = iVar3 + 1;
    FUN_0061c369(local_64,pcVar4,iVar3);
    uVar2 = FUN_005eea00(local_64);
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 0x33);
  iVar3 = FUN_005686e0();
  pcVar4 = s_m15_escphoto52_txr_00677130;
  if (iVar3 != 2) {
    pcVar4 = s_m16_escphoto52_txr_0067711c;
  }
  uVar2 = FUN_005eea00(pcVar4);
  param_1[0xa7] = uVar2;
  iVar3 = FUN_005686e0();
  pcVar4 = s_m15_escphoto53_txr_00677108;
  if (iVar3 != 2) {
    pcVar4 = s_m16_escphoto53_txr_006770f4;
  }
  uVar2 = FUN_005eea00(pcVar4);
  param_1[0xa8] = uVar2;
  iVar3 = FUN_005686e0();
  pcVar4 = s_m15_escphoto54_txr_006770e0;
  if (iVar3 != 2) {
    pcVar4 = s_m16_escphoto54_txr_006770cc;
  }
  uVar2 = FUN_005eea00(pcVar4);
  param_1[0xa9] = uVar2;
  iVar3 = 0;
  puVar1 = param_1 + 0x90;
  do {
    iVar7 = FUN_005686e0();
    pcVar4 = s_m15_escmafia_02d_txr_006770b4;
    if (iVar7 != 2) {
      pcVar4 = s_m16_escmafia_02d_txr_0067709c;
    }
    iVar3 = iVar3 + 1;
    FUN_0061c369(local_64,pcVar4,iVar3);
    uVar2 = FUN_005eea00(local_64);
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 8);
  iVar3 = 0;
  puVar1 = param_1 + 0x98;
  do {
    iVar7 = FUN_005686e0();
    pcVar4 = s_m15_escpolice_02d_txr_00677084;
    if (iVar7 != 2) {
      pcVar4 = s_m16_escpolice_02d_txr_0067706c;
    }
    iVar3 = iVar3 + 1;
    FUN_0061c369(local_64,pcVar4,iVar3);
    uVar2 = FUN_005eea00(local_64);
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 0xf);
  iVar3 = FUN_005686e0();
  puVar8 = &DAT_0067525c;
  if (iVar3 != 2) {
    puVar8 = &DAT_00675254;
  }
  FUN_0061c369(local_4c,s__s_upgradet_txr_0067705c,puVar8);
  uVar2 = FUN_005eea00(local_4c);
  param_1[0xfe] = uVar2;
  iVar3 = FUN_005686e0();
  puVar8 = &DAT_0067525c;
  if (iVar3 != 2) {
    puVar8 = &DAT_00675254;
  }
  FUN_0061c369(local_4c,s__s_upgradec_txr_0067704c,puVar8);
  uVar2 = FUN_005eea00(local_4c);
  param_1[0xff] = uVar2;
  iVar3 = FUN_005686e0();
  puVar8 = &DAT_0067525c;
  if (iVar3 != 2) {
    puVar8 = &DAT_00675254;
  }
  FUN_0061c369(local_4c,s__s_servtruck_txr_00677038,puVar8);
  uVar2 = FUN_005eea00(local_4c);
  param_1[0x100] = uVar2;
  iVar3 = FUN_005686e0();
  puVar8 = &DAT_0067525c;
  if (iVar3 != 2) {
    puVar8 = &DAT_00675254;
  }
  FUN_0061c369(local_4c,s__s_servcar_txr_00677028,puVar8);
  uVar2 = FUN_005eea00(local_4c);
  param_1[0x101] = uVar2;
  puVar1 = param_1 + 0xd4;
  iVar3 = 0;
  do {
    iVar7 = 0;
    do {
      iVar9 = FUN_005686e0();
      puVar8 = &DAT_0067525c;
      if (iVar9 != 2) {
        puVar8 = &DAT_00675254;
      }
      FUN_0061c369(local_4c,s__s_up__s__d_msk_00677018,puVar8,
                   *(undefined4 *)((int)&PTR_DAT_00674c08 + iVar3),iVar7);
      uVar2 = FUN_005eea00(local_4c);
      puVar1[-0x2a] = uVar2;
      iVar9 = FUN_005686e0();
      puVar8 = &DAT_0067525c;
      if (iVar9 != 2) {
        puVar8 = &DAT_00675254;
      }
      FUN_0061c369(local_4c,s__s_up__s__d_msk_00677018,puVar8,
                   *(undefined4 *)((int)&PTR_DAT_00674c5c + iVar3),iVar7);
      uVar2 = FUN_005eea00(local_4c);
      *puVar1 = uVar2;
      iVar7 = iVar7 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar7 < 2);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x54);
  ExceptionList = local_c;
  return param_1;
}

