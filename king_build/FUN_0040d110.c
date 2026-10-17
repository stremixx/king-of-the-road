
void FUN_0040d110(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  char *pcStack_1dc;
  int **ppiStack_1d8;
  int **ppiStack_1d4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  int aiStack_1b4 [2];
  int iStack_1ac;
  int *piStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  int *local_19c [2];
  uint local_194;
  undefined4 local_190;
  int *apiStack_18c [2];
  uint uStack_184;
  int *apiStack_180 [2];
  uint uStack_178;
  int *local_174;
  undefined2 local_170;
  undefined1 local_16e;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  char acStack_158 [4];
  char acStack_154 [4];
  char acStack_150 [4];
  undefined1 local_14c [12];
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [36];
  undefined4 auStack_110 [4];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  double dStack_e8;
  double dStack_e0;
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar1 = DAT_006897b4;
  iVar8 = DAT_006897b0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bc34;
  pvStack_c = ExceptionList;
  ppiStack_1d4 = (int **)DAT_006897b0;
  ppiStack_1d8 = (int **)DAT_006897b4;
  pcStack_1dc = DAT_006897b4;
  ExceptionList = &pvStack_c;
  pcVar4 = (char *)FUN_00457ae0();
  pcVar2 = DAT_006897b4;
  for (; pcVar4 != pcVar2; pcVar4 = pcVar4 + 0xc) {
    ppiStack_1d4 = (int **)0x0;
    ppiStack_1d8 = (int **)0x40d15b;
    FUN_0046c790();
  }
  iVar8 = (int)((ulonglong)((longlong)((int)pcVar1 - iVar8) * -0x2aaaaaab) >> 0x20);
  local_190 = 1;
  DAT_006897b4 = DAT_006897b4 + ((iVar8 >> 1) - (iVar8 >> 0x1f)) * 0xc;
  ppiStack_1d4 = (int **)&local_190;
  ppiStack_1d8 = &local_174;
  pcStack_1dc = (char *)0x0;
  local_174 = DAT_0066bdd0;
  local_170 = DAT_0066bdd4;
  local_16e = DAT_0066bdd6;
  piVar5 = (int *)FUN_00455aa0(local_14c);
  local_4 = 0;
  ppiStack_1d4 = (int **)0x40d1db;
  FUN_004042a0();
  local_4._0_1_ = 1;
  if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
    local_19c[0] = (int *)0x0;
    local_194 = 0;
  }
  else {
    ppiStack_1d4 = (int **)0x40d1ed;
    iVar8 = (*(code *)**(undefined4 **)*piVar5)();
    if (iVar8 == 0xb) {
      local_19c[0] = (int *)*piVar5;
      local_194 = piVar5[2];
      local_19c[0][1] = local_19c[0][1] + 1;
    }
    else {
      ppiStack_1d4 = (int **)&DAT_0066bb28;
      ppiStack_1d8 = (int **)0x40d200;
      ppiStack_1d8 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
      pcStack_1dc = (char *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  ppiStack_1d4 = (int **)0x40d241;
  FUN_00492340();
  if (local_19c[0] == (int *)0x0) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x0;
    pcStack_1dc = (char *)0x40d24f;
    FUN_004a5470();
  }
  if ((local_194 & 0x10000) != 0) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x4;
    pcStack_1dc = (char *)0x40d268;
    FUN_004a5470();
  }
  ppiStack_1d4 = (int **)0x40d274;
  iVar8 = (**(code **)(*local_19c[0] + 0x28))();
  if (iVar8 != 0) {
    ppiStack_1d8 = &local_174;
    ppiStack_1d4 = (int **)&DAT_0068c120;
    pcStack_1dc = s_Cannot_open_0066bb1c;
    FUN_00401010(0x17,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xabe);
  }
  puStack_15c = (undefined1 *)&pcStack_1dc;
  FUN_00455dc0(local_19c);
  FUN_004b4cb0(&piStack_1a8,&DAT_0068aab8);
  if ((uStack_1a0 & 0x10000) == 0) {
    uStack_1bc = 0;
    if (piStack_1a8 == (int *)0x0) {
      piStack_1c0 = (int *)0x0;
      uStack_1b8 = 0;
    }
    else {
      piStack_1c0 = piStack_1a8;
      uStack_1b8 = uStack_1a0;
      piStack_1a8[1] = piStack_1a8[1] + 1;
    }
  }
  else {
    uStack_1b8 = uStack_1a0;
    piStack_1c0 = piStack_1a8;
    uStack_1bc = uStack_1a4;
  }
  cVar3 = (char)uStack_1b8;
  while (cVar3 == '\x02') {
    ppiStack_1d4 = &piStack_1c0;
    ppiStack_1d8 = apiStack_180;
    pcStack_1dc = (char *)0x40d32f;
    ppiStack_1d4 = (int **)FUN_00407e60();
    local_4 = CONCAT31(local_4._1_3_,7);
    ppiStack_1d8 = (int **)DAT_006897b4;
    if (DAT_006897b4 == DAT_006897b8) {
      pcStack_1dc = (char *)0x40d36d;
      FUN_0044c6b0();
    }
    else {
      pcStack_1dc = (char *)0x40d351;
      FUN_00460920();
      DAT_006897b4 = DAT_006897b4 + 0xc;
    }
    local_4._0_1_ = 5;
    if (((((uStack_178 & 0x10000) == 0) && (apiStack_180[0] != (int *)0x0)) &&
        (apiStack_180[0][1] = apiStack_180[0][1] + -1, apiStack_180[0][1] == 0)) &&
       (apiStack_180[0] != (int *)0x0)) {
      ppiStack_1d4 = (int **)0x1;
      ppiStack_1d8 = (int **)0x40d3a0;
      (**(code **)(*apiStack_180[0] + 0xc))();
    }
    ppiStack_1d4 = &piStack_1c0;
    ppiStack_1d8 = apiStack_18c;
    pcStack_1dc = (char *)0x40d3af;
    puVar6 = (undefined4 *)FUN_00409000();
    local_4._0_1_ = 6;
    if (((piStack_1c0 != (int *)0x0) && ((uStack_1b8 & 0x10000) == 0)) &&
       (piStack_1c0[1] = piStack_1c0[1] + -1, piStack_1c0[1] == 0)) {
      ppiStack_1d8 = &piStack_1c0;
      pcStack_1dc = (char *)0x40d3e4;
      ppiStack_1d4 = (int **)puVar6;
      cVar3 = FUN_00408fd0();
      if ((cVar3 == '\0') && (piStack_1c0 != (int *)0x0)) {
        ppiStack_1d4 = (int **)0x1;
        ppiStack_1d8 = (int **)0x40d3fa;
        (**(code **)(*piStack_1c0 + 0xc))();
      }
    }
    uStack_1b8 = puVar6[2];
    if ((uStack_1b8 & 0x10000) == 0) {
      uStack_1bc = 0;
      piStack_1c0 = (int *)*puVar6;
      if (piStack_1c0 == (int *)0x0) {
        piStack_1c0 = (int *)0x0;
        uStack_1b8 = 0;
      }
      else {
        uStack_1b8 = puVar6[2];
        piStack_1c0[1] = piStack_1c0[1] + 1;
      }
    }
    else {
      piStack_1c0 = (int *)*puVar6;
      uStack_1bc = puVar6[1];
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    if (((((uStack_184 & 0x10000) == 0) && (apiStack_18c[0] != (int *)0x0)) &&
        (apiStack_18c[0][1] = apiStack_18c[0][1] + -1, apiStack_18c[0][1] == 0)) &&
       (apiStack_18c[0] != (int *)0x0)) {
      ppiStack_1d4 = (int **)0x1;
      ppiStack_1d8 = (int **)0x40d46d;
      (**(code **)(*apiStack_18c[0] + 0xc))();
    }
    cVar3 = (char)uStack_1b8;
  }
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 4;
  if ((((uStack_1b8 & 0x10000) == 0) && (piStack_1c0 != (int *)0x0)) &&
     ((piStack_1c0[1] = piStack_1c0[1] + -1, piStack_1c0[1] == 0 && (piStack_1c0 != (int *)0x0)))) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x40d4ad;
    (**(code **)(*piStack_1c0 + 0xc))();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if ((((uStack_1a0 & 0x10000) == 0) && (piStack_1a8 != (int *)0x0)) &&
     ((piStack_1a8[1] = piStack_1a8[1] + -1, piStack_1a8[1] == 0 && (piStack_1a8 != (int *)0x0)))) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x40d4e0;
    (**(code **)(*piStack_1a8 + 0xc))();
  }
  local_4 = 0xffffffff;
  ppiStack_1d4 = (int **)0x40d4f4;
  FUN_00492340();
  pcVar1 = DAT_0068a91c;
  iVar8 = DAT_0068a918;
  ppiStack_1d4 = (int **)DAT_0068a918;
  ppiStack_1d8 = (int **)DAT_0068a91c;
  pcStack_1dc = DAT_0068a91c;
  pcVar4 = (char *)FUN_00457ae0();
  pcVar2 = DAT_0068a91c;
  for (; pcVar4 != pcVar2; pcVar4 = pcVar4 + 0xc) {
    ppiStack_1d4 = (int **)0x0;
    ppiStack_1d8 = (int **)0x40d520;
    FUN_0046c790();
  }
  iVar8 = (int)((ulonglong)((longlong)((int)pcVar1 - iVar8) * -0x2aaaaaab) >> 0x20);
  local_190 = 1;
  DAT_0068a91c = DAT_0068a91c + ((iVar8 >> 1) - (iVar8 >> 0x1f)) * 0xc;
  ppiStack_1d4 = (int **)&local_190;
  ppiStack_1d8 = &local_174;
  pcStack_1dc = (char *)0x0;
  local_174 = DAT_0066bdc8;
  local_170 = DAT_0066bdcc;
  local_16e = DAT_0066bdce;
  piVar5 = (int *)FUN_00455aa0(local_14c);
  local_4 = 8;
  ppiStack_1d4 = (int **)0x40d5a4;
  FUN_004042a0();
  local_4._0_1_ = 9;
  if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
    local_19c[0] = (int *)0x0;
    local_194 = 0;
  }
  else {
    ppiStack_1d4 = (int **)0x40d5b6;
    iVar8 = (*(code *)**(undefined4 **)*piVar5)();
    if (iVar8 == 0xb) {
      local_19c[0] = (int *)*piVar5;
      local_194 = piVar5[2];
      local_19c[0][1] = local_19c[0][1] + 1;
    }
    else {
      ppiStack_1d4 = (int **)&DAT_0066bb28;
      ppiStack_1d8 = (int **)0x40d5c9;
      ppiStack_1d8 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
      pcStack_1dc = (char *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,0xb);
  ppiStack_1d4 = (int **)0x40d60a;
  FUN_00492340();
  if (local_19c[0] == (int *)0x0) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x0;
    pcStack_1dc = (char *)0x40d618;
    FUN_004a5470();
  }
  if ((local_194 & 0x10000) != 0) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x4;
    pcStack_1dc = (char *)0x40d631;
    FUN_004a5470();
  }
  ppiStack_1d4 = (int **)0x40d63d;
  iVar8 = (**(code **)(*local_19c[0] + 0x28))();
  if (iVar8 != 0) {
    ppiStack_1d8 = &local_174;
    ppiStack_1d4 = (int **)&DAT_0068c120;
    pcStack_1dc = s_Cannot_open_0066bb1c;
    FUN_00401010(0x17,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xacd);
  }
  puStack_15c = (undefined1 *)&pcStack_1dc;
  FUN_00455dc0(local_19c);
  FUN_004b4cb0(&piStack_1a8,&DAT_0068aab8);
  if ((uStack_1a0 & 0x10000) == 0) {
    uStack_1bc = 0;
    if (piStack_1a8 == (int *)0x0) {
      piStack_1c0 = (int *)0x0;
      uStack_1b8 = 0;
    }
    else {
      piStack_1c0 = piStack_1a8;
      uStack_1b8 = uStack_1a0;
      piStack_1a8[1] = piStack_1a8[1] + 1;
    }
  }
  else {
    uStack_1b8 = uStack_1a0;
    piStack_1c0 = piStack_1a8;
    uStack_1bc = uStack_1a4;
  }
  cVar3 = (char)uStack_1b8;
  while (cVar3 == '\x02') {
    ppiStack_1d4 = &piStack_1c0;
    ppiStack_1d8 = apiStack_180;
    pcStack_1dc = (char *)0x40d6f8;
    ppiStack_1d4 = (int **)FUN_00407e60();
    local_4 = CONCAT31(local_4._1_3_,0xf);
    ppiStack_1d8 = (int **)DAT_0068a91c;
    if (DAT_0068a91c == DAT_0068a920) {
      pcStack_1dc = (char *)0x40d736;
      FUN_0044c6b0();
    }
    else {
      pcStack_1dc = (char *)0x40d71a;
      FUN_00460920();
      DAT_0068a91c = DAT_0068a91c + 0xc;
    }
    local_4._0_1_ = 0xd;
    if (((((uStack_178 & 0x10000) == 0) && (apiStack_180[0] != (int *)0x0)) &&
        (apiStack_180[0][1] = apiStack_180[0][1] + -1, apiStack_180[0][1] == 0)) &&
       (apiStack_180[0] != (int *)0x0)) {
      ppiStack_1d4 = (int **)0x1;
      ppiStack_1d8 = (int **)0x40d769;
      (**(code **)(*apiStack_180[0] + 0xc))();
    }
    ppiStack_1d4 = &piStack_1c0;
    ppiStack_1d8 = apiStack_18c;
    pcStack_1dc = (char *)0x40d778;
    puVar6 = (undefined4 *)FUN_00409000();
    local_4._0_1_ = 0xe;
    if (((piStack_1c0 != (int *)0x0) && ((uStack_1b8 & 0x10000) == 0)) &&
       (piStack_1c0[1] = piStack_1c0[1] + -1, piStack_1c0[1] == 0)) {
      ppiStack_1d8 = &piStack_1c0;
      pcStack_1dc = (char *)0x40d7ad;
      ppiStack_1d4 = (int **)puVar6;
      cVar3 = FUN_00408fd0();
      if ((cVar3 == '\0') && (piStack_1c0 != (int *)0x0)) {
        ppiStack_1d4 = (int **)0x1;
        ppiStack_1d8 = (int **)0x40d7c3;
        (**(code **)(*piStack_1c0 + 0xc))();
      }
    }
    uStack_1b8 = puVar6[2];
    if ((uStack_1b8 & 0x10000) == 0) {
      uStack_1bc = 0;
      piStack_1c0 = (int *)*puVar6;
      if (piStack_1c0 == (int *)0x0) {
        piStack_1c0 = (int *)0x0;
        uStack_1b8 = 0;
      }
      else {
        uStack_1b8 = puVar6[2];
        piStack_1c0[1] = piStack_1c0[1] + 1;
      }
    }
    else {
      piStack_1c0 = (int *)*puVar6;
      uStack_1bc = puVar6[1];
    }
    local_4 = CONCAT31(local_4._1_3_,0xd);
    if (((((uStack_184 & 0x10000) == 0) && (apiStack_18c[0] != (int *)0x0)) &&
        (apiStack_18c[0][1] = apiStack_18c[0][1] + -1, apiStack_18c[0][1] == 0)) &&
       (apiStack_18c[0] != (int *)0x0)) {
      ppiStack_1d4 = (int **)0x1;
      ppiStack_1d8 = (int **)0x40d836;
      (**(code **)(*apiStack_18c[0] + 0xc))();
    }
    cVar3 = (char)uStack_1b8;
  }
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 0xc;
  if ((((uStack_1b8 & 0x10000) == 0) && (piStack_1c0 != (int *)0x0)) &&
     ((piStack_1c0[1] = piStack_1c0[1] + -1, piStack_1c0[1] == 0 && (piStack_1c0 != (int *)0x0)))) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x40d876;
    (**(code **)(*piStack_1c0 + 0xc))();
  }
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if ((((uStack_1a0 & 0x10000) == 0) && (piStack_1a8 != (int *)0x0)) &&
     ((piStack_1a8[1] = piStack_1a8[1] + -1, piStack_1a8[1] == 0 && (piStack_1a8 != (int *)0x0)))) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x40d8a9;
    (**(code **)(*piStack_1a8 + 0xc))();
  }
  local_4 = 0xffffffff;
  ppiStack_1d4 = (int **)0x40d8bd;
  FUN_00492340();
  pcVar1 = DAT_006898bc;
  iVar8 = DAT_006898b8;
  ppiStack_1d4 = (int **)DAT_006898b8;
  ppiStack_1d8 = (int **)DAT_006898bc;
  pcStack_1dc = DAT_006898bc;
  pcVar4 = (char *)FUN_00457e60();
  pcVar2 = DAT_006898bc;
  for (; pcVar4 != pcVar2; pcVar4 = pcVar4 + 0x38) {
    ppiStack_1d4 = (int **)0x0;
    ppiStack_1d8 = (int **)0x40d8e9;
    FUN_0046c840();
  }
  iVar8 = (int)((ulonglong)((longlong)((int)pcVar1 - iVar8) * 0x6db6db6d) >> 0x20) -
          ((int)pcVar1 - iVar8);
  local_190 = 1;
  DAT_006898bc = DAT_006898bc + ((iVar8 >> 5) - (iVar8 >> 0x1f)) * 0x38;
  ppiStack_1d4 = (int **)&local_190;
  ppiStack_1d8 = (int **)acStack_158;
  pcStack_1dc = (char *)0x0;
  acStack_158 = (char  [4])s_names_sch_0066bdbc._0_4_;
  acStack_154 = (char  [4])s_names_sch_0066bdbc._4_4_;
  acStack_150._0_2_ = s_names_sch_0066bdbc._8_2_;
  piVar5 = (int *)FUN_00455b90(local_14c);
  local_4 = 0x10;
  ppiStack_1d4 = (int **)0x40d97b;
  FUN_004042a0();
  local_4._0_1_ = 0x11;
  if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
    apiStack_18c[0] = (int *)0x0;
    uStack_184 = 0;
  }
  else {
    ppiStack_1d4 = (int **)0x40d98d;
    iVar8 = (*(code *)**(undefined4 **)*piVar5)();
    if (iVar8 == 0xb) {
      apiStack_18c[0] = (int *)*piVar5;
      uStack_184 = piVar5[2];
      apiStack_18c[0][1] = apiStack_18c[0][1] + 1;
    }
    else {
      ppiStack_1d4 = (int **)&DAT_0066bb28;
      ppiStack_1d8 = (int **)0x40d9a0;
      ppiStack_1d8 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
      pcStack_1dc = (char *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,0x13);
  ppiStack_1d4 = (int **)0x40d9e0;
  FUN_00492340();
  if (apiStack_18c[0] == (int *)0x0) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x0;
    pcStack_1dc = (char *)0x40d9ed;
    FUN_004a5470();
  }
  if ((uStack_184 & 0x10000) != 0) {
    ppiStack_1d4 = (int **)0x1;
    ppiStack_1d8 = (int **)0x4;
    pcStack_1dc = (char *)0x40da02;
    FUN_004a5470();
  }
  ppiStack_1d4 = (int **)0x40da0e;
  iVar8 = (**(code **)(*apiStack_18c[0] + 0x28))();
  if (iVar8 != 0) {
    ppiStack_1d8 = (int **)acStack_158;
    ppiStack_1d4 = (int **)&DAT_0068c120;
    pcStack_1dc = s_Cannot_open_0066bb1c;
    FUN_00401010(0x17,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xadc);
  }
  puStack_15c = (undefined1 *)&pcStack_1dc;
  FUN_00455dc0(apiStack_18c);
  FUN_004b4cb0(auStack_134,&DAT_0068aab8);
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  ppiStack_1d4 = (int **)auStack_134;
  local_4 = CONCAT31(local_4._1_3_,0x15);
  ppiStack_1d8 = (int **)0x40da8c;
  FUN_0040c060();
  while ((char)uStack_160 == '\x02') {
    ppiStack_1d4 = (int **)&uStack_168;
    ppiStack_1d8 = &piStack_1c0;
    pcStack_1dc = (char *)0x40daab;
    iVar8 = FUN_00407e60();
    cVar3 = *(char *)(iVar8 + 8);
    ppiStack_1d4 = (int **)0x40dac0;
    FUN_00492340();
    if (cVar3 == '\x02') {
      ppiStack_1d4 = (int **)&uStack_168;
      ppiStack_1d8 = &local_174;
      pcStack_1dc = (char *)0x40dad7;
      ppiStack_1d4 = (int **)FUN_00407e60();
      local_4._0_1_ = 0x17;
      ppiStack_1d8 = (int **)0x40daec;
      FUN_0044ca50();
      local_4._0_1_ = 0x19;
      ppiStack_1d4 = (int **)0x40dafd;
      FUN_00492340();
      ppiStack_1d4 = (int **)0x40db09;
      FUN_0040e1a0();
      ppiStack_1d4 = (int **)aiStack_1b4;
      ppiStack_1d8 = (int **)auStack_d8;
      local_4._0_1_ = 0x1a;
      pcStack_1dc = (char *)0x40db23;
      piVar5 = (int *)FUN_00407ec0();
      ppiStack_1d4 = (int **)(*piVar5 + 0xc);
      local_4._0_1_ = 0x1b;
      ppiStack_1d8 = (int **)0x40db40;
      FUN_0044c100();
      local_4._0_1_ = 0x1a;
      ppiStack_1d4 = (int **)0x40db54;
      FUN_00492340();
      ppiStack_1d4 = (int **)aiStack_1b4;
      ppiStack_1d8 = (int **)auStack_18;
      pcStack_1dc = (char *)0x40db66;
      ppiStack_1d4 = (int **)FUN_00407f50();
      local_4._0_1_ = 0x1c;
      ppiStack_1d8 = (int **)0x40db7b;
      FUN_0044cae0();
      local_4._0_1_ = 0x1a;
      ppiStack_1d4 = (int **)0x40db8f;
      FUN_00492340();
      ppiStack_1d4 = (int **)aiStack_1b4;
      ppiStack_1d8 = (int **)auStack_6c;
      pcStack_1dc = (char *)0x40dba1;
      uVar7 = FUN_00407ec0();
      pcStack_1dc = &DAT_0066bdb4;
      local_4._0_1_ = 0x1d;
      cVar3 = FUN_004b6670(uVar7);
      local_4._0_1_ = 0x1a;
      ppiStack_1d4 = (int **)0x40dbcd;
      FUN_00492340();
      if (cVar3 == '\0') {
        ppiStack_1d4 = (int **)aiStack_1b4;
        ppiStack_1d8 = (int **)auStack_b4;
        pcStack_1dc = (char *)0x40dbec;
        uVar7 = FUN_00407ec0();
        pcStack_1dc = s_female_0066bdac;
        local_4._0_1_ = 0x1e;
        cVar3 = FUN_004b6670(uVar7);
        local_4._0_1_ = 0x1a;
        ppiStack_1d4 = (int **)0x40dc18;
        FUN_00492340();
        if (cVar3 == '\0') {
          ppiStack_1d4 = (int **)&DAT_0068c120;
          ppiStack_1d8 = (int **)&DAT_0068c120;
          pcStack_1dc = s_Unknown_sex_0066bda0;
          FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xaf2);
        }
        else {
          auStack_110[0] = 2;
        }
      }
      else {
        auStack_110[0] = 1;
      }
      ppiStack_1d4 = (int **)aiStack_1b4;
      ppiStack_1d8 = (int **)auStack_3c;
      pcStack_1dc = (char *)0x40dc63;
      ppiStack_1d4 = (int **)FUN_00407f50();
      local_4._0_1_ = 0x1f;
      ppiStack_1d8 = (int **)0x40dc78;
      FUN_0044cae0();
      local_4._0_1_ = 0x1a;
      ppiStack_1d4 = (int **)0x40dc8c;
      FUN_00492340();
      ppiStack_1d4 = (int **)aiStack_1b4;
      ppiStack_1d8 = (int **)auStack_9c;
      pcStack_1dc = (char *)0x40dc9e;
      uVar7 = FUN_00407ec0();
      pcStack_1dc = s_trucker_0066bd98;
      local_4._0_1_ = 0x20;
      cVar3 = FUN_004b6670(uVar7);
      local_4._0_1_ = 0x1a;
      ppiStack_1d4 = (int **)0x40dcca;
      FUN_00492340();
      if (cVar3 == '\0') {
        ppiStack_1d4 = (int **)aiStack_1b4;
        ppiStack_1d8 = (int **)auStack_54;
        pcStack_1dc = (char *)0x40dcec;
        uVar7 = FUN_00407ec0();
        pcStack_1dc = s_police_0066ba48;
        local_4._0_1_ = 0x21;
        cVar3 = FUN_004b6670(uVar7);
        local_4._0_1_ = 0x1a;
        ppiStack_1d4 = (int **)0x40dd18;
        FUN_00492340();
        if (cVar3 == '\0') {
          ppiStack_1d4 = (int **)aiStack_1b4;
          ppiStack_1d8 = (int **)auStack_84;
          pcStack_1dc = (char *)0x40dd37;
          uVar7 = FUN_00407ec0();
          pcStack_1dc = &DAT_0066ba40;
          local_4._0_1_ = 0x22;
          cVar3 = FUN_004b6670(uVar7);
          local_4._0_1_ = 0x1a;
          ppiStack_1d4 = (int **)0x40dd63;
          FUN_00492340();
          if (cVar3 == '\0') {
            ppiStack_1d4 = (int **)&DAT_0068c120;
            ppiStack_1d8 = (int **)&DAT_0068c120;
            pcStack_1dc = s_Unknown_role_0066bd88;
            FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xaff);
          }
          else {
            uStack_f8 = 2;
          }
        }
        else {
          uStack_f8 = 3;
        }
      }
      else {
        uStack_f8 = 1;
      }
      ppiStack_1d4 = (int **)aiStack_1b4;
      ppiStack_1d8 = (int **)auStack_24;
      pcStack_1dc = (char *)0x40ddae;
      ppiStack_1d4 = (int **)FUN_00407f50();
      local_4._0_1_ = 0x23;
      ppiStack_1d8 = (int **)0x40ddc3;
      FUN_0044cae0();
      local_4._0_1_ = 0x1a;
      ppiStack_1d4 = (int **)0x40ddd7;
      FUN_00492340();
      ppiStack_1d4 = (int **)aiStack_1b4;
      ppiStack_1d8 = (int **)auStack_cc;
      pcStack_1dc = (char *)0x40dde9;
      ppiStack_1d4 = (int **)FUN_00407ec0();
      local_4._0_1_ = 0x24;
      ppiStack_1d8 = (int **)0x40ddfe;
      FUN_00455640();
      local_4 = CONCAT31(local_4._1_3_,0x26);
      ppiStack_1d4 = (int **)0x40de12;
      FUN_00492340();
      if ((uStack_178 != 0) || (apiStack_180[0] != (int *)0x0)) {
        ppiStack_1d4 = (int **)0x40de27;
        FUN_004b8250();
        ppiStack_1d4 = (int **)0x40de2e;
        uStack_fc = FUN_004b0f30();
      }
      ppiStack_1d4 = (int **)aiStack_1b4;
      ppiStack_1d8 = (int **)auStack_c0;
      pcStack_1dc = (char *)0x40de47;
      ppiStack_1d4 = (int **)FUN_00407f50();
      local_4._0_1_ = 0x27;
      ppiStack_1d8 = (int **)0x40de5c;
      FUN_0044cae0();
      local_4._0_1_ = 0x26;
      ppiStack_1d4 = (int **)0x40de70;
      FUN_00492340();
      if ((iStack_1ac != 0) || (aiStack_1b4[0] != 0)) {
        ppiStack_1d4 = (int **)aiStack_1b4;
        ppiStack_1d8 = (int **)auStack_a8;
        pcStack_1dc = (char *)0x40de92;
        ppiStack_1d4 = (int **)FUN_00407ec0();
        local_4._0_1_ = 0x28;
        ppiStack_1d8 = (int **)0x40dea7;
        FUN_00455640();
        local_4 = CONCAT31(local_4._1_3_,0x2a);
        ppiStack_1d4 = (int **)0x40debb;
        FUN_00492340();
        if ((local_194 != 0) || (local_19c[0] != (int *)0x0)) {
          ppiStack_1d4 = (int **)0x40ded0;
          FUN_004b8250();
          ppiStack_1d4 = (int **)0x40ded7;
          uStack_100 = FUN_004b0f30();
        }
        local_4._0_1_ = 0x26;
        ppiStack_1d4 = (int **)0x40deef;
        FUN_00492340();
        if ((iStack_1ac != 0) || (aiStack_1b4[0] != 0)) {
          ppiStack_1d4 = (int **)aiStack_1b4;
          ppiStack_1d8 = (int **)auStack_90;
          pcStack_1dc = (char *)0x40df11;
          ppiStack_1d4 = (int **)FUN_00407f50();
          local_4._0_1_ = 0x2b;
          ppiStack_1d8 = (int **)0x40df26;
          FUN_0044cae0();
          local_4._0_1_ = 0x26;
          ppiStack_1d4 = (int **)0x40df3a;
          FUN_00492340();
          if ((iStack_1ac != 0) || (aiStack_1b4[0] != 0)) {
            ppiStack_1d4 = (int **)aiStack_1b4;
            ppiStack_1d8 = (int **)auStack_78;
            pcStack_1dc = (char *)0x40df5c;
            ppiStack_1d4 = (int **)FUN_00407ec0();
            local_4._0_1_ = 0x2c;
            ppiStack_1d8 = (int **)0x40df74;
            FUN_0044ca50();
            local_4._0_1_ = 0x2e;
            ppiStack_1d4 = (int **)0x40df88;
            FUN_00492340();
            ppiStack_1d4 = (int **)auStack_140;
            ppiStack_1d8 = (int **)auStack_60;
            pcStack_1dc = (char *)0x40df9d;
            ppiStack_1d4 = (int **)FUN_00407ec0();
            local_4._0_1_ = 0x2f;
            ppiStack_1d8 = (int **)0x40dfb5;
            FUN_00455640();
            local_4._0_1_ = 0x31;
            ppiStack_1d4 = (int **)0x40dfc9;
            FUN_00492340();
            ppiStack_1d4 = (int **)0x40dfd5;
            FUN_004b8250();
            ppiStack_1d4 = (int **)0x40dfdc;
            fVar9 = (float10)FUN_004b0f20();
            dStack_e8 = (double)fVar9;
            ppiStack_1d4 = (int **)auStack_140;
            ppiStack_1d8 = (int **)auStack_30;
            pcStack_1dc = (char *)0x40dff8;
            pcStack_1dc = (char *)FUN_00407f50();
            ppiStack_1d4 = (int **)FUN_00407e60(auStack_48);
            local_4._0_1_ = 0x33;
            ppiStack_1d8 = (int **)0x40e01e;
            FUN_00455640();
            local_4._0_1_ = 0x36;
            ppiStack_1d4 = (int **)0x40e032;
            FUN_00492340();
            local_4._0_1_ = 0x35;
            ppiStack_1d4 = (int **)0x40e046;
            FUN_00492340();
            ppiStack_1d4 = (int **)0x40e052;
            FUN_004b8250();
            ppiStack_1d4 = (int **)0x40e059;
            fVar9 = (float10)FUN_004b0f20();
            dStack_e0 = (double)fVar9;
            local_4._0_1_ = 0x31;
            ppiStack_1d4 = (int **)0x40e074;
            FUN_00492340();
            local_4._0_1_ = 0x2e;
            ppiStack_1d4 = (int **)0x40e088;
            FUN_00492340();
            local_4._0_1_ = 0x26;
            ppiStack_1d4 = (int **)0x40e09c;
            FUN_00492340();
          }
        }
      }
      ppiStack_1d4 = (int **)auStack_110;
      ppiStack_1d8 = (int **)0x40e0ae;
      FUN_00448e50();
      local_4._0_1_ = 0x1a;
      ppiStack_1d4 = (int **)0x40e0bf;
      FUN_00492340();
      local_4._0_1_ = 0x19;
      ppiStack_1d4 = (int **)0x40e0d3;
      FUN_004497b0();
      local_4 = CONCAT31(local_4._1_3_,0x15);
      ppiStack_1d4 = (int **)0x40e0e4;
      FUN_00492340();
    }
    ppiStack_1d4 = (int **)&uStack_168;
    ppiStack_1d8 = &piStack_1a8;
    pcStack_1dc = (char *)0x40e0f3;
    ppiStack_1d4 = (int **)FUN_00409000();
    local_4._0_1_ = 0x16;
    ppiStack_1d8 = (int **)0x40e108;
    FUN_0040c060();
    local_4 = CONCAT31(local_4._1_3_,0x15);
    if (((((uStack_1a0 & 0x10000) == 0) && (piStack_1a8 != (int *)0x0)) &&
        (piStack_1a8[1] = piStack_1a8[1] + -1, piStack_1a8[1] == 0)) && (piStack_1a8 != (int *)0x0))
    {
      ppiStack_1d4 = (int **)0x1;
      ppiStack_1d8 = (int **)0x40e13d;
      (**(code **)(*piStack_1a8 + 0xc))();
    }
  }
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 0x14;
  ppiStack_1d4 = (int **)0x40e159;
  FUN_00492340();
  local_4 = CONCAT31(local_4._1_3_,0x13);
  ppiStack_1d4 = (int **)0x40e16d;
  FUN_00492340();
  local_4 = 0xffffffff;
  ppiStack_1d4 = (int **)0x40e181;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}

