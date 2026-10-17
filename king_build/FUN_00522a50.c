
undefined4 * __thiscall FUN_00522a50(undefined4 *param_1,int *param_2,undefined **param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006460a1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,0,DAT_006cdc84,0);
  param_1[0x6a] = DAT_0068a8f0;
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d950;
  param_1[0x10] = &PTR_LAB_0064d910;
  param_1[0x62] = 0;
  param_1[0x5c] = param_3;
  uVar4 = FUN_0050c190();
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar4;
  param_1[0x65] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  puVar10 = param_1 + 0xeb;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  puVar10 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_005bcc90(&DAT_006755d4,8);
    puVar5[0x48] = 0;
    puVar5[0x49] = 0;
    *puVar5 = &PTR_FUN_0064cc40;
    puVar10 = puVar5;
  }
  local_4._0_1_ = 0;
  uVar3 = (undefined1)local_4;
  local_4._0_1_ = 0;
  switch(param_1[0x5c]) {
  case 0:
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_BackF5pol_msk_00676f68;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_BackF5pol_msk_00676f54;
    }
    DAT_006cd360 = FUN_005eea00(pcVar8);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5p_ans_whats_txr_00676f3c;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5p_ans_whats_txr_00676f24;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[99] = uVar4;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5p_ans_cost_txr_00676f0c;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5p_ans_cost_txr_00676ef4;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[100] = uVar4;
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
    param_1[0x60] = puVar5;
    iVar9 = FUN_0050d740(s_F5p_ask1_00676ee8,0xbe);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xcd - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xcd;
    iVar9 = FUN_0050d740(s_F5p_ask2_00676edc,0xbf);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xfa - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xfa;
    iVar9 = FUN_0050d740(s_F5p_ask3_00676ed0,0xc0);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x127 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x127;
    iVar9 = FUN_0050d740(s_F5p_ask4_00676ec4,0xc1);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x154 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(undefined4 *)(iVar9 + 0x30) = 0x154;
    FUN_005bd2a0(puVar5,0);
    puVar5 = (undefined4 *)FUN_00631d33(0x128);
    local_4._0_1_ = 3;
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
    param_1[0x61] = puVar5;
    iVar9 = FUN_0050d740(s_F5p_ok_00676ebc,0xce);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xfa - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xfa;
    iVar7 = FUN_0050d740(s_F5p_canc_00676eb0,0xcf);
    FUN_005bd2a0(iVar7,0);
    iVar9 = *(int *)(iVar7 + 0x30);
    *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + (0xb - *(int *)(iVar7 + 0x2c));
    *(undefined4 *)(iVar7 + 0x2c) = 0xb;
    *(undefined4 *)(iVar7 + 0x30) = 0x127;
    *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + (0x127 - iVar9);
    break;
  case 1:
    local_4._0_1_ = uVar3;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_BackF5maf_msk_00676e9c;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_BackF5maf_msk_00676e88;
    }
    DAT_006cd360 = FUN_005eea00(pcVar8);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5m_ans_hell_txr_00676e70;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5m_ans_hell_txr_00676e58;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[99] = uVar4;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5m_ans_cost_txr_00676e40;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5m_ans_cost_txr_00676e28;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[100] = uVar4;
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
    local_4._0_1_ = 0;
    param_1[0x60] = puVar5;
    iVar9 = FUN_0050d740(s_F5m_ask1_00676e1c,0xc2);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xcd - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xcd;
    iVar9 = FUN_0050d740(s_F5m_ask2_00676e10,0xc3);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xfa - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xfa;
    iVar9 = FUN_0050d740(s_F5m_ask3_00676e04,0xc4);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x127 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x127;
    iVar9 = FUN_0050d740(s_F5m_ask4_00676df8,0xc5);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x154 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(undefined4 *)(iVar9 + 0x30) = 0x154;
    FUN_005bd2a0(puVar5,0);
    puVar5 = (undefined4 *)FUN_00631d33(0x128);
    local_4._0_1_ = 5;
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
    param_1[0x61] = puVar5;
    iVar9 = FUN_0050d740(s_F5m_ok_00676df0,0xce);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xfa - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xfa;
    iVar9 = FUN_0050d740(s_F5m_canc_00676de4,0xcf);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x127 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x127;
    FUN_005bd2a0(puVar5,0);
    puVar5 = (undefined4 *)FUN_00631d33(0x128);
    local_4._0_1_ = 6;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_005bcc90(&DAT_006755d4,8);
      *puVar5 = &PTR_FUN_0064cc40;
      puVar5[0x48] = 0;
      puVar5[0x49] = 0;
    }
    local_4._0_1_ = 0;
    param_1[0x62] = puVar5;
    iVar9 = FUN_005686e0();
    goto joined_r0x00523886;
  case 2:
    local_4._0_1_ = uVar3;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_BackF5opp_msk_00676dbc;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_BackF5opp_msk_00676da8;
    }
    DAT_006cd360 = FUN_005eea00(pcVar8);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5o_ans_probl_txr_00676d90;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5o_ans_probl_txr_00676d78;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[99] = uVar4;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5o_ans_cost_txr_00676d60;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5o_ans_cost_txr_00676d48;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[100] = uVar4;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5o_ans_noway_txr_00676d30;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5o_ans_noway_txr_00676d18;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[0x65] = uVar4;
    puVar6 = (undefined4 *)FUN_00631d33(0x128);
    local_4._0_1_ = 7;
    puVar5 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      FUN_005bcc90(&DAT_006755d4,0);
      puVar6[0x48] = 0;
      puVar6[0x49] = 0;
      *puVar6 = &PTR_FUN_0064cc40;
      puVar5 = puVar6;
    }
    local_4._0_1_ = 0;
    param_1[0x60] = puVar5;
    iVar9 = FUN_0050d740(s_F5o_ask1_00676d0c,0xc6);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xcd - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xcd;
    iVar9 = FUN_0050d740(s_F5o_ask2_00676d00,199);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xfa - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xfa;
    iVar9 = FUN_0050d740(s_F5o_ask3_00676cf4,200);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x127 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x127;
    FUN_005bd2a0(puVar5,0);
    puVar5 = (undefined4 *)FUN_00631d33(0x128);
    local_4._0_1_ = 8;
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
    param_1[0x61] = puVar5;
    iVar9 = FUN_0050d740(s_F5o_ok_00676cec,0xce);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xfa - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xfa;
    iVar7 = FUN_0050d740(s_F5o_canc_00676ce0,0xcf);
    FUN_005bd2a0(iVar7,0);
    iVar9 = *(int *)(iVar7 + 0x30);
    *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + (0xb - *(int *)(iVar7 + 0x2c));
    *(undefined4 *)(iVar7 + 0x2c) = 0xb;
    *(undefined4 *)(iVar7 + 0x30) = 0x127;
    *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + (0x127 - iVar9);
    break;
  case 3:
    local_4._0_1_ = uVar3;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_BackF5nei_msk_00676ccc;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_BackF5nei_msk_00676cb8;
    }
    DAT_006cd360 = FUN_005eea00(pcVar8);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5n_ans_need_txr_00676ca0;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5n_ans_need_txr_00676c88;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[99] = uVar4;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5n_ans_cost_txr_00676c70;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5n_ans_cost_txr_00676c58;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[100] = uVar4;
    iVar9 = FUN_005686e0();
    pcVar8 = s_m_15_F5n_ans_nochan_txr_00676c40;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_F5n_ans_nochan_txr_00676c28;
    }
    uVar4 = FUN_005eea00(pcVar8);
    param_1[0x65] = uVar4;
    puVar5 = (undefined4 *)FUN_00631d33(0x128);
    local_4._0_1_ = 9;
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
    param_1[0x60] = puVar5;
    iVar9 = FUN_0050d740(s_F5n_ask1_00676c1c,0xca);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xcd - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xcd;
    iVar9 = FUN_0050d740(s_F5n_ask2_00676c10,0xcb);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xfa - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xfa;
    iVar9 = FUN_0050d740(s_F5n_ask3_00676c04,0xcc);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x127 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x127;
    FUN_005bd2a0(puVar5,0);
    puVar5 = (undefined4 *)FUN_00631d33(0x128);
    local_4._0_1_ = 10;
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
    param_1[0x61] = puVar5;
    iVar9 = FUN_0050d740(s_F5n_ok_00676bfc,0xce);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xfa - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xfa;
    iVar9 = FUN_0050d740(s_F5n_canc_00676bf0,0xcf);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xb;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x127 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x127;
    FUN_005bd2a0(puVar5,0);
    puVar5 = (undefined4 *)FUN_00631d33(0x128);
    local_4._0_1_ = 0xb;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_005bcc90(&DAT_006755d4,8);
      *puVar5 = &PTR_FUN_0064cc40;
      puVar5[0x48] = 0;
      puVar5[0x49] = 0;
    }
    local_4._0_1_ = 0;
    param_1[0x62] = puVar5;
    iVar9 = FUN_005686e0();
joined_r0x00523886:
    pcVar8 = s_m_15_BackF5tru_msk_00676dd0;
    if (iVar9 != 2) {
      pcVar8 = s_m_16_BackF5tru_msk_00676bdc;
    }
    DAT_006cd360 = FUN_005eea00(pcVar8);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    FUN_005bcc50(&DAT_006cd340);
    iVar9 = FUN_0050d740(s_F5tr_ok_00676bd4,0xce);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0x3b - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0x3b;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x164 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x164;
    iVar9 = FUN_0050d740(s_F5tr_canc_00676bc8,0xcf);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0x8d - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0x8d;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x164 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x164;
    iVar9 = FUN_0050d740(s_F5tr_l_00676bc0,0x79);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0x23 - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0x23;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x54 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x54;
    iVar9 = FUN_0050d740(s_F5tr_r_00676bb8,0x78);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xe1 - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0xe1;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x54 - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0x54;
    iVar9 = FUN_0050d740(s_F5tr_col_00676bac,0x7a);
    FUN_005bd2a0(iVar9,0);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0x6a - *(int *)(iVar9 + 0x2c));
    *(undefined4 *)(iVar9 + 0x2c) = 0x6a;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0xba - *(int *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x30) = 0xba;
    break;
  default:
    goto switchD_00522b6b_default;
  }
  FUN_005bd2a0(puVar5,0);
  uVar3 = (undefined1)local_4;
switchD_00522b6b_default:
  local_4._0_1_ = uVar3;
  if ((param_1[0x5c] == 1) || (param_1[0x5c] == 3)) {
    param_3 = &PTR_DAT_00674ab0;
    puVar5 = param_1 + 0x6b;
    do {
      iVar9 = 0;
      do {
        iVar7 = FUN_005686e0();
        pcVar8 = s_m15__s_d_msk_00676b9c;
        if (iVar7 != 2) {
          pcVar8 = s_m16__s_d_msk_00676b8c;
        }
        iVar9 = iVar9 + 1;
        FUN_0061c369(local_2c,pcVar8,*param_3,iVar9);
        uVar4 = FUN_005eea00(local_2c);
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while (iVar9 < 4);
      param_3 = param_3 + 1;
    } while ((int)param_3 < 0x674b1c);
  }
  if (param_1[0x62] != 0) {
    *(undefined4 *)(param_1[0x62] + 0x28) = 1;
  }
  *(undefined4 *)(param_1[0x61] + 0x28) = 1;
  *(undefined4 *)(param_1[0x60] + 0x28) = 1;
  FUN_005bd330();
  uVar1 = *(ushort *)(DAT_006cd360 + 4);
  iVar9 = (**(code **)(*param_2 + 0x14))();
  uVar2 = *(ushort *)(DAT_006cd360 + 6);
  iVar11 = (int)(iVar9 - (uint)uVar1) / 2;
  iVar7 = (**(code **)(*param_2 + 0x18))();
  iVar9 = puVar10[0xb];
  puVar10[0xb] = iVar11;
  iVar7 = (int)(iVar7 - (uint)uVar2) / 2;
  puVar10[0xd] = puVar10[0xd] + (iVar11 - iVar9);
  puVar10[0xe] = puVar10[0xe] + (iVar7 - puVar10[0xc]);
  puVar10[0xc] = iVar7;
  FUN_005bd2a0(puVar10,0);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0x5e] = 1;
  iVar9 = FUN_005686e0();
  pcVar8 = s_m_15_F5p_player_txr_00676b78;
  if (iVar9 != 2) {
    pcVar8 = s_m_16_F5p_player_txr_00676b64;
  }
  uVar4 = FUN_005eea00(pcVar8);
  param_1[0xdd] = uVar4;
  iVar9 = FUN_005686e0();
  pcVar8 = s_m_15_F5m_player_txr_00676b50;
  if (iVar9 != 2) {
    pcVar8 = s_m_16_F5m_player_txr_00676b3c;
  }
  uVar4 = FUN_005eea00(pcVar8);
  param_1[0xde] = uVar4;
  iVar9 = FUN_005686e0();
  pcVar8 = s_m_15_F5o_player_txr_00676b28;
  if (iVar9 != 2) {
    pcVar8 = s_m_16_F5o_player_txr_00676b14;
  }
  uVar4 = FUN_005eea00(pcVar8);
  param_1[0xdf] = uVar4;
  iVar9 = FUN_005686e0();
  pcVar8 = s_m_15_F5n_player_txr_00676b00;
  if (iVar9 != 2) {
    pcVar8 = s_m_16_F5n_player_txr_00676aec;
  }
  uVar4 = FUN_005eea00(pcVar8);
  param_1[0xe0] = uVar4;
  iVar9 = FUN_005686e0();
  pcVar8 = s_m_15_F5p_pol_txr_00676ad8;
  if (iVar9 != 2) {
    pcVar8 = s_m_16_F5p_pol_txr_00676ac4;
  }
  uVar4 = FUN_005eea00(pcVar8);
  param_1[0xd9] = uVar4;
  iVar9 = FUN_005686e0();
  pcVar8 = s_m_15_F5m_maf_txr_00676ab0;
  if (iVar9 != 2) {
    pcVar8 = s_m_16_F5m_maf_txr_00676a9c;
  }
  uVar4 = FUN_005eea00(pcVar8);
  param_1[0xda] = uVar4;
  iVar9 = FUN_005686e0();
  pcVar8 = s_m_15_F5o_opp_txr_00676a88;
  if (iVar9 != 2) {
    pcVar8 = s_m_16_F5o_opp_txr_00676a74;
  }
  uVar4 = FUN_005eea00(pcVar8);
  param_1[0xdb] = uVar4;
  iVar9 = FUN_005686e0();
  pcVar8 = s_m_15_F5n_nei_txr_00676a60;
  if (iVar9 != 2) {
    pcVar8 = s_m_16_F5n_nei_txr_00676a4c;
  }
  uVar4 = FUN_005eea00(pcVar8);
  param_1[0xdc] = uVar4;
  ExceptionList = pvStack_c;
  return param_1;
}

