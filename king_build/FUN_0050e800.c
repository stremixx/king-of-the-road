
int * FUN_0050e800(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
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
  puStack_8 = &LAB_006457eb;
  pvStack_c = ExceptionList;
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
  local_10 = FUN_00631d33(0x158);
  local_4 = 0;
  if (local_10 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005bddb0(&DAT_0068c120,0,8,1);
  }
  local_4 = 0xffffffff;
  FUN_005bdf70(100,param_3,param_6,0,param_7,0xc,0,0);
  FUN_0061c369(local_30,s__s_a_msk_0067533c,param_1);
  FUN_005bcc50(&DAT_006cd318);
  local_34 = FUN_005eea00(local_30);
  FUN_0061c369(local_30,s__s_p_msk_00675330,param_1);
  FUN_005bcc50(&DAT_006cd368);
  local_7c = FUN_005eea00(local_30);
  FUN_0061c369(local_30,s__s_ap_msk_00675324,param_1);
  FUN_005bcc50(&DAT_006cd318);
  local_58 = FUN_005eea00(local_30);
  FUN_005be5e0(&local_54,&local_78,&local_9c,&local_9c,0);
  FUN_005bcc50(&DAT_006cd318);
  local_34 = FUN_005eea00(s_runner_a_msk_00675380);
  FUN_005bcc50(&DAT_006cd368);
  local_7c = FUN_005eea00(s_runner_p_msk_00675370);
  FUN_005bcc50(&DAT_006cd318);
  local_58 = FUN_005eea00(s_runner_ap_msk_00675360);
  FUN_005be5e0(&local_54,&local_78,&local_9c,&local_9c,1);
  FUN_0061c369(local_30,s__s_a_msk_0067533c,param_2);
  FUN_005bcc50(&DAT_006cd318);
  local_34 = FUN_005eea00(local_30);
  FUN_0061c369(local_30,s__s_p_msk_00675330,param_2);
  FUN_005bcc50(&DAT_006cd368);
  local_7c = FUN_005eea00(local_30);
  FUN_0061c369(local_30,s__s_ap_msk_00675324,param_2);
  FUN_005bcc50(&DAT_006cd318);
  local_58 = FUN_005eea00(local_30);
  FUN_005be5e0(&local_54,&local_78,&local_9c,&local_9c,2);
  (**(code **)(*piVar3 + 0x14))();
  piVar3[0xe] = piVar3[0xe] + 10;
  iVar1 = piVar3[0xb];
  iVar2 = piVar3[0xc];
  piVar3[0xb] = param_4;
  piVar3[0xc] = param_5;
  piVar3[0xe] = piVar3[0xe] + (param_5 - iVar2);
  piVar3[0xd] = piVar3[0xd] + (param_4 - iVar1);
  ExceptionList = pvStack_c;
  return piVar3;
}

