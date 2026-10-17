
int FUN_00415840(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int iStack_6c;
  undefined1 *puStack_68;
  int **ppiStack_64;
  int *piStack_60;
  int *local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined4 *local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  char *local_24;
  undefined *local_20;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c7eb;
  local_c = ExceptionList;
  piStack_60 = (int *)0x8;
  ppiStack_64 = (int **)s_START__0066b830;
  local_24 = s_createNewPlayer_int_type__int_or_0066c114;
  local_20 = &DAT_0071d768;
  puStack_68 = (undefined1 *)0x41587d;
  ExceptionList = &local_c;
  FUN_00401870();
  piStack_60 = (int *)s_createNewPlayer_int_type__int_or_0066c114;
  ppiStack_64 = (int **)0x41588c;
  FUN_004018b0();
  piVar1 = param_1;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  switch(param_1) {
  case (int *)0x1:
    piStack_60 = (int *)param_2;
    ppiStack_64 = *(int ***)(DAT_0068bea8 + (int)param_1 * 4);
    puStack_68 = (undefined1 *)0x4158bd;
    puStack_68 = (undefined1 *)FUN_004030e0();
    iStack_6c = 0x4158c3;
    iVar3 = FUN_00473470();
    uVar5 = DAT_0068bf4c;
    *(undefined4 *)(iVar3 + 0x80) = DAT_0068bf48;
    *(undefined4 *)(iVar3 + 0x84) = uVar5;
    param_2 = iVar3;
    if (DAT_0068c0a4 == 0) {
      piStack_60 = (int *)0x30;
      if (DAT_0068c0d8 == '\0') {
        ppiStack_64 = (int **)0x415a31;
        piVar6 = (int *)FUN_00631d33();
        local_4._0_1_ = 5;
        local_4c = piVar6;
        if (piVar6 != (int *)0x0) {
          puStack_68 = local_40;
          piStack_60 = (int *)DAT_0068c0a8;
          ppiStack_64 = (int **)s_RenaultL_0066b60c;
          iStack_6c = 0x415a58;
          piVar8 = (int *)FUN_004146e0();
          piVar6[1] = *piVar8;
          piStack_60 = (int *)&param_3;
          ppiStack_64 = (int **)local_1c;
          piVar6[2] = 0;
          puStack_68 = (undefined1 *)0x13;
          *piVar6 = -1;
          piVar6[3] = 0x3ff00000;
          local_1c[0] = 0;
          local_14 = 0;
          local_10 = 0x3ff00000;
          iStack_6c = 0x415a98;
          FUN_00448480();
          piStack_60 = (int *)&param_1;
          local_4._0_1_ = 6;
          ppiStack_64 = (int **)0x415aaa;
          FUN_00478a20();
          piVar6[10] = 0;
          *(int **)(iVar3 + 0x1fc) = piVar6;
          break;
        }
      }
      else {
        ppiStack_64 = (int **)0x415996;
        piVar6 = (int *)FUN_00631d33();
        local_4._0_1_ = 3;
        local_4c = piVar6;
        if (piVar6 != (int *)0x0) {
          ppiStack_64 = (int **)local_44;
          piStack_60 = (int *)s_JEEP_TOYOTA_GREEN_0066c100;
          puStack_68 = (undefined1 *)0x4159b7;
          piVar8 = (int *)FUN_00414660();
          piVar6[1] = *piVar8;
          piStack_60 = (int *)&param_3;
          ppiStack_64 = (int **)local_1c;
          piVar6[2] = 0;
          puStack_68 = (undefined1 *)0x13;
          *piVar6 = -1;
          piVar6[3] = 0x3ff00000;
          local_1c[0] = 0;
          local_14 = 0;
          local_10 = 0x3ff00000;
          iStack_6c = 0x4159f7;
          FUN_00448480();
          piStack_60 = (int *)&param_1;
          local_4._0_1_ = 4;
          ppiStack_64 = (int **)0x415a09;
          FUN_00478a20();
          piVar6[10] = 0;
          *(int **)(iVar3 + 0x1fc) = piVar6;
          break;
        }
      }
    }
    else {
      piStack_60 = (int *)0x30;
      ppiStack_64 = (int **)0x4158f7;
      piVar6 = (int *)FUN_00631d33();
      local_4._0_1_ = 1;
      local_4c = piVar6;
      if (piVar6 != (int *)0x0) {
        ppiStack_64 = (int **)local_48;
        piStack_60 = (int *)DAT_0068c0a4;
        puStack_68 = (undefined1 *)0x41591e;
        piVar8 = (int *)FUN_00414660();
        iVar9 = *piVar8;
        piStack_60 = (int *)&param_3;
        ppiStack_64 = (int **)local_1c;
        piVar6[2] = 0;
        puStack_68 = (undefined1 *)0x13;
        *piVar6 = -1;
        piVar6[1] = iVar9;
        piVar6[3] = 0x3ff00000;
        local_1c[0] = 0;
        local_14 = 0;
        local_10 = 0x3ff00000;
        iStack_6c = 0x41595e;
        FUN_00448480();
        piStack_60 = (int *)&param_1;
        local_4._0_1_ = 2;
        ppiStack_64 = (int **)0x415970;
        FUN_00478a20();
        piVar6[10] = 0;
        *(int **)(iVar3 + 0x1fc) = piVar6;
        break;
      }
    }
    *(undefined4 *)(iVar3 + 0x1fc) = 0;
    break;
  case (int *)0x2:
    piStack_60 = *(int **)(DAT_0068bea8 + (int)param_1 * 4);
    ppiStack_64 = (int **)0x415acb;
    ppiStack_64 = (int **)FUN_004030b0();
    puStack_68 = (undefined1 *)0x415ad1;
    iVar3 = FUN_00473470();
    uVar5 = DAT_0068bf4c;
    *(undefined4 *)(iVar3 + 0x80) = DAT_0068bf48;
    *(undefined4 *)(iVar3 + 0x84) = uVar5;
    param_2 = iVar3;
    do {
      piStack_60 = *(int **)(DAT_00689790 + (int)piVar1 * 4);
      ppiStack_64 = (int **)piVar1;
      puStack_68 = (undefined1 *)0x415b01;
      iVar9 = FUN_00415810();
      if ((DAT_0068c0e8 == 0) || (*(int *)(*(int *)(DAT_0068bf38 + iVar9 * 4) + 0x20) == 3)) {
        piStack_60 = (int *)0x2;
        puStack_68 = (undefined1 *)0x415b2b;
        ppiStack_64 = (int **)iVar9;
        piVar6 = (int *)FUN_00447930();
        param_3 = &iStack_6c;
        FUN_004489a0(*piVar6 + 0x24);
        cVar2 = FUN_00415690();
        if (cVar2 != '\0') goto LAB_00415b55;
      }
      piVar6 = (int *)(DAT_00689790 + (int)piVar1 * 4);
      *piVar6 = *piVar6 + 1;
    } while( true );
  case (int *)0x5:
  case (int *)0x6:
    piStack_60 = *(int **)(DAT_0068bea8 + (int)param_1 * 4);
    ppiStack_64 = (int **)0x416158;
    ppiStack_64 = (int **)FUN_004030b0();
    puStack_68 = (undefined1 *)0x41615e;
    param_2 = FUN_00473470();
    piVar6 = *(int **)(DAT_00689790 + (int)piVar1 * 4);
    param_1 = piVar6;
    while( true ) {
      piStack_60 = piVar1;
      puStack_68 = (undefined1 *)0x41617d;
      ppiStack_64 = (int **)piVar6;
      piVar8 = (int *)FUN_00447930();
      param_3 = &iStack_6c;
      FUN_004489a0(*piVar8 + 0x24);
      cVar2 = FUN_00415690();
      if (cVar2 != '\0') break;
      piVar6 = (int *)(((int)piVar6 + 1U) % (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2));
    }
    piStack_60 = (int *)0x30;
    ppiStack_64 = (int **)0x4161c4;
    param_1 = piVar6;
    puVar7 = (undefined4 *)FUN_00631d33();
    local_4._0_1_ = 0x13;
    local_3c = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      ppiStack_64 = (int **)local_28;
      puStack_68 = (undefined1 *)0x4161e7;
      piStack_60 = piVar6;
      puVar4 = (undefined4 *)FUN_00414790();
      uVar5 = *puVar4;
      piStack_60 = (int *)&param_3;
      puVar7[2] = 0;
      ppiStack_64 = (int **)0x13;
      *puVar7 = 0xffffffff;
      puVar7[1] = uVar5;
      puVar7[3] = 0x3ff00000;
      local_1c[0] = 0;
      local_14 = 0;
      local_10 = 0x3ff00000;
      puStack_68 = (undefined1 *)0x416228;
      local_4c = puVar7 + 4;
      FUN_004670f0();
      iStack_6c = puVar7[4];
      ppiStack_64 = (int **)local_1c;
      piStack_60 = param_3;
      puStack_68 = (undefined1 *)0x13;
      local_4._0_1_ = 0x14;
      uVar5 = FUN_004663a0();
      puVar7[5] = uVar5;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      piVar6 = param_1;
    }
    *(undefined4 **)(param_2 + 0x1fc) = puVar7;
    *(uint *)(DAT_00689790 + (int)piVar1 * 4) =
         ((int)piVar6 + 1U) % (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2);
    break;
  case (int *)0x7:
    piStack_60 = *(int **)(DAT_0068bea8 + (int)param_1 * 4);
    ppiStack_64 = (int **)0x415d1a;
    ppiStack_64 = (int **)FUN_004030b0();
    puStack_68 = (undefined1 *)0x415d20;
    param_2 = FUN_00473470();
    puVar12 = (undefined1 *)param_3;
    if (param_3 == (int *)0xffffffff) {
      while( true ) {
        piStack_60 = *(int **)(DAT_00689790 + (int)piVar1 * 4);
        ppiStack_64 = (int **)piVar1;
        puStack_68 = (undefined1 *)0x415d43;
        uVar5 = FUN_00415810();
        piStack_60 = (int *)0x7;
        puStack_68 = (undefined1 *)0x415d55;
        ppiStack_64 = (int **)uVar5;
        piVar6 = (int *)FUN_00447930();
        param_3 = &iStack_6c;
        FUN_004489a0(*piVar6 + 0x24);
        cVar2 = FUN_00415690();
        if (cVar2 != '\0') break;
        piStack_60 = (int *)0x2;
        puStack_68 = (undefined1 *)0x415d82;
        ppiStack_64 = (int **)uVar5;
        piVar6 = (int *)FUN_00447930();
        param_3 = &iStack_6c;
        FUN_004489a0(*piVar6 + 0x24);
        cVar2 = FUN_00415690();
        if (cVar2 != '\0') break;
        piVar6 = (int *)(DAT_00689790 + (int)piVar1 * 4);
        *piVar6 = *piVar6 + 1;
      }
      ppiStack_64 = (int **)local_34;
      puStack_68 = (undefined1 *)0x415db7;
      piStack_60 = (int *)uVar5;
      puVar7 = (undefined4 *)FUN_00414790();
      puVar12 = (undefined1 *)*puVar7;
      piVar6 = (int *)(DAT_00689790 + (int)piVar1 * 4);
      *piVar6 = *piVar6 + 1;
    }
    piStack_60 = (int *)0x30;
    ppiStack_64 = (int **)0x415dcb;
    puVar7 = (undefined4 *)FUN_00631d33();
    local_4._0_1_ = 0xb;
    local_3c = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
LAB_00416134:
      puVar7 = (undefined4 *)0x0;
    }
    else {
      piStack_60 = (int *)&param_3;
      ppiStack_64 = (int **)local_1c;
      puVar7[2] = 0;
      puStack_68 = (undefined1 *)0x13;
      *puVar7 = 0xffffffff;
      puVar7[1] = puVar12;
      puVar7[3] = 0x3ff00000;
      local_1c[0] = 0;
      local_14 = 0;
      local_10 = 0x3ff00000;
      iStack_6c = 0x415e1c;
      FUN_00448480();
      piStack_60 = (int *)&param_1;
      local_4._0_1_ = 0xc;
      ppiStack_64 = (int **)0x415e2e;
      FUN_00478a20();
      puVar7[10] = 0;
    }
    goto LAB_00416136;
  case (int *)0x8:
    piStack_60 = *(int **)(DAT_0068bea8 + (int)param_1 * 4);
    ppiStack_64 = (int **)0x415e45;
    ppiStack_64 = (int **)FUN_004030b0();
    puStack_68 = (undefined1 *)0x415e4b;
    param_2 = FUN_00473470();
    while( true ) {
      piStack_60 = *(int **)(DAT_00689790 + (int)piVar1 * 4);
      ppiStack_64 = (int **)piVar1;
      puStack_68 = (undefined1 *)0x415e61;
      uVar5 = FUN_00415810();
      piStack_60 = (int *)0x7;
      puStack_68 = (undefined1 *)0x415e73;
      ppiStack_64 = (int **)uVar5;
      piVar6 = (int *)FUN_00447930();
      param_3 = &iStack_6c;
      FUN_004489a0(*piVar6 + 0x24);
      cVar2 = FUN_00415690();
      if (cVar2 != '\0') break;
      piStack_60 = (int *)0x8;
      puStack_68 = (undefined1 *)0x415ea0;
      ppiStack_64 = (int **)uVar5;
      piVar6 = (int *)FUN_00447930();
      param_3 = &iStack_6c;
      FUN_004489a0(*piVar6 + 0x24);
      cVar2 = FUN_00415690();
      if (cVar2 != '\0') break;
      piStack_60 = (int *)0x2;
      puStack_68 = (undefined1 *)0x415ecd;
      ppiStack_64 = (int **)uVar5;
      piVar6 = (int *)FUN_00447930();
      param_3 = &iStack_6c;
      FUN_004489a0(*piVar6 + 0x24);
      cVar2 = FUN_00415690();
      if (cVar2 != '\0') break;
      piVar6 = (int *)(DAT_00689790 + (int)piVar1 * 4);
      *piVar6 = *piVar6 + 1;
    }
    piStack_60 = (int *)0x30;
    ppiStack_64 = (int **)0x415f01;
    puVar7 = (undefined4 *)FUN_00631d33();
    local_4._0_1_ = 0xd;
    local_3c = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      ppiStack_64 = (int **)local_30;
      puStack_68 = (undefined1 *)0x415f22;
      piStack_60 = (int *)uVar5;
      puVar4 = (undefined4 *)FUN_00414790();
      uVar5 = *puVar4;
      piStack_60 = (int *)&param_3;
      puVar7[2] = 0;
      ppiStack_64 = (int **)0x13;
      *puVar7 = 0xffffffff;
      puVar7[1] = uVar5;
      puVar7[3] = 0x3ff00000;
      local_1c[0] = 0;
      local_14 = 0;
      local_10 = 0x3ff00000;
      puStack_68 = (undefined1 *)0x415f63;
      param_1 = puVar7 + 4;
      FUN_004670f0();
      iStack_6c = puVar7[4];
      ppiStack_64 = (int **)local_1c;
      piStack_60 = param_3;
      puStack_68 = (undefined1 *)0x13;
      local_4._0_1_ = 0xe;
      uVar5 = FUN_004663a0();
      puVar7[5] = uVar5;
      piStack_60 = (int *)&param_1;
      local_4._0_1_ = 0xf;
      ppiStack_64 = (int **)0x415f95;
      FUN_00478a20();
      puVar7[10] = 0;
    }
    *(undefined4 **)(param_2 + 0x1fc) = puVar7;
    piVar6 = (int *)(DAT_00689790 + (int)piVar1 * 4);
    *piVar6 = *piVar6 + 1;
    break;
  case (int *)0x9:
    piStack_60 = *(int **)(DAT_0068bea8 + (int)param_1 * 4);
    ppiStack_64 = (int **)0x415fc6;
    ppiStack_64 = (int **)FUN_004030b0();
    puStack_68 = (undefined1 *)0x415fcc;
    param_2 = FUN_00473470();
    puVar12 = (undefined1 *)param_3;
    if (param_3 == (int *)0xffffffff) {
      while( true ) {
        piStack_60 = *(int **)(DAT_00689790 + (int)piVar1 * 4);
        ppiStack_64 = (int **)piVar1;
        puStack_68 = (undefined1 *)0x415fef;
        uVar5 = FUN_00415810();
        piStack_60 = (int *)0x9;
        puStack_68 = (undefined1 *)0x416001;
        ppiStack_64 = (int **)uVar5;
        piVar6 = (int *)FUN_00447930();
        param_3 = &iStack_6c;
        FUN_004489a0(*piVar6 + 0x24);
        cVar2 = FUN_00415690();
        if (cVar2 != '\0') break;
        piStack_60 = (int *)0x2;
        puStack_68 = (undefined1 *)0x41602e;
        ppiStack_64 = (int **)uVar5;
        piVar6 = (int *)FUN_00447930();
        param_3 = &iStack_6c;
        FUN_004489a0(*piVar6 + 0x24);
        cVar2 = FUN_00415690();
        if (cVar2 != '\0') break;
        piStack_60 = (int *)0x7;
        puStack_68 = (undefined1 *)0x41605b;
        ppiStack_64 = (int **)uVar5;
        piVar6 = (int *)FUN_00447930();
        param_3 = &iStack_6c;
        FUN_004489a0(*piVar6 + 0x24);
        cVar2 = FUN_00415690();
        if ((cVar2 != '\0') && (DAT_0068c100 != '\0')) break;
        piVar6 = (int *)(DAT_00689790 + (int)piVar1 * 4);
        *piVar6 = *piVar6 + 1;
      }
      ppiStack_64 = (int **)local_2c;
      puStack_68 = (undefined1 *)0x41609b;
      piStack_60 = (int *)uVar5;
      puVar7 = (undefined4 *)FUN_00414790();
      puVar12 = (undefined1 *)*puVar7;
      piVar6 = (int *)(DAT_00689790 + (int)piVar1 * 4);
      *piVar6 = *piVar6 + 1;
    }
    piStack_60 = (int *)0x30;
    ppiStack_64 = (int **)0x4160af;
    puVar7 = (undefined4 *)FUN_00631d33();
    local_4._0_1_ = 0x10;
    local_3c = puVar7;
    if (puVar7 == (undefined4 *)0x0) goto LAB_00416134;
    puVar7[1] = puVar12;
    piStack_60 = (int *)&param_3;
    puVar7[2] = 0;
    ppiStack_64 = (int **)0x13;
    *puVar7 = 0xffffffff;
    puVar7[3] = 0x3ff00000;
    local_1c[0] = 0;
    local_14 = 0;
    local_10 = 0x3ff00000;
    puStack_68 = (undefined1 *)0x4160fd;
    param_1 = puVar7 + 4;
    FUN_004670f0();
    iStack_6c = puVar7[4];
    ppiStack_64 = (int **)local_1c;
    piStack_60 = param_3;
    puStack_68 = (undefined1 *)0x13;
    local_4._0_1_ = 0x11;
    uVar5 = FUN_004663a0();
    puVar7[5] = uVar5;
    piStack_60 = (int *)&param_1;
    local_4._0_1_ = 0x12;
    ppiStack_64 = (int **)0x41612f;
    FUN_00478a20();
    puVar7[10] = 0;
LAB_00416136:
    *(undefined4 **)(param_2 + 0x1fc) = puVar7;
  }
switchD_004158a2_caseD_3:
  iVar3 = param_2;
  local_4._0_1_ = 0;
  *(int **)(param_2 + 0x54) = piVar1;
  pcVar10 = DAT_0068c008;
  if (piVar1 == (int *)0x1) {
    iStack_6c = *(int *)(param_2 + 0x10c);
    piStack_60 = (int *)0x0;
    param_3 = *(int **)(param_2 + 0x10c);
    iVar9 = *(int *)(param_2 + 0x108);
    puStack_68 = (undefined1 *)iVar9;
    ppiStack_64 = (int **)param_3;
    FUN_0046ecd0(param_3);
    uVar11 = 0xffffffff;
    *(int *)(iVar3 + 0x10c) = *(int *)(iVar3 + 0x10c) + (iVar9 - (int)param_3);
    pcVar13 = pcVar10;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    piStack_60 = (int *)(pcVar10 + ~uVar11);
    puStack_68 = *(undefined1 **)(param_2 + 0x10c);
    ppiStack_64 = (int **)pcVar10;
    iStack_6c = 0x4162fd;
    FUN_0044c1c0();
    iVar3 = param_2;
  }
  else {
    piStack_60 = (int *)param_2;
    ppiStack_64 = (int **)0x41630c;
    piStack_60 = (int *)FUN_004147a0();
    ppiStack_64 = (int **)0x416317;
    FUN_004741b0();
    piVar1 = (int *)(iVar3 + 0x108);
    piVar6 = (int *)(DAT_006898b8 + 4 + *(int *)(iVar3 + 0x3d8) * 0x38);
    if (piVar6 != piVar1) {
      param_3 = (int *)piVar6[1];
      ppiStack_64 = (int **)*piVar6;
      puStack_68 = (undefined1 *)*piVar1;
      uVar11 = (int)param_3 - (int)ppiStack_64;
      if ((uint)(*(int *)(iVar3 + 0x110) - (int)puStack_68) < uVar11) {
        iStack_6c = 0x416362;
        puStack_68 = (undefined1 *)uVar11;
        piStack_60 = param_3;
        iVar9 = FUN_00458d60();
        ppiStack_64 = (int **)*piVar1;
        piStack_60 = (int *)(*(int *)(iVar3 + 0x110) - (int)ppiStack_64);
        if (piStack_60 != (int *)0x0) {
          puStack_68 = (undefined1 *)0x416374;
          FUN_0044b440();
        }
        *piVar1 = iVar9;
        *(uint *)(iVar3 + 0x110) = iVar9 + uVar11;
      }
      else {
        piStack_60 = (int *)(*(int *)(iVar3 + 0x10c) - (int)puStack_68);
        if (piStack_60 < uVar11) {
          iStack_6c = 0x4163a4;
          FUN_0061c980();
          iVar9 = (*(int *)(iVar3 + 0x10c) - *piVar1) + *piVar6;
          iStack_6c = piVar6[1] - iVar9;
          FUN_0061c980(*(int *)(iVar3 + 0x10c),iVar9);
        }
        else {
          piStack_60 = (int *)((int)param_3 - (int)ppiStack_64);
          iStack_6c = 0x416397;
          FUN_0061c980();
        }
      }
      *(uint *)(iVar3 + 0x10c) = *piVar1 + uVar11;
      iVar3 = param_2;
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar10 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar10 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar10 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar10 = s_createNewPlayer_int_type__int_or_0066c114;
  if ((DAT_0071d774 != 0) && (s_createNewPlayer_int_type__int_or_0066c114[0] != '\0')) {
    do {
      if (DAT_0071d770 <= DAT_0071d778) {
        ExceptionList = local_c;
        return param_2;
      }
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      DAT_0071d778 = DAT_0071d778 + 1;
    } while (*pcVar10 != '\0');
    ExceptionList = local_c;
    return param_2;
  }
  ExceptionList = local_c;
  return iVar3;
LAB_00415b55:
  ppiStack_64 = &local_4c;
  puStack_68 = (undefined1 *)0x415b60;
  piStack_60 = (int *)iVar9;
  FUN_00414790();
  puStack_68 = (undefined1 *)0x30;
  iStack_6c = 0x415b67;
  puVar7 = (undefined4 *)FUN_00631d33();
  local_4._0_1_ = 7;
  local_3c = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    piStack_60 = (int *)&param_3;
    ppiStack_64 = (int **)local_1c;
    puVar7[2] = 0;
    puStack_68 = (undefined1 *)0x13;
    *puVar7 = 0xffffffff;
    puVar7[1] = local_4c;
    puVar7[3] = 0x3ff00000;
    local_1c[0] = 0;
    local_14 = 0;
    local_10 = 0x3ff00000;
    iStack_6c = 0x415bb8;
    FUN_00448480();
    piStack_60 = (int *)&param_1;
    local_4._0_1_ = 8;
    ppiStack_64 = (int **)0x415bca;
    FUN_00478a20();
    puVar7[10] = 0;
  }
  *(undefined4 **)(iVar3 + 0x1fc) = puVar7;
  local_4._0_1_ = 0;
  iVar3 = *(int *)(DAT_0068bf38 + (int)local_4c * 4);
  if (*(int *)(iVar3 + 0x60) != *(int *)(iVar3 + 100)) {
    param_3 = *(int **)(iVar3 + 0x60);
    DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
    piStack_60 = (int *)0x30;
    DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
    iVar3 = *(int *)(iVar3 + 100) - (int)param_3;
    (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
    uVar11 = (&DAT_0068a928)[DAT_0068aa04];
    ppiStack_64 = (int **)0x415c67;
    puVar7 = (undefined4 *)FUN_00631d33();
    local_4._0_1_ = 9;
    local_3c = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      ppiStack_64 = (int **)local_38;
      piStack_60 = *(int **)(*(int *)(*(int *)(DAT_0068bf38 + (int)local_4c * 4) + 0x60) +
                            (uVar11 % (uint)(iVar3 >> 2)) * 4);
      puStack_68 = (undefined1 *)0x415c97;
      puVar4 = (undefined4 *)FUN_00414790();
      puVar7[1] = *puVar4;
      piStack_60 = (int *)&param_3;
      ppiStack_64 = (int **)local_1c;
      puVar7[2] = 0;
      puStack_68 = (undefined1 *)0x13;
      *puVar7 = 0xffffffff;
      puVar7[3] = 0x3ff00000;
      local_1c[0] = 0;
      local_14 = 0;
      local_10 = 0x3ff00000;
      iStack_6c = 0x415cd7;
      FUN_00448480();
      piStack_60 = (int *)&param_1;
      local_4._0_1_ = 10;
      ppiStack_64 = (int **)0x415ce9;
      FUN_00478a20();
      puVar7[10] = 0;
    }
    *(undefined4 **)(param_2 + 0x200) = puVar7;
  }
  piVar6 = (int *)(DAT_00689790 + (int)piVar1 * 4);
  *piVar6 = *piVar6 + 1;
  goto switchD_004158a2_caseD_3;
}

