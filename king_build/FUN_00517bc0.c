
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00517bc0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645b29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d108;
  param_1[0x10] = &PTR_LAB_0064d0c8;
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
  _DAT_006cd30c = FUN_005eea00(s_e_backExit_txr_006761f0);
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
  local_4 = (uint)local_4._1_3_ << 8;
  _DAT_006cd30c = FUN_005eea00(s_e_backExitDoit_txr_006761dc);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  uVar6 = 0;
  uVar4 = FUN_0050e7b0(&DAT_006761d4,0x99,0x122,0x130,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_0050e7b0(s_e_canc_006761cc,0x9a,0x17d,0x130,0);
  FUN_005bd2a0(uVar4,uVar6);
  iVar1 = puVar5[0xb];
  puVar5[0xb] = 0x9b;
  iVar2 = puVar5[0xc];
  puVar5[0xd] = puVar5[0xd] + (0x9b - iVar1);
  puVar5[0xc] = 0xe5;
  puVar5[0xe] = puVar5[0xe] + (0xe5 - iVar2);
  FUN_005bd420();
  FUN_005bd2a0(puVar5,0);
  FUN_005bd2a0(puVar3,0);
  ExceptionList = local_c;
  return param_1;
}

