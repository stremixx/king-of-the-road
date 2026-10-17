
int * FUN_0050eea0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [32];
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064580b;
  pvStack_c = ExceptionList;
  piVar3 = (int *)0x0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0x3f000000;
  local_40 = 0;
  local_44 = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0x3f000000;
  local_88 = 0;
  local_8c = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = 0x3f000000;
  local_ac = 0;
  local_b0 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0x3f000000;
  local_64 = 0;
  local_68 = 0;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005686e0();
  if (iVar2 == 2) {
    FUN_0061c369(local_30,s_m15_vtr_s_a_txr_006753f8,param_1);
    FUN_005bcc50(&DAT_006cd318);
    local_38 = FUN_005eea00(local_30);
    FUN_0061c369(local_30,s_m15_vtr_s_p_txr_006753e8,param_1);
    FUN_005bcc50(&DAT_006cd368);
    local_80 = FUN_005eea00(local_30);
    FUN_0061c369(local_30,s_m15_vtr_s_ap_txr_006753d4,param_1);
    FUN_005bcc50(&DAT_006cd8e8);
    local_a4 = FUN_005eea00(local_30);
    FUN_005bcc50(&DAT_006cda98);
  }
  else {
    FUN_0061c369(local_30,s_m16_vtr_s_a_txr_006753c4,param_1);
    FUN_005bcc50(&DAT_006cd318);
    local_38 = FUN_005eea00(local_30);
    FUN_0061c369(local_30,s_m16_vtr_s_p_txr_006753b4,param_1);
    FUN_005bcc50(&DAT_006cd368);
    local_80 = FUN_005eea00(local_30);
    FUN_0061c369(local_30,s_m16_vtr_s_ap_txr_006753a0,param_1);
    FUN_005bcc50(&DAT_006cd8e8);
    local_a4 = FUN_005eea00(local_30);
    FUN_005bcc50(&DAT_006cda98);
  }
  local_5c = local_a4;
  local_10 = FUN_00631d33(0x120);
  local_4 = 0;
  if (local_10 != 0) {
    piVar3 = (int *)FUN_005beed0(&DAT_0068c120,4,param_2);
  }
  local_4 = 0xffffffff;
  FUN_005bcc50(&local_9c);
  FUN_005bcc50(&local_54);
  FUN_005bcc50(&local_78);
  FUN_005bcc50(&local_c0);
  (**(code **)(*piVar3 + 0x14))();
  iVar2 = piVar3[0xb];
  iVar1 = piVar3[0xc];
  piVar3[0xb] = param_3;
  piVar3[0xd] = piVar3[0xd] + (param_3 - iVar2);
  piVar3[0xc] = param_4;
  piVar3[0xe] = piVar3[0xe] + (param_4 - iVar1);
  ExceptionList = pvStack_c;
  return piVar3;
}

