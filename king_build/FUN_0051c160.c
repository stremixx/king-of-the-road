
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0051c160(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645da0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d46c;
  param_1[0x10] = &PTR_LAB_0064d42c;
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
  _DAT_006cd30c = FUN_005eea00(s_s_backSing_txr_006765a8);
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
  uVar6 = 0;
  local_4._0_1_ = 0;
  uVar3 = FUN_0050e7b0(s_s_canc_006765a0,2,0x143,0x1e5,0);
  FUN_005bd2a0(uVar3,uVar6);
  FUN_00603230(s_EFFECTS_00671998,s_trafs_00675c5c,0x32,&param_2,DAT_006957c8);
  *(undefined2 *)(param_1 + 100) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,&DAT_00676598,0x32,&param_2,DAT_006957c8);
  *(undefined2 *)((int)param_1 + 0x192) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,s_weats_00676590,0x3c,&param_2,DAT_006957c8);
  *(undefined2 *)(param_1 + 0x65) = (undefined2)param_2;
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
  local_4._0_1_ = 0;
  _DAT_006cd30c = FUN_005eea00(s_s_backSingLoad_txr_0067657c);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  iVar4 = FUN_00631d33(0x160);
  local_4._0_1_ = 4;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005bfc10(s__0067656c,8,0x32);
  }
  local_4._0_1_ = 0;
  param_1[99] = uVar3;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  *(undefined4 *)(*(int *)(param_1[99] + 0x154) + 0x1c) = 0x74;
  *(undefined4 *)(param_1[99] + 0x1c) = 0x74;
  iVar4 = param_1[99];
  iVar1 = *(int *)(iVar4 + 0x30);
  *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + (0x13b - *(int *)(iVar4 + 0x2c));
  *(int *)(iVar4 + 0x2c) = 0x13b;
  *(undefined4 *)(iVar4 + 0x30) = 0x197;
  *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + (0x197 - iVar1);
  *(undefined4 *)(param_1[99] + 0x15c) = 0x29;
  FUN_005bfe90(10);
  FUN_0050eb50(*(undefined4 *)(param_1[99] + 0x154),0x3b);
  FUN_005bd2a0(param_1[99],0);
  uVar3 = FUN_0050e7b0(s_s_load_00676564,0x6e,0x143,0x163);
  param_1[0x61] = uVar3;
  FUN_005bd2a0(uVar3,0);
  puVar2[0xd] = puVar2[0xd] + (300 - puVar2[0xb]);
  puVar2[0xb] = 300;
  puVar2[0xe] = puVar2[0xe] + (0x161 - puVar2[0xc]);
  puVar2[0xc] = 0x161;
  FUN_005bd420();
  FUN_005bd2a0(puVar2,0);
  puVar2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 5;
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
  param_1[0x62] = puVar2;
  _DAT_006cd30c = FUN_005eea00(s_s_backSingNew_txr_00676550);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd368);
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 6;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar5[0x48] = 0;
    puVar5[0x49] = 0;
    *puVar5 = &PTR_FUN_0064cc40;
  }
  uVar6 = 0;
  local_4._0_1_ = 0;
  uVar3 = FUN_0050e080(s_s_metruck_00676544,0x112,0x1bc,0x12d,0,0);
  FUN_005bd2a0(uVar3,uVar6);
  uVar6 = 0;
  uVar3 = FUN_0050e080(s_s_mecar_0067653c,0x111,0x15e,0x12d,1,0);
  FUN_005bd2a0(uVar3,uVar6);
  FUN_005bd2a0(puVar5,0);
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 7;
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
  iVar4 = FUN_0050e800(s_aleft_00675bb0,s_aright_00675bb8,param_1 + 0x65,0x15e,0x10f,0,0xbb);
  FUN_005bd2a0(iVar4,0);
  *(undefined4 *)(iVar4 + 0x1c) = 0x73;
  iVar4 = FUN_0050e800(s_aleft_00675bb0,s_aright_00675bb8,(int)param_1 + 0x192,0x15e,0xf1,0,0xbb);
  FUN_005bd2a0(iVar4,0);
  *(undefined4 *)(iVar4 + 0x1c) = 0x72;
  iVar4 = FUN_0050e800(s_aleft_00675bb0,s_aright_00675bb8,param_1 + 100,0x15e,0xd3,0,0xbb);
  FUN_005bd2a0(iVar4,0);
  *(undefined4 *)(iVar4 + 0x1c) = 0x71;
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
  uVar6 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar3 = FUN_0050e080(s_s_simul_00676534,0x70,0x1bc,0xae,1,0);
  FUN_005bd2a0(uVar3,uVar6);
  uVar6 = 0;
  uVar3 = FUN_0050e080(s_s_arcad_0067652c,0x6f,0x15e,0xae,0,0);
  FUN_005bd2a0(uVar3,uVar6);
  uVar6 = 0;
  uVar3 = FUN_0050e7b0(s_s_new_00676524,0x6d,0x143,0x78,0);
  FUN_005bd2a0(uVar3,uVar6);
  FUN_005bd2a0(puVar5,0);
  puVar2[0xd] = puVar2[0xd] + (300 - puVar2[0xb]);
  puVar2[0xb] = 300;
  puVar2[0xe] = puVar2[0xe] + (0x5c - puVar2[0xc]);
  puVar2[0xc] = 0x5c;
  FUN_005bd420();
  FUN_005bd2a0(puVar2,0);
  FUN_005bd330();
  FUN_005bd2a0(local_14,0);
  param_1[0x5c] = 0;
  ExceptionList = local_c;
  return param_1;
}

