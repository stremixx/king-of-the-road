
int FUN_00440670(int param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dd28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar5 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_getNameCoordinates_AI_Town___tow_0066de1c);
  puVar2 = param_2;
  local_4 = 0;
  uVar4 = param_2[0x11];
  if (uVar4 == 0xffffffff) {
    puVar3 = (uint *)FUN_00404d70(&param_2,param_2);
    uVar4 = *puVar3;
    if (uVar4 == 0xffffffff) {
      uVar4 = *puVar2;
      FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x41f0,
                   s_No_coordinates_defined_for_town_0066b8d0,-(uint)(uVar4 != puVar2[1]) & uVar4,
                   &DAT_0068c120);
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar5 = s_getNameCoordinates_AI_Town___tow_0066de1c;
      cVar1 = s_getNameCoordinates_AI_Town___tow_0066de1c[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          cVar1 = *pcVar5;
        }
      }
      ExceptionList = local_c;
      return DAT_0071d778;
    }
  }
  FUN_00436540(param_1,uVar4);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_getNameCoordinates_AI_Town___tow_0066de1c;
  cVar1 = s_getNameCoordinates_AI_Town___tow_0066de1c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

