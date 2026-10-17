
char * FUN_0040e7d0(undefined4 param_1,int *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcStack_d4;
  int **ppiStack_d0;
  int **ppiStack_cc;
  int *local_b8 [2];
  uint uStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  int aiStack_a4 [2];
  int iStack_9c;
  char acStack_98 [8];
  char cStack_90;
  char *apcStack_8c [2];
  uint uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 auStack_7c [12];
  int iStack_70;
  uint uStack_68;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  int *apiStack_40 [2];
  uint uStack_38;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063beba;
  pvStack_c = ExceptionList;
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  local_4 = 0;
  pcStack_d4 = (char *)0x40e80a;
  ExceptionList = &pvStack_c;
  piVar4 = (int *)FUN_00409000();
  local_4._0_1_ = 1;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppiStack_d0 = &param_2;
    pcStack_d4 = (char *)0x40e851;
    ppiStack_cc = (int **)piVar4;
    cVar3 = FUN_00408fd0();
    if ((cVar3 == '\0') && (param_2 != (int *)0x0)) {
      ppiStack_cc = (int **)0x1;
      ppiStack_d0 = (int **)0x40e86a;
      (**(code **)(*param_2 + 0xc))();
    }
  }
  param_4 = piVar4[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar4;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar4[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar4;
    param_3 = piVar4[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
     ((local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0 && (local_b8[0] != (int *)0x0)))) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40e8f5;
    (**(code **)(*local_b8[0] + 0xc))();
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = apiStack_40;
  pcStack_d4 = (char *)0x40e90a;
  piVar4 = (int *)FUN_00407e60();
  ppiStack_cc = (int **)0x40e918;
  FUN_004042a0();
  local_4._0_1_ = 3;
  if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
    iStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    ppiStack_cc = (int **)0x40e92a;
    iVar5 = (*(code *)**(undefined4 **)*piVar4)();
    if (iVar5 == 9) {
      iStack_70 = *piVar4;
      uStack_68 = piVar4[2];
      *(int *)(iStack_70 + 4) = *(int *)(iStack_70 + 4) + 1;
    }
    else {
      ppiStack_cc = (int **)s_Identifier_0066be4c;
      ppiStack_d0 = (int **)0x40e93b;
      ppiStack_d0 = (int **)(**(code **)(*(int *)*piVar4 + 4))();
      pcStack_d4 = (char *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4._0_1_ = 5;
  if (((((uStack_38 & 0x10000) == 0) && (apiStack_40[0] != (int *)0x0)) &&
      (apiStack_40[0][1] = apiStack_40[0][1] + -1, apiStack_40[0][1] == 0)) &&
     (apiStack_40[0] != (int *)0x0)) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40e9a4;
    (**(code **)(*apiStack_40[0] + 0xc))();
  }
  ppiStack_cc = (int **)0x70;
  ppiStack_d0 = (int **)0x40e9ab;
  pcVar6 = (char *)FUN_00631d33();
  local_4._0_1_ = 6;
  pcStack_a8 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    if (iStack_70 == 0) {
      ppiStack_cc = (int **)0x1;
      ppiStack_d0 = (int **)0x0;
      pcStack_d4 = (char *)0x40e9d5;
      FUN_004a5470();
    }
    if ((uStack_68 & 0x10000) != 0) {
      ppiStack_cc = (int **)0x1;
      ppiStack_d0 = (int **)0x4;
      pcStack_d4 = (char *)0x40e9e7;
      FUN_004a5470();
    }
    ppiStack_cc = *(int ***)(iStack_70 + 0xc);
    ppiStack_d0 = (int **)0x40e9f9;
    FUN_00470960();
    ppiStack_cc = (int **)&uStack_80;
    local_4._0_1_ = 7;
    ppiStack_d0 = (int **)0x40ea0e;
    FUN_00478a20();
    ppiStack_cc = (int **)&uStack_7e;
    local_4._0_1_ = 8;
    pcVar6[0x18] = -1;
    pcVar6[0x19] = -1;
    pcVar6[0x1a] = -1;
    pcVar6[0x1b] = -1;
    ppiStack_d0 = (int **)0x40ea26;
    FUN_00478a20();
    ppiStack_cc = (int **)&uStack_7d;
    local_4._0_1_ = 9;
    ppiStack_d0 = (int **)0x40ea3b;
    FUN_00478a20();
    ppiStack_cc = (int **)FUN_00449a70;
    ppiStack_d0 = (int **)&LAB_0040f730;
    pcStack_d4 = (char *)0x2;
    pcVar6[0x40] = -1;
    pcVar6[0x41] = -1;
    pcVar6[0x42] = -1;
    pcVar6[0x43] = -1;
    local_4._0_1_ = 10;
    pcVar6[0x44] = -1;
    pcVar6[0x45] = -1;
    pcVar6[0x46] = -1;
    pcVar6[0x47] = -1;
    FUN_0061d173(pcVar6 + 0x48,0xc);
    ppiStack_cc = (int **)&uStack_7f;
    local_4._0_1_ = 0xb;
    pcVar6[0x60] = '\0';
    pcVar6[0x61] = '\0';
    pcVar6[0x62] = '\0';
    pcVar6[99] = '\0';
    ppiStack_d0 = (int **)0x40ea78;
    FUN_00478a20();
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40ea92;
  pcStack_ac = pcVar6;
  piVar4 = (int *)FUN_00409000();
  local_4._0_1_ = 0xc;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppiStack_d0 = &param_2;
    pcStack_d4 = (char *)0x40ead4;
    ppiStack_cc = (int **)piVar4;
    cVar3 = FUN_00408fd0();
    if ((cVar3 == '\0') && (param_2 != (int *)0x0)) {
      ppiStack_cc = (int **)0x1;
      ppiStack_d0 = (int **)0x40eaed;
      (**(code **)(*param_2 + 0xc))();
    }
  }
  param_4 = piVar4[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar4;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar4[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar4;
    param_3 = piVar4[1];
  }
  local_4._0_1_ = 5;
  if (((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
      (local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0)) && (local_b8[0] != (int *)0x0)) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40eb78;
    (**(code **)(*local_b8[0] + 0xc))();
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40eb8a;
  piVar4 = (int *)FUN_00407e60();
  iVar5 = *piVar4;
  puVar1 = (uint *)(pcVar6 + 0xc);
  puVar11 = (uint *)(iVar5 + 0xc);
  local_4._0_1_ = 0xd;
  if (puVar11 != puVar1) {
    ppiStack_d0 = *(int ***)(iVar5 + 0x10);
    pcStack_d4 = (char *)*puVar11;
    ppiStack_cc = (int **)*puVar1;
    pcVar12 = (char *)((int)ppiStack_d0 - (int)pcStack_d4);
    pcStack_a8 = pcVar12;
    if ((char *)(*(int *)(pcVar6 + 0x14) - (int)ppiStack_cc) < pcVar12) {
      pcVar2 = pcStack_d4;
      pcStack_d4 = pcVar12;
      ppiStack_cc = ppiStack_d0;
      ppiStack_d0 = (int **)pcVar2;
      uVar7 = FUN_00458d60();
      ppiStack_d0 = (int **)*puVar1;
      ppiStack_cc = (int **)(*(int *)(pcVar6 + 0x14) - (int)ppiStack_d0);
      if (ppiStack_cc != (int **)0x0) {
        pcStack_d4 = (char *)0x40ebda;
        FUN_0044b440();
      }
      *puVar1 = uVar7;
      *(char **)(pcVar6 + 0x14) = pcVar12 + uVar7;
    }
    else if ((char *)(*(int *)(pcVar6 + 0x10) - (int)ppiStack_cc) < pcVar12) {
      ppiStack_d0 = (int **)(pcStack_d4 + (*(int *)(pcVar6 + 0x10) - (int)ppiStack_cc));
      FUN_00407250();
      FUN_00407250((*(int *)(pcVar6 + 0x10) - *puVar1) + *puVar11,*(undefined4 *)(iVar5 + 0x10),
                   *(int *)(pcVar6 + 0x10));
      pcVar12 = pcStack_a8;
    }
    else {
      FUN_00407250();
      pcVar12 = pcStack_a8;
    }
    *(char **)(pcVar6 + 0x10) = pcVar12 + *puVar1;
    pcVar6 = pcStack_ac;
  }
  local_4._0_1_ = 5;
  if ((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
     ((local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0 && (local_b8[0] != (int *)0x0)))) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40ec6e;
    (**(code **)(*local_b8[0] + 0xc))();
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40ec80;
  piVar4 = (int *)FUN_00409000();
  local_4._0_1_ = 0xe;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppiStack_d0 = &param_2;
    pcStack_d4 = (char *)0x40ecc2;
    ppiStack_cc = (int **)piVar4;
    cVar3 = FUN_00408fd0();
    if ((cVar3 == '\0') && (param_2 != (int *)0x0)) {
      ppiStack_cc = (int **)0x1;
      ppiStack_d0 = (int **)0x40ecdb;
      (**(code **)(*param_2 + 0xc))();
    }
  }
  param_4 = piVar4[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar4;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar4[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar4;
    param_3 = piVar4[1];
  }
  local_4._0_1_ = 5;
  if (((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
      (local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0)) && (local_b8[0] != (int *)0x0)) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40ed66;
    (**(code **)(*local_b8[0] + 0xc))();
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40ed78;
  FUN_00407e60();
  local_4._0_1_ = 0xf;
  ppiStack_cc = (int **)0x40ed8a;
  uVar8 = FUN_004b0f30();
  *(undefined4 *)(pcVar6 + 0x18) = uVar8;
  local_4._0_1_ = 5;
  if ((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
     ((local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0 && (local_b8[0] != (int *)0x0)))) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40edc0;
    (**(code **)(*local_b8[0] + 0xc))();
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40edd2;
  piVar4 = (int *)FUN_00409000();
  local_4._0_1_ = 0x10;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppiStack_d0 = &param_2;
    pcStack_d4 = (char *)0x40ee14;
    ppiStack_cc = (int **)piVar4;
    cVar3 = FUN_00408fd0();
    if ((cVar3 == '\0') && (param_2 != (int *)0x0)) {
      ppiStack_cc = (int **)0x1;
      ppiStack_d0 = (int **)0x40ee2d;
      (**(code **)(*param_2 + 0xc))();
    }
  }
  param_4 = piVar4[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar4;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar4[2];
      *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 1;
    }
  }
  else {
    param_2 = (int *)*piVar4;
    param_3 = piVar4[1];
  }
  local_4._0_1_ = 5;
  if (((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
      (local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0)) && (local_b8[0] != (int *)0x0)) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40eeb8;
    (**(code **)(*local_b8[0] + 0xc))();
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40eeca;
  iVar5 = FUN_00407e60();
  cVar3 = *(char *)(iVar5 + 8);
  if ((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
     ((local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0 && (local_b8[0] != (int *)0x0)))) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40ef08;
    (**(code **)(*local_b8[0] + 0xc))();
  }
  if (cVar3 == '\x06') {
    ppiStack_cc = &param_2;
    ppiStack_d0 = local_b8;
    pcStack_d4 = (char *)0x40ef1e;
    FUN_00407e60();
    local_4._0_1_ = 0x11;
    ppiStack_cc = (int **)0x40ef30;
    uVar8 = FUN_004b0f30();
    *(undefined4 *)(pcVar6 + 0x60) = uVar8;
    local_4._0_1_ = 5;
    if ((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
       ((local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0 && (local_b8[0] != (int *)0x0))))
    {
      ppiStack_cc = (int **)0x1;
      ppiStack_d0 = (int **)0x40ef68;
      (**(code **)(*local_b8[0] + 0xc))();
    }
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40ef7a;
  ppiStack_cc = (int **)FUN_00409000();
  local_4._0_1_ = 0x12;
  ppiStack_d0 = (int **)0x40ef92;
  FUN_0040c060();
  local_4 = CONCAT31(local_4._1_3_,5);
  if (((((uStack_b0 & 0x10000) == 0) && (local_b8[0] != (int *)0x0)) &&
      (local_b8[0][1] = local_b8[0][1] + -1, local_b8[0][1] == 0)) && (local_b8[0] != (int *)0x0)) {
    ppiStack_cc = (int **)0x1;
    ppiStack_d0 = (int **)0x40efc7;
    (**(code **)(*local_b8[0] + 0xc))();
  }
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40efd9;
  FUN_00407e60();
  while ((char)uStack_b0 == '\x02') {
    ppiStack_cc = local_b8;
    ppiStack_d0 = (int **)acStack_98;
    pcStack_d4 = (char *)0x40eff6;
    FUN_00407e60();
    pcStack_d4 = acStack_98;
    uVar8 = FUN_00407e60(auStack_4c);
    local_4._0_1_ = 0x16;
    cVar3 = FUN_004b6670(uVar8,&DAT_0066be44);
    local_4._0_1_ = 0x15;
    ppiStack_cc = (int **)0x40f031;
    FUN_00492340();
    if (cVar3 != '\0') {
      ppiStack_cc = (int **)acStack_98;
      ppiStack_d0 = (int **)auStack_58;
      pcStack_d4 = (char *)0x40f048;
      ppiStack_cc = (int **)FUN_00409000();
      local_4._0_1_ = 0x17;
      ppiStack_d0 = (int **)0x40f05d;
      FUN_0040c060();
      local_4._0_1_ = 0x15;
      ppiStack_cc = (int **)0x40f06e;
      FUN_00492340();
      ppiStack_cc = (int **)acStack_98;
      ppiStack_d0 = (int **)auStack_28;
      pcStack_d4 = (char *)0x40f080;
      ppiStack_cc = (int **)FUN_00407e60();
      local_4._0_1_ = 0x18;
      ppiStack_d0 = (int **)0x40f095;
      FUN_004556d0();
      local_4 = CONCAT31(local_4._1_3_,0x1a);
      ppiStack_cc = (int **)0x40f0a9;
      FUN_00492340();
      ppiStack_cc = (int **)0x40f0b5;
      ppiStack_cc = (int **)FUN_0040f710();
      pcVar6 = pcStack_ac;
      ppiStack_d0 = (int **)0x40f0c2;
      FUN_004487c0();
      if ((iStack_9c != 0) || (aiStack_a4[0] != 0)) {
        ppiStack_cc = (int **)0x40f0df;
        iVar5 = FUN_004b8250();
        iVar10 = -1;
        pcVar12 = *(char **)(iVar5 + 0xc);
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar3 != '\0');
        if (iVar10 != -2) {
          ppiStack_cc = (int **)0x40f0f7;
          iVar5 = FUN_004b8250();
          ppiStack_cc = *(int ***)(iVar5 + 0xc);
          iVar5 = *(int *)(pcVar6 + 0x20);
          ppiStack_d0 = (int **)&pcStack_a8;
          pcStack_d4 = (char *)0x40f108;
          puVar9 = (undefined4 *)FUN_004365f0();
          *(undefined4 *)(iVar5 + -0x10) = *puVar9;
          if ((*(byte *)(*(int *)(DAT_0068be60 + *(int *)(*(int *)(pcVar6 + 0x20) + -0x10) * 4) +
                        0xc) & 8) != 0) {
            ppiStack_cc = (int **)0x40f12e;
            iVar5 = FUN_004b8250();
            ppiStack_d0 = *(int ***)(iVar5 + 0xc);
            ppiStack_cc = (int **)&DAT_0068c120;
            pcStack_d4 = s_Isolated_node_used_as_a_town_nod_0066be20;
            FUN_00401010(0,200,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xb85);
          }
        }
      }
      ppiStack_cc = (int **)acStack_98;
      ppiStack_d0 = (int **)auStack_34;
      pcStack_d4 = (char *)0x40f16c;
      ppiStack_cc = (int **)FUN_00409000();
      local_4._0_1_ = 0x1b;
      ppiStack_d0 = (int **)0x40f181;
      FUN_0040c060();
      local_4 = CONCAT31(local_4._1_3_,0x1a);
      ppiStack_cc = (int **)0x40f195;
      FUN_00492340();
      while (cStack_90 == '\x02') {
        ppiStack_cc = (int **)acStack_98;
        ppiStack_d0 = (int **)apcStack_8c;
        pcStack_d4 = (char *)0x40f1be;
        FUN_00407e60();
        local_4._0_1_ = 0x1c;
        if ((uStack_84 != 0) || (apcStack_8c[0] != (char *)0x0)) {
          ppiStack_d0 = (int **)apcStack_8c;
          ppiStack_cc = (int **)s_unload_0066be18;
          pcStack_d4 = (char *)0x40f1ec;
          cVar3 = FUN_004b6670();
          if (cVar3 == '\0') {
            ppiStack_d0 = (int **)apcStack_8c;
            ppiStack_cc = (int **)s_hidden_0066be10;
            pcStack_d4 = (char *)0x40f20c;
            cVar3 = FUN_004b6670();
            if (cVar3 == '\0') {
              ppiStack_d0 = (int **)apcStack_8c;
              ppiStack_cc = (int **)&DAT_0066bac0;
              pcStack_d4 = (char *)0x40f22d;
              cVar3 = FUN_004b6670();
              if (cVar3 == '\0') {
                ppiStack_d0 = (int **)apcStack_8c;
                ppiStack_cc = (int **)s_dummy_0066be08;
                pcStack_d4 = (char *)0x40f24d;
                cVar3 = FUN_004b6670();
                if (cVar3 == '\0') goto LAB_0040f25f;
                iVar5 = *(int *)(pcVar6 + 0x20);
                uVar7 = *(uint *)(iVar5 + -0xc) | 8;
              }
              else {
                iVar5 = *(int *)(pcVar6 + 0x20);
                uVar7 = *(uint *)(iVar5 + -0xc) | 4;
              }
            }
            else {
              iVar5 = *(int *)(pcVar6 + 0x20);
              uVar7 = *(uint *)(iVar5 + -0xc) | 2;
            }
          }
          else {
            iVar5 = *(int *)(pcVar6 + 0x20);
            uVar7 = *(uint *)(iVar5 + -0xc) | 1;
          }
          *(uint *)(iVar5 + -0xc) = uVar7;
        }
LAB_0040f25f:
        ppiStack_cc = (int **)acStack_98;
        ppiStack_d0 = (int **)auStack_64;
        pcStack_d4 = (char *)0x40f26e;
        ppiStack_cc = (int **)FUN_00409000();
        local_4._0_1_ = 0x1d;
        ppiStack_d0 = (int **)0x40f283;
        FUN_0040c060();
        local_4._0_1_ = 0x1c;
        ppiStack_cc = (int **)0x40f294;
        FUN_00492340();
        local_4 = CONCAT31(local_4._1_3_,0x1a);
        ppiStack_cc = (int **)0x40f2a5;
        FUN_00492340();
      }
      local_4._1_3_ = (uint3)((uint)local_4 >> 8);
      local_4._0_1_ = 0x15;
      ppiStack_cc = (int **)0x40f2c1;
      FUN_00492340();
    }
    local_4._0_1_ = 0x13;
    ppiStack_cc = (int **)0x40f2d2;
    FUN_00492340();
    ppiStack_cc = local_b8;
    ppiStack_d0 = (int **)auStack_7c;
    pcStack_d4 = (char *)0x40f2e1;
    ppiStack_cc = (int **)FUN_00409000();
    local_4._0_1_ = 0x14;
    ppiStack_d0 = (int **)0x40f2f6;
    FUN_0040c060();
    local_4 = CONCAT31(local_4._1_3_,0x13);
    ppiStack_cc = (int **)0x40f307;
    FUN_00492340();
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 5;
  ppiStack_cc = (int **)0x40f323;
  FUN_00492340();
  ppiStack_cc = &param_2;
  ppiStack_d0 = (int **)auStack_7c;
  pcStack_d4 = (char *)0x40f335;
  ppiStack_cc = (int **)FUN_00409000();
  local_4._0_1_ = 0x1e;
  ppiStack_d0 = (int **)0x40f34d;
  FUN_0040c060();
  local_4._0_1_ = 5;
  ppiStack_cc = (int **)0x40f35e;
  FUN_00492340();
  ppiStack_cc = &param_2;
  ppiStack_d0 = (int **)auStack_7c;
  pcStack_d4 = (char *)0x40f370;
  ppiStack_cc = (int **)FUN_00409000();
  local_4._0_1_ = 0x1f;
  ppiStack_d0 = (int **)0x40f388;
  FUN_0040c060();
  local_4 = CONCAT31(local_4._1_3_,5);
  ppiStack_cc = (int **)0x40f399;
  FUN_00492340();
  ppiStack_cc = &param_2;
  ppiStack_d0 = local_b8;
  pcStack_d4 = (char *)0x40f3ab;
  FUN_00407e60();
  pcVar6 = pcStack_ac;
  while ((char)uStack_b0 == '\x02') {
    ppiStack_cc = local_b8;
    ppiStack_d0 = (int **)aiStack_a4;
    pcStack_d4 = (char *)0x40f3d2;
    FUN_00407e60();
    pcStack_ac = (char *)&pcStack_d4;
    local_4._0_1_ = 0x22;
    FUN_00455dc0(aiStack_a4);
    uVar8 = FUN_004af560(auStack_7c,0);
    pcStack_ac = (char *)&pcStack_d4;
    local_4._0_1_ = 0x23;
    FUN_0044c9a0(uVar8);
    FUN_004051d0(&pcStack_a8);
    local_4._0_1_ = 0x22;
    ppiStack_cc = (int **)0x40f42c;
    FUN_00492340();
    ppiStack_cc = (int **)&pcStack_ac;
    pcStack_ac = pcStack_a8;
    ppiStack_d0 = (int **)0x40f440;
    FUN_00448800();
    local_4._0_1_ = 0x20;
    ppiStack_cc = (int **)0x40f450;
    FUN_00492340();
    ppiStack_cc = local_b8;
    ppiStack_d0 = (int **)auStack_64;
    pcStack_d4 = (char *)0x40f45f;
    ppiStack_cc = (int **)FUN_00409000();
    local_4._0_1_ = 0x21;
    ppiStack_d0 = (int **)0x40f474;
    FUN_0040c060();
    local_4 = CONCAT31(local_4._1_3_,0x20);
    ppiStack_cc = (int **)0x40f484;
    FUN_00492340();
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 5;
  ppiStack_cc = (int **)0x40f4a0;
  FUN_00492340();
  ppiStack_cc = &param_2;
  ppiStack_d0 = (int **)auStack_7c;
  pcStack_d4 = (char *)0x40f4b2;
  ppiStack_cc = (int **)FUN_00409000();
  local_4._0_1_ = 0x24;
  ppiStack_d0 = (int **)0x40f4ca;
  FUN_0040c060();
  local_4 = CONCAT31(local_4._1_3_,5);
  ppiStack_cc = (int **)0x40f4db;
  FUN_00492340();
  ppiStack_cc = &param_2;
  ppiStack_d0 = (int **)aiStack_a4;
  pcStack_d4 = (char *)0x40f4ed;
  FUN_00407e60();
  do {
    if ((char)iStack_9c != '\x02') {
      local_4._1_3_ = (uint3)((uint)local_4 >> 8);
      local_4._0_1_ = 5;
      ppiStack_cc = (int **)0x40f6c6;
      FUN_00492340();
      local_4 = (uint)local_4._1_3_ << 8;
      ppiStack_cc = (int **)0x40f6d7;
      FUN_00492340();
      local_4 = 0xffffffff;
      ppiStack_cc = (int **)0x40f6ee;
      FUN_00492340();
      ExceptionList = pvStack_c;
      return pcVar6;
    }
    ppiStack_cc = (int **)aiStack_a4;
    ppiStack_d0 = (int **)apcStack_8c;
    pcStack_d4 = (char *)0x40f50f;
    FUN_00407e60();
    local_4._0_1_ = 0x27;
    if ((uStack_84 & 0xff) == 3) {
      ppiStack_cc = (int **)apcStack_8c;
      ppiStack_d0 = (int **)0x40f536;
      FUN_004556d0();
      local_4._0_1_ = 0x28;
      ppiStack_cc = (int **)0x40f547;
      iVar5 = FUN_004b8250();
      ppiStack_cc = *(int ***)(iVar5 + 0xc);
      ppiStack_d0 = (int **)&pcStack_a8;
      pcStack_d4 = (char *)0x40f555;
      FUN_004365f0();
      *(char **)(pcVar6 + 0x44) = pcStack_a8;
LAB_0040f65f:
      local_4._0_1_ = 0x27;
      ppiStack_cc = (int **)0x40f664;
      FUN_00492340();
    }
    else if ((uStack_84 & 0xff) == 2) {
      ppiStack_cc = (int **)apcStack_8c;
      ppiStack_d0 = (int **)0x40f587;
      FUN_00455dc0();
      while ((char)uStack_b0 == '\x02') {
        ppiStack_cc = local_b8;
        ppiStack_d0 = (int **)acStack_98;
        pcStack_d4 = (char *)0x40f5a1;
        FUN_00407e60();
        local_4._0_1_ = 0x2b;
        if (cStack_90 == '\x03') {
          ppiStack_cc = (int **)acStack_98;
          ppiStack_d0 = (int **)0x40f5c2;
          FUN_004556d0();
          local_4._0_1_ = 0x2c;
          ppiStack_cc = (int **)0x40f5d3;
          iVar5 = FUN_004b8250();
          ppiStack_cc = *(int ***)(iVar5 + 0xc);
          ppiStack_d0 = (int **)&pcStack_ac;
          pcStack_d4 = (char *)0x40f5e1;
          FUN_004365f0();
          ppiStack_cc = (int **)&pcStack_ac;
          ppiStack_d0 = (int **)0x40f5f0;
          FUN_00448830();
          local_4._0_1_ = 0x2b;
          ppiStack_cc = (int **)0x40f601;
          FUN_00492340();
        }
        local_4._0_1_ = 0x29;
        ppiStack_cc = (int **)0x40f611;
        FUN_00492340();
        ppiStack_cc = local_b8;
        ppiStack_d0 = (int **)auStack_7c;
        pcStack_d4 = (char *)0x40f620;
        ppiStack_cc = (int **)FUN_00409000();
        local_4._0_1_ = 0x2a;
        ppiStack_d0 = (int **)0x40f635;
        FUN_0040c060();
        local_4._0_1_ = 0x29;
        ppiStack_cc = (int **)0x40f645;
        FUN_00492340();
      }
      goto LAB_0040f65f;
    }
    local_4._0_1_ = 0x25;
    ppiStack_cc = (int **)0x40f675;
    FUN_00492340();
    ppiStack_cc = (int **)aiStack_a4;
    ppiStack_d0 = (int **)auStack_64;
    pcStack_d4 = (char *)0x40f684;
    ppiStack_cc = (int **)FUN_00409000();
    local_4._0_1_ = 0x26;
    ppiStack_d0 = (int **)0x40f699;
    FUN_0040c060();
    local_4 = CONCAT31(local_4._1_3_,0x25);
    ppiStack_cc = (int **)0x40f6aa;
    FUN_00492340();
  } while( true );
}

