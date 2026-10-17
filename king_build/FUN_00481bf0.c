
void FUN_00481bf0(int ***param_1)

{
  int **ppiVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int **ppiVar7;
  int iVar8;
  int ***pppiVar9;
  int ***pppiStack_6c;
  int **ppiStack_68;
  undefined1 local_52;
  undefined1 local_51;
  int *local_50;
  int *local_4c;
  undefined4 *local_48;
  int **local_44;
  int **local_40;
  int local_3c;
  int local_38;
  int **local_34;
  int **local_30;
  undefined4 local_2c;
  int local_28;
  int *local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640224;
  pvStack_14 = ExceptionList;
  ppiStack_68 = (int **)&local_3c;
  pppiStack_6c = &local_40;
  local_44 = (int **)param_1;
  ExceptionList = &pvStack_14;
  FUN_00490cf0(param_1,&local_38);
  local_c = 0;
  if (local_38 == DAT_0066ee40) {
    ppiStack_68 = (int **)0x70;
    pppiStack_6c = (int ***)0x481c4f;
    puVar3 = (undefined4 *)FUN_00631d33();
    local_c._0_1_ = 1;
    local_50 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0x12345678;
      *puVar3 = 0xffffffff;
      puVar3[2] = 0;
      puVar3[3] = 0xffffffff;
      puVar3[4] = 0xffffffff;
      puVar3[5] = 0;
      puVar3[6] = 0xffffffff;
      ppiStack_68 = (int **)0x481c84;
      FUN_004132a0();
      puVar3[0x16] = 0;
      puVar3[0x18] = 0xffffffff;
      puVar3[0x19] = 0x7fefffff;
      *(undefined1 *)(puVar3 + 0x1a) = 0;
      puVar3[0x1b] = 0xffffffff;
    }
    local_c = (uint)local_c._1_3_ << 8;
    puVar3[2] = **param_1;
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 1;
    puVar3[3] = ppiVar1[1];
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 1;
    puVar3[4] = ppiVar1[1];
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 1;
    puVar3[6] = ppiVar1[1];
    ppiVar1 = *param_1;
    ppiVar7 = ppiVar1 + 1;
    *param_1 = ppiVar7;
    piVar2 = *ppiVar7;
    *param_1 = ppiVar1 + 2;
    ppiStack_68 = (int **)(puVar3 + 8);
    pppiStack_6c = param_1;
    *puVar3 = piVar2;
    FUN_004746a0();
    puVar3[0x14] = **param_1;
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 1;
    puVar3[0xf] = ppiVar1[1];
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 1;
    puVar3[0xe] = ppiVar1[1];
    ppiVar1 = *param_1;
    ppiVar7 = ppiVar1 + 1;
    *param_1 = ppiVar7;
    puVar3[0x10] = *ppiVar7;
    puVar3[0x11] = ppiVar1[2];
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 2;
    puVar3[0x12] = ppiVar1[2];
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 1;
    puVar3[0x13] = ppiVar1[1];
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 1;
    puVar3[0x15] = ppiVar1[1];
    ppiVar1 = *param_1;
    ppiVar7 = ppiVar1 + 1;
    *param_1 = ppiVar7;
    puVar3[0x18] = *ppiVar7;
    puVar3[0x19] = ppiVar1[2];
    ppiVar1 = *param_1;
    *param_1 = ppiVar1 + 2;
    *(undefined1 *)(puVar3 + 0x1a) = *(undefined1 *)(ppiVar1 + 2);
    ppiVar1 = *param_1;
    *param_1 = (int **)((int)ppiVar1 + 1);
    puVar3[0x1b] = *(int **)((int)ppiVar1 + 1);
    *param_1 = *param_1 + 1;
    FUN_00480770(puVar3 + 0x18);
    iVar6 = (int)local_40 + (local_3c - (int)*local_44);
    while (iVar6 != 0) {
      ppiStack_68 = (int **)&local_2c;
      pppiStack_6c = &local_30;
      local_34 = (int **)param_1;
      FUN_00490cf0(param_1,&local_28);
      local_c._0_1_ = 2;
      if (local_28 == DAT_0066ee38) {
        ppiStack_68 = (int **)0x20;
        pppiStack_6c = (int ***)0x481ddb;
        puVar4 = (undefined4 *)FUN_00631d33();
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0xffffffff;
          puVar4[1] = 0xffffffff;
          puVar4[2] = 0xffffffff;
          puVar4[3] = 0xffffffff;
          puVar4[4] = 0;
          puVar4[6] = 0;
          puVar4[5] = 0;
          puVar4[7] = 0;
        }
        *puVar4 = **param_1;
        ppiVar1 = *param_1;
        *param_1 = ppiVar1 + 1;
        puVar4[1] = ppiVar1[1];
        ppiVar1 = *param_1;
        *param_1 = ppiVar1 + 1;
        puVar4[3] = ppiVar1[1];
        ppiVar1 = *param_1;
        ppiVar7 = ppiVar1 + 1;
        *param_1 = ppiVar7;
        puVar4[4] = *ppiVar7;
        puVar4[5] = ppiVar1[2];
        ppiVar1 = *param_1;
        ppiVar7 = ppiVar1 + 2;
        *param_1 = ppiVar7;
        puVar4[6] = *ppiVar7;
        puVar4[7] = ppiVar1[3];
        ppiVar1 = *param_1;
        *param_1 = ppiVar1 + 4;
        puVar4[2] = ppiVar1[4];
        *param_1 = *param_1 + 1;
        puVar3[0x16] = puVar4;
      }
      else if (local_28 == DAT_0066ee30) {
        puVar4 = (undefined4 *)puVar3[5];
        if (puVar4 != (undefined4 *)0x0) {
          local_c._0_1_ = 3;
          ppiStack_68 = (int **)0x481e87;
          local_50 = puVar4;
          FUN_00478b70();
          local_c._0_1_ = 2;
          ppiStack_68 = (int **)0x481e94;
          FUN_00448660();
          pppiStack_6c = (int ***)0x481e9a;
          ppiStack_68 = (int **)puVar4;
          FUN_00631d5c();
        }
        ppiStack_68 = (int **)0x30;
        pppiStack_6c = (int ***)0x481ea4;
        puVar4 = (undefined4 *)FUN_00631d33();
        local_c._0_1_ = 4;
        local_48 = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[2] = 0;
          local_24[0] = (int *)0x0;
          local_1c = 0;
          ppiStack_68 = (int **)&local_52;
          local_50 = puVar4 + 4;
          pppiStack_6c = (int ***)0x13;
          *puVar4 = 0xffffffff;
          puVar4[1] = 0xffffffff;
          puVar4[3] = 0x3ff00000;
          local_18 = 0x3ff00000;
          FUN_004670f0();
          ppiStack_68 = (int **)local_48;
          local_c._0_1_ = 5;
          pppiStack_6c = (int ***)local_24;
          uVar5 = FUN_004663a0(*local_50,0x13);
          local_50[1] = uVar5;
          ppiStack_68 = (int **)&local_51;
          local_c._0_1_ = 6;
          pppiStack_6c = (int ***)0x481f2b;
          FUN_00478a20();
          puVar4[10] = 0;
        }
        ppiStack_68 = (int **)param_1;
        local_c._0_1_ = 2;
        puVar3[5] = puVar4;
        pppiStack_6c = (int ***)0x481f46;
        FUN_00472460();
      }
      ppiStack_68 = (int **)local_2c;
      pppiStack_6c = (int ***)local_30;
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00490d20(local_34);
      iVar6 = (int)local_40 + (local_3c - (int)*local_44);
    }
    iVar6 = puVar3[5];
    if ((iVar6 != 0) && (iVar8 = *(int *)(iVar6 + 0x1c), iVar8 != *(int *)(iVar6 + 0x20))) {
      pppiVar9 = (int ***)(iVar8 + 0x50);
      do {
        ppiStack_68 = (int **)(pppiVar9 + -2);
        pppiStack_6c = (int ***)0x481f99;
        FUN_00480770();
        pppiStack_6c = pppiVar9;
        FUN_00480770();
        iVar8 = iVar8 + 0x90;
        pppiVar9 = pppiVar9 + 0x24;
      } while (iVar8 != *(int *)(puVar3[5] + 0x20));
    }
    pppiStack_6c = (int ***)&local_4c;
    ppiStack_68 = (int **)puVar3;
    FUN_0041be00();
    ppiStack_68 = (int **)0x1;
    local_48 = &pppiStack_6c;
    FUN_0041d3f0(&local_4c);
    (*DAT_0068c07c)();
  }
  ppiStack_68 = (int **)local_3c;
  pppiStack_6c = (int ***)local_40;
  local_c = 0xffffffff;
  FUN_00490d20(local_44);
  ExceptionList = pvStack_14;
  return;
}

