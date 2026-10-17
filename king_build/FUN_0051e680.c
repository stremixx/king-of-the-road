
undefined4 * __thiscall FUN_0051e680(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645ed9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d698;
  param_1[0x10] = &PTR_LAB_0064d658;
  uVar5 = FUN_0050c190();
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar5;
  puVar6 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    *puVar6 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  iVar7 = FUN_005686e0();
  pcVar8 = s_m_15_BackLoose2_txr_006768e0;
  if (iVar7 != 2) {
    pcVar8 = s_m_16_BackLoose2_txr_006768cc;
  }
  DAT_006cd35c = FUN_005eea00(pcVar8);
  param_1[0x5c] = DAT_006cd35c;
  iVar7 = FUN_005686e0();
  pcVar8 = s_m_15_BackLoose1_txr_006768b8;
  if (iVar7 != 2) {
    pcVar8 = s_m_16_BackLoose1_txr_006768a4;
  }
  uVar5 = FUN_005eea00(pcVar8);
  param_1[0x5d] = uVar5;
  iVar7 = FUN_005686e0();
  pcVar8 = s_m_15_BackWin_txr_00676890;
  if (iVar7 != 2) {
    pcVar8 = s_m_16_BackWin_txr_0067687c;
  }
  uVar5 = FUN_005eea00(pcVar8);
  param_1[0x5e] = uVar5;
  iVar7 = FUN_005686e0();
  pcVar8 = s_m_15_BackWin1_txr_00676868;
  if (iVar7 != 2) {
    pcVar8 = s_m_16_BackWin1_txr_00676854;
  }
  uVar5 = FUN_005eea00(pcVar8);
  param_1[0x5f] = uVar5;
  iVar7 = FUN_005686e0();
  pcVar8 = s_m_15_BackLoose3_txr_00676840;
  if (iVar7 != 2) {
    pcVar8 = s_m_16_BackLoose3_txr_0067682c;
  }
  uVar5 = FUN_005eea00(pcVar8);
  param_1[0x60] = uVar5;
  iVar7 = FUN_005686e0();
  pcVar8 = s_m_15_BackWin2_txr_00676818;
  if (iVar7 != 2) {
    pcVar8 = s_m_16_BackWin2_txr_00676804;
  }
  uVar5 = FUN_005eea00(pcVar8);
  param_1[0x61] = uVar5;
  iVar7 = FUN_005686e0();
  pcVar8 = s_m_15_BackLoose4_txr_006767f0;
  if (iVar7 != 2) {
    pcVar8 = s_m_16_BackLoose4_txr_006767dc;
  }
  uVar5 = FUN_005eea00(pcVar8);
  param_1[0x62] = uVar5;
  iVar7 = FUN_005686e0();
  pcVar8 = s_m_15_BackLoose5_txr_006767c8;
  if (iVar7 != 2) {
    pcVar8 = s_m_16_BackLoose5_txr_006767b4;
  }
  uVar5 = FUN_005eea00(pcVar8);
  param_1[99] = uVar5;
  param_1[100] = 0;
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  puVar9 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar9[0x48] = 0;
    puVar9[0x49] = 0;
    *puVar9 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  param_1[0x6d] = puVar9;
  uVar5 = FUN_0050d740(s_o_main_006767ac,0xa3);
  param_1[0x68] = uVar5;
  FUN_005bd2a0(uVar5,0);
  iVar7 = FUN_0050d740(s_o_rest_006767a4,0xa8);
  param_1[0x69] = iVar7;
  FUN_005bd2a0(iVar7,0);
  FUN_005bd590((*(int *)(iVar7 + 0x2c) - *(int *)(iVar7 + 0x34)) + 0x122);
  iVar7 = puVar9[0xb];
  puVar9[0xb] = 0x24d;
  puVar9[0xd] = puVar9[0xd] + (0x24d - iVar7);
  puVar9[0xe] = puVar9[0xe] + (0x2af - puVar9[0xc]);
  puVar9[0xc] = 0x2af;
  FUN_005bd2a0(puVar9,0);
  puVar9 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar9[0x48] = 0;
    puVar9[0x49] = 0;
    *puVar9 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x6e] = puVar9;
  uVar5 = FUN_0050d740(s_ow_main_0067679c,0xa3);
  param_1[0x6a] = uVar5;
  FUN_005bd2a0(uVar5,0);
  uVar5 = FUN_0050d740(s_ow_cont_00676794,0xac);
  param_1[0x6b] = uVar5;
  FUN_005bd2a0(uVar5,0);
  iVar7 = FUN_0050d740(s_ow_rest_0067678c,0xa8);
  param_1[0x6c] = iVar7;
  FUN_005bd2a0(iVar7,0);
  FUN_005bd590((*(int *)(iVar7 + 0x2c) - *(int *)(iVar7 + 0x34)) + 0x91);
  puVar9[0xd] = puVar9[0xd] + (0x24d - puVar9[0xb]);
  puVar9[0xb] = 0x24d;
  puVar9[0xe] = puVar9[0xe] + (0x2af - puVar9[0xc]);
  puVar9[0xc] = 0x2af;
  FUN_005bd2a0(puVar9,0);
  FUN_005bd330();
  piVar4 = DAT_006957ac;
  uVar1 = *(ushort *)(DAT_006cd35c + 0x14);
  iVar7 = (**(code **)(*DAT_006957ac + 0x14))();
  uVar2 = *(ushort *)(DAT_006cd35c + 0x16);
  iVar11 = (int)(iVar7 - (uint)uVar1) / 2;
  iVar7 = (**(code **)(*piVar4 + 0x18))();
  iVar10 = (int)(iVar7 - (uint)uVar2) / 2;
  iVar7 = puVar6[0xb];
  puVar6[0xb] = iVar11;
  iVar3 = puVar6[0xc];
  puVar6[0xd] = puVar6[0xd] + (iVar11 - iVar7);
  puVar6[0xc] = iVar10;
  puVar6[0xe] = puVar6[0xe] + (iVar10 - iVar3);
  FUN_005bd2a0(puVar6,0);
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

