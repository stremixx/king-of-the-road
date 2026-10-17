
undefined4 * __fastcall FUN_0050f1e0(undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645844;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_005d7fb0(DAT_006957ac,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,0,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064cd1c;
  param_1[0x10] = &PTR_LAB_0064ccdc;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0x3f000000;
  local_68 = 0;
  local_6c = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0x3f000000;
  local_8c = 0;
  local_90 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0x3f000000;
  local_44 = 0;
  local_48 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0x3f000000;
  local_20 = 0;
  local_24 = 0;
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd8e8);
  FUN_005bcc50(&DAT_006cda98);
  uVar3 = FUN_0050c190();
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar3;
  puVar4 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,8);
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    *puVar4 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar5 = FUN_005686e0();
  if (iVar5 == 1) {
    pcVar8 = s_msk_vtrpanel_msk_006755c0;
  }
  else {
    iVar5 = FUN_005686e0();
    if (iVar5 == 2) {
      pcVar8 = s_m15_vtrpanel_msk_006755ac;
    }
    else {
      pcVar8 = s_m16_vtrpanel_msk_00675598;
    }
  }
  local_80 = FUN_005eea00(pcVar8);
  FUN_005bcc50(&local_a0);
  FUN_005bcc50(&local_a0);
  FUN_005bcc50(&local_a0);
  FUN_005bcc50(&local_a0);
  puVar6 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    *puVar6 = &PTR_FUN_0064cc40;
  }
  uVar9 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar3 = FUN_0050eea0(&DAT_00675594,0xd7,0x24,0xd,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050eea0(&DAT_006719a8,0xd8,6,0xd,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050eea0(&PTR_DAT_00675590,0xd0,0x126,3,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050eea0(&PTR_DAT_0067558c,0xd1,0x10f,3,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050eea0(&PTR_DAT_00675588,0xd5,0xe7,8,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050eea0(&PTR_DAT_00675584,0xd2,0xbb,8,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050eea0(&PTR_DAT_00675580,0xd4,0xa2,8,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050eea0(&PTR_DAT_0067557c,0xd3,0x76,8,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050eea0(&DAT_00675578,0xd6,0x50,8,0);
  FUN_005bd2a0(uVar3,uVar9);
  FUN_005bd2a0(puVar6,0);
  iVar5 = *(ushort *)param_1[3] - 400;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar2 = puVar4[0xb];
  uVar1 = ((ushort *)param_1[3])[1];
  puVar4[0xb] = iVar5;
  iVar7 = uVar1 - 0x46;
  puVar4[0xd] = puVar4[0xd] + (iVar5 - iVar2);
  iVar5 = puVar4[0xc];
  puVar4[0xc] = iVar7;
  puVar4[0xe] = puVar4[0xe] + (iVar7 - iVar5);
  FUN_005bd2a0(puVar4,0);
  param_1[0x68] = 0;
  param_1[4] = param_1[4] | 4;
  uVar3 = FUN_005eea00(s_msk_vtrled1_msk_00675568);
  param_1[0x5c] = uVar3;
  iVar5 = FUN_005686e0();
  if (iVar5 == 2) {
    uVar3 = FUN_005eea00(s_m15_big0_msk_00675558);
    param_1[0x5d] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big1_msk_00675548);
    param_1[0x5e] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big2_msk_00675538);
    param_1[0x5f] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big3_msk_00675528);
    param_1[0x60] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big4_msk_00675518);
    param_1[0x61] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big5_msk_00675508);
    param_1[0x62] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big6_msk_006754f8);
    param_1[99] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big7_msk_006754e8);
    param_1[100] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big8_msk_006754d8);
    param_1[0x65] = uVar3;
    uVar3 = FUN_005eea00(s_m15_big9_msk_006754c8);
    param_1[0x66] = uVar3;
    pcVar8 = s_m15_colon_msk_006754b8;
  }
  else {
    uVar3 = FUN_005eea00(s_m16_big0_msk_006754a8);
    param_1[0x5d] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big1_msk_00675498);
    param_1[0x5e] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big2_msk_00675488);
    param_1[0x5f] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big3_msk_00675478);
    param_1[0x60] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big4_msk_00675468);
    param_1[0x61] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big5_msk_00675458);
    param_1[0x62] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big6_msk_00675448);
    param_1[99] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big7_msk_00675438);
    param_1[100] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big8_msk_00675428);
    param_1[0x65] = uVar3;
    uVar3 = FUN_005eea00(s_m16_big9_msk_00675418);
    param_1[0x66] = uVar3;
    pcVar8 = s_m16_colon_msk_00675408;
  }
  uVar3 = FUN_005eea00(pcVar8);
  param_1[0x67] = uVar3;
  ExceptionList = local_c;
  return param_1;
}

