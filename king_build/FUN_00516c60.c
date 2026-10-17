
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00516c60(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  LPCSTR lpFileName;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_30 [16];
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645a5e;
  local_c = ExceptionList;
  uVar14 = 0;
  uVar12 = 0;
  ExceptionList = &local_c;
  uVar13 = DAT_006cdc84;
  puVar3 = (undefined4 *)FUN_00510960(local_30,param_2,0,DAT_006cdc84,0);
  FUN_005d7fb0(uVar4,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar12,uVar13,uVar14);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064cff8;
  param_1[0x10] = &PTR_LAB_0064cfb8;
  uVar4 = FUN_0050c190();
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar4;
  param_1[0x5c] = 0;
  lpFileName = DAT_006957c8;
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
  pcVar6 = s_m_15_BackEscCtrl_txr_00675e64;
  if (iVar5 != 2) {
    pcVar6 = s_m_16_BackEscCtrl_txr_00675e4c;
  }
  _DAT_006cd30c = FUN_005eea00(pcVar6);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  puVar7 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar7[0x48] = 0;
    puVar7[0x49] = 0;
    *puVar7 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar5 = FUN_0050d0b0(s_forcel_00675e3c,s_forcer_00675e44,param_1 + 0x62,0,0x8c);
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x1c) = 0xb1;
  iVar5 = FUN_0050d0b0(s_centerl_00675e2c,s_centerr_00675e34,(int)param_1 + 0x186,0,0x8c);
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x1c) = 0xb0;
  iVar5 = FUN_0050d0b0(s_sensl_00675e1c,s_sensr_00675e24,param_1 + 0x61,0,0x8c);
  FUN_005bd2a0(iVar5,0);
  *(undefined4 *)(iVar5 + 0x1c) = 0xaf;
  FUN_005bd7e0((*(int *)(iVar5 + 0x30) - *(int *)(iVar5 + 0x38)) + 0x46);
  puVar7[0xd] = puVar7[0xd] + (0x16 - puVar7[0xb]);
  puVar7[0xb] = 0x16;
  puVar7[0xe] = puVar7[0xe] + (0x1ff - puVar7[0xc]);
  puVar7[0xc] = 0x1ff;
  FUN_005bd2a0(puVar7,0);
  GetPrivateProfileStringA
            (s_EFFECTS_00671998,s_autgb_00675e14,&DAT_00671994,(LPSTR)local_20,0xf,lpFileName);
  pbVar8 = &DAT_00671994;
  pbVar10 = local_20;
  do {
    bVar1 = *pbVar10;
    bVar11 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00516f05:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00516f0a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar10[1];
    bVar11 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00516f05;
    pbVar10 = pbVar10 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00516f0a:
  if (iVar5 == 0) {
    *(undefined2 *)((int)param_1 + 0x18a) = 1;
  }
  else {
    *(undefined2 *)((int)param_1 + 0x18a) = 0;
  }
  GetPrivateProfileStringA
            (s_EFFECTS_00671998,&DAT_00675e0c,&DAT_00671994,(LPSTR)local_20,0xf,lpFileName);
  pbVar8 = &DAT_00671994;
  pbVar10 = local_20;
  do {
    bVar1 = *pbVar10;
    bVar11 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00516f6c:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00516f71;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar10[1];
    bVar11 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00516f6c;
    pbVar10 = pbVar10 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00516f71:
  if (iVar5 == 0) {
    *(undefined2 *)(param_1 + 99) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 99) = 0;
  }
  iVar5 = FUN_0050d740(&DAT_00675db8,2);
  FUN_005bd2a0(iVar5,0);
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x4d - *(int *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x2c) = 0x4d;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (0x2fa - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 0x2fa;
  iVar9 = FUN_0050d740(&DAT_00675dc0,0xb8);
  FUN_005bd2a0(iVar9,0);
  iVar5 = *(int *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar9 + 0x2c) = 0x15;
  iVar2 = *(int *)(iVar9 + 0x30);
  *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + (0x15 - iVar5);
  *(undefined4 *)(iVar9 + 0x30) = 0x2fa;
  *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (0x2fa - iVar2);
  uVar4 = FUN_0050ca50(s_agear_00675e04,0xb2,(int)*(short *)((int)param_1 + 0x18a));
  param_1[0x60] = uVar4;
  FUN_005bd2a0(uVar4,0);
  iVar5 = param_1[0x60];
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + (0x8d - *(int *)(iVar5 + 0x2c));
  *(int *)(iVar5 + 0x2c) = 0x8d;
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + (700 - *(int *)(iVar5 + 0x30));
  *(undefined4 *)(iVar5 + 0x30) = 700;
  FUN_005bd330();
  iVar9 = DAT_006cdc70;
  iVar2 = DAT_006cdc6c;
  puVar3[0xd] = puVar3[0xd] + (DAT_006cdc6c - puVar3[0xb]);
  iVar5 = puVar3[0xc];
  puVar3[0xb] = iVar2;
  puVar3[0xc] = iVar9;
  puVar3[0xe] = puVar3[0xe] + (iVar9 - iVar5);
  FUN_005bd2a0(puVar3,0);
  FUN_00603230(s_EFFECTS_00671998,&DAT_00675dfc,0x32,&param_2,lpFileName);
  *(undefined2 *)(param_1 + 0x61) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,s_power_00675df4,0x32,&param_2,lpFileName);
  *(undefined2 *)((int)param_1 + 0x186) = (undefined2)param_2;
  FUN_00603230(s_EFFECTS_00671998,s_force_00675dec,0x32,&param_2,lpFileName);
  *(undefined2 *)(param_1 + 0x62) = (undefined2)param_2;
  ExceptionList = local_c;
  return param_1;
}

