
undefined1 * FUN_0040f740(undefined4 param_1,int *param_2,int param_3,uint param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcStack_94;
  int **ppiStack_90;
  int **ppiStack_8c;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 *local_74;
  undefined1 *local_70;
  int *local_6c [2];
  uint uStack_64;
  undefined1 auStack_60 [8];
  char cStack_58;
  undefined1 auStack_54 [8];
  char cStack_4c;
  undefined1 auStack_48 [8];
  char cStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063bfcf;
  pvStack_c = ExceptionList;
  ppiStack_8c = (int **)0x178;
  local_4 = 0;
  ppiStack_90 = (int **)0x40f76f;
  ExceptionList = &pvStack_c;
  puVar2 = (undefined1 *)FUN_00631d33();
  local_4._0_1_ = 1;
  local_70 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    ppiStack_8c = (int **)&LAB_00410220;
    ppiStack_90 = (int **)0x13;
    pcStack_94 = (char *)0x10;
    FUN_004011e0(puVar2);
    ppiStack_8c = (int **)0x40f79e;
    FUN_004042a0();
    ppiStack_8c = (int **)&local_76;
    local_4._0_1_ = 2;
    ppiStack_90 = (int **)0x40f7b6;
    FUN_00478a20();
    ppiStack_8c = (int **)&local_75;
    local_4._0_1_ = 3;
    *(undefined4 *)(puVar2 + 0x14c) = 0xffffffff;
    ppiStack_90 = (int **)0x40f7d8;
    FUN_00478a20();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = local_6c;
  pcStack_94 = (char *)0x40f7f4;
  local_74 = puVar2;
  piVar3 = (int *)FUN_00409000();
  local_4._0_1_ = 4;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppiStack_90 = &param_2;
    pcStack_94 = (char *)0x40f83b;
    ppiStack_8c = (int **)piVar3;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_2 != (int *)0x0)) {
      ppiStack_8c = (int **)0x1;
      ppiStack_90 = (int **)0x40f854;
      (**(code **)(*param_2 + 0xc))();
    }
  }
  param_4 = piVar3[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar3;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar3[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar3;
    param_3 = piVar3[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_64 & 0x10000) == 0) && (local_6c[0] != (int *)0x0)) &&
     ((local_6c[0][1] = local_6c[0][1] + -1, local_6c[0][1] == 0 && (local_6c[0] != (int *)0x0)))) {
    ppiStack_8c = (int **)0x1;
    ppiStack_90 = (int **)0x40f8df;
    (**(code **)(*local_6c[0] + 0xc))();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = local_6c;
  pcStack_94 = (char *)0x40f8f1;
  piVar4 = (int *)FUN_00407e60();
  iVar5 = *(int *)(puVar2 + 0x130);
  piVar3 = (int *)(puVar2 + 0x130);
  local_4._0_1_ = 5;
  if (((iVar5 != 0) && ((*(uint *)(puVar2 + 0x138) & 0x10000) == 0)) &&
     (*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar3 + 4) == 0)) {
    pcStack_94 = (char *)0x40f92c;
    ppiStack_90 = (int **)piVar3;
    ppiStack_8c = (int **)piVar4;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && ((int *)*piVar3 != (int *)0x0)) {
      ppiStack_8c = (int **)0x1;
      ppiStack_90 = (int **)0x40f940;
      (**(code **)(*(int *)*piVar3 + 0xc))();
    }
  }
  if ((piVar4[2] & 0x10000U) == 0) {
    *(undefined4 *)(puVar2 + 0x134) = 0;
    if (*piVar4 == 0) {
      *piVar3 = 0;
      *(undefined4 *)(puVar2 + 0x138) = 0;
    }
    else {
      *piVar3 = *piVar4;
      *(int *)(puVar2 + 0x138) = piVar4[2];
      *(int *)(*piVar3 + 4) = *(int *)(*piVar3 + 4) + 1;
    }
  }
  else {
    *(int *)(puVar2 + 0x138) = piVar4[2];
    *piVar3 = *piVar4;
    *(int *)(puVar2 + 0x134) = piVar4[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_64 & 0x10000) == 0) && (local_6c[0] != (int *)0x0)) &&
     ((local_6c[0][1] = local_6c[0][1] + -1, local_6c[0][1] == 0 && (local_6c[0] != (int *)0x0)))) {
    ppiStack_8c = (int **)0x1;
    ppiStack_90 = (int **)0x40f9ac;
    (**(code **)(*local_6c[0] + 0xc))();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = local_6c;
  pcStack_94 = (char *)0x40f9be;
  piVar3 = (int *)FUN_00409000();
  local_4._0_1_ = 6;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppiStack_90 = &param_2;
    pcStack_94 = (char *)0x40fa04;
    ppiStack_8c = (int **)piVar3;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_2 != (int *)0x0)) {
      ppiStack_8c = (int **)0x1;
      ppiStack_90 = (int **)0x40fa1d;
      (**(code **)(*param_2 + 0xc))();
    }
  }
  param_4 = piVar3[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar3;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar3[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar3;
    param_3 = piVar3[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_64 & 0x10000) == 0) && (local_6c[0] != (int *)0x0)) &&
     ((local_6c[0][1] = local_6c[0][1] + -1, local_6c[0][1] == 0 && (local_6c[0] != (int *)0x0)))) {
    ppiStack_8c = (int **)0x1;
    ppiStack_90 = (int **)0x40faae;
    (**(code **)(*local_6c[0] + 0xc))();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = local_6c;
  pcStack_94 = (char *)0x40fac0;
  piVar3 = (int *)FUN_00407e60();
  iVar5 = *piVar3;
  piVar3 = (int *)(puVar2 + 0x13c);
  piVar4 = (int *)(iVar5 + 0xc);
  local_4._0_1_ = 7;
  if (piVar4 != piVar3) {
    local_70 = *(undefined1 **)(iVar5 + 0x10);
    pcStack_94 = (char *)*piVar4;
    ppiStack_8c = (int **)*piVar3;
    pcVar10 = local_70 + -(int)pcStack_94;
    if ((char *)(*(int *)(puVar2 + 0x144) - (int)ppiStack_8c) < pcVar10) {
      ppiStack_90 = (int **)pcStack_94;
      pcStack_94 = pcVar10;
      ppiStack_8c = (int **)local_70;
      iVar5 = FUN_00458d60();
      ppiStack_90 = (int **)*piVar3;
      ppiStack_8c = (int **)(*(int *)(puVar2 + 0x144) - (int)ppiStack_90);
      if (ppiStack_8c != (int **)0x0) {
        pcStack_94 = (char *)0x40fb12;
        FUN_0044b440();
      }
      *piVar3 = iVar5;
      *(char **)(puVar2 + 0x144) = pcVar10 + iVar5;
    }
    else if ((char *)(*(int *)(puVar2 + 0x140) - (int)ppiStack_8c) < pcVar10) {
      ppiStack_90 = (int **)(pcStack_94 + (*(int *)(puVar2 + 0x140) - (int)ppiStack_8c));
      FUN_00407250();
      FUN_00407250((*(int *)(puVar2 + 0x140) - *piVar3) + *piVar4,*(undefined4 *)(iVar5 + 0x10),
                   *(int *)(puVar2 + 0x140));
    }
    else {
      ppiStack_90 = (int **)local_70;
      FUN_00407250();
    }
    *(char **)(puVar2 + 0x140) = pcVar10 + *piVar3;
    puVar2 = local_74;
  }
  local_4._0_1_ = 0;
  if (((((uStack_64 & 0x10000) == 0) && (local_6c[0] != (int *)0x0)) &&
      (local_6c[0][1] = local_6c[0][1] + -1, local_6c[0][1] == 0)) && (local_6c[0] != (int *)0x0)) {
    ppiStack_8c = (int **)0x1;
    ppiStack_90 = (int **)0x40fba3;
    (**(code **)(*local_6c[0] + 0xc))();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = local_6c;
  pcStack_94 = (char *)0x40fbb5;
  piVar3 = (int *)FUN_00409000();
  local_4._0_1_ = 8;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppiStack_90 = &param_2;
    pcStack_94 = (char *)0x40fbf7;
    ppiStack_8c = (int **)piVar3;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_2 != (int *)0x0)) {
      ppiStack_8c = (int **)0x1;
      ppiStack_90 = (int **)0x40fc10;
      (**(code **)(*param_2 + 0xc))();
    }
  }
  param_4 = piVar3[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar3;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar3[2];
      *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 1;
    }
  }
  else {
    param_2 = (int *)*piVar3;
    param_3 = piVar3[1];
  }
  local_4._0_1_ = 0;
  if (((((uStack_64 & 0x10000) == 0) && (local_6c[0] != (int *)0x0)) &&
      (local_6c[0][1] = local_6c[0][1] + -1, local_6c[0][1] == 0)) && (local_6c[0] != (int *)0x0)) {
    ppiStack_8c = (int **)0x1;
    ppiStack_90 = (int **)0x40fc9b;
    (**(code **)(*local_6c[0] + 0xc))();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = local_6c;
  pcStack_94 = (char *)0x40fcad;
  FUN_00407e60();
  local_4._0_1_ = 9;
  ppiStack_8c = (int **)0x40fcbf;
  uVar6 = FUN_004b0f30();
  *(undefined4 *)(puVar2 + 0x148) = uVar6;
  local_4._0_1_ = 0;
  if ((((uStack_64 & 0x10000) == 0) && (local_6c[0] != (int *)0x0)) &&
     ((local_6c[0][1] = local_6c[0][1] + -1, local_6c[0][1] == 0 && (local_6c[0] != (int *)0x0)))) {
    ppiStack_8c = (int **)0x1;
    ppiStack_90 = (int **)0x40fcf8;
    (**(code **)(*local_6c[0] + 0xc))();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = (int **)auStack_3c;
  pcStack_94 = (char *)0x40fd0a;
  ppiStack_8c = (int **)FUN_00409000();
  local_4._0_1_ = 10;
  ppiStack_90 = (int **)0x40fd22;
  FUN_0040c060();
  local_4._0_1_ = 0;
  ppiStack_8c = (int **)0x40fd33;
  FUN_00492340();
  ppiStack_8c = &param_2;
  ppiStack_90 = (int **)auStack_3c;
  pcStack_94 = (char *)0x40fd45;
  piVar3 = (int *)FUN_00407e60();
  local_4._0_1_ = 0xb;
  pcStack_94 = *(char **)(*piVar3 + 0xc);
  puVar7 = (undefined4 *)FUN_004365f0(&local_70);
  *(undefined4 *)(puVar2 + 0x14c) = *puVar7;
  local_4._0_1_ = 0;
  ppiStack_8c = (int **)0x40fd79;
  FUN_00492340();
  if (*(int *)(puVar2 + 0x14c) == -1) {
    ppiStack_8c = &param_2;
    ppiStack_90 = (int **)auStack_3c;
    pcStack_94 = (char *)0x40fd96;
    piVar3 = (int *)FUN_00407e60();
    pcStack_94 = &DAT_0068c120;
    local_4._0_1_ = 0xc;
    FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xbe3,s_Node_not_found_0066be6c,
                 *(undefined4 *)(*piVar3 + 0xc));
    local_4._0_1_ = 0;
    ppiStack_8c = (int **)0x40fdd9;
    FUN_00492340();
  }
  else {
    ppiStack_8c = (int **)(*(int *)(DAT_0068be60 + *(int *)(puVar2 + 0x14c) * 4) + 0x30);
    ppiStack_90 = (int **)0x40fdf3;
    FUN_00405ed0();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = (int **)auStack_3c;
  pcStack_94 = (char *)0x40fe05;
  ppiStack_8c = (int **)FUN_00409000();
  local_4._0_1_ = 0xd;
  ppiStack_90 = (int **)0x40fe1d;
  FUN_0040c060();
  local_4._0_1_ = 0;
  ppiStack_8c = (int **)0x40fe2e;
  FUN_00492340();
  ppiStack_8c = (int **)0x40fe37;
  FUN_004042a0();
  ppiStack_8c = &param_2;
  ppiStack_90 = (int **)auStack_3c;
  pcStack_94 = (char *)0x40fe49;
  ppiStack_8c = (int **)FUN_00407e60();
  local_4._0_1_ = 0xf;
  ppiStack_90 = (int **)0x40fe5e;
  FUN_0040c060();
  local_4 = CONCAT31(local_4._1_3_,0xe);
  ppiStack_8c = (int **)0x40fe6f;
  FUN_00492340();
  while (cStack_58 == '\x02') {
    ppiStack_8c = (int **)auStack_60;
    ppiStack_90 = local_6c;
    pcStack_94 = (char *)0x40fe8b;
    FUN_00407e60();
    if ((char)uStack_64 == '\x02') {
      ppiStack_8c = local_6c;
      ppiStack_90 = (int **)auStack_3c;
      pcStack_94 = (char *)0x40fea8;
      ppiStack_8c = (int **)FUN_00407e60();
      local_4._0_1_ = 0x12;
      ppiStack_90 = (int **)0x40febd;
      FUN_0044c9a0();
      local_4._0_1_ = 0x14;
      ppiStack_8c = (int **)0x40fecd;
      FUN_00492340();
      local_70 = (undefined1 *)&pcStack_94;
      FUN_00455dc0(local_6c);
      ppiStack_8c = (int **)FUN_004af560(auStack_30,1);
      local_4._0_1_ = 0x15;
      ppiStack_90 = (int **)0x40ff01;
      FUN_00455640();
      local_4._0_1_ = 0x17;
      ppiStack_8c = (int **)0x40ff12;
      FUN_00492340();
      local_70 = (undefined1 *)&pcStack_94;
      FUN_00455dc0(auStack_54);
      uVar6 = FUN_00405380();
      local_70 = (undefined1 *)&pcStack_94;
      local_4._0_1_ = 0x18;
      FUN_00455dc0(uVar6);
      local_4._0_1_ = 0x18;
      uVar6 = FUN_00447d30();
      uVar6 = FUN_004558b0(uVar6);
      iVar5 = FUN_00455e10(uVar6);
      local_4 = CONCAT31(local_4._1_3_,0x17);
      ppiStack_8c = (int **)0x40ff7e;
      FUN_00492340();
      if (iVar5 == DAT_0068bb6c) {
        ppiStack_8c = (int **)0x40ff8f;
        iVar8 = FUN_004b8250();
        ppiStack_90 = *(int ***)(iVar8 + 0xc);
        ppiStack_8c = (int **)&DAT_0068c120;
        pcStack_94 = s_Resource_not_found_0066be58;
        FUN_00401010(0x164,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xbf5);
      }
      iVar5 = iVar5 - DAT_0068bb68;
      ppiStack_8c = (int **)0x40ffe3;
      FUN_004b8250();
      ppiStack_8c = (int **)0x40ffea;
      uVar9 = FUN_004b0f30();
      local_4._0_1_ = 0x14;
      *(uint *)(puVar2 + (iVar5 / 0x18) * 0x10) = *(uint *)(puVar2 + (iVar5 / 0x18) * 0x10) | uVar9;
      ppiStack_8c = (int **)0x410000;
      FUN_00492340();
      local_4 = CONCAT31(local_4._1_3_,0x11);
      ppiStack_8c = (int **)0x410011;
      FUN_00492340();
    }
    local_4._0_1_ = 0xe;
    ppiStack_8c = (int **)0x410022;
    FUN_00492340();
    ppiStack_8c = (int **)auStack_60;
    ppiStack_90 = (int **)auStack_18;
    pcStack_94 = (char *)0x410031;
    ppiStack_8c = (int **)FUN_00409000();
    local_4._0_1_ = 0x10;
    ppiStack_90 = (int **)0x410046;
    FUN_0040c060();
    local_4 = CONCAT31(local_4._1_3_,0xe);
    ppiStack_8c = (int **)0x410057;
    FUN_00492340();
  }
  ppiStack_8c = &param_2;
  ppiStack_90 = (int **)auStack_18;
  pcStack_94 = (char *)0x410074;
  ppiStack_8c = (int **)FUN_00409000();
  local_4._0_1_ = 0x1a;
  ppiStack_90 = (int **)0x41008c;
  FUN_0040c060();
  local_4._0_1_ = 0xe;
  ppiStack_8c = (int **)0x41009d;
  FUN_00492340();
  if ((param_4 != 0) || (param_2 != (int *)0x0)) {
    ppiStack_8c = &param_2;
    ppiStack_90 = (int **)auStack_48;
    pcStack_94 = (char *)0x4100c9;
    FUN_00407e60();
    if (cStack_40 == '\x02') {
      ppiStack_8c = (int **)0x4100e0;
      FUN_004042a0();
      ppiStack_8c = (int **)auStack_48;
      local_4 = CONCAT31(local_4._1_3_,0x1c);
      ppiStack_90 = (int **)0x4100f7;
      FUN_0040c060();
      while ((char)uStack_64 == '\x02') {
        ppiStack_8c = local_6c;
        ppiStack_90 = (int **)auStack_54;
        pcStack_94 = (char *)0x410111;
        FUN_00407e60();
        local_4._0_1_ = 0x1e;
        if (cStack_4c == '\x06') {
          ppiStack_8c = (int **)auStack_54;
          ppiStack_90 = (int **)0x410132;
          FUN_00455640();
          local_4._0_1_ = 0x1f;
          ppiStack_8c = (int **)0x410143;
          FUN_004b8250();
          ppiStack_8c = (int **)0x41014a;
          local_70 = (undefined1 *)FUN_004b0f30();
          ppiStack_8c = (int **)&local_70;
          ppiStack_90 = (int **)0x41015e;
          FUN_00448630();
          local_4._0_1_ = 0x1e;
          ppiStack_8c = (int **)0x41016f;
          FUN_00492340();
        }
        local_4._0_1_ = 0x1c;
        ppiStack_8c = (int **)0x41017f;
        FUN_00492340();
        ppiStack_8c = local_6c;
        ppiStack_90 = (int **)auStack_18;
        pcStack_94 = (char *)0x41018e;
        ppiStack_8c = (int **)FUN_00409000();
        local_4._0_1_ = 0x1d;
        ppiStack_90 = (int **)0x4101a3;
        FUN_0040c060();
        local_4 = CONCAT31(local_4._1_3_,0x1c);
        ppiStack_8c = (int **)0x4101b3;
        FUN_00492340();
      }
      local_4._1_3_ = (uint3)((uint)local_4 >> 8);
      local_4._0_1_ = 0x1b;
      ppiStack_8c = (int **)0x4101cf;
      FUN_00492340();
    }
    local_4._0_1_ = 0xe;
    ppiStack_8c = (int **)0x4101e0;
    FUN_00492340();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  ppiStack_8c = (int **)0x4101f1;
  FUN_00492340();
  local_4 = 0xffffffff;
  ppiStack_8c = (int **)0x410208;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return puVar2;
}

