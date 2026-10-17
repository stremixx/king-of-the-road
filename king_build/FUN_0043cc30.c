
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043cc30(double *param_1,double *param_2)

{
  char cVar1;
  double dVar2;
  double dVar3;
  int *piVar4;
  double *pdVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  undefined8 *puVar11;
  char **ppcVar12;
  char *apcStack_13c [4];
  int *piStack_12c;
  char *pcStack_128;
  char *pcStack_124;
  double *pdStack_120;
  char *apcStack_11c [4];
  undefined4 uStack_10c;
  undefined4 *puStack_108;
  double *pdStack_104;
  double *local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  double *local_cc;
  double *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_b8;
  double local_a4;
  double local_9c;
  char *local_94;
  undefined *local_90;
  undefined4 local_8c [2];
  double local_84;
  int local_7c;
  int local_78;
  int local_6c [7];
  int local_50;
  int local_4c [7];
  int local_30;
  double local_2c;
  double local_24;
  double local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063db2b;
  local_14 = ExceptionList;
  local_100 = (double *)0x8;
  pdStack_104 = (double *)s_START__0066b830;
  local_94 = s__setPlayerPositionLimited_Player_0066d984;
  local_90 = &DAT_0071d768;
  puStack_108 = (undefined4 *)0x43cc75;
  ExceptionList = &local_14;
  FUN_00401870();
  local_100 = (double *)s__setPlayerPositionLimited_Player_0066d984;
  pdStack_104 = (double *)0x43cc84;
  FUN_004018b0();
  local_c = 0;
  pdStack_104 = *(double **)(param_1 + 3);
  pdVar5 = param_1 + 3;
  if (pdStack_104 == *(double **)((int)param_1 + 0x1c)) {
    puStack_108 = &param_1;
    local_100 = param_2;
    local_f0 = (double)CONCAT44(local_f0._4_4_,&pdStack_104);
    uStack_10c = 0x43ccb3;
    FUN_0041d3f0();
    puStack_108 = (undefined4 *)0x43ccb8;
    FUN_0043dd40();
    local_100 = (double *)0x8;
    pdStack_104 = (double *)s_COMPL__0066b7ec;
    puStack_108 = (undefined4 *)0x43cccc;
    FUN_00401870();
    local_100 = (double *)s__setPlayerPositionLimited_Player_0066d984;
    pdStack_104 = (double *)0x43ccdb;
    FUN_004018b0();
    ExceptionList = local_14;
    return;
  }
  pdStack_104 = (double *)&local_e8;
  pdVar10 = param_1 + 5;
  puVar11 = &local_e0;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)puVar11 = *(undefined4 *)pdVar10;
    pdVar10 = (double *)((int)pdVar10 + 4);
    puVar11 = (undefined8 *)((int)puVar11 + 4);
  }
  local_100 = (double *)0x0;
  local_e8 = (double)(ulonglong)DAT_0066b7a8;
  puVar11 = &local_e0;
  ppcVar12 = &pcStack_124;
  for (pcStack_128 = (char *)0x8; pcStack_128 != (char *)0x0;
      pcStack_128 = (char *)((int)pcStack_128 + -1)) {
    *ppcVar12 = (char *)*(undefined4 *)puVar11;
    puVar11 = (undefined8 *)((int)puVar11 + 4);
    ppcVar12 = ppcVar12 + 1;
  }
  local_e8 = (double)CONCAT44(_DAT_0066b7ac,(undefined4)local_e8);
  piStack_12c = (int *)&param_1;
  local_f0 = (double)CONCAT44(local_f0._4_4_,apcStack_13c + 5);
  apcStack_13c[3] = (char *)0x43cd39;
  FUN_0041d3f0();
  piStack_12c = local_4c;
  apcStack_13c[3] = (char *)0x43cd46;
  FUN_0043bff0();
  pdStack_104 = (double *)&local_e8;
  piStack_12c = (int *)&param_1;
  local_100 = (double *)0x0;
  puVar11 = &local_e0;
  ppcVar12 = &pcStack_124;
  for (pcStack_128 = (char *)0x8; pcStack_128 != (char *)0x0; pcStack_128 = pcStack_128 + -1) {
    *ppcVar12 = (char *)*(undefined4 *)puVar11;
    puVar11 = (undefined8 *)((int)puVar11 + 4);
    ppcVar12 = ppcVar12 + 1;
  }
  local_e8 = -(double)CONCAT44(_DAT_0066b7ac,DAT_0066b7a8);
  local_f0 = (double)CONCAT44(local_f0._4_4_,apcStack_13c + 5);
  apcStack_13c[3] = (char *)0x43cd7c;
  FUN_0041d3f0();
  piStack_12c = local_6c;
  apcStack_13c[3] = (char *)0x43cd89;
  FUN_0043bff0();
  iVar8 = *(int *)pdVar5;
  pdStack_120 = pdVar5;
  if ((*(int *)(DAT_0068be98 + local_4c[0] * 4) != *(int *)(iVar8 + 4 + local_30 * 0xc)) &&
     (local_4c[1] != *(int *)(iVar8 + local_30 * 0xc))) {
    piVar4 = local_4c;
    ppcVar12 = apcStack_11c;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar12 = (char *)*piVar4;
      piVar4 = piVar4 + 1;
      ppcVar12 = ppcVar12 + 1;
    }
    pcStack_124 = (char *)0x43cdd9;
    FUN_0043abf0();
    puStack_108 = &param_1;
    local_100 = param_2;
    local_f0 = (double)CONCAT44(local_f0._4_4_,&pdStack_104);
    uStack_10c = 0x43cdf0;
    FUN_0041d3f0();
    puStack_108 = (undefined4 *)0x43cdf5;
    FUN_0043dd40();
    local_100 = (double *)0x8;
    pdStack_104 = (double *)s_COMPL__0066b7ec;
    puStack_108 = (undefined4 *)0x43ce09;
    FUN_00401870();
    local_100 = (double *)s__setPlayerPositionLimited_Player_0066d984;
    pdStack_104 = (double *)0x43ce18;
    FUN_004018b0();
    ExceptionList = local_14;
    return;
  }
  piVar4 = (int *)(iVar8 + local_50 * 0xc);
  if ((*(int *)(DAT_0068be98 + local_6c[0] * 4) != piVar4[1]) && (local_6c[1] != *piVar4)) {
    piVar4 = local_6c;
    ppcVar12 = apcStack_11c;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar12 = (char *)*piVar4;
      piVar4 = piVar4 + 1;
      ppcVar12 = ppcVar12 + 1;
    }
    pcStack_124 = (char *)0x43ce71;
    FUN_0043abf0();
    puStack_108 = &param_1;
    local_100 = param_2;
    local_f0 = (double)CONCAT44(local_f0._4_4_,&pdStack_104);
    uStack_10c = 0x43ce88;
    FUN_0041d3f0();
    puStack_108 = (undefined4 *)0x43ce8d;
    FUN_0043dd40();
    local_100 = (double *)0x8;
    pdStack_104 = (double *)s_COMPL__0066b7ec;
    puStack_108 = (undefined4 *)0x43cea1;
    FUN_00401870();
    local_100 = (double *)s__setPlayerPositionLimited_Player_0066d984;
    pdStack_104 = (double *)0x43ceb0;
    FUN_004018b0();
    ExceptionList = local_14;
    return;
  }
  piVar4 = local_4c;
  ppcVar12 = apcStack_11c;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar12 = (char *)*piVar4;
    piVar4 = piVar4 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  piVar4 = local_6c;
  ppcVar12 = apcStack_13c;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar12 = (char *)*piVar4;
    piVar4 = piVar4 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  local_c0 = 0xffffffff;
  local_bc = 0x7fefffff;
  FUN_0043c3b0(param_2,&local_c0,pdVar5,&local_e0);
  pdStack_104 = (double *)&local_f0;
  local_f0 = (double)CONCAT44(local_f0._4_4_,&local_100);
  local_100 = param_1;
  puStack_108 = (undefined4 *)0x43cf2a;
  piVar4 = (int *)FUN_0040a590();
  iVar8 = *(int *)(DAT_0068be60 + *piVar4 * 4);
  pdStack_120 = (double *)local_8c;
  puVar11 = &local_e0;
  ppcVar12 = apcStack_11c;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *ppcVar12 = (char *)*(undefined4 *)puVar11;
    puVar11 = (undefined8 *)((int)puVar11 + 4);
    ppcVar12 = ppcVar12 + 1;
  }
  pcStack_124 = (char *)0x43cf55;
  pdVar5 = (double *)FUN_00435cd0();
  dVar2 = *pdVar5 - *(double *)(iVar8 + 0x30);
  local_a4 = pdVar5[1] - *(double *)(iVar8 + 0x38);
  dVar3 = pdVar5[2] - *(double *)(iVar8 + 0x40);
  if (SQRT(dVar3 * dVar3 + local_a4 * local_a4 + dVar2 * dVar2) < _DAT_0064a5a8) {
    pdStack_104 = (double *)&local_f0;
    local_f0 = (double)CONCAT44(local_f0._4_4_,&local_100);
    local_100 = param_1;
    puStack_108 = (undefined4 *)0x43cfad;
    puVar6 = (undefined4 *)FUN_0040a590();
    local_e0._4_4_ = *puVar6;
  }
  puVar11 = &local_e0;
  puVar6 = local_8c;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = *(undefined4 *)puVar11;
    puVar11 = (undefined8 *)((int)puVar11 + 4);
    puVar6 = puVar6 + 1;
  }
  local_100 = (double *)0x43cfce;
  iVar8 = FUN_00423b20();
  if (iVar8 == 0) {
    local_100 = (double *)0x43cfdb;
    iVar8 = FUN_00423b50();
    if (iVar8 != 0) goto LAB_0043cfdf;
  }
  else {
LAB_0043cfdf:
    if ((((_DAT_0064a678 <= local_84) && (local_84 <= _DAT_0064a670)) && (-1 < local_7c)) &&
       (-1 < local_78)) goto LAB_0043d06e;
  }
  local_100 = local_c8;
  pdStack_104 = local_cc;
  puStack_108 = (undefined4 *)local_d0;
  uStack_10c = local_d4;
  apcStack_11c[3] = (char *)local_d8;
  apcStack_11c[2] = (char *)(undefined4)local_e0;
  apcStack_11c[1] = s___d__g__d__d__x__0066bc0c;
  apcStack_11c[0] = &DAT_0077d640;
  pdStack_120 = (double *)0x43d044;
  FUN_0061c369();
  pdStack_120 = (double *)&DAT_0077d640;
  pcStack_124 = s_PositionId_0066bc00;
  pcStack_128 = s_Invalid_id_0066bbf4;
  piStack_12c = (int *)0x3e9d;
  apcStack_13c[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
  apcStack_13c[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
  apcStack_13c[1] = (char *)0x64;
  apcStack_13c[0] = (char *)0x21;
  FUN_00401010();
LAB_0043d06e:
  puVar11 = &local_e0;
  ppcVar12 = apcStack_11c;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar12 = (char *)*(undefined4 *)puVar11;
    puVar11 = (undefined8 *)((int)puVar11 + 4);
    ppcVar12 = ppcVar12 + 1;
  }
  pdStack_120 = &local_2c;
  pcStack_124 = (char *)0x43d08b;
  FUN_00435cd0();
  local_a4 = local_24 - param_2[1];
  local_b8 = local_1c - param_2[2];
  dVar2 = (local_2c - *param_2) * (local_2c - *param_2);
  dVar3 = SQRT(local_b8 * local_b8 + local_a4 * local_a4 + dVar2);
  local_f0._4_4_ = (undefined4)((ulonglong)local_a4 >> 0x20);
  local_9c = local_b8;
  if (_DAT_0064a928 < dVar3) {
    local_100 = param_2;
    pdStack_104 = param_2;
    puStack_108 = &param_1;
    local_f0 = (double)CONCAT44(local_f0._4_4_,&pdStack_104);
    uStack_10c = 0x43d0fe;
    FUN_0041d3f0();
    puStack_108 = (undefined4 *)0x43d103;
    FUN_0043dd40();
    local_100 = (double *)0x8;
    pdStack_104 = (double *)s_COMPL__0066b7ec;
    puStack_108 = (undefined4 *)0x43d117;
    FUN_00401870();
    local_100 = (double *)s__setPlayerPositionLimited_Player_0066d984;
    pdStack_104 = (double *)0x43d126;
    FUN_004018b0();
    ExceptionList = local_14;
    return;
  }
  if ((dVar3 <= _DAT_0064a778) || (local_b8 <= SQRT(local_a4 * local_a4 + dVar2))) {
    local_100 = (double *)&local_e0;
    pdStack_104 = (double *)0x43d233;
    local_f0 = local_a4;
    FUN_004742e0();
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar7 = s__setPlayerPositionLimited_Player_0066d984;
    cVar1 = s__setPlayerPositionLimited_Player_0066d984[0];
    if (DAT_0071d774 != 0) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar7;
      }
    }
  }
  else {
    local_100 = param_2;
    pdStack_104 = param_2;
    puStack_108 = &param_1;
    local_f0 = (double)CONCAT44(local_f0._4_4_,&pdStack_104);
    uStack_10c = 0x43d17c;
    FUN_0041d3f0();
    puStack_108 = (undefined4 *)0x43d181;
    FUN_0043dd40();
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar7 = s__setPlayerPositionLimited_Player_0066d984;
    if ((DAT_0071d774 != 0) && (s__setPlayerPositionLimited_Player_0066d984[0] != '\0')) {
      while (DAT_0071d778 < DAT_0071d770) {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        DAT_0071d778 = DAT_0071d778 + 1;
        if (*pcVar7 == '\0') {
          ExceptionList = local_14;
          return;
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

