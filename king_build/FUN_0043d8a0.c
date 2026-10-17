
undefined4 FUN_0043d8a0(undefined4 param_1,int param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_58 [7];
  undefined4 uStack_3c;
  double *pdStack_38;
  double local_24;
  double local_1c;
  double local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063db68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar3 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pdStack_38 = (double *)s_findPositionOnATrajectory_Player_0066da1c;
  uStack_3c = 0x43d914;
  FUN_004018b0();
  local_4 = 0;
  local_24 = (double)*param_3;
  local_1c = (double)param_3[1];
  fVar1 = param_3[2];
  pdStack_38 = &local_24;
  puVar5 = (undefined4 *)(param_2 + 0x28);
  puVar6 = auStack_58;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_14 = (double)fVar1;
  FUN_0043d2d0(param_1,param_2 + 0x18);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_findPositionOnATrajectory_Player_0066da1c;
  cVar2 = s_findPositionOnATrajectory_Player_0066da1c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar3;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

