
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00518470(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  char *pcVar12;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645b8a;
  local_c = ExceptionList;
  uVar11 = 0;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d1c4;
  param_1[0x10] = &PTR_LAB_0064d184;
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
  _DAT_006cd30c = FUN_005eea00(s_r_backRcrd_txr_0067628c);
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
  local_4._0_1_ = 0;
  _DAT_006cd30c = FUN_005eea00(s_r_backRcrdReplay_txr_00676274);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  iVar6 = FUN_00631d33(0x160);
  local_4._0_1_ = 4;
  if (iVar6 != 0) {
    uVar11 = FUN_005bfc10(s__00676264,8,0x6e);
  }
  local_4._0_1_ = 0;
  param_1[0x5f] = uVar11;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  iVar6 = param_1[0x5f];
  iVar2 = *(int *)(iVar6 + 0x30);
  *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + (0x14c - *(int *)(iVar6 + 0x2c));
  *(int *)(iVar6 + 0x2c) = 0x14c;
  *(undefined4 *)(iVar6 + 0x30) = 199;
  *(int *)(iVar6 + 0x38) = *(int *)(iVar6 + 0x38) + (199 - iVar2);
  *(undefined4 *)(param_1[0x5f] + 0x15c) = 0x29;
  *(undefined4 *)(*(int *)(param_1[0x5f] + 0x154) + 0x1c) = 0x95;
  *(undefined4 *)(param_1[0x5f] + 0x1c) = 0x95;
  FUN_005bfe90(10);
  FUN_0050eb50(*(undefined4 *)(param_1[0x5f] + 0x154),0x76);
  FUN_005bd2a0(param_1[0x5f],0);
  uVar4 = 0;
  uVar11 = FUN_0050e7b0(s_r_delrec_00676258,0x119,0x1db,0x11d,0);
  FUN_005bd2a0(uVar11,uVar4);
  uVar4 = 0;
  uVar11 = FUN_0050e7b0(s_r_repl_00676250,0x91,0x14c,0x91,0);
  FUN_005bd2a0(uVar11,uVar4);
  iVar6 = puVar5[0xb];
  puVar5[0xb] = 300;
  puVar5[0xd] = puVar5[0xd] + (300 - iVar6);
  iVar6 = puVar5[0xc];
  puVar5[0xc] = 0x8d;
  puVar5[0xe] = puVar5[0xe] + (0x8d - iVar6);
  FUN_005bd420();
  FUN_005bd2a0(puVar5,0);
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 5;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar5[0x48] = 0;
    puVar5[0x49] = 0;
    *puVar5 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  _DAT_006cd30c = FUN_005eea00(s_r_backRcrdRec_txr_0067623c);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  *(undefined1 *)(param_1 + 0x60) = 0;
  puVar7 = (undefined4 *)FUN_00631d33(300);
  local_4._0_1_ = 6;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_0068c120,0);
    *puVar7 = &PTR_FUN_0064d150;
    puVar7[0x48] = param_1 + 0x60;
    puVar7[0x49] = 0x22;
    puVar7[0x4a] = 0;
  }
  param_1[0x5e] = puVar7;
  puVar7[7] = 0x94;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  *(undefined4 *)(param_1[0x5e] + 0x2c) = 0x155;
  *(undefined4 *)(param_1[0x5e] + 0x30) = 0x197;
  *(int *)(param_1[0x5e] + 0x34) = *(int *)(param_1[0x5e] + 0x2c) + 0x7d;
  *(int *)(param_1[0x5e] + 0x38) = *(int *)(param_1[0x5e] + 0x30) + 10;
  FUN_005bd2a0(param_1[0x5e],0);
  uVar11 = FUN_0050e460(s_r_rec_00676234,0x92,0x14c,0x157,0);
  param_1[0x5d] = uVar11;
  FUN_005bd2a0(uVar11,0);
  iVar6 = puVar5[0xb];
  puVar5[0xb] = 300;
  iVar2 = puVar5[0xc];
  puVar5[0xd] = puVar5[0xd] + (300 - iVar6);
  puVar5[0xc] = 0x155;
  puVar5[0xe] = puVar5[0xe] + (0x155 - iVar2);
  FUN_005bd420();
  FUN_005bd2a0(puVar5,0);
  uVar4 = 0;
  uVar11 = FUN_0050e7b0(s_r_canc_0067622c,2,0x14c,0x1d1,0);
  FUN_005bd2a0(uVar11,uVar4);
  FUN_005bd330();
  FUN_005bd2a0(puVar3,0);
  pcVar8 = (char *)FUN_005d2500(0x51);
  uVar9 = 0xffffffff;
  do {
    pcVar12 = pcVar8;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar12;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar8 = pcVar12 + -uVar9;
  pcVar12 = (char *)(param_1 + 0x60);
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar12 = pcVar12 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

