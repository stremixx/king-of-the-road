
void FUN_0057ffa0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60 [12];
  undefined1 local_30 [48];
  
  piVar2 = param_1 + 0x319;
  piVar3 = local_60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_005aba00(local_30,local_60);
  local_78 = param_1[0x68];
  local_9c = 0;
  local_74 = param_1[0x69];
  local_98 = 0;
  local_84 = param_1[0x6b];
  local_70 = param_1[0x6a];
  local_80 = param_1[0x6c];
  local_7c = param_1[0x6d];
  local_94 = 0;
  local_6c = param_1[0x336];
  local_68 = param_1[0x337];
  local_64 = param_1[0x338];
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  FUN_004e8371(local_60,local_30,&local_78,&local_84,&local_6c,param_2,param_3,param_1[0x331],
               param_1[0x164],0,&local_9c,&local_90);
  (**(code **)(*param_1 + 0x90))(&local_9c,s_perform_mi_wall_rough_collision__0067c374);
  (**(code **)(*param_1 + 0x94))(&local_98,s_box_wall_mi_col_2_0067c360);
  return;
}

