
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00519cc0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645c4c;
  local_c = ExceptionList;
  uVar6 = 0;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  FUN_0061d173(param_1 + 0x8a,0x20,8,&LAB_006008d0,FUN_00600ae0);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_0064d2d4;
  param_1[0x10] = &PTR_LAB_0064d294;
  puVar2 = (undefined4 *)FUN_00631d33(0xc);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = FUN_005eea00(s_cursor_msk_00675bfc);
    *puVar2 = uVar3;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  local_4._0_1_ = 1;
  param_1[0xd] = puVar2;
  param_1[0xc] = puVar2;
  _DAT_006cd30c = FUN_005eea00(s_n_backMult_txr_006763c0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  puVar2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    *puVar2 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 1;
  puVar4 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    *puVar4 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 1;
  _DAT_006cd30c = FUN_005eea00(s_n_backMultConn_txr_006763ac);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  iVar5 = FUN_00631d33(0x160);
  local_4._0_1_ = 5;
  if (iVar5 != 0) {
    uVar6 = FUN_005bfc10(s__00676384,8,0x46);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x89] = uVar6;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  FUN_005c30b0(s_truck_00676338,0,0);
  if (DAT_00695850 != 0) {
    FUN_00600d60();
    iVar5 = FUN_00600c20(param_1 + 0x8a);
    if (iVar5 == 0) {
      uVar6 = FUN_00600b10();
      FUN_005c0840(uVar6);
      iVar5 = FUN_00600be0(param_1 + 0x92);
      if (iVar5 == 0) {
        puVar7 = param_1 + 0x92;
        do {
          uVar6 = FUN_00600b10();
          FUN_005c0840(uVar6);
          puVar7 = puVar7 + 8;
          iVar5 = FUN_00600be0(puVar7);
        } while (iVar5 == 0);
      }
    }
    FUN_005c3150();
  }
  *(undefined4 *)(*(int *)(param_1[0x89] + 0x154) + 0x1c) = 0x7b;
  *(undefined4 *)(param_1[0x89] + 0x1c) = 0x7b;
  FUN_005c0320(1);
  iVar5 = param_1[0x89];
  iVar1 = *(int *)(iVar5 + 0x30);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x143 - *(int *)(iVar5 + 0x2c));
  *(int *)(iVar5 + 0x2c) = 0x143;
  *(undefined4 *)(iVar5 + 0x30) = 0x15e;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x15e - iVar1);
  *(undefined4 *)(param_1[0x89] + 0x15c) = 0x29;
  FUN_005bfe90(10);
  FUN_0050eb50(*(undefined4 *)(param_1[0x89] + 0x154),0x40);
  FUN_005bd2a0(param_1[0x89],0);
  uVar3 = 0;
  uVar6 = FUN_0050dd50(s_aleft_00675bb0,0x79,0x143,200,0);
  FUN_005bd2a0(uVar6,uVar3);
  uVar3 = 0;
  uVar6 = FUN_0050dd50(s_aright_00675bb8,0x78,0x210,200,0);
  FUN_005bd2a0(uVar6,uVar3);
  uVar3 = 0;
  uVar6 = FUN_0050e7b0(s_n_color_0067637c,0x7a,0x186,0x12f,0);
  FUN_005bd2a0(uVar6,uVar3);
  uVar3 = 0;
  uVar6 = FUN_0050e7b0(s_n_join_00676374,0x76,0x1c3,0x1ac,0);
  FUN_005bd2a0(uVar6,uVar3);
  uVar3 = 0;
  uVar6 = FUN_0050e7b0(s_n_host_0067636c,0x77,0x15c,0x1ac,0);
  FUN_005bd2a0(uVar6,uVar3);
  puVar4[0xd] = puVar4[0xd] + (0x136 - puVar4[0xb]);
  puVar4[0xb] = 0x136;
  puVar4[0xe] = puVar4[0xe] + (0x66 - puVar4[0xc]);
  puVar4[0xc] = 0x66;
  FUN_005bd420();
  FUN_005bd2a0(puVar4,0);
  uVar3 = 0;
  uVar6 = FUN_0050e7b0(s_n_cancel_00676360,2,0x143,0x1e8,0);
  FUN_005bd2a0(uVar6,uVar3);
  FUN_005bd330();
  FUN_005bd2a0(puVar2,0);
  param_2 = param_1 + 0x5d;
  param_1[0x5c] = 0;
  iVar5 = 0;
  do {
    ppuVar8 = &PTR_s_Peter_00674a2c;
    puVar2 = param_2;
    do {
      FUN_0061c369(local_24,s_n__s_d_msk_00676354,*ppuVar8,iVar5);
      uVar6 = FUN_005eea00(local_24);
      *puVar2 = uVar6;
      ppuVar8 = ppuVar8 + 1;
      puVar2 = puVar2 + 4;
    } while ((int)ppuVar8 < 0x674a58);
    iVar5 = iVar5 + 1;
    param_2 = param_2 + 1;
  } while (iVar5 < 4);
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  ExceptionList = local_c;
  return param_1;
}

