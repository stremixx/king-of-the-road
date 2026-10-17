
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e380(char *param_1,int param_2,char **param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcStack_64;
  uint *puStack_60;
  uint local_4c [4];
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  uint local_2c [2];
  double local_24;
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dbc8;
  local_c = ExceptionList;
  puStack_60 = (uint *)0x8;
  pcStack_64 = s_START__0066b830;
  ExceptionList = &local_c;
  FUN_00401870();
  puStack_60 = (uint *)s__setPlayerPosition_RoomId_room__P_0066dae0;
  pcStack_64 = (char *)0x43e3ca;
  FUN_004018b0();
  puStack_60 = (uint *)param_3;
  local_4 = 0;
  if (*(int *)(param_2 + 0x18) == *(int *)(param_2 + 0x1c)) {
    if ((param_1 != (char *)0xffffffff) &&
       (iVar3 = *(int *)(DAT_0068c038 + (int)param_1 * 4),
       *(int *)(iVar3 + 0x1c) != *(int *)(iVar3 + 0x20))) {
      pcStack_64 = param_1;
      FUN_00436cb0(local_4c);
      puVar4 = local_4c;
      puVar5 = local_2c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      if (((int)local_4c[0] < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= local_4c[0])) {
        puStack_60 = (uint *)0x43e451;
        iVar3 = FUN_00423b50();
        if (iVar3 != 0) goto LAB_0043e455;
LAB_0043e487:
        puStack_60 = (uint *)local_34;
        pcStack_64 = local_38;
        FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,local_4c[0],local_4c[2],local_4c[3],
                     local_3c);
        FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3fb9,s_Invalid_id_0066bbf4,
                     s_PositionId_0066bc00,&DAT_0077d640);
      }
      else {
LAB_0043e455:
        if ((((local_24 < _DAT_0064a678) || (_DAT_0064a670 < local_24)) || (local_1c < 0)) ||
           (local_18 < 0)) goto LAB_0043e487;
      }
      puStack_60 = local_4c;
      pcStack_64 = (char *)0x43e4ef;
      FUN_004742e0();
      goto LAB_0043e522;
    }
    pcStack_64 = param_1;
  }
  else {
    pcStack_64 = (char *)param_3;
  }
  param_3 = &pcStack_64;
  FUN_0041d3f0(&param_2);
  FUN_0043dd40();
LAB_0043e522:
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s__setPlayerPosition_RoomId_room__P_0066dae0;
  cVar1 = s__setPlayerPosition_RoomId_room__P_0066dae0[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return;
}

