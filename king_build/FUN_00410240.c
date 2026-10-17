
int * FUN_00410240(undefined4 param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  float10 fVar11;
  int *local_d0 [2];
  uint uStack_c8;
  undefined1 auStack_c4 [8];
  char cStack_bc;
  uint uStack_b8;
  undefined1 local_b1;
  int *local_b0;
  undefined1 local_a9;
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [8];
  char cStack_94;
  undefined1 auStack_90 [12];
  int iStack_84;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  int iStack_6c;
  int iStack_68;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063c10d;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  piVar4 = (int *)FUN_00631d33(0x50);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    local_b0 = piVar4;
    FUN_004042a0();
    local_4._0_1_ = 2;
    FUN_00478a20(&local_a9);
    local_4 = CONCAT31(local_4._1_3_,3);
    piVar4[6] = -1;
    FUN_00478a20(&local_b1);
    piVar4[0xc] = 0;
    piVar4[10] = 0;
    piVar4[0xd] = 0;
    FUN_00405ea0(0,0,0,0,0,0);
  }
  local_b0 = piVar4;
  piVar5 = (int *)FUN_00409000(local_d0,&param_2);
  local_4._0_1_ = 4;
  if ((((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
      (param_2[1] = param_2[1] + -1, param_2[1] == 0)) &&
     ((cVar3 = FUN_00408fd0(&param_2,piVar5), cVar3 == '\0' && (param_2 != (int *)0x0)))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar5[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar5;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar5[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar5;
    param_3 = piVar5[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_c8 & 0x10000) == 0) && (local_d0[0] != (int *)0x0)) &&
     ((local_d0[0][1] = local_d0[0][1] + -1, local_d0[0][1] == 0 && (local_d0[0] != (int *)0x0)))) {
    (**(code **)(*local_d0[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00407e60(local_d0,&param_2);
  iVar6 = *piVar4;
  local_4._0_1_ = 5;
  if ((((iVar6 != 0) && ((piVar4[2] & 0x10000U) == 0)) &&
      (*(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1, *(int *)(*piVar4 + 4) == 0)) &&
     ((cVar3 = FUN_00408fd0(piVar4,piVar5), cVar3 == '\0' && ((int *)*piVar4 != (int *)0x0)))) {
    (**(code **)(*(int *)*piVar4 + 0xc))(1);
  }
  if ((piVar5[2] & 0x10000U) == 0) {
    piVar4[1] = 0;
    if (*piVar5 == 0) {
      *piVar4 = 0;
      piVar4[2] = 0;
    }
    else {
      *piVar4 = *piVar5;
      piVar4[2] = piVar5[2];
      *(int *)(*piVar4 + 4) = *(int *)(*piVar4 + 4) + 1;
    }
  }
  else {
    piVar4[2] = piVar5[2];
    *piVar4 = *piVar5;
    piVar4[1] = piVar5[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_c8 & 0x10000) == 0) && (local_d0[0] != (int *)0x0)) &&
     ((local_d0[0][1] = local_d0[0][1] + -1, local_d0[0][1] == 0 && (local_d0[0] != (int *)0x0)))) {
    (**(code **)(*local_d0[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00409000(local_d0,&param_2);
  local_4._0_1_ = 6;
  if ((((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
      (param_2[1] = param_2[1] + -1, param_2[1] == 0)) &&
     ((cVar3 = FUN_00408fd0(&param_2,piVar5), cVar3 == '\0' && (param_2 != (int *)0x0)))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar5[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar5;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar5[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar5;
    param_3 = piVar5[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_c8 & 0x10000) == 0) && (local_d0[0] != (int *)0x0)) &&
     ((local_d0[0][1] = local_d0[0][1] + -1, local_d0[0][1] == 0 && (local_d0[0] != (int *)0x0)))) {
    (**(code **)(*local_d0[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00407e60(local_d0,&param_2);
  iVar6 = *piVar5;
  piVar5 = piVar4 + 3;
  piVar10 = (int *)(iVar6 + 0xc);
  local_4._0_1_ = 7;
  if (piVar10 != piVar5) {
    iVar7 = *(int *)(iVar6 + 0x10);
    iVar1 = *piVar10;
    iVar2 = *piVar5;
    uVar9 = iVar7 - iVar1;
    uStack_b8 = uVar9;
    if ((uint)(piVar4[5] - iVar2) < uVar9) {
      iVar6 = FUN_00458d60(uVar9,iVar1,iVar7);
      iVar7 = piVar4[5] - *piVar5;
      if (iVar7 != 0) {
        FUN_0044b440(*piVar5,iVar7);
      }
      *piVar5 = iVar6;
      piVar4[5] = iVar6 + uVar9;
    }
    else if ((uint)(piVar4[4] - iVar2) < uVar9) {
      FUN_00407250(iVar1,(piVar4[4] - iVar2) + iVar1,iVar2);
      FUN_00407250((piVar4[4] - *piVar5) + *piVar10,*(undefined4 *)(iVar6 + 0x10),piVar4[4]);
      uVar9 = uStack_b8;
    }
    else {
      FUN_00407250(iVar1,iVar7,iVar2);
      uVar9 = uStack_b8;
    }
    piVar4[4] = *piVar5 + uVar9;
    piVar4 = local_b0;
  }
  local_4._0_1_ = 0;
  if (((((uStack_c8 & 0x10000) == 0) && (local_d0[0] != (int *)0x0)) &&
      (local_d0[0][1] = local_d0[0][1] + -1, local_d0[0][1] == 0)) && (local_d0[0] != (int *)0x0)) {
    (**(code **)(*local_d0[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00409000(local_d0,&param_2);
  local_4._0_1_ = 8;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     ((param_2[1] = param_2[1] + -1, param_2[1] == 0 &&
      ((cVar3 = FUN_00408fd0(&param_2,piVar5), cVar3 == '\0' && (param_2 != (int *)0x0)))))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar5[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar5;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar5[2];
      *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 1;
    }
  }
  else {
    param_2 = (int *)*piVar5;
    param_3 = piVar5[1];
  }
  local_4._0_1_ = 0;
  if (((((uStack_c8 & 0x10000) == 0) && (local_d0[0] != (int *)0x0)) &&
      (local_d0[0][1] = local_d0[0][1] + -1, local_d0[0][1] == 0)) && (local_d0[0] != (int *)0x0)) {
    (**(code **)(*local_d0[0] + 0xc))(1);
  }
  FUN_00407e60(local_d0,&param_2);
  local_4._0_1_ = 9;
  iVar6 = FUN_004b0f30();
  piVar4[6] = iVar6;
  local_4._0_1_ = 0;
  if ((((uStack_c8 & 0x10000) == 0) && (local_d0[0] != (int *)0x0)) &&
     ((local_d0[0][1] = local_d0[0][1] + -1, local_d0[0][1] == 0 && (local_d0[0] != (int *)0x0)))) {
    (**(code **)(*local_d0[0] + 0xc))(1);
  }
  uVar8 = FUN_00409000(auStack_a8,&param_2);
  local_4._0_1_ = 10;
  FUN_0040c060(uVar8);
  local_4._0_1_ = 0;
  FUN_00492340();
  uVar8 = FUN_00409000(auStack_a8,&param_2);
  local_4._0_1_ = 0xb;
  FUN_0040c060(uVar8);
  local_4._0_1_ = 0;
  FUN_00492340();
  FUN_004042a0();
  uVar8 = FUN_00407e60(auStack_a8,&param_2);
  local_4._0_1_ = 0xd;
  FUN_0040c060(uVar8);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_00492340();
  while (cStack_94 == '\x02') {
    FUN_00410d10();
    FUN_00407e60(auStack_c4,auStack_9c);
    uVar8 = FUN_00409000(auStack_18,auStack_c4);
    local_4._0_1_ = 0x11;
    FUN_0040c060(uVar8);
    local_4._0_1_ = 0x10;
    FUN_00492340();
    uVar8 = FUN_00407e60(auStack_30,auStack_c4);
    local_4._0_1_ = 0x12;
    FUN_004556d0(uVar8);
    local_4._0_1_ = 0x14;
    FUN_00492340();
    iVar6 = FUN_004b8250();
    iVar6 = FUN_004555d0(DAT_0068be60,DAT_0068be64,*(undefined4 *)(iVar6 + 0xc));
    if (iVar6 == DAT_0068be64) {
      iVar6 = FUN_004b8250();
      FUN_00401010(0x5a,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xc2a,
                   s_Can_not_find_node_named_0066be98,*(undefined4 *)(iVar6 + 0xc),&DAT_0068c120);
    }
    else {
      iStack_78 = iVar6 - DAT_0068be60 >> 2;
      uVar8 = FUN_00409000(auStack_54,auStack_c4);
      local_4._0_1_ = 0x15;
      FUN_0040c060(uVar8);
      local_4._0_1_ = 0x14;
      FUN_00492340();
      if (cStack_bc == '\x02') {
        uVar8 = FUN_00407e60(auStack_3c,auStack_c4);
        local_4._0_1_ = 0x16;
        FUN_00455640(uVar8);
        local_4 = CONCAT31(local_4._1_3_,0x18);
        FUN_00492340();
        if ((uStack_c8 != 0) || (local_d0[0] != (int *)0x0)) {
          FUN_004b8250();
          uStack_74 = FUN_004b0f30();
        }
        uVar8 = FUN_00409000(auStack_24,auStack_c4);
        local_4._0_1_ = 0x19;
        FUN_0040c060(uVar8);
        local_4._0_1_ = 0x18;
        FUN_00492340();
        if (cStack_bc == '\x02') {
          uVar8 = FUN_00407e60(auStack_48,auStack_c4);
          local_4._0_1_ = 0x1a;
          FUN_004556d0(uVar8);
          local_4 = CONCAT31(local_4._1_3_,0x1c);
          FUN_00492340();
          if ((iStack_7c != 0) || (iStack_84 != 0)) {
            iVar6 = FUN_004b8250();
            FUN_0044c100(iVar6 + 0xc);
          }
          local_4._0_1_ = 0x18;
          FUN_00492340();
        }
        if ((iStack_6c == iStack_68) && ((uStack_74 & 4) != 0)) {
          uVar8 = FUN_00410cf0(&DAT_0068c120);
          FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xc41,
                       s_Location_name_not_provided_0066be7c,uVar8);
        }
        local_4._0_1_ = 0x14;
        FUN_00492340();
      }
      FUN_004485f0(&iStack_78);
    }
    local_4._0_1_ = 0x10;
    FUN_00492340();
    local_4._0_1_ = 0xf;
    FUN_00492340();
    local_4._0_1_ = 0xc;
    FUN_00410d40();
    uVar8 = FUN_00409000(auStack_90,auStack_9c);
    local_4._0_1_ = 0xe;
    FUN_0040c060(uVar8);
    local_4 = CONCAT31(local_4._1_3_,0xc);
    FUN_00492340();
  }
  uVar8 = FUN_00409000(auStack_90,&param_2);
  local_4._0_1_ = 0x1d;
  FUN_0040c060(uVar8);
  local_4._0_1_ = 0xc;
  FUN_00492340();
  piVar4[0xc] = 0;
  piVar4[0xd] = 0x40100000;
  if ((char)param_4 == '\x02') {
    uVar8 = FUN_00407e60(auStack_90,&param_2);
    local_4._0_1_ = 0x1e;
    FUN_00455640(uVar8);
    local_4 = CONCAT31(local_4._1_3_,0x20);
    FUN_00492340();
    if ((uStack_c8 != 0) || (local_d0[0] != (int *)0x0)) {
      FUN_004b8250();
      fVar11 = (float10)FUN_004b0f20();
      *(double *)(piVar4 + 0xc) = (double)fVar11;
    }
    local_4._0_1_ = 0xc;
    FUN_00492340();
  }
  if ((int *)piVar4[7] != (int *)piVar4[8]) {
    FUN_00405ed0(*(int *)(DAT_0068be60 + *(int *)piVar4[7] * 4) + 0x30);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return piVar4;
}

