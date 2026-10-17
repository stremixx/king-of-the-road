
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00513330(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *local_68;
  byte local_5c [80];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645994;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064ce40;
  param_1[0x10] = &PTR_LAB_0064ce00;
  puVar2 = (undefined4 *)FUN_00631d33(0xc);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = FUN_005eea00(s_cursor_msk_00675bfc);
    *puVar2 = uVar3;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  local_4._0_1_ = 0;
  param_1[0xd] = puVar2;
  param_1[0xc] = puVar2;
  _DAT_006cd30c = FUN_005eea00(s_c_backCtrl_txr_00675bec);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  param_1[0x140] = 0;
  FUN_00513080();
  param_1[0x14a] = 0;
  GetPrivateProfileStringA
            (s_EFFECTS_00671998,&DAT_00675be4,&DAT_006719a8,(LPSTR)local_5c,0x3c,DAT_006957c8);
  pbVar6 = &DAT_00671994;
  pbVar7 = local_5c;
  do {
    bVar1 = *pbVar7;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_0051349b:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_005134a0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_0051349b;
    pbVar7 = pbVar7 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_005134a0:
  if (iVar4 == 0) {
    param_1[0x14a] = 1;
  }
  FUN_00603230(s_EFFECTS_00671998,s_control_00675768,0,&param_2,DAT_006957c8);
  param_1[0x140] = param_2;
  if (DAT_006d0fdc <= param_2) {
    param_1[0x140] = 0;
  }
  FUN_00530730(param_1[0x140]);
  local_68 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (local_68 == (undefined4 *)0x0) {
    local_68 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    local_68[0x48] = 0;
    local_68[0x49] = 0;
    *local_68 = &PTR_FUN_0064cc40;
  }
  uVar9 = 0;
  local_4._0_1_ = 0;
  uVar3 = FUN_0050e7b0(s_c_canc_00675bdc,2,0x143,0x1ea,0);
  FUN_005bd2a0(uVar3,uVar9);
  puVar2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    *puVar2 = &PTR_FUN_0064cc40;
  }
  uVar9 = 0;
  local_4._0_1_ = 0;
  uVar3 = FUN_0050e7b0(s_c_def_00675bd4,0x8d,0x15e,0x1bb,0);
  FUN_005bd2a0(uVar3,uVar9);
  _DAT_006cd30c = FUN_005eea00(s_c_backCtrlOpt_txr_00675bc0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 4;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar5[0x48] = 0;
    puVar5[0x49] = 0;
    *puVar5 = &PTR_FUN_0064cc40;
  }
  uVar10 = 0;
  uVar9 = 0x404;
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x83] = puVar5;
  uVar3 = FUN_005d2500(0x66,0x404,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x40a;
  uVar3 = FUN_005d2500(0x11,0x40a,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x409;
  uVar3 = FUN_005d2500(0x12,0x409,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x40b;
  uVar3 = FUN_005d2500(0x15,0x40b,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x401;
  uVar3 = FUN_005d2500(0x16,0x401,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x400;
  uVar3 = FUN_005d2500(0x17,0x400,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x403;
  uVar3 = FUN_005d2500(0x18,0x403,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x402;
  uVar3 = FUN_005d2500(0x19,0x402,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3fc;
  uVar3 = FUN_005d2500(0x1a,0x3fc,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x413;
  uVar3 = FUN_005d2500(0x41,0x413,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x40e;
  uVar3 = FUN_005d2500(0x1d,0x40e,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3fd;
  uVar3 = FUN_005d2500(0x1e,0x3fd,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x410;
  uVar3 = FUN_005d2500(0x40,0x410,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3ff;
  uVar3 = FUN_005d2500(0x3e,0x3ff,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x411;
  uVar3 = FUN_005d2500(0x3f,0x411,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3ee;
  uVar3 = FUN_005d2500(0x23,0x3ee,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3ed;
  uVar3 = FUN_005d2500(0x24,0x3ed,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3fe;
  uVar3 = FUN_005d2500(0x25,0x3fe,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3eb;
  uVar3 = FUN_005d2500(0x26,0x3eb,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 1000;
  uVar3 = FUN_005d2500(0x27,1000,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3ea;
  uVar3 = FUN_005d2500(0x28,0x3ea);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  uVar10 = 0;
  uVar9 = 0x3e9;
  uVar3 = FUN_005d2500(0x29,0x3e9,0);
  uVar3 = FUN_00512eb0(uVar3,uVar9);
  FUN_005bd2a0(uVar3,uVar10);
  FUN_005bd630(2,0xffffff4c,0xffffffec);
  puVar5[0xd] = puVar5[0xd] + (0xdd - puVar5[0xb]);
  puVar5[0xb] = 0xdd;
  puVar5[0xe] = puVar5[0xe] + (199 - puVar5[0xc]);
  puVar5[0xc] = 199;
  FUN_005bd2a0(puVar5,0);
  uVar9 = 0;
  uVar3 = FUN_0050dd50(s_aright_00675bb8,0x8f,0x202,0x9d,0);
  FUN_005bd2a0(uVar3,uVar9);
  uVar9 = 0;
  uVar3 = FUN_0050dd50(s_aleft_00675bb0,0x8e,0x103,0x9d,0);
  FUN_005bd2a0(uVar3,uVar9);
  puVar2[0xd] = puVar2[0xd] + (200 - puVar2[0xb]);
  puVar2[0xb] = 200;
  puVar2[0xe] = puVar2[0xe] + (0x99 - puVar2[0xc]);
  puVar2[0xc] = 0x99;
  FUN_005bd420();
  FUN_005bd2a0(puVar2,0);
  FUN_005bd2a0(local_68,0);
  param_1[0x81] = 0xffffffff;
  _DAT_0067447c = &DAT_00675bac;
  _DAT_00674484 = &DAT_00675ba8;
  _DAT_00674480 = &DAT_00675ba4;
  _DAT_00674488 = &DAT_00675ba0;
  _DAT_0067449c = &PTR_DAT_00675b9c;
  _DAT_006744a0 = &PTR_DAT_00675b98;
  _DAT_00674478 = &DAT_00675b90;
  _DAT_00674474 = &DAT_00675b8c;
  _DAT_00674470 = &DAT_00675b84;
  _DAT_0067446c = &DAT_00675b7c;
  _DAT_0067441c = s_Enter_00675b74;
  _DAT_006746e0 = &DAT_006702a0;
  _DAT_006746d8 = &DAT_006702a4;
  _DAT_00674594 = s_Num___00675b6c;
  _DAT_0067459c = s_Num___00675b64;
  _DAT_00674590 = s_Num___00675b5c;
  _DAT_006745a4 = s_Num___00675b54;
  _DAT_0067440c = &PTR_LAB_00675b50;
  _DAT_00674468 = s_Space_00675b48;
  _DAT_006747e8 = s_LMouse_00675b40;
  _DAT_006747f4 = &DAT_00675b38;
  _DAT_006747f8 = &DAT_00675b30;
  _DAT_006747fc = &DAT_00675b28;
  _DAT_00674800 = &DAT_00675b20;
  _DAT_00674804 = &DAT_00675b18;
  _DAT_00674808 = &DAT_00675b10;
  _DAT_0067480c = &DAT_00675b08;
  _DAT_00674810 = &DAT_00675b00;
  _DAT_00674814 = &DAT_00675af8;
  _DAT_00674818 = s_J_B10_00675af0;
  _DAT_0067481c = s_J_B11_00675ae8;
  _DAT_00674820 = s_J_B12_00675ae0;
  _DAT_00674824 = s_J_B13_00675ad8;
  _DAT_00674828 = s_J_B14_00675ad0;
  _DAT_0067482c = s_J_B15_00675ac8;
  _DAT_00674830 = s_J_B16_00675ac0;
  _DAT_00674834 = s_J_B17_00675ab8;
  _DAT_00674838 = s_J_B18_00675ab0;
  _DAT_0067483c = s_J_B19_00675aa8;
  _DAT_00674840 = s_J_B20_00675aa0;
  _DAT_00674844 = s_J_B21_00675a98;
  _DAT_00674848 = s_J_B22_00675a90;
  _DAT_0067484c = s_J_B23_00675a88;
  _DAT_00674850 = s_J_B24_00675a80;
  _DAT_00674854 = s_J_B25_00675a78;
  _DAT_00674858 = s_J_B26_00675a70;
  _DAT_0067485c = s_J_B27_00675a68;
  _DAT_00674860 = s_J_B28_00675a60;
  _DAT_00674864 = s_J_B29_00675a58;
  _DAT_00674868 = s_J_B30_00675a50;
  _DAT_0067486c = s_J_B31_00675a48;
  _DAT_00674870 = s_J_B32_00675a40;
  _DAT_00674898 = s_J_A1__00675a38;
  _DAT_0067489c = s_J_A1__00675a30;
  _DAT_006748a0 = s_J_A1_F_00675a28;
  _DAT_006748a4 = s_J_A1_F_00675a20;
  _DAT_006748a8 = s_J_A2__00675a18;
  _DAT_006748ac = s_J_A2__00675a10;
  _DAT_006748b0 = s_J_A2_F_00675a08;
  _DAT_006748b4 = s_J_A2_F_00675a00;
  _DAT_006748b8 = s_J_A3__006759f8;
  _DAT_006748bc = s_J_A3__006759f0;
  _DAT_006748c0 = s_J_A3_F_006759e8;
  _DAT_006748c4 = s_J_A3_F_006759e0;
  _DAT_006748c8 = s_J_A4__006759d8;
  _DAT_006748cc = s_J_A4__006759d0;
  _DAT_006748d0 = s_J_A4_F_006759c8;
  _DAT_006748d4 = s_J_A4_F_006759c0;
  _DAT_006748d8 = s_J_A5__006759b8;
  _DAT_006748dc = s_J_A5__006759b0;
  _DAT_006748e0 = s_J_A5_F_006759a8;
  _DAT_006748e4 = s_J_A5_F_006759a0;
  _DAT_006748e8 = s_J_A6__00675998;
  _DAT_006748ec = s_J_A6__00675990;
  _DAT_006748f0 = s_J_A6_F_00675988;
  _DAT_006748f4 = s_J_A6_F_00675980;
  _DAT_006748f8 = s_J_A7__00675978;
  _DAT_006748fc = s_J_A7__00675970;
  _DAT_00674900 = s_J_A7_F_00675968;
  _DAT_00674904 = s_J_A7_F_00675960;
  _DAT_00674908 = s_J_A8__00675958;
  _DAT_0067490c = s_J_A8__00675950;
  _DAT_00674910 = s_J_A8_F_00675948;
  _DAT_00674914 = s_J_A8_F_00675940;
  _DAT_00674874 = s_POV_1_00675938;
  _DAT_00674878 = s_POV_2_00675930;
  _DAT_0067487c = s_POV_3_00675928;
  _DAT_00674880 = s_POV_4_00675920;
  param_1[0x149] = 0;
  param_1[0x14c] = 4;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x145] = 0;
  param_1[0x14b] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  FUN_00603230(s_EFFECTS_00671998,s_arcad_00675918,0,&param_2,DAT_006957c8);
  param_1[0x146] = param_2;
  FUN_00603230(s_EFFECTS_00671998,s_cartruck_0067590c,0,&param_2,DAT_006957c8);
  param_1[0x148] = param_2;
  GetPrivateProfileStringA
            (s_EFFECTS_00671998,s_vmode_00675904,&DAT_006719a8,(LPSTR)local_5c,4,DAT_006957c8);
  pbVar6 = &DAT_00671994;
  pbVar7 = local_5c;
  do {
    bVar1 = *pbVar7;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00513e76:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00513e7b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00513e76;
    pbVar7 = pbVar7 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00513e7b:
  if (iVar4 == 0) {
    param_1[0x152] = 0;
  }
  else {
    param_1[0x152] = 1;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_music_006758fc,&DAT_00671994,(LPSTR)local_5c,0x1e,DAT_006957c8);
  pbVar6 = &DAT_00671994;
  pbVar7 = local_5c;
  do {
    bVar1 = *pbVar7;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00513ee5:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00513eea;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00513ee5;
    pbVar7 = pbVar7 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00513eea:
  if (iVar4 == 0) {
    param_1[0x150] = 1;
    GetPrivateProfileStringA
              (s_INSTALL_006751a4,s_music_006758fc,&DAT_006751b4,(LPSTR)local_5c,0x4f,DAT_006957c8);
    FUN_005fef00(local_5c);
  }
  else {
    param_1[0x150] = 0;
  }
  ExceptionList = local_c;
  return param_1;
}

