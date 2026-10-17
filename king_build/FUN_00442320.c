
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00442320(char *param_1,uint param_2,int *param_3)

{
  double dVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char **ppcVar5;
  char **ppcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_EDX;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  float10 fVar12;
  char *local_38;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063de78;
  local_14 = ExceptionList;
  local_38 = (char *)0x8;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830);
  local_38 = s_getOrderInfo_PlayerId_player__in_0066e0c4;
  FUN_004018b0();
  ppcVar5 = &local_38;
  ppcVar6 = &local_38;
  local_c = 0;
  *(undefined1 *)(param_3 + 0x2e) = 0;
  local_38 = param_1;
  iVar4 = FUN_00456670();
  if (iVar4 != 0) {
    local_38 = &DAT_0066c4e4;
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x43b5,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  iVar4 = *(int *)(param_1 + 0x208);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
    iVar4 = *(int *)(param_1 + 0x204);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
      local_38 = &DAT_0068c120;
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120);
    }
    else {
      ppcVar5 = (char **)(iVar4 + 0x1c);
    }
  }
  else {
    ppcVar5 = (char **)(iVar4 + 0x1c);
  }
  if ((uint)(((int)ppcVar5[1] - (int)*ppcVar5) / 0x90) <= param_2) {
    local_38 = (char *)0x8;
    FUN_00401870(s_COMPL__0066b7ec);
    local_38 = s_getOrderInfo_PlayerId_player__in_0066e0c4;
    FUN_004018b0();
    ExceptionList = local_14;
    return 0xffffffff;
  }
  iVar4 = *(int *)(param_1 + 0x208);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
    iVar4 = *(int *)(param_1 + 0x204);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
      local_38 = &DAT_0068c120;
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120);
    }
    else {
      ppcVar6 = (char **)(iVar4 + 0x1c);
    }
  }
  else {
    ppcVar6 = (char **)(iVar4 + 0x1c);
  }
  piVar9 = (int *)(param_2 * 0x90 + (int)*ppcVar6);
  param_3[2] = piVar9[0xe];
  param_3[3] = piVar9[0xf];
  *param_3 = *piVar9;
  piVar10 = piVar9 + 6;
  piVar11 = param_3 + 4;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar11 = piVar11 + 1;
  }
  piVar11 = (int *)(DAT_0068bc18 + 0x58 + *piVar9 * 0x68);
  piVar10 = param_3 + 0xd;
  if (piVar11 != piVar10) {
    pcVar2 = (char *)piVar11[1];
    iVar4 = *piVar11;
    uVar7 = (int)pcVar2 - iVar4;
    local_38 = (char *)*piVar10;
    if ((uint)(param_3[0xf] - (int)local_38) < uVar7) {
      local_38 = pcVar2;
      iVar4 = FUN_00458d60(uVar7,iVar4);
      local_38 = (char *)(param_3[0xf] - *piVar10);
      if (local_38 != (char *)0x0) {
        FUN_0044b440(*piVar10);
      }
      *piVar10 = iVar4;
      param_3[0xf] = iVar4 + uVar7;
    }
    else if ((uint)(param_3[0xe] - (int)local_38) < uVar7) {
      FUN_00407250(iVar4,(param_3[0xe] - (int)local_38) + iVar4);
      FUN_00407250((param_3[0xe] - *piVar10) + *piVar11,piVar11[1],param_3[0xe]);
    }
    else {
      FUN_00407250(iVar4,pcVar2);
    }
    param_3[0xe] = *piVar10 + uVar7;
  }
  if (piVar9[2] != -1) {
    piVar11 = (int *)(DAT_0068bc18 + 0x58 + piVar9[2] * 0x68);
    if (piVar11 != piVar10) {
      pcVar2 = (char *)piVar11[1];
      iVar4 = *piVar11;
      local_38 = (char *)*piVar10;
      uVar7 = (int)pcVar2 - iVar4;
      if ((uint)(param_3[0xf] - (int)local_38) < uVar7) {
        local_38 = pcVar2;
        iVar4 = FUN_00458d60(uVar7,iVar4);
        local_38 = (char *)(param_3[0xf] - *piVar10);
        if (local_38 != (char *)0x0) {
          FUN_0044b440(*piVar10);
        }
        *piVar10 = iVar4;
        param_3[0xf] = iVar4 + uVar7;
      }
      else if ((uint)(param_3[0xe] - (int)local_38) < uVar7) {
        FUN_00407250(iVar4,(param_3[0xe] - (int)local_38) + iVar4);
        FUN_00407250((param_3[0xe] - *piVar10) + *piVar11,piVar11[1],param_3[0xe]);
      }
      else {
        FUN_00407250(iVar4,pcVar2);
      }
      param_3[0xe] = *piVar10 + uVar7;
    }
  }
  local_38 = (char *)param_3[0x11];
  FUN_004471c0(param_3[0x10]);
  if (piVar9[1] != -1) {
    local_38 = (char *)(DAT_0068bc18 + 0x58 + piVar9[1] * 0x68);
    FUN_0044c100();
  }
  local_38 = (char *)param_3[0x14];
  FUN_004471c0(param_3[0x13]);
  local_38 = (char *)(*(int *)(DAT_0068be20 + piVar9[3] * 4) + 0xc);
  FUN_0044c100();
  param_3[0xc] = piVar9[3];
  local_38 = (char *)0x4426e2;
  FUN_004427d0();
  local_38 = (char *)CONCAT31((int3)((uint)extraout_EDX >> 8),piVar9[0x1a] == 1);
  fVar12 = (float10)FUN_004715b0();
  *(double *)(param_3 + 0x1e) = (double)fVar12;
  local_38 = param_1;
  cVar3 = FUN_004171e0();
  if (cVar3 == '\0') {
    local_38 = param_1;
    cVar3 = FUN_00417560();
    if (cVar3 != '\0') goto LAB_00442726;
  }
  else {
LAB_00442726:
    uVar8 = 1;
    if (piVar9[0x1a] == 1) goto LAB_00442734;
  }
  uVar8 = 0;
LAB_00442734:
  local_38 = (char *)0x0;
  fVar12 = (float10)FUN_004714a0(piVar9,(double)*(int *)(param_1 + 0x210),uVar8,0);
  *(double *)(param_3 + 0x20) = (double)fVar12;
  local_38 = (char *)0x442759;
  fVar12 = (float10)FUN_00401000();
  dVar1 = *(double *)(piVar9 + 0x12);
  *(double *)(param_3 + 0x2a) = (double)((float10)dVar1 - fVar12);
  if ((float10)dVar1 - fVar12 < (float10)_DAT_0064a668) {
    param_3[0x2a] = 0;
    param_3[0x2b] = 0;
  }
  local_38 = (char *)0x8;
  param_3[0x2c] = piVar9[0x18];
  param_3[0x2d] = piVar9[0x19];
  *(undefined1 *)(param_3 + 0x2e) = 1;
  FUN_00401870(s_COMPL__0066b7ec);
  local_38 = s_getOrderInfo_PlayerId_player__in_0066e0c4;
  FUN_004018b0();
  ExceptionList = local_14;
  return 0;
}

