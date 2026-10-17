
void FUN_00446490(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e0b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar4 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_clearPlayerId_VehicleInstance___v_0066e398);
  local_4 = 0;
  if (param_1 == 0) {
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    FUN_004018b0(s_clearPlayerId_VehicleInstance___v_0066e398);
    ExceptionList = local_c;
    return;
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  if (iVar6 != *(int *)(param_1 + 0x20)) {
    do {
      piVar2 = *(int **)(iVar6 + 0x7c);
      piVar5 = *(int **)(iVar6 + 0x78);
      if (piVar5 != piVar2) {
        do {
          if (*piVar5 == param_2) break;
          piVar5 = piVar5 + 4;
        } while (piVar5 != piVar2);
        if (piVar5 != piVar2) {
          if ((piVar5 + 4 != piVar2) && (iVar3 = (int)piVar2 - (int)(piVar5 + 4) >> 4, 0 < iVar3)) {
            do {
              piVar5 = piVar5 + 4;
              FUN_0042c0c0(piVar5);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          *(int *)(iVar6 + 0x7c) = *(int *)(iVar6 + 0x7c) + -0x10;
          FUN_0044a450();
        }
      }
      iVar6 = iVar6 + 0x90;
    } while (iVar6 != *(int *)(param_1 + 0x20));
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_clearPlayerId_VehicleInstance___v_0066e398;
  cVar1 = s_clearPlayerId_VehicleInstance___v_0066e398[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  ExceptionList = local_c;
  return;
}

