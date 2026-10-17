
void FUN_0050d450(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_68 [32];
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
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_4 = 0;
  local_8 = 0;
  local_c = 0x3f000000;
  local_10 = 0;
  local_14 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0x3f000000;
  local_34 = 0;
  local_38 = 0;
  iVar1 = FUN_005686e0();
  pcVar2 = s_m_15__006752a8;
  if (iVar1 != 2) {
    pcVar2 = s_m_16__006752a0;
  }
  FUN_0061c369(local_68,s__s_s_p_txr_006752d0,pcVar2,param_2);
  FUN_005bcc50(&DAT_006cd318);
  local_8 = FUN_005eea00(local_68);
  FUN_0061c369(local_68,s__s_s_ap_txr_006752c4,pcVar2,param_2);
  FUN_005bcc50(&DAT_006cd368);
  local_2c = FUN_005eea00(local_68);
  FUN_005be5e0(&local_24,&local_48,&local_24,&local_48,0);
  FUN_0061c369(local_68,s__s_s_f_txr_006752b8,pcVar2,param_2);
  FUN_005bcc50(&DAT_006cd368);
  local_2c = FUN_005eea00(local_68);
  FUN_005be640(&local_48,0);
  FUN_0061c369(local_68,s__s_s_p_txr_006752d0,pcVar2,&DAT_006752b0);
  FUN_005bcc50(&DAT_006cd318);
  local_8 = FUN_005eea00(local_68);
  FUN_0061c369(local_68,s__s_s_ap_txr_006752c4,pcVar2,&DAT_006752b0);
  FUN_005bcc50(&DAT_006cd368);
  local_2c = FUN_005eea00(local_68);
  FUN_005be5e0(&local_24,&local_48,&local_24,&local_48,1);
  FUN_0061c369(local_68,s__s_s_f_txr_006752b8,pcVar2,&DAT_006752b0);
  FUN_005bcc50(&DAT_006cd368);
  local_2c = FUN_005eea00(local_68);
  FUN_005be640(&local_48,1);
  FUN_0061c369(local_68,s__s_s_p_txr_006752d0,pcVar2,param_3);
  FUN_005bcc50(&DAT_006cd318);
  local_8 = FUN_005eea00(local_68);
  FUN_0061c369(local_68,s__s_s_ap_txr_006752c4,pcVar2,param_3);
  FUN_005bcc50(&DAT_006cd368);
  local_2c = FUN_005eea00(local_68);
  FUN_005be5e0(&local_24,&local_48,&local_24,&local_48,2);
  FUN_0061c369(local_68,s__s_s_f_txr_006752b8,pcVar2,param_3);
  FUN_005bcc50(&DAT_006cd368);
  local_2c = FUN_005eea00(local_68);
  FUN_005be640(&local_48,2);
  (**(code **)(*param_1 + 0x14))();
  return;
}

