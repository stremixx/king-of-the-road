
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00431250(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar3 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0();
  local_4 = 0;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3224,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  if ((double)CONCAT44(param_3,param_2) != _DAT_0064a668) {
    FUN_00483f50(param_2);
    FUN_00483f70(0x10,0);
    *(double *)(param_1 + 0x88) = *(double *)(param_1 + 0x88) - (double)CONCAT44(param_3,param_2);
  }
  FUN_00425880();
  FUN_0041f080();
  FUN_004772b0();
  FUN_00427000();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_fineForSpeeding_PlayerId_player__0066cfe8;
  cVar1 = s_fineForSpeeding_PlayerId_player__0066cfe8[0];
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

