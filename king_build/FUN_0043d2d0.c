
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0043d2d0(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  double *pdVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  uint uVar12;
  char **ppcVar13;
  int in_stack_00000028;
  int *in_stack_0000002c;
  char *apcStack_b4 [2];
  int iStack_ac;
  undefined4 uStack_a8;
  int *piStack_a4;
  double *pdStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  double local_70;
  int local_68;
  undefined4 uStack_64;
  char *local_5c;
  undefined *local_58;
  int local_54 [2];
  double local_4c;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34 [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063db48;
  local_14 = ExceptionList;
  piStack_98 = (int *)0x8;
  piStack_9c = (int *)s_START__0066b830;
  local_5c = s_findPlayerPosition_vector<Hop>___0066d9c4;
  local_58 = &DAT_0071d768;
  pdStack_a0 = (double *)0x43d312;
  ExceptionList = &local_14;
  FUN_00401870();
  piStack_98 = (int *)s_findPlayerPosition_vector<Hop>___0066d9c4;
  piStack_9c = (int *)0x43d321;
  FUN_004018b0();
  uVar12 = 0;
  local_c = 0;
  piVar7 = (int *)param_2[1];
  pdVar8 = (double *)*param_2;
  if (((int)piVar7 - (int)pdVar8) / 0xc == 1) {
    iVar9 = piVar7[-3];
    piStack_98 = (int *)0x8;
    piStack_9c = (int *)s_COMPL__0066b7ec;
    param_1[2] = 0;
    *param_1 = -1;
    param_1[1] = iVar9;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = -1;
    pdStack_a0 = (double *)0x43d381;
    FUN_00401870();
    piStack_98 = (int *)s_findPlayerPosition_vector<Hop>___0066d9c4;
    piStack_9c = (int *)0x43d390;
    FUN_004018b0();
    ExceptionList = local_14;
    return param_1;
  }
  local_70 = 1.79769313486232e+308;
  local_68 = 0;
  uStack_64 = 0;
  local_80 = 0;
  local_7c = 0;
  local_34[0] = -1;
  local_34[1] = 0xffffffff;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = -1;
  if (param_3 == -1) goto LAB_0043d532;
  piVar11 = *(int **)(DAT_0068be98 + param_3 * 4);
  if ((((int)piVar7 - (int)pdVar8) / 0xc < in_stack_00000028) && (-1 < in_stack_00000028)) {
    pdStack_a0 = (double *)((int)pdVar8 + in_stack_00000028 * 0xc);
    piStack_a4 = (int *)0x43d443;
    piStack_9c = piVar7;
    piStack_98 = piVar11;
    piVar5 = (int *)FUN_00457380();
    if (piVar5 == piVar7) goto LAB_0043d456;
  }
  else {
LAB_0043d456:
    piStack_a4 = (int *)0x43d45d;
    pdStack_a0 = pdVar8;
    piStack_9c = piVar7;
    piStack_98 = piVar11;
    piVar5 = (int *)FUN_00457380();
  }
  if ((int *)param_2[1] != piVar5) {
    iVar9 = *(int *)(DAT_0068be98 + param_3 * 4);
    iVar6 = *(int *)(iVar9 + 0x78);
    if (*(int *)(iVar9 + 0x7c) - iVar6 >> 2 != 0) {
      do {
        piStack_98 = &local_80;
        piStack_9c = &local_68;
        pdStack_a0 = &local_70;
        piStack_a4 = in_stack_0000002c;
        uStack_a8 = 0x43d4a6;
        iVar6 = (**(code **)(**(int **)(iVar6 + uVar12 * 4) + 0xc))();
        if (iVar6 != 0) {
          local_7c = uVar12;
        }
        iVar6 = *(int *)(iVar9 + 0x78);
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)(*(int *)(iVar9 + 0x7c) - iVar6 >> 2));
    }
    local_54[0] = param_3;
    local_44 = local_80;
    local_54[1] = 0xffffffff;
    local_38 = 0xffffffff;
    local_4c = (double)CONCAT44(uStack_64,local_68);
    local_40 = local_7c;
    local_3c = 0;
    piVar7 = local_54;
    piVar11 = local_34;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar11 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar11 = piVar11 + 1;
    }
    local_70 = local_70 * _DAT_0064a658 + _DAT_0064a770;
    local_34[7] = ((int)piVar5 - *param_2) / 0xc;
  }
LAB_0043d532:
  local_78 = (double)((ulonglong)local_78._4_4_ << 0x20);
  do {
    piVar7 = (int *)*param_2;
    if (piVar7 != (int *)param_2[1]) {
      do {
        iVar9 = piVar7[1];
        if (iVar9 != 0) {
          iVar6 = *(int *)(iVar9 + 0x78);
          bVar2 = false;
          uVar12 = 0;
          if (*(int *)(iVar9 + 0x7c) - iVar6 >> 2 != 0) {
            do {
              piStack_98 = &local_80;
              piStack_9c = &local_68;
              pdStack_a0 = &local_70;
              piStack_a4 = in_stack_0000002c;
              uStack_a8 = 0x43d584;
              iVar6 = (**(code **)(**(int **)(iVar6 + uVar12 * 4) + 0xc))();
              if (iVar6 != 0) {
                bVar2 = true;
                local_7c = uVar12;
              }
              iVar6 = *(int *)(iVar9 + 0x78);
              uVar12 = uVar12 + 1;
            } while (uVar12 < (uint)(*(int *)(iVar9 + 0x7c) - iVar6 >> 2));
            if (bVar2) {
              iVar9 = piVar7[1];
              local_44 = local_80;
              local_54[0] = *(int *)(iVar9 + 0xc);
              local_4c = (double)CONCAT44(uStack_64,local_68);
              local_54[1] = 0xffffffff;
              local_40 = local_7c;
              local_3c = 0;
              local_38 = 0xffffffff;
              piVar11 = local_54;
              piVar5 = local_34;
              for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar5 = *piVar11;
                piVar11 = piVar11 + 1;
                piVar5 = piVar5 + 1;
              }
              local_34[7] = ((int)piVar7 - *param_2) / 0xc;
              if (*(int *)(DAT_0068be60 + *piVar7 * 4) == *(int *)(iVar9 + 0x74)) {
                local_34[6] = local_34[6] | 1;
              }
              else {
                local_34[6] = local_34[6] & 0xfffffffe;
              }
              local_78 = (double)CONCAT44(local_78._4_4_,1);
            }
          }
        }
        piVar7 = piVar7 + 3;
      } while (piVar7 != (int *)param_2[1]);
      if ((int)local_78 != 0) break;
    }
    if (*param_2 == param_2[1]) break;
    local_70 = 1.79769313486232e+308;
    local_68 = 0;
    uStack_64 = 0;
    local_80 = 0;
    local_7c = 0;
  } while( true );
  if (local_34[0] == -1) {
    piStack_9c = local_54;
    piStack_98 = in_stack_0000002c;
    pdStack_a0 = (double *)0x43d6aa;
    piVar7 = (int *)FUN_004369e0();
    piVar11 = local_34;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar11 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar11 = piVar11 + 1;
    }
  }
  if (*param_2 != param_2[1]) {
    iVar9 = *(int *)(DAT_0068be60 + *(int *)(param_2[1] + -0xc) * 4);
    piVar7 = local_34;
    ppcVar13 = apcStack_b4;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar13 = (char *)*piVar7;
      piVar7 = piVar7 + 1;
      ppcVar13 = ppcVar13 + 1;
    }
    pdVar8 = (double *)FUN_00435cd0(local_54);
    dVar3 = *pdVar8 - *(double *)(iVar9 + 0x30);
    dVar4 = pdVar8[1] - *(double *)(iVar9 + 0x38);
    local_78 = pdVar8[2] - *(double *)(iVar9 + 0x40);
    if (SQRT(local_78 * local_78 + dVar4 * dVar4 + dVar3 * dVar3) < _DAT_0064a5a8) {
      local_34[1] = *(undefined4 *)(param_2[1] + -0xc);
    }
  }
  piVar7 = local_34;
  piVar11 = local_54;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar11 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar11 = piVar11 + 1;
  }
  piStack_98 = (int *)0x43d757;
  iVar9 = FUN_00423b20();
  if (iVar9 == 0) {
    piStack_98 = (int *)0x43d764;
    iVar9 = FUN_00423b50();
    if (iVar9 != 0) goto LAB_0043d768;
  }
  else {
LAB_0043d768:
    if ((((_DAT_0064a678 <= local_4c) && (local_4c <= _DAT_0064a670)) && (-1 < local_44)) &&
       (-1 < (int)local_40)) goto LAB_0043d7f1;
  }
  piStack_98 = (int *)local_34[6];
  piStack_9c = (int *)local_34[5];
  pdStack_a0 = (double *)local_34[4];
  piStack_a4 = (int *)local_34[3];
  uStack_a8 = local_34[2];
  iStack_ac = local_34[0];
  apcStack_b4[1] = s___d__g__d__d__x__0066bc0c;
  apcStack_b4[0] = &DAT_0077d640;
  FUN_0061c369();
  FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3f11,s_Invalid_id_0066bbf4,
               s_PositionId_0066bc00,&DAT_0077d640);
LAB_0043d7f1:
  piVar7 = local_34;
  piVar11 = param_1;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar11 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar11 = piVar11 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar10 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar10 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar10 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar10 = s_findPlayerPosition_vector<Hop>___0066d9c4;
  cVar1 = s_findPlayerPosition_vector<Hop>___0066d9c4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar10;
    }
  }
  ExceptionList = local_14;
  return param_1;
}

