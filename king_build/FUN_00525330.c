
undefined4 * __thiscall FUN_00525330(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064610e;
  pvStack_c = ExceptionList;
  uVar11 = 0;
  uVar10 = 0;
  ExceptionList = &pvStack_c;
  uVar3 = DAT_006cdc84;
  puVar2 = (undefined4 *)FUN_00510960(local_1c,param_2,0,DAT_006cdc84,0);
  FUN_005d7fb0(param_2,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar10,uVar3,uVar11);
  local_4 = 0;
  puVar2 = param_1 + 0x5f;
  iVar7 = 5;
  do {
    *puVar2 = DAT_0068a8f0;
    puVar2 = puVar2 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *param_1 = &PTR_FUN_0064d9d8;
  param_1[0x10] = &PTR_LAB_0064d998;
  uVar3 = FUN_0050c190();
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar3;
  puVar2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    *puVar2 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  puVar4 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  puVar8 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_005bcc90(&DAT_006755d4,8);
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    *puVar4 = &PTR_FUN_0064cc40;
    puVar8 = puVar4;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar7 = FUN_005686e0();
  pcVar5 = s_m_15_BackF5cbradio_msk_00677000;
  if (iVar7 != 2) {
    pcVar5 = s_m_16_BackF5cbradio_msk_00676fe8;
  }
  DAT_006cd310 = FUN_005eea00(pcVar5);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  iVar7 = FUN_0050d740(s_F5search_00676fdc,0xbc);
  FUN_005bd2a0(iVar7,0);
  *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + (0x1e - *(int *)(iVar7 + 0x2c));
  *(undefined4 *)(iVar7 + 0x2c) = 0x1e;
  *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + (0x87 - *(int *)(iVar7 + 0x30));
  *(undefined4 *)(iVar7 + 0x30) = 0x87;
  iVar7 = FUN_0050d740(s_F5talk_00676fd4,0xbd);
  FUN_005bd2a0(iVar7,0);
  *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + (0x89 - *(int *)(iVar7 + 0x2c));
  *(undefined4 *)(iVar7 + 0x2c) = 0x89;
  *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + (0x92 - *(int *)(iVar7 + 0x30));
  *(undefined4 *)(iVar7 + 0x30) = 0x92;
  FUN_005bd2a0(puVar8,0);
  FUN_005bd330();
  uVar1 = *(ushort *)(DAT_006cd310 + 4);
  iVar7 = (**(code **)(*param_2 + 0x14))();
  iVar9 = (int)(iVar7 - (uint)uVar1) / 2;
  uVar1 = *(ushort *)(DAT_006cd310 + 6);
  iVar6 = (**(code **)(*param_2 + 0x18))();
  iVar7 = puVar2[0xc];
  iVar6 = (int)(iVar6 - (uint)uVar1) / 2;
  puVar2[0xd] = puVar2[0xd] + (iVar9 - puVar2[0xb]);
  puVar2[0xb] = iVar9;
  puVar2[0xc] = iVar6;
  puVar2[0xe] = puVar2[0xe] + (iVar6 - iVar7);
  FUN_005bd2a0(puVar2,0);
  ExceptionList = pvStack_c;
  return param_1;
}

