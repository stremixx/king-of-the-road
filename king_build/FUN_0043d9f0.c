
undefined4 * FUN_0043d9f0(undefined4 *param_1,int param_2,float *param_3,int param_4,int param_5)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  undefined4 *puVar10;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_0000004c;
  undefined4 auStack_a4 [6];
  undefined4 uStack_8c;
  int *piStack_88;
  char *apcStack_84 [4];
  undefined4 uStack_74;
  char *pcStack_70;
  char *pcStack_6c;
  char *pcStack_68;
  undefined4 local_54;
  undefined4 local_50;
  char *local_4c;
  undefined *local_48;
  double local_44;
  double local_3c;
  double local_34;
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063db88;
  local_c = ExceptionList;
  pcStack_68 = (char *)0x8;
  pcStack_6c = s_START__0066b830;
  local_4c = s_findPositionOnATrajectory2_0066da8c;
  local_48 = &DAT_0071d768;
  pcStack_70 = (char *)0x43da2d;
  ExceptionList = &local_c;
  FUN_00401870();
  pcStack_68 = s_findPositionOnATrajectory2_0066da8c;
  pcStack_6c = (undefined1 *)0x43da3c;
  FUN_004018b0();
  local_4 = 0;
  if (in_stack_0000004c == -1) {
    piStack_88 = (int *)(param_2 + 0x18);
    puVar8 = &stack0x00000030;
    ppcVar9 = apcStack_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar9 = (char *)*puVar8;
      puVar8 = puVar8 + 1;
      ppcVar9 = ppcVar9 + 1;
    }
    uStack_8c = 0x43da70;
    in_stack_0000004c = FUN_0043abf0();
  }
  iVar4 = in_stack_0000004c;
  if (in_stack_0000002c == -1) {
    puVar8 = &param_4;
    ppcVar9 = apcStack_84;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar9 = (char *)*puVar8;
      puVar8 = puVar8 + 1;
      ppcVar9 = ppcVar9 + 1;
    }
    piStack_88 = (int *)(param_2 + 0x18);
    uStack_8c = 0x43daaa;
    in_stack_0000002c = FUN_0043abf0();
  }
  iVar5 = in_stack_0000002c;
  if (iVar4 == -1) {
    pcStack_68 = &DAT_0068c120;
    pcStack_6c = &DAT_0068c120;
    pcStack_70 = s_Error_09623_0066da80;
    uStack_74 = 0x3f2d;
    apcStack_84[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_84[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_84[1] = (char *)0x1;
    apcStack_84[0] = (char *)0x0;
    piStack_88 = (int *)0x43dae2;
    FUN_00401010();
  }
  if (iVar5 == -1) {
    pcStack_68 = &DAT_0068c120;
    pcStack_6c = &DAT_0068c120;
    pcStack_70 = s_Error_09624_0066da74;
    uStack_74 = 0x3f2f;
    apcStack_84[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_84[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_84[1] = (char *)0x1;
    apcStack_84[0] = (char *)0x0;
    piStack_88 = (int *)0x43db11;
    FUN_00401010();
  }
  piVar7 = (int *)(param_2 + 0x18);
  piVar1 = (int *)(*(int *)(param_2 + 0x18) + iVar4 * 0xc);
  if ((*(int *)(DAT_0068be98 + in_stack_00000030 * 4) != piVar1[1]) &&
     (in_stack_00000034 != *piVar1)) {
    puVar8 = &stack0x00000030;
    ppcVar9 = apcStack_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar9 = (char *)*puVar8;
      puVar8 = puVar8 + 1;
      ppcVar9 = ppcVar9 + 1;
    }
    uStack_8c = 0x43db5e;
    piStack_88 = piVar7;
    iVar4 = FUN_0043abf0();
    in_stack_0000004c = iVar4;
    iVar5 = in_stack_0000002c;
  }
  piVar1 = (int *)(*piVar7 + iVar5 * 0xc);
  if ((*(int *)(DAT_0068be98 + param_4 * 4) != piVar1[1]) && (param_5 != *piVar1)) {
    puVar8 = &param_4;
    ppcVar9 = apcStack_84;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar9 = (char *)*puVar8;
      puVar8 = puVar8 + 1;
      ppcVar9 = ppcVar9 + 1;
    }
    uStack_8c = 0x43dbb0;
    piStack_88 = piVar7;
    iVar5 = FUN_0043abf0();
    in_stack_0000002c = iVar5;
  }
  if (iVar4 == -1) {
    pcStack_68 = &DAT_0068c120;
    pcStack_6c = &DAT_0068c120;
    pcStack_70 = s_Error_09625_0066da68;
    uStack_74 = 0x3f3d;
    apcStack_84[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_84[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_84[1] = (char *)0x1;
    apcStack_84[0] = (char *)0x0;
    piStack_88 = (int *)0x43dbe8;
    FUN_00401010();
  }
  if (iVar5 == -1) {
    pcStack_68 = &DAT_0068c120;
    pcStack_6c = &DAT_0068c120;
    pcStack_70 = s_Error_09626_0066da5c;
    uStack_74 = 0x3f3f;
    apcStack_84[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_84[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_84[1] = (char *)0x1;
    apcStack_84[0] = (char *)0x0;
    piStack_88 = (int *)0x43dc17;
    FUN_00401010();
  }
  local_44 = (double)*param_3;
  fVar2 = param_3[1];
  puVar8 = (undefined4 *)(param_2 + 0x28);
  puVar10 = local_2c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  local_3c = (double)fVar2;
  fVar2 = param_3[2];
  puVar8 = &stack0x00000030;
  ppcVar9 = apcStack_84;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar9 = (char *)*puVar8;
    puVar8 = puVar8 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  puVar8 = &param_4;
  puVar10 = auStack_a4;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  local_34 = (double)fVar2;
  local_54 = 0xffffffff;
  local_50 = 0x7fefffff;
  FUN_0043c3b0(&local_44,&local_54,piVar7,local_2c);
  puVar8 = local_2c;
  puVar10 = param_1;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_findPositionOnATrajectory2_0066da8c;
  cVar3 = s_findPositionOnATrajectory2_0066da8c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
      cVar3 = *pcVar6;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

