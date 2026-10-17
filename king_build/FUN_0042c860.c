
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0042c860(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d0c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar4 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0();
  local_4 = 0;
  iVar3 = FUN_00456670();
  if (iVar3 != 0) {
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2ce5,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  piVar2 = DAT_006898d0;
  if (*(int *)(param_1 + 0x5c) == 5) {
    for (; piVar2 != DAT_006898d4; piVar2 = piVar2 + 1) {
      if (*(int *)(*piVar2 + 0x7c) == param_1) {
        fVar5 = (float10)*(double *)(*piVar2 + 0xe8);
        if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
          pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
          *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
          *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
          DAT_0071d778 = DAT_0071d778 + 8;
        }
        pcVar4 = s_querySpeedLimit_PlayerId_player__0066ccf0;
        if (DAT_0071d774 == 0) {
          ExceptionList = local_c;
          return fVar5;
        }
        if (s_querySpeedLimit_PlayerId_player__0066ccf0[0] == '\0') {
          ExceptionList = local_c;
          return fVar5;
        }
        do {
          if (DAT_0071d770 <= DAT_0071d778) {
            ExceptionList = local_c;
            return fVar5;
          }
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          DAT_0071d778 = DAT_0071d778 + 1;
        } while (*pcVar4 != '\0');
        ExceptionList = local_c;
        return fVar5;
      }
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_querySpeedLimit_PlayerId_player__0066ccf0;
  cVar1 = s_querySpeedLimit_PlayerId_player__0066ccf0[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  ExceptionList = local_c;
  return (float10)_DAT_0064a870;
}

