
undefined4 * __thiscall FUN_0051fa20(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645f6e;
  local_c = ExceptionList;
  uVar10 = 0;
  uVar9 = 0;
  ExceptionList = &local_c;
  uVar4 = DAT_006cdc84;
  puVar3 = (undefined4 *)FUN_00510960(local_1c,param_2,0,DAT_006cdc84,0);
  FUN_005d7fb0(param_2,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar9,uVar4,uVar10);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d720;
  param_1[0x10] = &PTR_LAB_0064d6e0;
  uVar4 = FUN_0050c190();
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar4;
  puVar3 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,4);
    puVar3[0x48] = 0;
    puVar3[0x49] = 0;
    *puVar3 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  iVar5 = FUN_005686e0();
  pcVar6 = s_m_15_BackGas_txr_0067693c;
  if (iVar5 != 2) {
    pcVar6 = s_m_16_BackGas_txr_00676928;
  }
  DAT_006cd35c = FUN_005eea00(pcVar6);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  puVar7 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar7[0x48] = 0;
    puVar7[0x49] = 0;
    *puVar7 = &PTR_FUN_0064cc40;
    puVar8 = puVar7;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar5 = FUN_0050d740(s_gascanc_00676920,2);
  FUN_005bd2a0(iVar5,0);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x7b - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x7b;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2f3 - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x2f3;
  iVar5 = FUN_0050d740(s_gaspay_00676918,0x113);
  FUN_005bd2a0(iVar5,0);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x34 - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x34;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2f3 - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x2f3;
  iVar5 = FUN_0050ca50(s_gasfull_00676910,0x114,0);
  param_1[0x65] = iVar5;
  FUN_005bd2a0(iVar5,0);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0xaf - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0xaf;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x28f - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x28f;
  iVar5 = FUN_0050d0b0(0,0,param_1 + 100,0,0x9b);
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x1c) = 0x116;
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x19 - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x19;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x28f - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x28f;
  FUN_005bd2a0(puVar8,0);
  FUN_005bd330();
  iVar2 = DAT_006cdc78;
  iVar1 = DAT_006cdc74;
  iVar5 = puVar3[0xb];
  puVar3[0xb] = DAT_006cdc74;
  puVar3[0xd] = puVar3[0xd] + (iVar1 - iVar5);
  puVar3[0xe] = puVar3[0xe] + (iVar2 - puVar3[0xc]);
  puVar3[0xc] = iVar2;
  FUN_005bd2a0(puVar3,0);
  ExceptionList = local_c;
  return param_1;
}

