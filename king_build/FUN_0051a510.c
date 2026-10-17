
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0051a510(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645cca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d35c;
  param_1[0x10] = &PTR_LAB_0064d31c;
  puVar1 = (undefined4 *)FUN_00631d33(0xc);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = FUN_005eea00(s_cursor_msk_00675bfc);
    *puVar1 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  local_4._0_1_ = 0;
  param_1[0xd] = puVar1;
  param_1[0xc] = puVar1;
  _DAT_006cd30c = FUN_005eea00(s_h_backHost_txr_00676430);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  local_14 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    local_14[0x48] = 0;
    local_14[0x49] = 0;
    *local_14 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  puVar1 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
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
  _DAT_006cd30c = FUN_005eea00(s_h_backHostNext_txr_0067641c);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  puVar3 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar3[0x48] = 0;
    puVar3[0x49] = 0;
    *puVar3 = &PTR_FUN_0064cc40;
  }
  uVar5 = 0;
  local_4._0_1_ = 0;
  param_1[0x5d] = puVar3;
  uVar2 = FUN_0050e080(s_h_arcad_00676414,0x6f,0x15c,0xfe,0,0);
  FUN_005bd2a0(uVar2,uVar5);
  uVar5 = 0;
  uVar2 = FUN_0050e080(s_h_simul_0067640c,0x70,0x1c2,0xfe,1,0);
  FUN_005bd2a0(uVar2,uVar5);
  FUN_005bd2a0(puVar3,0);
  puVar3 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 5;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar3[0x48] = 0;
    puVar3[0x49] = 0;
    *puVar3 = &PTR_FUN_0064cc40;
  }
  uVar5 = 0;
  local_4._0_1_ = 0;
  uVar2 = FUN_0050e080(s_h_tball_00676404,0x98,0x1d9,0xca,0,0);
  FUN_005bd2a0(uVar2,uVar5);
  uVar5 = 0;
  uVar2 = FUN_0050e080(s_h_trial_006763fc,0x97,0x192,0xca,0,0);
  FUN_005bd2a0(uVar2,uVar5);
  uVar5 = 0;
  uVar2 = FUN_0050e080(s_h_circ_006763f4,0x96,0x144,0xca,1,0);
  FUN_005bd2a0(uVar2,uVar5);
  FUN_005bd2a0(puVar3,0);
  puVar3 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 6;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar3[0x48] = 0;
    puVar3[0x49] = 0;
    *puVar3 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00603230(s_EFFECTS_00671998,s_trafm_00675c54,0x32,&param_2,DAT_006957c8);
  *(undefined2 *)(param_1 + 0x61) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,&DAT_006763ec,0x32,&param_2,DAT_006957c8);
  *(undefined2 *)((int)param_1 + 0x186) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,s_weatm_006763e4,0x3c,&param_2,DAT_006957c8);
  *(undefined2 *)(param_1 + 0x62) = (undefined2)param_2;
  iVar4 = FUN_0050e800(s_aleft_00675bb0,s_aright_00675bb8,param_1 + 0x62,0x164,0x16e,0,0xbb);
  FUN_005bd2a0(iVar4,0);
  *(undefined4 *)(iVar4 + 0x1c) = 0x73;
  iVar4 = FUN_0050e800(s_aleft_00675bb0,s_aright_00675bb8,(int)param_1 + 0x186,0x164,0x150,0,0xbb);
  FUN_005bd2a0(iVar4,0);
  *(undefined4 *)(iVar4 + 0x1c) = 0x72;
  iVar4 = FUN_0050e800(s_aleft_00675bb0,s_aright_00675bb8,param_1 + 0x61,0x164,0x132,0,0xbb);
  FUN_005bd2a0(iVar4,0);
  uVar5 = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0x71;
  uVar2 = FUN_0050e7b0(s_h_next_006763dc,0x7c,0x174,0x19c,0);
  FUN_005bd2a0(uVar2,uVar5);
  FUN_005bd2a0(puVar3,0);
  puVar1[0xd] = puVar1[0xd] + (0x136 - puVar1[0xb]);
  puVar1[0xb] = 0x136;
  puVar1[0xe] = puVar1[0xe] + (0xb6 - puVar1[0xc]);
  puVar1[0xc] = 0xb6;
  FUN_005bd420();
  FUN_005bd2a0(puVar1,0);
  uVar5 = 0;
  uVar2 = FUN_0050e7b0(s_h_cancel_006763d0,2,0x143,0x1dd,0);
  FUN_005bd2a0(uVar2,uVar5);
  FUN_005bd330();
  FUN_005bd2a0(local_14,0);
  param_1[0x5c] = 0;
  param_1[0x60] = 0;
  ExceptionList = local_c;
  return param_1;
}

