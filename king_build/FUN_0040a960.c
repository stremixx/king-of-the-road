
void FUN_0040a960(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  int *piStack_94;
  int *apiStack_90 [9];
  undefined1 local_59 [5];
  undefined1 *local_54;
  char *local_50;
  undefined *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c [6];
  int local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b6a0;
  local_c = ExceptionList;
  apiStack_90[8] = (int *)0x8;
  apiStack_90[7] = (int *)s_START__0066b830;
  local_50 = s_mafiaOnHim_PlayerId_player__0066bc5c;
  local_4c = &DAT_0071d768;
  apiStack_90[6] = (int *)0x40a99d;
  ExceptionList = &local_c;
  FUN_00401870();
  apiStack_90[8] = (int *)s_mafiaOnHim_PlayerId_player__0066bc5c;
  apiStack_90[7] = (int *)0x40a9ac;
  FUN_004018b0();
  iVar7 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 100) == 5) {
    apiStack_90[8] = (int *)0x8;
    apiStack_90[7] = (int *)s_COMPL__0066b7ec;
    apiStack_90[6] = (int *)0x40a9cd;
    FUN_00401870();
    apiStack_90[8] = (int *)s_mafiaOnHim_PlayerId_player__0066bc5c;
    apiStack_90[7] = (int *)0x40a9dc;
    FUN_004018b0();
    ExceptionList = local_c;
    return;
  }
  apiStack_90[8] = (int *)local_59;
  apiStack_90[7] = (int *)0x40a9fd;
  FUN_00478a20();
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar6 = (int *)*DAT_0068a8f0;
  if (piVar6 != DAT_0068a8f0) {
    do {
      local_59._1_4_ = apiStack_90 + 8;
      apiStack_90[7] = (int *)0x40aa1b;
      apiStack_90[8] = piVar6;
      iVar2 = FUN_0040a950();
      if (((*(int *)(iVar2 + 0x54) == 6) && ((*(uint *)(iVar2 + 0x58) >> 2 & 1) == 0)) &&
         ((*(uint *)(iVar2 + 0x58) & 0x80000) == 0)) {
        local_59._1_4_ = apiStack_90 + 8;
        apiStack_90[7] = (int *)0x40aa4c;
        apiStack_90[8] = piVar6;
        apiStack_90[8] = (int *)FUN_004042b0();
        apiStack_90[7] = local_44;
        if (local_44 == local_40) {
          apiStack_90[6] = (int *)0x40aa78;
          FUN_00453860();
        }
        else {
          apiStack_90[6] = (int *)0x40aa5f;
          FUN_00460970();
          local_44 = local_44 + 1;
        }
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != DAT_0068a8f0);
  }
  apiStack_90[0] = local_24;
  puVar3 = (undefined4 *)(param_1 + 0x28);
  ppiVar11 = apiStack_90 + 1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar11 = (int *)*puVar3;
    puVar3 = puVar3 + 1;
    ppiVar11 = ppiVar11 + 1;
  }
  piStack_94 = (int *)0x40aa9c;
  puVar3 = (undefined4 *)FUN_00435cd0();
  piVar8 = local_44;
  piVar6 = local_48;
  local_59._1_4_ = local_48;
  puVar9 = puVar3;
  puVar10 = local_3c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if (local_48 != local_44) {
    for (iVar2 = (int)local_44 - (int)local_48 >> 2; iVar2 != 1; iVar2 = iVar2 >> 1) {
      iVar7 = iVar7 + 1;
    }
    ppiVar11 = apiStack_90 + 3;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppiVar11 = (int *)*puVar3;
      puVar3 = puVar3 + 1;
      ppiVar11 = ppiVar11 + 1;
    }
    apiStack_90[2] = (int *)(iVar7 * 2);
    apiStack_90[1] = (int *)0x0;
    apiStack_90[0] = local_44;
    piStack_94 = piVar6;
    FUN_0045ba40();
    apiStack_90[1] = (int *)local_59._1_4_;
    apiStack_90[2] = piVar8;
    puVar3 = local_3c;
    ppiVar11 = apiStack_90 + 3;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppiVar11 = (int *)*puVar3;
      puVar3 = puVar3 + 1;
      ppiVar11 = ppiVar11 + 1;
    }
    apiStack_90[0] = (int *)0x40ab0b;
    FUN_0045bb50();
  }
  iVar7 = 0;
  piVar6 = local_48;
  piVar8 = local_48;
  do {
    if (piVar8 == local_44) break;
    if (iVar7 < 2) {
      apiStack_90[8] = (int *)0x2;
      puVar3 = (undefined4 *)(param_1 + 0x28);
      ppiVar11 = apiStack_90;
      for (piStack_94 = (int *)0x8; piStack_94 != (int *)0x0;
          piStack_94 = (int *)((int)piStack_94 + -1)) {
        *ppiVar11 = (int *)*puVar3;
        puVar3 = puVar3 + 1;
        ppiVar11 = ppiVar11 + 1;
      }
      local_54 = (undefined1 *)&piStack_94;
      FUN_0041d3f0(piVar8);
      FUN_00478300();
      *(int *)(*piVar8 + 0x3c8) = param_1;
      piVar6 = local_48;
    }
    else if (*(int *)(*piVar8 + 0x3c8) == param_1) {
      *(int **)(*piVar8 + 0x3c8) = DAT_0068a8f0;
      piVar6 = local_48;
    }
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  iVar7 = (int)local_40 - (int)piVar6 >> 2;
  if (iVar7 != 0) {
    uVar4 = iVar7 * 4;
    if (uVar4 < 0x81) {
      apiStack_90[8] = (int *)0x40abbe;
      FUN_00401aa0();
      *piVar6 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar6;
      DAT_0068c164 = 0;
    }
    else {
      apiStack_90[7] = (int *)0x40aba0;
      FUN_0061c888();
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_mafiaOnHim_PlayerId_player__0066bc5c;
  cVar1 = s_mafiaOnHim_PlayerId_player__0066bc5c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = local_c;
  return;
}

