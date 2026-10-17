
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0051db20(undefined4 *param_1,undefined4 param_2)

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
  puStack_8 = &LAB_00645e2e;
  local_c = ExceptionList;
  uVar7 = 0;
  ExceptionList = &local_c;
  uVar2 = DAT_006cdc84;
  uVar8 = DAT_006cdc8c;
  puVar1 = (undefined4 *)FUN_00510960(local_1c,param_2,0,DAT_006cdc84,DAT_006cdc8c);
  FUN_005d7fb0(param_2,*puVar1,puVar1[1],puVar1[2],puVar1[3],uVar7,uVar2,uVar8);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d588;
  param_1[0x10] = &PTR_LAB_0064d548;
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
  local_4._0_1_ = 0;
  iVar3 = FUN_005686e0();
  pcVar4 = s_m_15_BackEscLoad_txr_0067675c;
  if (iVar3 != 2) {
    pcVar4 = s_m_16_BackEscLoad_txr_00676744;
  }
  _DAT_006cd30c = FUN_005eea00(pcVar4);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  iVar5 = FUN_0050d740(s_nsave_00676704,0xac);
  FUN_005bd2a0(iVar5,0);
  iVar3 = *(int *)(iVar5 + 0x30);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x18 - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x18;
  *(undefined4 *)(iVar5 + 0x30) = 0x301;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x301 - iVar3);
  iVar3 = FUN_0050d740(s_delgame_006766fc,0x11a);
  FUN_005bd2a0(iVar3,0);
  *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (0x18 - *(int *)(iVar3 + 0x2c));
  *(undefined4 *)(iVar3 + 0x2c) = 0x18;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (0x2d4 - *(int *)(iVar3 + 0x30));
  *(undefined4 *)(iVar3 + 0x30) = 0x2d4;
  iVar5 = FUN_0050d740(&DAT_0067673c,0x6e);
  param_1[0x7d] = iVar5;
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x28) = 1;
  iVar3 = *(int *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar5 + 0x2c) = 0x18;
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x18 - iVar3);
  iVar3 = *(int *)(iVar5 + 0x30);
  *(undefined4 *)(iVar5 + 0x30) = 0x2a7;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2a7 - iVar3);
  iVar3 = FUN_00631d33(0x160);
  local_4._0_1_ = 2;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005bfc10(s__006766e8,4,0xbe);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x7e] = uVar2;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  *(undefined4 *)(*(int *)(param_1[0x7e] + 0x154) + 0x1c) = 0x74;
  *(undefined4 *)(param_1[0x7e] + 0x1c) = 0x74;
  FUN_005bfe90(10);
  FUN_0050d450(*(undefined4 *)(param_1[0x7e] + 0x154),&PTR_DAT_006766dc,s_mdown_006766e0);
  iVar3 = *(int *)(param_1[0x7e] + 0x154);
  *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (-0x1c - *(int *)(iVar3 + 0x2c));
  *(undefined4 *)(iVar3 + 0x2c) = 0xffffffe4;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (0xb - *(int *)(iVar3 + 0x30));
  *(undefined4 *)(iVar3 + 0x30) = 0xb;
  FUN_005be380(0xc3);
  iVar3 = param_1[0x7e];
  *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (0x2c - *(int *)(iVar3 + 0x2c));
  *(int *)(iVar3 + 0x2c) = 0x2c;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (0x1c9 - *(int *)(iVar3 + 0x30));
  *(undefined4 *)(iVar3 + 0x30) = 0x1c9;
  FUN_005bd2a0(param_1[0x7e],0);
  FUN_005bd330();
  iVar5 = DAT_006cdc70;
  iVar6 = DAT_006cdc6c - puVar1[0xb];
  iVar3 = puVar1[0xc];
  puVar1[0xb] = DAT_006cdc6c;
  puVar1[0xd] = puVar1[0xd] + iVar6;
  puVar1[0xc] = iVar5;
  puVar1[0xe] = puVar1[0xe] + (iVar5 - iVar3);
  FUN_005bd2a0(puVar1,0);
  param_1[0x5c] = 0;
  ExceptionList = local_c;
  return param_1;
}

