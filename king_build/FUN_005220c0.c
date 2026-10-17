
undefined4 * __thiscall FUN_005220c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645fd3;
  local_c = ExceptionList;
  uVar8 = 0;
  uVar7 = 0;
  ExceptionList = &local_c;
  uVar2 = DAT_006cdc84;
  puVar1 = (undefined4 *)FUN_00510960(local_1c,param_2,0,DAT_006cdc84,0);
  FUN_005d7fb0(param_2,*puVar1,puVar1[1],puVar1[2],puVar1[3],uVar7,uVar2,uVar8);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d838;
  param_1[0x10] = &PTR_LAB_0064d7f8;
  uVar2 = FUN_0050c190();
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar2;
  puVar1 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    *puVar1 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar3 = FUN_005686e0();
  pcVar4 = s_m_15_BackConnect_txr_00676a00;
  if (iVar3 != 2) {
    pcVar4 = s_m_16_BackConnect_txr_006769e8;
  }
  DAT_006cd35c = FUN_005eea00(pcVar4);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  iVar5 = FUN_0050d740(s_mmenu_006769e0,0xa3);
  FUN_005bd2a0(iVar5,0);
  iVar3 = *(int *)(iVar5 + 0x30);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x38 - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x38;
  *(undefined4 *)(iVar5 + 0x30) = 0x2d9;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2d9 - iVar3);
  iVar6 = FUN_0050d740(s_start_006769d8,0xa2);
  FUN_005bd2a0(iVar6,0);
  iVar3 = *(int *)(iVar6 + 0x2c);
  *(undefined4 *)(iVar6 + 0x2c) = 0x38;
  iVar5 = *(int *)(iVar6 + 0x30);
  *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + (0x38 - iVar3);
  *(undefined4 *)(iVar6 + 0x30) = 0x2b1;
  *(int *)(iVar6 + 0x38) = *(int *)(iVar6 + 0x38) + (0x2b1 - iVar5);
  FUN_005bd330();
  iVar6 = DAT_006cdc78;
  iVar5 = DAT_006cdc74;
  iVar3 = puVar1[0xb];
  puVar1[0xb] = DAT_006cdc74;
  puVar1[0xd] = puVar1[0xd] + (iVar5 - iVar3);
  puVar1[0xe] = puVar1[0xe] + (iVar6 - puVar1[0xc]);
  puVar1[0xc] = iVar6;
  FUN_005bd2a0(puVar1,0);
  ExceptionList = local_c;
  return param_1;
}

