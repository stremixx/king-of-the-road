
void FUN_0043ef50(int param_1,float *param_2)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float local_a0;
  float local_9c;
  undefined4 local_74 [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dc6b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870();
  FUN_004018b0();
  local_c = 0;
  iVar3 = FUN_00456670();
  if (iVar3 != 0) {
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x4070,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8);
  }
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x408c);
  }
  else {
    cVar2 = FUN_00420980();
    pfVar1 = param_2;
    if (cVar2 != '\0') {
      FUN_0043f270((double)*param_2,(double)param_2[1],(double)param_2[2],(double)param_2[3],
                   (double)param_2[4],(double)param_2[5],(double)param_2[6],(double)param_2[7],
                   (double)param_2[8],(double)param_2[9],(double)param_2[10]);
      puVar5 = local_74;
      puVar6 = (undefined4 *)(param_1 + 0x228);
      for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_00401870();
      goto LAB_0043f249;
    }
    FUN_0041ce10();
    FUN_00405ea0((double)local_a0,(double)local_9c);
    FUN_0041d3f0(&param_1);
    FUN_0043e6f0();
    FUN_0043f270((double)*pfVar1,(double)pfVar1[1],(double)pfVar1[2],(double)pfVar1[3],
                 (double)pfVar1[4],(double)pfVar1[5],(double)pfVar1[6],(double)pfVar1[7],
                 (double)pfVar1[8],(double)pfVar1[9],(double)pfVar1[10]);
    puVar5 = local_74;
    puVar6 = (undefined4 *)(param_1 + 0x228);
    for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (*(int *)(param_1 + 0x5c) == 1) {
      FUN_00428ac0();
    }
    else if (*(int *)(param_1 + 0x5c) == 9) {
      FUN_00422300();
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
LAB_0043f249:
  FUN_004018b0();
  ExceptionList = local_14;
  return;
}

