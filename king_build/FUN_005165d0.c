
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005165d0(undefined4 *param_1,undefined4 param_2)

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
  undefined4 uVar11;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645a29;
  local_c = ExceptionList;
  uVar11 = 0;
  uVar9 = 0;
  ExceptionList = &local_c;
  uVar10 = DAT_006cdc84;
  puVar3 = (undefined4 *)FUN_00510960(local_1c,param_2,0,DAT_006cdc84,0);
  FUN_005d7fb0(uVar4,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar9,uVar10,uVar11);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064cf70;
  param_1[0x10] = &PTR_LAB_0064cf30;
  uVar4 = FUN_0050c190();
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar4;
  param_1[0x5c] = 0;
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
  pcVar6 = s_m_15_BackEscSnd_txr_00675dd8;
  if (iVar5 != 2) {
    pcVar6 = s_m_16_BackEscSnd_txr_00675dc4;
  }
  _DAT_006cd30c = FUN_005eea00(pcVar6);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
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
  local_4._0_1_ = 0;
  iVar5 = FUN_0050d740(&DAT_00675dc0,0xb8);
  FUN_005bd2a0(iVar5,0);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x15 - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x15;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2fa - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x2fa;
  iVar5 = FUN_0050d740(&DAT_00675db8,2);
  FUN_005bd2a0(iVar5,0);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x4d - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x4d;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2fa - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x2fa;
  FUN_005bd2a0(puVar8,0);
  puVar8 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar8[0x48] = 0;
    puVar8[0x49] = 0;
    *puVar8 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar5 = FUN_0050d0b0(s_skidl_00675da8,s_skidr_00675db0,(int)param_1 + 0x186,0,0x8c);
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x1c) = 0xb7;
  iVar5 = FUN_0050d0b0(&DAT_00675d98,&DAT_00675da0,param_1 + 0x61,0,0x8c);
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x1c) = 0xb6;
  iVar5 = FUN_0050d0b0(&DAT_00675d88,&DAT_00675d90,param_1 + 0x60,&LAB_005164e0,0x8c);
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x1c) = 0xb5;
  iVar5 = FUN_0050d0b0(&DAT_00675d78,&DAT_00675d80,(int)param_1 + 0x17e,&LAB_00516480,0x8c);
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x1c) = 0xb4;
  FUN_005bd7e0((*(int *)(iVar5 + 0x30) - *(int *)(iVar5 + 0x38)) + 0x46);
  iVar5 = puVar8[0xc];
  puVar8[0xd] = puVar8[0xd] + (0x16 - puVar8[0xb]);
  puVar8[0xb] = 0x16;
  puVar8[0xc] = 0x1e9;
  puVar8[0xe] = puVar8[0xe] + (0x1e9 - iVar5);
  FUN_005bd2a0(puVar8,0);
  FUN_005bd330();
  iVar2 = DAT_006cdc70;
  iVar1 = DAT_006cdc6c;
  iVar5 = puVar3[0xb];
  puVar3[0xb] = DAT_006cdc6c;
  puVar3[0xd] = puVar3[0xd] + (iVar1 - iVar5);
  puVar3[0xe] = puVar3[0xe] + (iVar2 - puVar3[0xc]);
  puVar3[0xc] = iVar2;
  FUN_005bd2a0(puVar3,0);
  uVar4 = DAT_006957c8;
  FUN_00603230(s_EFFECTS_00671998,s_sfxvol_00675d70,0x32,&param_2,DAT_006957c8);
  *(undefined2 *)((int)param_1 + 0x17e) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,s_midivol_00675d68,0x32,&param_2,uVar4);
  *(undefined2 *)(param_1 + 0x60) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,s_engvol_00675d60,0x32,&param_2,uVar4);
  *(undefined2 *)(param_1 + 0x61) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,s_skivol_00675d58,0x32,&param_2,uVar4);
  *(undefined2 *)((int)param_1 + 0x186) = (undefined2)param_2;
  *(undefined2 *)((int)param_1 + 0x182) = 0x32;
  ExceptionList = local_c;
  return param_1;
}

