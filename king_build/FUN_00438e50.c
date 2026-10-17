
undefined4
FUN_00438e50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 param_8,uint *param_9)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined4 local_34 [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d968;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_getRoadParameters_PositionId_pos_0066d604);
  local_c = 0;
  if (param_1 == -1) {
    if (param_2 != -1) {
      puVar6 = *(uint **)(*(int *)(DAT_0068be60 + param_2 * 4) + 0xbc);
      uVar2 = *puVar6;
      param_9[4] = -(uint)(uVar2 != puVar6[1]) & uVar2;
      puVar6 = *(uint **)(*(int *)(DAT_0068be60 + param_2 * 4) + 0xb8);
      uVar2 = *puVar6;
      param_9[5] = -(uint)(uVar2 != puVar6[1]) & uVar2;
      param_9[9] = *(uint *)(*(int *)(*(int *)(DAT_0068be60 + param_2 * 4) + 0xb8) + 0xc);
      param_9[10] = *(uint *)(*(int *)(*(int *)(DAT_0068be60 + param_2 * 4) + 0xbc) + 0xc);
    }
  }
  else {
    puVar11 = local_34;
    for (iVar10 = 8; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar10 != 0
        ; iVar10 = iVar10 + -1) {
      *puVar11 = *(undefined4 *)register0x00000010;
      puVar11 = puVar11 + 1;
    }
    iVar10 = FUN_0040a460();
    if (iVar10 == 0) {
      FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,param_1,param_3,param_4,param_5,param_6
                   ,param_7);
      FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3bd8,s_Invalid_id_0066bbf4,
                   s_PositionId_0066bc00,&DAT_0077d640);
    }
    iVar10 = *(int *)(DAT_0068be98 + param_1 * 4);
    iVar8 = *(int *)(*(int *)(iVar10 + 0x78) + param_6 * 4);
    if (iVar8 == 0) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = (uint *)(iVar8 + 8);
    }
    *param_9 = *puVar6;
    piVar3 = *(int **)(*(int *)(iVar10 + 0x78) + param_6 * 4);
    if (piVar3 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = piVar3 + 2;
    }
    dVar5 = *(double *)piVar7[8];
    if (piVar3 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = piVar3 + 2;
    }
    dVar4 = *(double *)(piVar7[8] + 8);
    (**(code **)(*piVar3 + 0x20))(0,0,0,param_3,param_4,param_5);
    fVar12 = (float10)(**(code **)(*piVar3 + 0x24))();
    *(double *)(param_9 + 2) = (double)((float10)dVar4 / fVar12 + (float10)dVar5);
    iVar8 = *(int *)(*(int *)(iVar10 + 0x78) + param_6 * 4);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 8;
    }
    param_9[4] = *(uint *)(*(int *)(iVar8 + 8) + 0x10);
    iVar8 = *(int *)(*(int *)(iVar10 + 0x78) + param_6 * 4);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 8;
    }
    uVar2 = **(uint **)(iVar8 + 8);
    param_9[5] = -(uint)(uVar2 != (*(uint **)(iVar8 + 8))[1]) & uVar2;
    iVar8 = *(int *)(*(int *)(iVar10 + 0x78) + param_6 * 4);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 8;
    }
    param_9[9] = *(uint *)(*(int *)(iVar8 + 8) + 0xc);
    iVar8 = *(int *)(*(int *)(iVar10 + 0x78) + param_6 * 4);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 8;
    }
    param_9[10] = *(uint *)(*(int *)(iVar8 + 0xc) + 0xc);
    iVar8 = *(int *)(*(int *)(iVar10 + 0x78) + param_6 * 4);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 8;
    }
    param_9[6] = *(uint *)(iVar8 + 0x18);
    param_9[7] = *(uint *)(iVar8 + 0x1c);
    iVar8 = *(int *)(*(int *)(iVar10 + 0x78) + param_6 * 4);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 8;
    }
    param_9[8] = *(uint *)(iVar8 + 0x14);
    if ((*(uint *)(iVar10 + 0x10) & 0x200) != 0) {
      *param_9 = *param_9 & 0xffffffdf;
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar9 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar9 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar9 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar9 = s_getRoadParameters_PositionId_pos_0066d604;
  cVar1 = s_getRoadParameters_PositionId_pos_0066d604[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar9;
    }
  }
  ExceptionList = local_14;
  return 0;
}

