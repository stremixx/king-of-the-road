
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0051ad80(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  LPCSTR pCVar7;
  undefined4 uVar8;
  LPSTR pCVar9;
  DWORD DVar10;
  undefined4 uVar11;
  LPCSTR pCVar12;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645d2a;
  local_c = ExceptionList;
  uVar8 = 0;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d3e4;
  param_1[0x10] = &PTR_LAB_0064d3a4;
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
  _DAT_006cd30c = FUN_005eea00(s_d_backDriv_txr_006764c4);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  puVar2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    *puVar2 = &PTR_FUN_0064cc40;
  }
  uVar11 = 0;
  local_4._0_1_ = 0;
  uVar3 = FUN_0050e7b0(s_d_canc_006764bc,2,0x143,0x1e1,0);
  FUN_005bd2a0(uVar3,uVar11);
  puVar4 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,8);
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    *puVar4 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  DAT_006cd310 = FUN_005eea00(s_d_backDrivRcnt_msk_006764a8);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  uVar11 = 0;
  uVar3 = FUN_0050e7b0(s_d_deldriv_0067649c,0x7f,0x1b2,0x1a2,0);
  FUN_005bd2a0(uVar3,uVar11);
  iVar5 = FUN_00631d33(0x160);
  local_4._0_1_ = 4;
  if (iVar5 != 0) {
    uVar8 = FUN_005bfc10(s__0067648c,8,0x78);
  }
  local_4._0_1_ = 0;
  param_1[0x97] = uVar8;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  iVar5 = param_1[0x97];
  iVar1 = *(int *)(iVar5 + 0x30);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x134 - *(int *)(iVar5 + 0x2c));
  *(int *)(iVar5 + 0x2c) = 0x134;
  *(undefined4 *)(iVar5 + 0x30) = 0x142;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x142 - iVar1);
  *(undefined4 *)(param_1[0x97] + 0x15c) = 0x29;
  *(undefined4 *)(*(int *)(param_1[0x97] + 0x154) + 0x1c) = 0x7d;
  *(undefined4 *)(param_1[0x97] + 0x1c) = 0x7d;
  FUN_005bfe90(10);
  FUN_0050eb50(*(undefined4 *)(param_1[0x97] + 0x154),0x80);
  FUN_005bd2a0(param_1[0x97],0);
  iVar5 = puVar4[0xb];
  puVar4[0xb] = 0x127;
  iVar1 = puVar4[0xc];
  puVar4[0xd] = puVar4[0xd] + (0x127 - iVar5);
  puVar4[0xc] = 0x136;
  puVar4[0xe] = puVar4[0xe] + (0x136 - iVar1);
  FUN_005bd420();
  FUN_005bd2a0(puVar4,0);
  puVar4 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 5;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,8);
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    *puVar4 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  DAT_006cd310 = FUN_005eea00(s_d_backDrivCurr_msk_00676478);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  puVar6 = (undefined4 *)FUN_00631d33(300);
  local_4._0_1_ = 6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_0068c120,0);
    *puVar6 = &PTR_FUN_0064d150;
    puVar6[0x48] = param_1 + 0xa7;
    puVar6[0x49] = 0x22;
    puVar6[0x4a] = 0;
  }
  param_1[0x98] = puVar6;
  puVar6[7] = 0x7e;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  uVar3 = 0;
  *(undefined4 *)(param_1[0x98] + 0x2c) = 0x139;
  *(undefined4 *)(param_1[0x98] + 0x30) = 0x112;
  *(int *)(param_1[0x98] + 0x34) = *(int *)(param_1[0x98] + 0x2c) + 0x5a;
  *(int *)(param_1[0x98] + 0x38) = *(int *)(param_1[0x98] + 0x30) + 10;
  uVar8 = FUN_0050dd50(s_aleft_00675bb0,0x81,0x134,0xaf,0);
  FUN_005bd2a0(uVar8,uVar3);
  uVar3 = 0;
  uVar8 = FUN_0050dd50(s_aright_00675bb8,0x80,0x1cf,0xaf,0);
  FUN_005bd2a0(uVar8,uVar3);
  uVar3 = 0;
  uVar8 = FUN_0050dd50(s_aleft_00675bb0,0x83,0x1a0,0x109,0);
  FUN_005bd2a0(uVar8,uVar3);
  uVar3 = 0;
  uVar8 = FUN_0050dd50(s_aright_00675bb8,0x82,0x23b,0x109,0);
  FUN_005bd2a0(uVar8,uVar3);
  FUN_005bd2a0(param_1[0x98],0);
  iVar5 = puVar4[0xb];
  puVar4[0xb] = 0x127;
  puVar4[0xd] = puVar4[0xd] + (0x127 - iVar5);
  iVar5 = puVar4[0xc];
  puVar4[0xc] = 100;
  puVar4[0xe] = puVar4[0xe] + (100 - iVar5);
  FUN_005bd420();
  puVar4[0xe] = puVar4[0xe] + -0x1e;
  FUN_005bd2a0(puVar4,0);
  FUN_005bd330();
  FUN_005bd2a0(puVar2,0);
  param_1[0x99] = 0;
  pCVar9 = (LPSTR)(param_1 + 0x9e);
  DVar10 = 0x21;
  pCVar12 = DAT_006957c8;
  pCVar7 = (LPCSTR)FUN_005d2500(0x30);
  GetPrivateProfileStringA(s_EFFECTS_00671998,s_lastp_00676470,pCVar7,pCVar9,DVar10,pCVar12);
  pCVar9 = (LPSTR)(param_1 + 0xa7);
  DVar10 = 0x21;
  pCVar12 = DAT_006957c8;
  pCVar7 = (LPCSTR)FUN_005d2500(0x30);
  GetPrivateProfileStringA(s_EFFECTS_00671998,s_lastp_00676470,pCVar7,pCVar9,DVar10,pCVar12);
  FUN_00603230(s_EFFECTS_00671998,&DAT_00676468,5,&param_2,DAT_006957c8);
  param_1[0x9a] = param_2;
  FUN_00603230(s_EFFECTS_00671998,s_photo_00676460,0,&param_2,DAT_006957c8);
  param_1[0x9c] = param_2;
  iVar5 = 0;
  puVar2 = param_1 + 0x5c;
  do {
    iVar5 = iVar5 + 1;
    FUN_0061c369(local_24,s_d_logo_d_msk_00676450,iVar5);
    uVar8 = FUN_005eea00(local_24);
    *puVar2 = uVar8;
    puVar2 = puVar2 + 1;
  } while (iVar5 < 8);
  iVar5 = 0;
  puVar2 = param_1 + 100;
  do {
    iVar5 = iVar5 + 1;
    FUN_0061c369(local_24,s_d_photo_02d_msk_00676440,iVar5);
    uVar8 = FUN_005eea00(local_24);
    *puVar2 = uVar8;
    puVar2 = puVar2 + 1;
  } while (iVar5 < 0x33);
  ExceptionList = local_c;
  return param_1;
}

