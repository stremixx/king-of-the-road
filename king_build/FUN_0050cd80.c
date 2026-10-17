
int * FUN_0050cd80(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
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
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064570b;
  local_c = ExceptionList;
  local_d8 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_cc = 0x3f000000;
  local_d0 = 0;
  local_d4 = 0;
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
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00631d33(0x120);
  local_4 = 0;
  local_10 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005beed0(&DAT_0068c120,4,param_2);
    *piVar1 = (int)&PTR_FUN_0064cca8;
  }
  local_4 = 0xffffffff;
  if (param_3 != 0) {
    piVar1[0x47] = piVar1[0x47] | 2;
  }
  iVar2 = FUN_005686e0();
  puVar3 = &DAT_0067525c;
  if (iVar2 != 2) {
    puVar3 = &DAT_00675254;
  }
  FUN_0061c369(local_30,s__s__s_a_txr_00675248,puVar3,param_1);
  FUN_005bcc50(&DAT_006cd318);
  local_c8 = FUN_005eea00(local_30);
  FUN_0061c369(local_30,s__s__s_p_txr_0067523c,puVar3,param_1);
  FUN_005bcc50(&DAT_006cd368);
  local_a4 = FUN_005eea00(local_30);
  FUN_0061c369(local_30,s__s__s_ap_txr_0067522c,puVar3,param_1);
  FUN_005bcc50(&DAT_006cd8e8);
  local_5c = FUN_005eea00(local_30);
  FUN_0061c369(local_30,s__s__s_pp_txr_0067521c,puVar3,param_1);
  FUN_005bcc50(&DAT_006cda98);
  local_38 = FUN_005eea00(local_30);
  FUN_005bcc50(&local_c0);
  FUN_005bcc50(&local_e4);
  FUN_005bcc50(&local_54);
  FUN_005bcc50(&local_78);
  FUN_0061c369(local_30,s__s__s_ok_txr_00675264,puVar3,param_1);
  FUN_005bcc50(&DAT_006cda98);
  local_80 = FUN_005eea00(local_30);
  FUN_005bcc50(&local_9c);
  (**(code **)(*piVar1 + 0x14))();
  ExceptionList = local_c;
  return piVar1;
}

