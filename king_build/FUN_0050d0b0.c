
int * FUN_0050d0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [32];
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064572b;
  pvStack_c = ExceptionList;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0x3f000000;
  local_44 = 0;
  local_48 = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0x3f000000;
  local_88 = 0;
  local_8c = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0x3f000000;
  local_20 = 0;
  local_24 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005686e0();
  pcVar3 = s_m_15__006752a8;
  if (iVar1 != 2) {
    pcVar3 = s_m_16__006752a0;
  }
  local_10 = FUN_00631d33(0x158);
  local_4 = 0;
  if (local_10 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_005bddb0(&DAT_0068c120,0,8,1);
  }
  local_4 = 0xffffffff;
  FUN_005bdf70(100,param_3,param_4,0,param_5,0xc,0,0);
  FUN_0061c369(local_78,s__s_s_a_msk_00675294,pcVar3,param_1);
  FUN_005bcc50(&DAT_006cd318);
  local_38 = FUN_005eea00(local_78);
  FUN_0061c369(local_78,s__s_s_ap_msk_00675288,pcVar3,param_1);
  FUN_005bcc50(&DAT_006cd368);
  local_14 = FUN_005eea00(local_78);
  FUN_0061c369(local_78,s__s_s_p_msk_0067527c,pcVar3,param_1);
  FUN_005bcc50(&DAT_006cd368);
  local_7c = FUN_005eea00(local_78);
  FUN_005be5e0(&local_58,&local_34,&local_9c,&local_9c,0);
  FUN_0061c369(local_78,s__s_s_a_msk_00675294,pcVar3,s_runner_00675274);
  FUN_005bcc50(&DAT_006cd318);
  local_38 = FUN_005eea00(local_78);
  FUN_0061c369(local_78,s__s_s_ap_msk_00675288,pcVar3,s_runner_00675274);
  FUN_005bcc50(&DAT_006cd368);
  local_14 = FUN_005eea00(local_78);
  FUN_0061c369(local_78,s__s_s_p_msk_0067527c,pcVar3,s_runner_00675274);
  FUN_005bcc50(&DAT_006cd368);
  local_7c = FUN_005eea00(local_78);
  FUN_005be5e0(&local_58,&local_34,&local_9c,&local_9c,1);
  FUN_0061c369(local_78,s__s_s_a_msk_00675294,pcVar3,param_2);
  FUN_005bcc50(&DAT_006cd318);
  local_38 = FUN_005eea00(local_78);
  FUN_0061c369(local_78,s__s_s_ap_msk_00675288,pcVar3,param_2);
  FUN_005bcc50(&DAT_006cd368);
  local_14 = FUN_005eea00(local_78);
  FUN_0061c369(local_78,s__s_s_p_msk_0067527c,pcVar3,param_2);
  FUN_005bcc50(&DAT_006cd368);
  local_7c = FUN_005eea00(local_78);
  FUN_005be5e0(&local_58,&local_34,&local_9c,&local_9c,2);
  (**(code **)(*piVar2 + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}

