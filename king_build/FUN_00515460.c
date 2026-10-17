
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00515460(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006459f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  *param_1 = &PTR_FUN_0064cee8;
  param_1[0x10] = &PTR_LAB_0064cea8;
  local_4 = 0;
  FUN_00603230(s_EFFECTS_00671998,s_maxdrv_00675d30,3,&param_2,DAT_006957c8);
  param_1[0x61] = param_2;
  FUN_00603230(&DAT_006720a0,s_numdev_00675d28,1,&param_2,DAT_006957c8);
  DAT_0071f844 = param_2 - 1;
  param_1[0x67] = DAT_0071f844;
  iVar1 = FUN_00515190(param_1[0x67],param_1 + 0x68,&DAT_006cdc5c,param_1 + 0x62,&DAT_006cdc60,
                       param_1 + 99,&DAT_006cdc64,param_1 + 100,&DAT_006cdc68,param_1 + 0x65);
  if (iVar1 == 0) {
    FUN_005d2250(s_Your_computer_does_not_have_grap_00675cf8,0);
    MessageBoxA((HWND)0x0,s_Your_computer_does_not_have_grap_00675cf8,s_ERROR_00675cf0,0);
                    /* WARNING: Subroutine does not return */
    __exit(0);
  }
  FUN_00603230(s_EFFECTS_00671998,s_video_00675c4c,0x122,&param_2,DAT_006957c8);
  param_1[0x66] = param_2;
  if ((param_1[99] == 0) && (0x10 < (param_2 & 0xf0))) {
    param_1[0x66] = param_2 & 0xffffff1f | 0x10;
  }
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  FUN_00632e26(&DAT_0072c9b8,(iVar1 + -0x280) / 2,(iVar2 + -0x1e0) / 2,0x280,0x1e0,0x40);
  puVar3 = (undefined4 *)FUN_00631d33(0xc);
  local_4._0_1_ = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar4 = FUN_005eea00(s_cursor_msk_00675bfc);
    *puVar3 = uVar4;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  local_4._0_1_ = 0;
  param_1[0xd] = puVar3;
  param_1[0xc] = puVar3;
  _DAT_006cd30c = FUN_005eea00(s_g_backGraf_txr_00675ce0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  puVar3 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar3[0x48] = 0;
    puVar3[0x49] = 0;
    *puVar3 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar5[0x48] = 0;
    puVar5[0x49] = 0;
    *puVar5 = &PTR_FUN_0064cc40;
  }
  uVar7 = 0;
  local_4._0_1_ = 0;
  uVar4 = FUN_0050e7b0(s_g_canc_00675cd8,2,0x15c,0x1c4,0);
  FUN_005bd2a0(uVar4,uVar7);
  _DAT_006cd30c = FUN_005eea00(s_g_backGrafOpt_txr_00675cc4);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  FUN_00603230(s_EFFECTS_00671998,&PTR_DAT_00675c70,100,&param_2,DAT_006957c8);
  *(undefined2 *)((int)param_1 + 0x1a6) = (undefined2)param_2;
  iVar1 = FUN_0050e800(s_aleft_00675bb0,s_aright_00675bb8,(undefined2 *)((int)param_1 + 0x1a6),0x15d
                       ,0x195,0,0xb6);
  FUN_005bd2a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x1c) = 0x8b;
  FUN_00603230(s_EFFECTS_00671998,&DAT_00675c64,100,&param_2,DAT_006957c8);
  *(undefined2 *)(param_1 + 0x69) = (undefined2)param_2;
  iVar1 = FUN_0050e800(s_aleft_00675bb0,s_aright_00675bb8,param_1 + 0x69,0x15d,0x172,0,0xb6);
  FUN_005bd2a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x1c) = 0x8c;
  puVar6 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 4;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    *puVar6 = &PTR_FUN_0064cc40;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
  }
  uVar7 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x5e] = puVar6;
  uVar4 = FUN_0050e080(s_g_huge_00675cbc,0x8a,0x1b9,0x14a,((byte)param_1[0x66] & 0xf0) == 0x40,0);
  FUN_005bd2a0(uVar4,uVar7);
  uVar7 = 0;
  uVar4 = FUN_0050e080(s_g_large_00675cb4,0x89,0x149,0x14a,((byte)param_1[0x66] & 0xf0) == 0x30,0);
  FUN_005bd2a0(uVar4,uVar7);
  uVar7 = 0;
  uVar4 = FUN_0050e080(s_g_med_00675cac,0x88,0x1b9,0x125,((byte)param_1[0x66] & 0xf0) == 0x20,0);
  FUN_005bd2a0(uVar4,uVar7);
  uVar7 = 0;
  uVar4 = FUN_0050e080(s_g_small_00675ca4,0x87,0x149,0x125,((byte)param_1[0x66] & 0xf0) == 0x10,0);
  FUN_005bd2a0(uVar4,uVar7);
  FUN_005bd2a0(puVar6,0);
  uVar4 = FUN_0050dd50(s_aright_00675bb8,0x86,0x218,0x107);
  param_1[0x60] = uVar4;
  FUN_005bd2a0(uVar4,0);
  uVar4 = FUN_0050dd50(s_aleft_00675bb0,0x85,0x144,0x107);
  param_1[0x5f] = uVar4;
  FUN_005bd2a0(uVar4,0);
  *(undefined4 *)(param_1[0x5f] + 0x28) = 1;
  puVar5[0xd] = puVar5[0xd] + (0x136 - puVar5[0xb]);
  puVar5[0xb] = 0x136;
  puVar5[0xe] = puVar5[0xe] + (0xda - puVar5[0xc]);
  puVar5[0xc] = 0xda;
  FUN_005bd420();
  FUN_005bd2a0(puVar5,0);
  uVar7 = 0;
  uVar4 = FUN_0050e7b0(s_g_detect_00675c98,0x84,0x15c,0x9d,0);
  FUN_005bd2a0(uVar4,uVar7);
  FUN_005bd2a0(puVar3,0);
  ExceptionList = local_c;
  return param_1;
}

