
int FUN_00440470(int param_1,uint *param_2)

{
  char cVar1;
  char *pcVar2;
  int local_18;
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dd08;
  local_c = ExceptionList;
  local_14 = s_getCoordinates_AI_Town___town__0066ddfc;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_getCoordinates_AI_Town___town__0066ddfc);
  local_4 = 0;
  FUN_00404d70(&local_18,param_2);
  if (local_18 == -1) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x41e5,
                 s_No_coordinates_defined_for_town_0066b8d0,
                 -(uint)(*param_2 != param_2[1]) & *param_2,&DAT_0068c120);
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar2 = s_getCoordinates_AI_Town___town__0066ddfc;
    cVar1 = s_getCoordinates_AI_Town___town__0066ddfc[0];
    if (DAT_0071d774 != 0) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar2;
      }
    }
    ExceptionList = local_c;
    return DAT_0071d778;
  }
  FUN_00436540(param_1,local_18);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_getCoordinates_AI_Town___town__0066ddfc;
  cVar1 = s_getCoordinates_AI_Town___town__0066ddfc[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

