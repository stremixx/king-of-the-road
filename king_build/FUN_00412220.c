
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00412220(undefined4 param_1,int *param_2,int param_3,uint param_4)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  char **ppcVar9;
  float10 fVar10;
  char *apcStack_d4 [4];
  uint **ppuStack_c4;
  char *pcStack_c0;
  uint **ppuStack_bc;
  uint **ppuStack_b8;
  char local_a1;
  int *local_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  uint *local_94;
  undefined1 auStack_90 [14];
  undefined1 local_82;
  undefined1 local_81;
  undefined1 auStack_80 [8];
  char cStack_78;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [8];
  char cStack_60;
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [8];
  char cStack_34;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063c466;
  pvStack_c = ExceptionList;
  ppuStack_b8 = (uint **)0xf8;
  local_4 = 0;
  ppuStack_bc = (uint **)0x412252;
  ExceptionList = &pvStack_c;
  puVar2 = (uint *)FUN_00631d33();
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    ppuStack_b8 = (uint **)0x41226a;
    local_94 = puVar2;
    FUN_004042a0();
    ppuStack_b8 = (uint **)0x412272;
    FUN_00411ae0();
    puVar2[8] = 0;
    puVar2[9] = 0;
    ppuStack_b8 = (uint **)0x412280;
    FUN_004042a0();
    ppuStack_b8 = (uint **)&local_a1;
    local_4._0_1_ = 4;
    puVar2[0xd] = 0xffffffff;
    ppuStack_bc = (uint **)0x41229c;
    FUN_00478a20();
    local_4._0_1_ = 5;
    ppuStack_b8 = (uint **)0x4122ac;
    FUN_004485c0();
    local_4._0_1_ = 6;
    ppuStack_b8 = (uint **)0x4122bf;
    FUN_004132a0();
    ppuStack_b8 = (uint **)0x4122ca;
    FUN_004132a0();
    ppuStack_b8 = (uint **)&local_81;
    ppuStack_bc = (uint **)0x4122da;
    FUN_00478a20();
    ppuStack_b8 = (uint **)&local_82;
    local_4 = CONCAT31(local_4._1_3_,7);
    ppuStack_bc = (uint **)0x4122f2;
    FUN_00478a20();
    puVar2[0x3a] = 0x2f1f1281;
    puVar2[0x3b] = 0x45c027e7;
    *(char *)(puVar2 + 0x3c) = '\0';
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x412329;
  local_94 = puVar2;
  piVar3 = (int *)FUN_00409000();
  local_4._0_1_ = 8;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppuStack_bc = (uint **)&param_2;
    pcStack_c0 = (char *)0x412370;
    ppuStack_b8 = (uint **)piVar3;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_2 != (int *)0x0)) {
      ppuStack_b8 = (uint **)0x1;
      ppuStack_bc = (uint **)0x412389;
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
  if ((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
     ((local_a0[1] = local_a0[1] + -1, local_a0[1] == 0 && (local_a0 != (int *)0x0)))) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x412414;
    (**(code **)(*local_a0 + 0xc))();
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x412426;
  puVar4 = (uint *)FUN_00407e60();
  uVar8 = puVar2[10];
  puVar7 = puVar2 + 10;
  local_4._0_1_ = 9;
  if (((uVar8 != 0) && ((puVar2[0xc] & 0x10000) == 0)) &&
     (*(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + -1, *(int *)(*puVar7 + 4) == 0)) {
    pcStack_c0 = (char *)0x41245b;
    ppuStack_bc = (uint **)puVar7;
    ppuStack_b8 = (uint **)puVar4;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && ((int *)*puVar7 != (int *)0x0)) {
      ppuStack_b8 = (uint **)0x1;
      ppuStack_bc = (uint **)0x41246f;
      (**(code **)(*(int *)*puVar7 + 0xc))();
    }
  }
  if ((puVar4[2] & 0x10000) == 0) {
    puVar2[0xb] = 0;
    uVar8 = *puVar4;
    if (uVar8 == 0) {
      *puVar7 = 0;
      puVar2[0xc] = 0;
    }
    else {
      *puVar7 = uVar8;
      puVar2[0xc] = puVar4[2];
      *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + 1;
    }
  }
  else {
    puVar2[0xc] = puVar4[2];
    *puVar7 = *puVar4;
    puVar2[0xb] = puVar4[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
     ((local_a0[1] = local_a0[1] + -1, local_a0[1] == 0 && (local_a0 != (int *)0x0)))) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x4124db;
    (**(code **)(*local_a0 + 0xc))();
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x4124ed;
  piVar3 = (int *)FUN_00407e60();
  iVar6 = *piVar3;
  local_4._0_1_ = 10;
  puVar7 = (uint *)(iVar6 + 0xc);
  if (puVar7 != puVar2) {
    ppuStack_bc = *(uint ***)(iVar6 + 0x10);
    pcStack_c0 = (char *)*puVar7;
    ppuStack_b8 = (uint **)*puVar2;
    uVar8 = (int)ppuStack_bc - (int)pcStack_c0;
    if (puVar2[2] - (int)ppuStack_b8 < uVar8) {
      ppuStack_c4 = (uint **)0x412523;
      uVar5 = (uint)pcStack_c0;
      pcStack_c0 = (char *)uVar8;
      ppuStack_b8 = ppuStack_bc;
      ppuStack_bc = (uint **)uVar5;
      uVar5 = FUN_00458d60();
      ppuStack_bc = (uint **)*puVar2;
      ppuStack_b8 = (uint **)(puVar2[2] - (int)ppuStack_bc);
      if (ppuStack_b8 != (uint **)0x0) {
        pcStack_c0 = (char *)0x412535;
        FUN_0044b440();
      }
      *puVar2 = uVar5;
      puVar2[2] = uVar5 + uVar8;
    }
    else if (puVar2[1] - (int)ppuStack_b8 < uVar8) {
      ppuStack_bc = (uint **)((puVar2[1] - (int)ppuStack_b8) + (int)pcStack_c0);
      ppuStack_c4 = (uint **)0x412568;
      FUN_00407250();
      puVar2 = local_94;
      apcStack_d4[3] = *(char **)(iVar6 + 0x10);
      ppuStack_c4 = (uint **)local_94[1];
      apcStack_d4[2] = (char *)(((int)ppuStack_c4 - *local_94) + *puVar7);
      apcStack_d4[1] = (char *)0x412582;
      FUN_00407250();
    }
    else {
      ppuStack_c4 = (uint **)0x412554;
      FUN_00407250();
      puVar2 = local_94;
    }
    puVar2[1] = *puVar2 + uVar8;
  }
  local_4._0_1_ = 0;
  if (((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
      (local_a0[1] = local_a0[1] + -1, local_a0[1] == 0)) && (local_a0 != (int *)0x0)) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x4125c6;
    (**(code **)(*local_a0 + 0xc))();
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x4125d8;
  piVar3 = (int *)FUN_00409000();
  local_4._0_1_ = 0xb;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppuStack_bc = (uint **)&param_2;
    pcStack_c0 = (char *)0x41261a;
    ppuStack_b8 = (uint **)piVar3;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_2 != (int *)0x0)) {
      ppuStack_b8 = (uint **)0x1;
      ppuStack_bc = (uint **)0x412633;
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
  if (((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
      (local_a0[1] = local_a0[1] + -1, local_a0[1] == 0)) && (local_a0 != (int *)0x0)) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x4126be;
    (**(code **)(*local_a0 + 0xc))();
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x4126d0;
  ppuStack_c4 = (uint **)FUN_00407e60();
  pcStack_c0 = s_MAFIA_0066b894;
  local_4._0_1_ = 0xc;
  apcStack_d4[3] = (char *)0x4126e3;
  local_a1 = FUN_004b6670();
  local_4._0_1_ = 0;
  if ((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
     ((local_a0[1] = local_a0[1] + -1, local_a0[1] == 0 && (local_a0 != (int *)0x0)))) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x41271d;
    (**(code **)(*local_a0 + 0xc))();
  }
  if (local_a1 == '\0') {
    ppuStack_b8 = (uint **)&param_2;
    ppuStack_bc = (uint **)&local_a0;
    pcStack_c0 = (char *)0x412743;
    ppuStack_c4 = (uint **)FUN_00407e60();
    pcStack_c0 = s_POLICE_0066b89c;
    local_4._0_1_ = 0xd;
    apcStack_d4[3] = (char *)0x412756;
    local_a1 = FUN_004b6670();
    local_4._0_1_ = 0;
    if ((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
       ((local_a0[1] = local_a0[1] + -1, local_a0[1] == 0 && (local_a0 != (int *)0x0)))) {
      ppuStack_b8 = (uint **)0x1;
      ppuStack_bc = (uint **)0x412790;
      (**(code **)(*local_a0 + 0xc))();
    }
    if (local_a1 == '\0') {
      ppuStack_b8 = (uint **)&param_2;
      ppuStack_bc = (uint **)&local_a0;
      pcStack_c0 = (char *)0x4127b3;
      piVar3 = (int *)FUN_00407e60();
      pcStack_c0 = &DAT_0068c120;
      local_4._0_1_ = 0xe;
      ppuStack_c4 = *(uint ***)(*piVar3 + 0xc);
      apcStack_d4[3] = s_Unknown_ambush_type_0066bf6c;
      apcStack_d4[2] = (char *)0xcf4;
      apcStack_d4[1] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      apcStack_d4[0] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
      FUN_00401010(0,100);
      local_4._0_1_ = 0;
      if (((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
          (local_a0[1] = local_a0[1] + -1, local_a0[1] == 0)) && (local_a0 != (int *)0x0)) {
        ppuStack_b8 = (uint **)0x1;
        ppuStack_bc = (uint **)0x412818;
        (**(code **)(*local_a0 + 0xc))();
      }
    }
    else {
      puVar2[9] = 2;
    }
  }
  else {
    puVar2[9] = 1;
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x41282a;
  piVar3 = (int *)FUN_00409000();
  local_4._0_1_ = 0xf;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppuStack_bc = (uint **)&param_2;
    pcStack_c0 = (char *)0x41286c;
    ppuStack_b8 = (uint **)piVar3;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_2 != (int *)0x0)) {
      ppuStack_b8 = (uint **)0x1;
      ppuStack_bc = (uint **)0x412885;
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
  if (((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
      (local_a0[1] = local_a0[1] + -1, local_a0[1] == 0)) && (local_a0 != (int *)0x0)) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x412910;
    (**(code **)(*local_a0 + 0xc))();
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x412922;
  iVar6 = FUN_00407e60();
  local_a1 = *(char *)(iVar6 + 8) == '\x03';
  if ((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
     ((local_a0[1] = local_a0[1] + -1, local_a0[1] == 0 && (local_a0 != (int *)0x0)))) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x41295b;
    (**(code **)(*local_a0 + 0xc))();
  }
  if (local_a1 != '\0') {
    ppuStack_b8 = (uint **)&param_2;
    ppuStack_bc = (uint **)&local_a0;
    pcStack_c0 = (char *)0x412975;
    piVar3 = (int *)FUN_00407e60();
    local_4._0_1_ = 0x10;
    pcStack_c0 = *(char **)(*piVar3 + 0xc);
    ppuStack_c4 = &local_94;
    apcStack_d4[3] = (char *)0x41298d;
    puVar7 = (uint *)FUN_00436650();
    puVar2[3] = *puVar7;
    local_4._0_1_ = 0;
    if ((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
       ((local_a0[1] = local_a0[1] + -1, local_a0[1] == 0 && (local_a0 != (int *)0x0)))) {
      ppuStack_b8 = (uint **)0x1;
      ppuStack_bc = (uint **)0x4129c8;
      (**(code **)(*local_a0 + 0xc))();
    }
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x4129da;
  piVar3 = (int *)FUN_00409000();
  local_4._0_1_ = 0x11;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
    ppuStack_bc = (uint **)&param_2;
    pcStack_c0 = (char *)0x412a1c;
    ppuStack_b8 = (uint **)piVar3;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_2 != (int *)0x0)) {
      ppuStack_b8 = (uint **)0x1;
      ppuStack_bc = (uint **)0x412a35;
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
  local_4 = (uint)local_4._1_3_ << 8;
  if ((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
     ((local_a0[1] = local_a0[1] + -1, local_a0[1] == 0 && (local_a0 != (int *)0x0)))) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x412ac0;
    (**(code **)(*local_a0 + 0xc))();
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)&local_a0;
  pcStack_c0 = (char *)0x412ad2;
  iVar6 = FUN_00407e60();
  local_a1 = *(char *)(iVar6 + 8) == '\x03';
  if (((((uStack_98 & 0x10000) == 0) && (local_a0 != (int *)0x0)) &&
      (local_a0[1] = local_a0[1] + -1, local_a0[1] == 0)) && (local_a0 != (int *)0x0)) {
    ppuStack_b8 = (uint **)0x1;
    ppuStack_bc = (uint **)0x412b0b;
    (**(code **)(*local_a0 + 0xc))();
  }
  if (local_a1 != '\0') {
    ppuStack_b8 = (uint **)&param_2;
    ppuStack_bc = (uint **)auStack_90;
    pcStack_c0 = (char *)0x412b25;
    piVar3 = (int *)FUN_00407e60();
    ppuStack_b8 = (uint **)(*piVar3 + 0xc);
    local_4._0_1_ = 0x12;
    ppuStack_bc = (uint **)0x412b3e;
    FUN_0044c100();
    local_4 = (uint)local_4._1_3_ << 8;
    ppuStack_b8 = (uint **)0x412b4f;
    FUN_00492340();
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_90;
  pcStack_c0 = (char *)0x412b61;
  ppuStack_b8 = (uint **)FUN_00409000();
  local_4._0_1_ = 0x13;
  ppuStack_bc = (uint **)0x412b79;
  FUN_0040c060();
  local_4 = (uint)local_4._1_3_ << 8;
  ppuStack_b8 = (uint **)0x412b8a;
  FUN_00492340();
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_90;
  pcStack_c0 = (char *)0x412b9c;
  iVar6 = FUN_00407e60();
  local_a1 = *(char *)(iVar6 + 8) == '\x03';
  ppuStack_b8 = (uint **)0x412bb3;
  FUN_00492340();
  if (local_a1 == '\0') {
    ppuStack_bc = (uint **)*puVar2;
    ppuStack_b8 = (uint **)&DAT_0068c120;
    pcStack_c0 = s_Node_not_specified_for_ambush_0066bf4c;
    ppuStack_c4 = (uint **)0xd0a;
    apcStack_d4[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_d4[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_d4[1] = (char *)0x100;
    apcStack_d4[0] = (char *)0x0;
    FUN_00401010();
    ppuStack_bc = (uint **)local_94;
  }
  else {
    ppuStack_b8 = (uint **)&param_2;
    ppuStack_bc = (uint **)auStack_90;
    pcStack_c0 = (char *)0x412bcd;
    piVar3 = (int *)FUN_00407e60();
    puVar7 = *(uint **)(*piVar3 + 0xc);
    ppuStack_b8 = (uint **)0x412bde;
    FUN_00492340();
    iVar6 = -1;
    puVar4 = puVar7;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      uVar8 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar8 != '\0');
    if (iVar6 == -2) {
      puVar2[0xd] = 0xffffffff;
      ppuStack_bc = (uint **)puVar7;
    }
    else {
      ppuStack_bc = &local_94;
      pcStack_c0 = (char *)0x412bf7;
      ppuStack_b8 = (uint **)puVar7;
      puVar4 = (uint *)FUN_004365f0();
      puVar2[0xd] = *puVar4;
      ppuStack_bc = (uint **)puVar7;
    }
  }
  if (puVar2[0xd] == 0xffffffff) {
    ppuStack_b8 = (uint **)&DAT_0068c120;
    pcStack_c0 = s_Fatal_error__ambush_node_not_pre_0066bf24;
    ppuStack_c4 = (uint **)0xd13;
    apcStack_d4[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_d4[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_d4[1] = (char *)0x1;
    apcStack_d4[0] = (char *)0x0;
    FUN_00401010();
  }
  else {
    ppuStack_b8 = (uint **)(*(int *)(DAT_0068be60 + puVar2[0xd] * 4) + 0x30);
    ppuStack_bc = (uint **)0x412c57;
    FUN_00405ed0();
    ppuStack_bc = (uint **)auStack_5c;
    pcStack_c0 = (char *)0x412c62;
    ppuStack_b8 = (uint **)(puVar2 + 0xe);
    puVar7 = (uint *)FUN_004369e0();
    puVar4 = puVar2 + 0x24;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_90;
  pcStack_c0 = (char *)0x412cad;
  ppuStack_b8 = (uint **)FUN_00409000();
  local_4._0_1_ = 0x14;
  ppuStack_bc = (uint **)0x412cc5;
  FUN_0040c060();
  local_4._0_1_ = 0;
  ppuStack_b8 = (uint **)0x412cd6;
  FUN_00492340();
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_30;
  pcStack_c0 = (char *)0x412ceb;
  ppuStack_b8 = (uint **)FUN_00407e60();
  local_4._0_1_ = 0x15;
  ppuStack_bc = (uint **)0x412d00;
  FUN_0044c9a0();
  local_4 = CONCAT31(local_4._1_3_,0x17);
  ppuStack_b8 = (uint **)0x412d14;
  FUN_00492340();
  ppuStack_bc = (uint **)auStack_74;
  ppuStack_b8 = (uint **)s_NORTH_0066bf1c;
  pcStack_c0 = (char *)0x412d23;
  cVar1 = FUN_004b6670();
  if (cVar1 == '\0') {
    ppuStack_bc = (uint **)auStack_74;
    ppuStack_b8 = (uint **)s_SOUTH_0066bf14;
    pcStack_c0 = (char *)0x412d61;
    cVar1 = FUN_004b6670();
    if (cVar1 == '\0') {
      ppuStack_bc = (uint **)auStack_74;
      ppuStack_b8 = (uint **)&DAT_0066bf0c;
      pcStack_c0 = (char *)0x412d9f;
      cVar1 = FUN_004b6670();
      if (cVar1 == '\0') {
        ppuStack_bc = (uint **)auStack_74;
        ppuStack_b8 = (uint **)&DAT_0066bf04;
        pcStack_c0 = (char *)0x412dda;
        cVar1 = FUN_004b6670();
        if (cVar1 == '\0') {
          ppuStack_b8 = (uint **)0x412e0f;
          iVar6 = FUN_004b8250();
          ppuStack_bc = *(uint ***)(iVar6 + 0xc);
          ppuStack_b8 = (uint **)&DAT_0068c120;
          pcStack_c0 = s_Unknown_ambush_direction_0066bee8;
          ppuStack_c4 = (uint **)0xd30;
          apcStack_d4[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
          apcStack_d4[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
          apcStack_d4[1] = (char *)0x64;
          apcStack_d4[0] = (char *)0x0;
          FUN_00401010();
        }
        else {
          ppuStack_b8 = (uint **)0x0;
          ppuStack_bc = (uint **)0x0;
          pcStack_c0 = (char *)0x0;
          ppuStack_c4 = (uint **)0x0;
          apcStack_d4[3] = (char *)0xbff00000;
          apcStack_d4[2] = (char *)0x0;
          puVar2[0x14] = 4;
          apcStack_d4[1] = (char *)0x412dfb;
          ppuStack_b8 = (uint **)FUN_00405ea0();
          ppuStack_bc = (uint **)0x412e04;
          FUN_00405ed0();
        }
      }
      else {
        ppuStack_b8 = (uint **)0x0;
        ppuStack_bc = (uint **)0x0;
        pcStack_c0 = (char *)0x0;
        ppuStack_c4 = (uint **)0x0;
        apcStack_d4[3] = (char *)0x3ff00000;
        apcStack_d4[2] = (char *)0x0;
        puVar2[0x14] = 3;
        apcStack_d4[1] = (char *)0x412dc0;
        ppuStack_b8 = (uint **)FUN_00405ea0();
        ppuStack_bc = (uint **)0x412dc9;
        FUN_00405ed0();
      }
    }
    else {
      ppuStack_b8 = (uint **)0x0;
      ppuStack_bc = (uint **)0x0;
      pcStack_c0 = (char *)0xbff00000;
      ppuStack_c4 = (uint **)0x0;
      apcStack_d4[3] = (char *)0x0;
      apcStack_d4[2] = (char *)0x0;
      puVar2[0x14] = 2;
      apcStack_d4[1] = (char *)0x412d82;
      ppuStack_b8 = (uint **)FUN_00405ea0();
      ppuStack_bc = (uint **)0x412d8b;
      FUN_00405ed0();
    }
  }
  else {
    ppuStack_b8 = (uint **)0x0;
    ppuStack_bc = (uint **)0x0;
    pcStack_c0 = (char *)0x3ff00000;
    ppuStack_c4 = (uint **)0x0;
    apcStack_d4[3] = (char *)0x0;
    apcStack_d4[2] = (char *)0x0;
    puVar2[0x14] = 1;
    apcStack_d4[1] = (char *)0x412d44;
    ppuStack_b8 = (uint **)FUN_00405ea0();
    ppuStack_bc = (uint **)0x412d4d;
    FUN_00405ed0();
  }
  puVar7 = puVar2 + 0x24;
  puVar4 = puVar2 + 0x2c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar7 = puVar2 + 0x24;
  ppcVar9 = apcStack_d4;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar9 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  FUN_00439180(auStack_24);
  fVar10 = (float10)FUN_00413280(auStack_24,puVar2 + 0x16);
  if (fVar10 < (float10)_DAT_0064a668) {
    puVar2[0x32] = puVar2[0x32] | 1;
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_90;
  pcStack_c0 = (char *)0x412ea8;
  ppuStack_b8 = (uint **)FUN_00409000();
  local_4._0_1_ = 0x18;
  ppuStack_bc = (uint **)0x412ec0;
  FUN_0040c060();
  local_4._0_1_ = 0x17;
  ppuStack_b8 = (uint **)0x412ed1;
  FUN_00492340();
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_3c;
  pcStack_c0 = (char *)0x412ee3;
  FUN_00407e60();
  if (cStack_34 == '\x02') {
    local_a0 = (int *)0x0;
    uStack_9c = 0;
    uStack_98 = 0;
    ppuStack_b8 = (uint **)auStack_3c;
    local_4 = CONCAT31(local_4._1_3_,0x1a);
    ppuStack_bc = (uint **)0x412f16;
    FUN_0040c060();
    while ((char)uStack_98 == '\x02') {
      ppuStack_b8 = (uint **)&local_a0;
      ppuStack_bc = (uint **)auStack_80;
      pcStack_c0 = (char *)0x412f30;
      FUN_00407e60();
      local_4._0_1_ = 0x1c;
      if (cStack_78 == '\x06') {
        ppuStack_b8 = (uint **)auStack_80;
        ppuStack_bc = (uint **)0x412f51;
        FUN_00455640();
        local_4._0_1_ = 0x1d;
        ppuStack_b8 = (uint **)0x412f62;
        FUN_004b8250();
        ppuStack_b8 = (uint **)0x412f69;
        local_94 = (uint *)FUN_004b0f30();
        ppuStack_b8 = &local_94;
        ppuStack_bc = (uint **)0x412f7a;
        FUN_00448630();
        local_4._0_1_ = 0x1c;
        ppuStack_b8 = (uint **)0x412f8b;
        FUN_00492340();
      }
      local_4._0_1_ = 0x1a;
      ppuStack_b8 = (uint **)0x412f9c;
      FUN_00492340();
      ppuStack_b8 = (uint **)&local_a0;
      ppuStack_bc = (uint **)auStack_90;
      pcStack_c0 = (char *)0x412fab;
      ppuStack_b8 = (uint **)FUN_00409000();
      local_4._0_1_ = 0x1b;
      ppuStack_bc = (uint **)0x412fc0;
      FUN_0040c060();
      local_4 = CONCAT31(local_4._1_3_,0x1a);
      ppuStack_b8 = (uint **)0x412fd1;
      FUN_00492340();
    }
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 0x19;
    ppuStack_b8 = (uint **)0x412fed;
    FUN_00492340();
  }
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_90;
  pcStack_c0 = (char *)0x412fff;
  ppuStack_b8 = (uint **)FUN_00409000();
  local_4._0_1_ = 0x1e;
  ppuStack_bc = (uint **)0x413017;
  FUN_0040c060();
  local_4._0_1_ = 0x19;
  ppuStack_b8 = (uint **)0x413028;
  FUN_00492340();
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_68;
  pcStack_c0 = (char *)0x41303a;
  FUN_00407e60();
  if (cStack_60 == '\x02') {
    ppuStack_b8 = (uint **)0x413051;
    FUN_004042a0();
    ppuStack_b8 = (uint **)auStack_68;
    local_4 = CONCAT31(local_4._1_3_,0x20);
    ppuStack_bc = (uint **)0x413067;
    FUN_0040c060();
    while ((char)uStack_98 == '\x02') {
      ppuStack_b8 = (uint **)&local_a0;
      ppuStack_bc = (uint **)auStack_80;
      pcStack_c0 = (char *)0x413081;
      FUN_00407e60();
      local_4._0_1_ = 0x22;
      if (cStack_78 == '\t') {
        ppuStack_b8 = (uint **)auStack_80;
        ppuStack_bc = (uint **)0x4130a2;
        FUN_0044c9a0();
        local_4._0_1_ = 0x23;
        ppuStack_b8 = (uint **)0x4130b3;
        iVar6 = FUN_004b8250();
        ppuStack_b8 = (uint **)(iVar6 + 0xc);
        ppuStack_bc = (uint **)0x4130c2;
        FUN_00448c80();
        local_4._0_1_ = 0x22;
        ppuStack_b8 = (uint **)0x4130d3;
        FUN_00492340();
      }
      local_4._0_1_ = 0x20;
      ppuStack_b8 = (uint **)0x4130e4;
      FUN_00492340();
      ppuStack_b8 = (uint **)&local_a0;
      ppuStack_bc = (uint **)auStack_5c;
      pcStack_c0 = (char *)0x4130f3;
      ppuStack_b8 = (uint **)FUN_00409000();
      local_4._0_1_ = 0x21;
      ppuStack_bc = (uint **)0x413108;
      FUN_0040c060();
      local_4 = CONCAT31(local_4._1_3_,0x20);
      ppuStack_b8 = (uint **)0x413119;
      FUN_00492340();
    }
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 0x1f;
    ppuStack_b8 = (uint **)0x413135;
    FUN_00492340();
  }
  local_4._0_1_ = 0x19;
  ppuStack_b8 = (uint **)0x413146;
  FUN_00492340();
  ppuStack_b8 = (uint **)&param_2;
  ppuStack_bc = (uint **)auStack_5c;
  pcStack_c0 = (char *)0x413158;
  ppuStack_b8 = (uint **)FUN_00409000();
  local_4._0_1_ = 0x24;
  ppuStack_bc = (uint **)0x413170;
  FUN_0040c060();
  local_4._0_1_ = 0x19;
  ppuStack_b8 = (uint **)0x413181;
  FUN_00492340();
  if ((char)param_4 == '\x02') {
    ppuStack_b8 = (uint **)&param_2;
    ppuStack_bc = (uint **)auStack_5c;
    pcStack_c0 = (char *)0x4131a1;
    iVar6 = FUN_00407e60();
    local_a1 = *(char *)(iVar6 + 8) == '\x06';
    ppuStack_b8 = (uint **)0x4131b8;
    FUN_00492340();
    if (local_a1 != '\0') {
      ppuStack_b8 = (uint **)&param_2;
      ppuStack_bc = (uint **)auStack_5c;
      pcStack_c0 = (char *)0x4131d2;
      ppuStack_b8 = (uint **)FUN_00407e60();
      local_4._0_1_ = 0x25;
      ppuStack_bc = (uint **)0x4131e7;
      FUN_00455640();
      local_4 = CONCAT31(local_4._1_3_,0x27);
      ppuStack_b8 = (uint **)0x4131f8;
      FUN_00492340();
      if ((uStack_98 != 0) || (local_a0 != (int *)0x0)) {
        ppuStack_b8 = (uint **)0x41320d;
        FUN_004b8250();
        ppuStack_b8 = (uint **)0x413214;
        fVar10 = (float10)FUN_004b0f20();
        *(double *)(puVar2 + 0x3a) = (double)fVar10;
      }
      local_4._0_1_ = 0x19;
      ppuStack_b8 = (uint **)0x41322b;
      FUN_00492340();
    }
  }
  local_4._0_1_ = 0x17;
  ppuStack_b8 = (uint **)0x41323c;
  FUN_00492340();
  local_4 = (uint)local_4._1_3_ << 8;
  ppuStack_b8 = (uint **)0x41324d;
  FUN_00492340();
  local_4 = 0xffffffff;
  ppuStack_b8 = (uint **)0x413264;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return puVar2;
}

