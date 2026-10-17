
undefined4 FUN_0043fa30(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  local_4 = 0;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x4105,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  if (*(int *)(param_1 + 0x5c) == 5) {
    iVar2 = 3;
  }
  else {
    iVar2 = (*(int *)(param_1 + 0x5c) == 6) + 1;
  }
  iVar4 = DAT_006898b8;
  if (DAT_006898b8 != DAT_006898bc) {
    do {
      if ((iVar2 == *(int *)(iVar4 + 0x18)) &&
         ((param_2 == -1 || (param_2 == *(int *)(iVar4 + 0x14))))) break;
      iVar4 = iVar4 + 0x38;
    } while (iVar4 != DAT_006898bc);
    if (iVar4 != DAT_006898bc) goto LAB_0043fb47;
  }
  FUN_00401010(0,0x100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x4112,
               s_Can_not_find_the_requested_ident_0066dd1c,&DAT_0068c120);
LAB_0043fb47:
  if (*(int *)(param_1 + 0x3e0) != (iVar4 - DAT_006898b8) / 0x38) {
    if (0 < *(int *)(iVar4 + 0x1c)) {
      FUN_00401010(0,0x100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x4119,
                   s_Identity_is_occupied_0066dd04,&DAT_0068c120);
    }
    FUN_004741b0();
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_setPlayerImage_PlayerId_player__i_0066dd40;
  cVar1 = s_setPlayerImage_PlayerId_player__i_0066dd40[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar3;
    }
  }
  ExceptionList = local_c;
  return 0;
}

