
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00527710(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte local_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646221;
  pvStack_c = ExceptionList;
  uVar9 = 0;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_0050c160(0);
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,8,uVar2,uVar9);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064db00;
  param_1[0x10] = &PTR_LAB_0064dac0;
  FUN_005d2570(s_v_1_2_02_10_01_006772d8);
  iVar3 = FUN_00631d33(0x14);
  local_4._0_1_ = 1;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005edbb0(s_load_ovl_006772cc,*(undefined4 *)(DAT_00695c00 + 0x24b4),0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)(*(int *)(DAT_00695c00 + 0x24b4) + 0x88) = uVar2;
  DAT_006cdc54 = (int *)FUN_005eea00(s_2Dmenu_cl_006772c0);
  if (DAT_006cdc54 != (int *)0x0) {
    (**(code **)(*DAT_006cdc54 + 0x28))();
  }
  param_1[0x5d] = 0;
  DAT_006cdcf0 = PTR_FUN_0067eabc;
  PTR_FUN_0067eabc = &LAB_00527500;
  GetPrivateProfileStringA
            (s_EFFECTS_00671998,&DAT_006772bc,&DAT_006719a8,(LPSTR)local_8c,4,DAT_006957c8);
  pbVar6 = &DAT_00671994;
  pbVar5 = local_8c;
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00527872:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00527877;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00527872;
    pbVar5 = pbVar5 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00527877:
  _DAT_006cdca8 = (uint)(iVar3 == 0);
  thunk_FUN_00603580();
  uVar2 = __ftol();
  FUN_0061e481(uVar2);
  if (*(int *)(DAT_00695c00 + 0xb30) == 0) {
    iVar3 = FUN_005e8290(s_menu_fon_006751b8);
    if (iVar3 == 0) {
      FUN_005d25a0(s_menu_fon_is_absent__006757b8);
    }
    *(int *)(DAT_00695c00 + 0xb30) = iVar3;
  }
  uVar2 = FUN_005eea00(s_m_back_main_txr_006772ac);
  param_1[0x5c] = uVar2;
  _DAT_006cd8b8 = FUN_005eea00(s_common_msk_006772a0);
  _DAT_006cd30c = DAT_00695c7c;
  FUN_005bcc50(&DAT_006cd898);
  FUN_005bcc50(&DAT_006cd898);
  FUN_005bcc50(&DAT_006cd898);
  FUN_005bcc50(&DAT_006cd898);
  puVar4 = (undefined4 *)FUN_00631d33(0xc);
  local_4._0_1_ = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar2 = FUN_005eea00(s_cursor_msk_00675bfc);
    *puVar4 = uVar2;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  local_4._0_1_ = 0;
  param_1[0xd] = puVar4;
  param_1[0xc] = puVar4;
  puVar4 = (undefined4 *)FUN_00631d33(0xc);
  local_4._0_1_ = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar2 = FUN_005eea00(s_cursor_a_msk_00677290);
    *puVar4 = uVar2;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  local_4._0_1_ = 0;
  DAT_00701eac = FUN_00527680;
  _DAT_006cd36c = 6;
  _DAT_006cd368 = 2;
  _DAT_006cd374 = 0;
  _DAT_006cd370 = 4;
  DAT_006cdbc0 = puVar4;
  FUN_005bcc50(&DAT_006cd368);
  _DAT_006cd31c = 7;
  FUN_005bcc50(&DAT_006cd318);
  _DAT_006cd8f4 = 4;
  _DAT_006cd8f0 = 0;
  FUN_005bcc50(&DAT_006cd8e8);
  _DAT_006cda9c = 6;
  FUN_005bcc50(&DAT_006cda98);
  _DAT_006cd394 = 3;
  _DAT_006cd358 = 0x3f000000;
  _DAT_006cd344 = 4;
  _DAT_006cd340 = 0;
  _DAT_006cd34c = 0;
  _DAT_006cd348 = 3;
  _DAT_006cd8d8 = 0x3f000000;
  _DAT_006cd8c4 = 4;
  _DAT_006cd8c0 = 0;
  _DAT_006cd8c8 = 0;
  _DAT_006cd8cc = 3;
  puVar4 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    *puVar4 = &PTR_FUN_0064cc40;
  }
  uVar9 = 0;
  local_4._0_1_ = 0;
  uVar2 = FUN_0050dd50(s_m_exit_00677288,0x6c,0x254,0x1c4,0);
  FUN_005bd2a0(uVar2,uVar9);
  uVar9 = 0;
  uVar2 = FUN_0050dd50(s_m_chang_00677280,0x69,0x288,0x14c,0);
  FUN_005bd2a0(uVar2,uVar9);
  uVar9 = 0;
  uVar2 = FUN_0050dd50(s_m_multi_00677278,0x68,0x288,0xca,0);
  FUN_005bd2a0(uVar2,uVar9);
  uVar2 = FUN_0050dd50(s_m_singl_00677270,0x66,0x254,0x52);
  FUN_005bd2a0(uVar2,0);
  uVar10 = 0;
  uVar9 = FUN_0050dd50(s_m_recor_00677268,0x65,0x4f,0x1c4,0);
  FUN_005bd2a0(uVar9,uVar10);
  uVar10 = 0;
  uVar9 = FUN_0050dd50(s_m_demo_00677260,0x6a,0x1b,0x14c,0);
  FUN_005bd2a0(uVar9,uVar10);
  uVar10 = 0;
  uVar9 = FUN_0050dd50(s_m_contr_00677258,0x67,0x1b,0xca,0);
  FUN_005bd2a0(uVar9,uVar10);
  uVar10 = 0;
  uVar9 = FUN_0050dd50(s_m_graph_00677250,0x6b,0x4f,0x52,0);
  FUN_005bd2a0(uVar9,uVar10);
  FUN_005bd250(uVar2);
  FUN_004843e0(puVar4 + 0xb);
  FUN_005bd2a0(puVar4,0);
  DAT_006cdbe0 = param_1;
  FUN_005d8100();
  iVar3 = FUN_00631d33(0x550);
  local_4._0_1_ = 5;
  if (iVar3 == 0) {
    DAT_006cdbcc = (int *)0x0;
  }
  else {
    DAT_006cdbcc = (int *)FUN_00513330(param_2);
  }
  local_4._0_1_ = 0;
  FUN_005e3810(DAT_006cdbcc);
  (**(code **)(*DAT_006cdbcc + 0x20))();
  iVar3 = FUN_00631d33(0x1a8);
  local_4._0_1_ = 6;
  if (iVar3 == 0) {
    DAT_006cdbd0 = (int *)0x0;
  }
  else {
    DAT_006cdbd0 = (int *)FUN_00515460(param_2);
  }
  local_4._0_1_ = 0;
  FUN_005e3810(DAT_006cdbd0);
  (**(code **)(*DAT_006cdbd0 + 0x20))();
  iVar3 = FUN_00631d33(0x178);
  local_4._0_1_ = 7;
  if (iVar3 == 0) {
    DAT_006cdbdc = (int *)0x0;
  }
  else {
    DAT_006cdbdc = (int *)FUN_005175e0(param_2);
  }
  local_4._0_1_ = 0;
  FUN_005e3810(DAT_006cdbdc);
  (**(code **)(*DAT_006cdbdc + 0x20))();
  iVar3 = FUN_00631d33(0x170);
  local_4._0_1_ = 8;
  if (iVar3 == 0) {
    DAT_006cdbec = (int *)0x0;
  }
  else {
    DAT_006cdbec = (int *)FUN_00517bc0(param_2);
  }
  local_4._0_1_ = 0;
  FUN_005e3810(DAT_006cdbec);
  (**(code **)(*DAT_006cdbec + 0x20))();
  iVar3 = FUN_00631d33(0x1c0);
  local_4._0_1_ = 9;
  if (iVar3 == 0) {
    DAT_006cdbf0 = (int *)0x0;
  }
  else {
    DAT_006cdbf0 = (int *)FUN_00518470(param_2);
  }
  local_4._0_1_ = 0;
  FUN_005e3810(DAT_006cdbf0);
  (**(code **)(*DAT_006cdbf0 + 0x20))();
  iVar3 = FUN_00631d33(0x330);
  local_4._0_1_ = 10;
  if (iVar3 == 0) {
    DAT_006cdbf4 = (int *)0x0;
  }
  else {
    DAT_006cdbf4 = (int *)FUN_00519cc0(param_2);
  }
  local_4._0_1_ = 0;
  FUN_005e3810(DAT_006cdbf4);
  (**(code **)(*DAT_006cdbf4 + 0x20))();
  iVar3 = FUN_00631d33(400);
  local_4._0_1_ = 0xb;
  if (iVar3 == 0) {
    DAT_006cdbf8 = (int *)0x0;
  }
  else {
    DAT_006cdbf8 = (int *)FUN_0051a510(param_2);
  }
  local_4._0_1_ = 0;
  FUN_005e3810(DAT_006cdbf8);
  (**(code **)(*DAT_006cdbf8 + 0x20))();
  iVar3 = FUN_00631d33(0x2c0);
  local_4._0_1_ = 0xc;
  if (iVar3 == 0) {
    DAT_006cdc38 = (int *)0x0;
  }
  else {
    DAT_006cdc38 = (int *)FUN_0051ad80(param_2);
  }
  local_4._0_1_ = 0;
  FUN_005e3810(DAT_006cdc38);
  (**(code **)(*DAT_006cdc38 + 0x20))();
  iVar3 = FUN_00631d33(0x198);
  local_4._0_1_ = 0xd;
  if (iVar3 == 0) {
    DAT_006cdbfc = (int *)0x0;
  }
  else {
    DAT_006cdbfc = (int *)FUN_0051c160(param_2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005e3810(DAT_006cdbfc);
  (**(code **)(*DAT_006cdbfc + 0x20))();
  GetPrivateProfileStringA
            (s_INSTALL_006751a4,&DAT_00677240,s_minimal_00677248,(LPSTR)local_8c,0x1e,DAT_006957c8);
  pcVar7 = s_minimal_00677248;
  pbVar5 = local_8c;
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_00527f0f:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00527f14;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_00527f0f;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00527f14:
  if (iVar3 == 0) {
    DAT_006cdbcc[0x151] = 0;
  }
  else {
    pbVar6 = &DAT_00677238;
    pbVar5 = local_8c;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00527f56:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00527f5b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00527f56;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00527f5b:
    if (iVar3 == 0) {
      DAT_006cdbcc[0x151] = 1;
    }
    else {
      DAT_006cdbcc[0x151] = 2;
    }
  }
  DAT_006957d4 = DAT_006957d4 | 0x40;
  DAT_006f1e30 = FUN_005eea00(s_tip1_left_msk_00677228);
  DAT_006f1e48 = DAT_006f1e30;
  DAT_006f1e34 = FUN_005eea00(s_tip1_midd_msk_00677218);
  DAT_006f1e4c = DAT_006f1e34;
  DAT_006f1e38 = FUN_005eea00(s_tip1_right_msk_00677208);
  DAT_006f1e50 = DAT_006f1e38;
  FUN_005d7cc0();
  CoInitialize((LPVOID)0x0);
  ExceptionList = pvStack_c;
  return param_1;
}

