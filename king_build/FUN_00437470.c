
undefined4 FUN_00437470(undefined4 param_1,uint param_2,float param_3,float param_4,float param_5)

{
  char cVar1;
  char *pcVar2;
  double local_24;
  double local_1c;
  double local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_getPositionId_RoomId_room__vrVec_0066d554);
  local_4 = 0;
  if (((int)param_2 < 0) || ((uint)(DAT_0068c03c - DAT_0068c038 >> 2) <= param_2)) {
    FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,param_2);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3a1e,s_Invalid_id_0066bbf4,
                 s_RoomId_0066d4c8,&DAT_0077d3c0);
  }
  local_24 = (double)param_3;
  local_1c = (double)param_4;
  local_14 = (double)param_5;
  FUN_00436cb0(param_1,param_2,&local_24);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_getPositionId_RoomId_room__vrVec_0066d554;
  cVar1 = s_getPositionId_RoomId_room__vrVec_0066d554[0];
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

