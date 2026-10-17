
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0051d290(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645dd9;
  local_c = ExceptionList;
  uVar8 = 0;
  ExceptionList = &local_c;
  uVar4 = DAT_006cdc84;
  uVar9 = DAT_006cdc8c;
  puVar3 = (undefined4 *)FUN_00510960(local_40,param_2,0,DAT_006cdc84,DAT_006cdc8c);
  FUN_005d7fb0(param_2,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar8,uVar4,uVar9);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d500;
  param_1[0x10] = &PTR_LAB_0064d4c0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0x3f000000;
  local_1c = 0;
  local_20 = 0;
  uVar4 = FUN_0050c190();
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar4;
  local_2c = 5;
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
  pcVar6 = s_m_15_BackEscSave_txr_00676724;
  if (iVar5 != 2) {
    pcVar6 = s_m_16_BackEscSave_txr_0067670c;
  }
  _DAT_006cd30c = FUN_005eea00(pcVar6);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  iVar5 = FUN_0050d740(s_nsave_00676704,0xac);
  FUN_005bd2a0(iVar5,0);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x18 - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x18;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x301 - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x301;
  iVar5 = FUN_0050d740(s_delgame_006766fc,0x11a);
  FUN_005bd2a0(iVar5,0);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x18 - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x18;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2d4 - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x2d4;
  iVar5 = FUN_0050d740(&DAT_006766f4,0xad);
  FUN_005bd2a0(iVar5,0);
  if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
    *(undefined4 *)(iVar5 + 0x28) = 1;
  }
  iVar1 = *(int *)(iVar5 + 0x30);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x18 - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x18;
  *(undefined4 *)(iVar5 + 0x30) = 0x2a7;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2a7 - iVar1);
  iVar5 = FUN_00631d33(0x160);
  local_4._0_1_ = 2;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005bfc10(s__006766e8,4,0xa0);
  }
  local_4._0_1_ = 0;
  param_1[0x7d] = uVar4;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  *(undefined4 *)(*(int *)(param_1[0x7d] + 0x154) + 0x1c) = 0x75;
  *(undefined4 *)(param_1[0x7d] + 0x1c) = 0x75;
  FUN_005bfe90(10);
  FUN_0050d450(*(undefined4 *)(param_1[0x7d] + 0x154),&PTR_DAT_006766dc,s_mdown_006766e0);
  iVar5 = param_1[0x7d];
  iVar1 = *(int *)(iVar5 + 0x30);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x2c - *(int *)(iVar5 + 0x2c));
  *(int *)(iVar5 + 0x2c) = 0x2c;
  *(undefined4 *)(iVar5 + 0x30) = 0x1f1;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x1f1 - iVar1);
  iVar5 = *(int *)(param_1[0x7d] + 0x154);
  iVar1 = *(int *)(iVar5 + 0x2c);
  *(int *)(iVar5 + 0x2c) = -0x1c;
  iVar2 = *(int *)(iVar5 + 0x30);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (-0x1c - iVar1);
  *(undefined4 *)(iVar5 + 0x30) = 0xb;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0xb - iVar2);
  FUN_005be380(0x9b);
  FUN_005bd2a0(param_1[0x7d],0);
  puVar7 = (undefined4 *)FUN_00631d33(300);
  local_4._0_1_ = 3;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_0068c120,0);
    *puVar7 = &PTR_FUN_0064d150;
    puVar7[0x48] = param_1 + 0x5d;
    puVar7[0x49] = 0x20;
    puVar7[0x4a] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x7e] = puVar7;
  FUN_005bcc50(&local_30);
  FUN_005bcc50(&local_30);
  FUN_005bcc50(&local_30);
  FUN_005bcc50(&local_30);
  *(undefined4 *)(param_1[0x7e] + 0x1c) = 0xae;
  (**(code **)(*(int *)param_1[0x7e] + 0x14))();
  iVar5 = param_1[0x7e];
  iVar1 = *(int *)(iVar5 + 0x30);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x2c - *(int *)(iVar5 + 0x2c));
  *(int *)(iVar5 + 0x2c) = 0x2c;
  *(undefined4 *)(iVar5 + 0x30) = 0x1d8;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x1d8 - iVar1);
  *(int *)(param_1[0x7e] + 0x34) = *(int *)(param_1[0x7e] + 0x2c) + 100;
  *(uint *)(param_1[0x7e] + 0x20) = *(uint *)(param_1[0x7e] + 0x20) | 0x40000000;
  FUN_005bd2a0(param_1[0x7e],0);
  FUN_005bd330();
  iVar2 = DAT_006cdc70;
  iVar1 = DAT_006cdc6c;
  puVar3[0xd] = puVar3[0xd] + (DAT_006cdc6c - puVar3[0xb]);
  iVar5 = puVar3[0xc];
  puVar3[0xb] = iVar1;
  puVar3[0xc] = iVar2;
  puVar3[0xe] = puVar3[0xe] + (iVar2 - iVar5);
  FUN_005bd2a0(puVar3,0);
  param_1[0x7f] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  ExceptionList = local_c;
  return param_1;
}

