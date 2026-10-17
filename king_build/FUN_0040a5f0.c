
void FUN_0040a5f0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *extraout_ECX;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  int *piStack_98;
  int *apiStack_94 [9];
  undefined1 local_5d;
  int local_5c;
  undefined1 *local_58;
  undefined1 local_54 [4];
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
  puStack_8 = &LAB_0063b680;
  local_c = ExceptionList;
  apiStack_94[8] = (int *)0x8;
  apiStack_94[7] = (int *)s_START__0066b830;
  local_50 = s_copsOnHim_PlayerId_player__0066bc40;
  local_4c = &DAT_0071d768;
  apiStack_94[6] = (int *)0x40a62d;
  ExceptionList = &local_c;
  FUN_00401870();
  apiStack_94[8] = (int *)s_copsOnHim_PlayerId_player__0066bc40;
  apiStack_94[7] = (int *)0x40a63c;
  FUN_004018b0();
  local_4 = 0;
  if (*(int *)(param_1 + 100) == 5) {
    apiStack_94[8] = (int *)0x8;
    apiStack_94[7] = (int *)s_COMPL__0066b7ec;
    apiStack_94[6] = (int *)0x40a663;
    FUN_00401870();
    apiStack_94[8] = (int *)s_copsOnHim_PlayerId_player__0066bc40;
    apiStack_94[7] = (int *)0x40a672;
    FUN_004018b0();
    ExceptionList = local_c;
    return;
  }
  apiStack_94[8] = (int *)&local_5d;
  apiStack_94[7] = (int *)0x40a693;
  FUN_00478a20();
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar8 = (int *)*DAT_0068a8f0;
  if (piVar8 != DAT_0068a8f0) {
    do {
      local_5c = (int)(apiStack_94 + 8);
      apiStack_94[7] = (int *)0x40a6b1;
      apiStack_94[8] = piVar8;
      iVar3 = FUN_0040a950();
      if (((*(int *)(iVar3 + 0x54) == 5) && ((*(uint *)(iVar3 + 0x58) >> 2 & 1) == 0)) &&
         ((*(uint *)(iVar3 + 0x58) & 0x80000) == 0)) {
        local_5c = (int)(apiStack_94 + 8);
        apiStack_94[7] = (int *)0x40a6e1;
        apiStack_94[8] = piVar8;
        apiStack_94[8] = (int *)FUN_004042b0();
        apiStack_94[7] = local_44;
        if (local_44 == local_40) {
          apiStack_94[6] = (int *)0x40a70d;
          FUN_00453860();
        }
        else {
          apiStack_94[6] = (int *)0x40a6f4;
          FUN_00460970();
          local_44 = local_44 + 1;
        }
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != DAT_0068a8f0);
  }
  apiStack_94[0] = local_24;
  puVar4 = (undefined4 *)(param_1 + 0x28);
  ppiVar11 = apiStack_94 + 1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppiVar11 = (int *)*puVar4;
    puVar4 = puVar4 + 1;
    ppiVar11 = ppiVar11 + 1;
  }
  piStack_98 = (int *)0x40a731;
  puVar4 = (undefined4 *)FUN_00435cd0();
  piVar1 = local_44;
  piVar8 = local_48;
  puVar9 = puVar4;
  puVar10 = local_3c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if (local_48 != local_44) {
    iVar3 = 0;
    for (iVar7 = (int)local_44 - (int)local_48 >> 2; iVar7 != 1; iVar7 = iVar7 >> 1) {
      iVar3 = iVar3 + 1;
    }
    ppiVar11 = apiStack_94 + 3;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppiVar11 = (int *)*puVar4;
      puVar4 = puVar4 + 1;
      ppiVar11 = ppiVar11 + 1;
    }
    apiStack_94[2] = (int *)(iVar3 * 2);
    apiStack_94[1] = (int *)0x0;
    apiStack_94[0] = local_44;
    piStack_98 = local_48;
    FUN_0045ba40();
    apiStack_94[2] = piVar1;
    apiStack_94[1] = piVar8;
    puVar4 = local_3c;
    ppiVar11 = apiStack_94 + 3;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppiVar11 = (int *)*puVar4;
      puVar4 = puVar4 + 1;
      ppiVar11 = ppiVar11 + 1;
    }
    apiStack_94[0] = (int *)0x40a79d;
    FUN_0045bb50();
  }
  iVar3 = 0;
  local_5c = 0;
  piVar8 = local_48;
  do {
    if (piVar8 == local_44) break;
    if (iVar3 < 2) {
      apiStack_94[8] = (int *)0x2;
      puVar4 = (undefined4 *)(param_1 + 0x28);
      ppiVar11 = apiStack_94;
      for (piStack_98 = (int *)0x8; piStack_98 != (int *)0x0;
          piStack_98 = (int *)((int)piStack_98 + -1)) {
        *ppiVar11 = (int *)*puVar4;
        puVar4 = puVar4 + 1;
        ppiVar11 = ppiVar11 + 1;
      }
      local_58 = (undefined1 *)&piStack_98;
      FUN_0041d3f0(piVar8);
      FUN_00478300();
      apiStack_94[8] = (int *)*piVar8;
      local_58 = (undefined1 *)(apiStack_94 + 8);
      apiStack_94[7] = (int *)0x40a7f7;
      cVar2 = FUN_0040a5b0();
      if (cVar2 == '\0') {
        local_58 = (undefined1 *)(apiStack_94 + 8);
        apiStack_94[8] = (int *)*piVar8;
        apiStack_94[7] = (int *)local_54;
        apiStack_94[6] = (int *)0x40a824;
        puVar4 = (undefined4 *)FUN_0040a590();
        apiStack_94[8] = (int *)*puVar4;
        local_58 = (undefined1 *)(apiStack_94 + 7);
        apiStack_94[5] = (int *)0x40a837;
        apiStack_94[6] = piVar8;
        apiStack_94[7] = extraout_ECX;
        FUN_0041d3f0();
        apiStack_94[6] = (int *)0x40a83c;
        FUN_0040a200();
      }
      else {
        iVar3 = iVar3 + 1;
        *(int *)(*piVar8 + 0x3c8) = param_1;
      }
    }
    else if (*(int *)(*piVar8 + 0x3c8) == param_1) {
      *(int **)(*piVar8 + 0x3c8) = DAT_0068a8f0;
    }
    piVar8 = piVar8 + 1;
    local_5c = local_5c + 1;
  } while (local_5c < 2);
  iVar3 = (int)local_40 - (int)local_48 >> 2;
  if (iVar3 != 0) {
    uVar5 = iVar3 * 4;
    if (uVar5 < 0x81) {
      apiStack_94[8] = (int *)0x40a8ac;
      FUN_00401aa0();
      *local_48 = *(int *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = local_48;
      DAT_0068c164 = 0;
    }
    else {
      apiStack_94[8] = local_48;
      apiStack_94[7] = (int *)0x40a890;
      FUN_0061c888();
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_copsOnHim_PlayerId_player__0066bc40;
  cVar2 = s_copsOnHim_PlayerId_player__0066bc40[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar6;
    }
  }
  ExceptionList = local_c;
  return;
}

