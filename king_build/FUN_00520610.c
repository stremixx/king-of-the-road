
undefined4 * __thiscall FUN_00520610(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_24;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645fb4;
  local_c = ExceptionList;
  uVar11 = 0;
  uVar10 = 0;
  ExceptionList = &local_c;
  uVar3 = DAT_006cdc84;
  puVar2 = (undefined4 *)FUN_00510960(local_1c,param_2,0,DAT_006cdc84,0);
  FUN_005d7fb0(param_2,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar10,uVar3,uVar11);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d7b0;
  param_1[0x10] = &PTR_LAB_0064d770;
  uVar3 = FUN_0050c190();
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar3;
  puVar2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    *puVar2 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  iVar4 = FUN_005686e0();
  pcVar5 = s_m_15_BackService_txr_006769b8;
  if (iVar4 != 2) {
    pcVar5 = s_m_16_BackService_txr_006769a0;
  }
  DAT_006cd35c = FUN_005eea00(pcVar5);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
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
  param_1[0x5c] = puVar6;
  local_4 = (uint)local_4._1_3_ << 8;
  iVar4 = 0x5f;
  param_2 = 0xff;
  do {
    iVar7 = FUN_0050ca50(s_check_00676998,param_2,0);
    FUN_005bd2a0(iVar7,0);
    iVar8 = *(int *)(iVar7 + 0x2c);
    *(undefined4 *)(iVar7 + 0x2c) = 0x16a;
    *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + (0x16a - iVar8);
    iVar8 = iVar4 - *(int *)(iVar7 + 0x30);
    *(int *)(iVar7 + 0x30) = iVar4;
    iVar4 = iVar4 + -0x13;
    *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + iVar8;
    param_2 = param_2 + -2;
  } while (-0x14 < iVar4);
  iVar4 = 0x5f;
  param_2 = 0xf1;
  local_24 = 7;
  do {
    iVar9 = FUN_0050ca50(s_check_00676998,param_2,0);
    FUN_005bd2a0(iVar9,0);
    iVar8 = *(int *)(iVar9 + 0x2c);
    *(undefined4 *)(iVar9 + 0x2c) = 0xb5;
    iVar7 = *(int *)(iVar9 + 0x30);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0xb5 - iVar8);
    *(int *)(iVar9 + 0x30) = iVar4;
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (iVar4 - iVar7);
    iVar4 = iVar4 + -0x13;
    param_2 = param_2 + -2;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  param_2 = 0xe3;
  iVar4 = 0x5f;
  local_24 = 6;
  do {
    iVar7 = FUN_0050ca50(s_check_00676998,param_2,0);
    FUN_005bd2a0(iVar7,0);
    iVar8 = *(int *)(iVar7 + 0x30);
    *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) - *(int *)(iVar7 + 0x2c);
    *(int *)(iVar7 + 0x30) = iVar4;
    iVar8 = iVar4 - iVar8;
    iVar4 = iVar4 + -0x13;
    *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + iVar8;
    param_2 = param_2 + -2;
    local_24 = local_24 + -1;
    *(undefined4 *)(iVar7 + 0x2c) = 0;
  } while (local_24 != 0);
  iVar4 = puVar6[0xb];
  puVar6[0xb] = 0xe7;
  puVar6[0xd] = puVar6[0xd] + (0xe7 - iVar4);
  puVar6[0xe] = puVar6[0xe] + (0x265 - puVar6[0xc]);
  puVar6[0xc] = 0x265;
  FUN_005bd2a0(puVar6,0);
  puVar6 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    *puVar6 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar4 = 0x39;
  param_2 = 0x10f;
  param_1[0x5d] = puVar6;
  do {
    iVar7 = FUN_0050cd80(s_check_00676998,param_2,0);
    FUN_005bd2a0(iVar7,0);
    iVar8 = *(int *)(iVar7 + 0x2c);
    *(undefined4 *)(iVar7 + 0x2c) = 0xb5;
    *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + (0xb5 - iVar8);
    iVar8 = iVar4 - *(int *)(iVar7 + 0x30);
    *(int *)(iVar7 + 0x30) = iVar4;
    iVar4 = iVar4 + -0x13;
    param_2 = param_2 + -2;
    *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + iVar8;
  } while (-1 < iVar4);
  iVar4 = 0x39;
  param_2 = 0x107;
  local_24 = 4;
  do {
    iVar7 = FUN_0050cd80(s_check_00676998,param_2,0);
    FUN_005bd2a0(iVar7,0);
    iVar8 = *(int *)(iVar7 + 0x30);
    *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) - *(int *)(iVar7 + 0x2c);
    *(int *)(iVar7 + 0x30) = iVar4;
    iVar8 = iVar4 - iVar8;
    iVar4 = iVar4 + -0x13;
    *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + iVar8;
    param_2 = param_2 + -2;
    local_24 = local_24 + -1;
    *(undefined4 *)(iVar7 + 0x2c) = 0;
  } while (local_24 != 0);
  iVar4 = puVar6[0xb];
  puVar6[0xb] = 0x19c;
  puVar6[0xd] = puVar6[0xd] + (0x19c - iVar4);
  puVar6[0xe] = puVar6[0xe] + (0x1e1 - puVar6[0xc]);
  puVar6[0xc] = 0x1e1;
  FUN_005bd2a0(puVar6,0);
  puVar6 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 4;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    *puVar6 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar8 = FUN_0050d740(s_servcanc_0067698c,2);
  FUN_005bd2a0(iVar8,0);
  iVar4 = *(int *)(iVar8 + 0x30);
  *(int *)(iVar8 + 0x34) = *(int *)(iVar8 + 0x34) + (0x15d - *(int *)(iVar8 + 0x2c));
  *(undefined4 *)(iVar8 + 0x2c) = 0x15d;
  *(undefined4 *)(iVar8 + 0x30) = 800;
  *(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x38) + (800 - iVar4);
  iVar4 = FUN_0050d740(s_servpay_00676984,0x117);
  FUN_005bd2a0(iVar4,0);
  *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + (0xd1 - *(int *)(iVar4 + 0x2c));
  *(undefined4 *)(iVar4 + 0x2c) = 0xd1;
  *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + (800 - *(int *)(iVar4 + 0x30));
  *(undefined4 *)(iVar4 + 0x30) = 800;
  FUN_005bd2a0(puVar6,0);
  FUN_005bd330();
  iVar8 = DAT_006cdc78;
  iVar4 = puVar2[0xb];
  uVar1 = *(ushort *)param_1[3];
  puVar2[0xb] = uVar1 - 0x280;
  puVar2[0xd] = puVar2[0xd] + ((uVar1 - 0x280) - iVar4);
  puVar2[0xe] = puVar2[0xe] + (iVar8 - puVar2[0xc]);
  puVar2[0xc] = iVar8;
  FUN_005bd2a0(puVar2,0);
  param_1[0x5e] = 0;
  ExceptionList = local_c;
  return param_1;
}

