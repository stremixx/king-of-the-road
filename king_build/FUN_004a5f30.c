
void FUN_004a5f30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint3 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int **ppiVar9;
  int iStack_a4;
  int **ppiStack_a0;
  int *piStack_9c;
  int **ppiStack_98;
  int ***pppiStack_94;
  int **local_80;
  int local_7c;
  undefined1 *local_78;
  int local_74;
  undefined4 local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  uint local_60;
  int *local_5c;
  undefined4 local_58;
  uint local_54;
  int *local_50 [2];
  uint local_48;
  int *local_44 [2];
  uint local_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00642ea8;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x70);
  local_60 = *(uint *)(iVar1 + -0x20);
  if ((local_60 & 0x10000) == 0) {
    local_64 = 0;
    local_68 = *(int *)(iVar1 + -0x28);
    if (local_68 == 0) {
      local_60 = 0;
      local_68 = 0;
      ExceptionList = &pvStack_c;
    }
    else {
      local_60 = *(uint *)(iVar1 + -0x20);
      ExceptionList = &pvStack_c;
      *(int *)(local_68 + 4) = *(int *)(local_68 + 4) + 1;
    }
  }
  else {
    local_68 = *(int *)(iVar1 + -0x28);
    local_64 = *(undefined4 *)(iVar1 + -0x24);
    ExceptionList = &pvStack_c;
  }
  local_6c = *(uint *)(local_68 + 0x1c);
  if ((local_6c & 0x10000) == 0) {
    local_70 = 0;
    local_74 = *(int *)(local_68 + 0x14);
    if (local_74 == 0) {
      local_74 = 0;
      local_6c = 0;
    }
    else {
      local_6c = *(uint *)(local_68 + 0x1c);
      *(int *)(local_74 + 4) = *(int *)(local_74 + 4) + 1;
    }
  }
  else {
    local_74 = *(int *)(local_68 + 0x14);
    local_70 = *(undefined4 *)(local_68 + 0x18);
  }
  uVar6 = local_6c & 0xff;
  local_4._1_3_ = 0;
  uVar4 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (uVar6 == 0x21) {
    iVar1 = *(int *)(param_1 + 0x70);
    local_80 = (int **)0xffffffff;
    if (*(int *)(iVar1 + -0xc) == 0) {
      pppiStack_94 = (int ***)0x1;
      ppiStack_98 = (int **)0x0;
      piStack_9c = (int *)0x4a6021;
      FUN_004a5470();
    }
    if ((*(uint *)(iVar1 + -4) & 0x10000) != 0) {
      pppiStack_94 = (int ***)0x1;
      ppiStack_98 = (int **)0x4;
      piStack_9c = (int *)0x4a6036;
      FUN_004a5470();
    }
    pppiStack_94 = &local_80;
    ppiStack_98 = (int **)local_70;
    ppiStack_a0 = &local_5c;
    piStack_9c = (int *)local_74;
    iStack_a4 = 0x4a6055;
    FUN_004a4090();
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_80 == (int **)0xffffffff) {
      pppiStack_94 = (int ***)s_<parameter>_006700f8;
      ppiStack_98 = (int **)0x20;
      piStack_9c = (int *)param_1;
      ppiStack_a0 = (int **)0x4a6072;
      FUN_004a5be0();
      ppiStack_a0 = &local_5c;
      iStack_a4 = *(int *)(param_1 + 0x70) + -0x2c;
      FUN_004a5dc0(param_1);
    }
    else {
      pppiStack_94 = (int ***)&local_5c;
      ppiStack_98 = (int **)(*(int *)(param_1 + 0x70) + -0x2c);
      piStack_9c = (int *)param_1;
      ppiStack_a0 = (int **)0x4a609b;
      FUN_004a5dc0();
    }
    local_4._0_1_ = 1;
    if (((local_54 & 0x10000) == 0) && (local_5c != (int *)0x0)) {
      local_5c[1] = local_5c[1] + -1;
      local_50[0] = local_5c;
LAB_004a60cc:
      local_4._0_1_ = 1;
      if ((local_50[0][1] == 0) && (local_50[0] != (int *)0x0)) {
        pppiStack_94 = (int ***)0x1;
        ppiStack_98 = (int **)0x4a60e4;
        (**(code **)(*local_50[0] + 0xc))();
      }
    }
  }
  else if (uVar6 == 9) {
    pppiStack_94 = &local_80;
    ppiStack_98 = (int **)&local_7c;
    piStack_9c = &local_74;
    ppiStack_a0 = (int **)0x0;
    local_7c = 0;
    local_80 = (int **)0xffffffff;
    iStack_a4 = 0x4a610f;
    uVar7 = FUN_004a5250();
    local_78 = (undefined1 *)&iStack_a4;
    FUN_004aa500(uVar7);
    ppiVar9 = local_50;
    local_4._0_1_ = 1;
    FUN_004aa2e0(ppiVar9);
    FUN_004b8250();
    FUN_004a3910(ppiVar9);
    local_4._0_1_ = 4;
    uVar3 = (undefined1)local_4;
    local_4._0_1_ = 4;
    if (local_80 == (int **)0xffffffff) {
      pppiStack_94 = *(int ****)(local_74 + 0xc);
      ppiStack_98 = (int **)0x20;
      piStack_9c = (int *)param_1;
      ppiStack_a0 = (int **)0x4a6166;
      FUN_004a5be0();
      local_5c = (int *)0x0;
      local_58 = 0;
      local_54 = 0;
      ppiStack_a0 = &local_5c;
      iStack_a4 = *(int *)(param_1 + 0x70) + -0x2c;
      local_4._0_1_ = 5;
      FUN_004a5dc0(param_1);
      local_4._0_1_ = 4;
      if (((local_54 & 0x10000) == 0) && (local_5c != (int *)0x0)) {
        local_5c[1] = local_5c[1] + -1;
        if ((local_5c[1] == 0) && (local_5c != (int *)0x0)) {
          pppiStack_94 = (int ***)0x1;
          ppiStack_98 = (int **)0x4a61d5;
          (**(code **)(*local_5c + 0xc))();
        }
      }
    }
    else {
      pppiStack_94 = (int ***)local_50;
      ppiStack_98 = (int **)(*(int *)(param_1 + 0x70) + -0x2c);
      piStack_9c = (int *)param_1;
      ppiStack_a0 = (int **)0x4a61ec;
      local_4._0_1_ = uVar3;
      FUN_004a5dc0();
      ppiStack_a0 = local_80;
      iStack_a4 = local_7c;
      pppiStack_94 = (int ***)FUN_004a6520(local_44,0);
      local_4._0_1_ = 6;
      ppiStack_98 = (int **)0x4a6216;
      FUN_004aa480();
      local_4 = CONCAT31(local_4._1_3_,8);
      if (((local_3c & 0x10000) == 0) && (local_44[0] != (int *)0x0)) {
        local_44[0][1] = local_44[0][1] + -1;
        if ((local_44[0][1] == 0) && (local_44[0] != (int *)0x0)) {
          pppiStack_94 = (int ***)0x1;
          ppiStack_98 = (int **)0x4a624c;
          (**(code **)(*local_44[0] + 0xc))();
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x70) + -0x28);
      piVar8 = (int *)(iVar1 + 0x14);
      iVar2 = *(int *)(iVar1 + 0x14);
      if (((iVar2 != 0) && ((*(uint *)(iVar1 + 0x1c) & 0x10000) == 0)) &&
         (*(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1, *(int *)(*piVar8 + 4) == 0)) {
        pppiStack_94 = (int ***)&local_5c;
        piStack_9c = (int *)0x4a627e;
        ppiStack_98 = (int **)piVar8;
        cVar5 = FUN_00408fd0();
        if ((cVar5 == '\0') && ((int *)*piVar8 != (int *)0x0)) {
          pppiStack_94 = (int ***)0x1;
          ppiStack_98 = (int **)0x4a6292;
          (**(code **)(*(int *)*piVar8 + 0xc))();
        }
      }
      if ((local_54 & 0x10000) == 0) {
        *(undefined4 *)(iVar1 + 0x18) = 0;
        if (local_5c == (int *)0x0) {
          *piVar8 = 0;
          *(undefined4 *)(iVar1 + 0x1c) = 0;
        }
        else {
          *piVar8 = (int)local_5c;
          *(uint *)(iVar1 + 0x1c) = local_54;
          local_5c[1] = local_5c[1] + 1;
        }
      }
      else {
        *(uint *)(iVar1 + 0x1c) = local_54;
        *piVar8 = (int)local_5c;
        *(undefined4 *)(iVar1 + 0x18) = local_58;
      }
      local_4._0_1_ = 4;
      pppiStack_94 = (int ***)0x4a62e0;
      FUN_00492340();
    }
    local_4._0_1_ = 1;
    if (((local_48 & 0x10000) == 0) && (local_50[0] != (int *)0x0)) {
      local_50[0][1] = local_50[0][1] + -1;
      goto LAB_004a60cc;
    }
  }
  else {
    local_4._1_3_ = uVar4;
    if (uVar6 == 2) {
      pppiStack_94 = (int ***)(*(int *)(param_1 + 0x70) + -0x28);
      ppiStack_98 = local_44;
      piStack_9c = (int *)0x4a632d;
      piVar8 = (int *)FUN_00409000();
      iVar1 = *(int *)(param_1 + 0x70);
      local_4._0_1_ = 9;
      ppiVar9 = (int **)(iVar1 + -0x28);
      iVar2 = *(int *)(iVar1 + -0x28);
      if (((iVar2 != 0) && ((*(uint *)(iVar1 + -0x20) & 0x10000) == 0)) &&
         (*(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1, (*ppiVar9)[1] == 0)) {
        piStack_9c = (int *)0x4a6365;
        ppiStack_98 = ppiVar9;
        pppiStack_94 = (int ***)piVar8;
        cVar5 = FUN_00408fd0();
        if ((cVar5 == '\0') && (*ppiVar9 != (int *)0x0)) {
          pppiStack_94 = (int ***)0x1;
          ppiStack_98 = (int **)0x4a6379;
          (**(code **)(**ppiVar9 + 0xc))();
        }
      }
      if ((piVar8[2] & 0x10000U) == 0) {
        *(undefined4 *)(iVar1 + -0x24) = 0;
        if ((int *)*piVar8 == (int *)0x0) {
          *ppiVar9 = (int *)0x0;
          *(undefined4 *)(iVar1 + -0x20) = 0;
        }
        else {
          *ppiVar9 = (int *)*piVar8;
          *(int *)(iVar1 + -0x20) = piVar8[2];
          (*ppiVar9)[1] = (*ppiVar9)[1] + 1;
        }
      }
      else {
        *(int *)(iVar1 + -0x20) = piVar8[2];
        *ppiVar9 = (int *)*piVar8;
        *(int *)(iVar1 + -0x24) = piVar8[1];
      }
      local_4._0_1_ = 1;
      if (((local_3c & 0x10000) == 0) && (local_44[0] != (int *)0x0)) {
        local_44[0][1] = local_44[0][1] + -1;
        if ((local_44[0][1] == 0) && (local_44[0] != (int *)0x0)) {
          pppiStack_94 = (int ***)0x1;
          ppiStack_98 = (int **)0x4a63e7;
          (**(code **)(*local_44[0] + 0xc))();
        }
      }
      *(undefined4 *)(*(int *)(param_1 + 0x70) + -0x10) = param_2;
      pppiStack_94 = (int ***)0x4a63fd;
      pppiStack_94 = (int ***)FUN_004a71e0();
      local_4._0_1_ = 10;
      ppiStack_98 = (int **)0x4a6410;
      FUN_004aa2f0();
      local_4._0_1_ = 1;
      pppiStack_94 = (int ***)0x4a6421;
      FUN_004a73b0();
      pppiStack_94 = (int ***)&local_74;
      ppiStack_98 = (int **)0x4a6431;
      FUN_0040c060();
      pppiStack_94 = (int ***)(*(int *)(param_1 + 0x6c) + -0x38 +
                              ((*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c)) / 0x2c) * 0x2c)
      ;
      ppiStack_98 = (int **)0x4a6463;
      FUN_0049c660();
      local_4 = (uint)local_4._1_3_ << 8;
      pppiStack_94 = (int ***)0x4a6473;
      FUN_00492340();
      goto LAB_004a64ef;
    }
    pppiStack_94 = (int ***)&local_74;
    ppiStack_98 = (int **)(*(int *)(param_1 + 0x70) + -0x2c);
    piStack_9c = (int *)param_1;
    ppiStack_a0 = (int **)0x4a648f;
    FUN_004a5dc0();
  }
  ppiStack_98 = local_44;
  pppiStack_94 = (int ***)(*(int *)(param_1 + 0x70) + -0x28);
  piStack_9c = (int *)0x4a64a3;
  pppiStack_94 = (int ***)FUN_00409000();
  local_4._0_1_ = 0xb;
  ppiStack_98 = (int **)0x4a64ba;
  FUN_0040c060();
  local_4._0_1_ = 1;
  pppiStack_94 = (int ***)0x4a64cb;
  FUN_00492340();
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)(*(int *)(param_1 + 0x70) + -0x10) = param_2;
  pppiStack_94 = (int ***)0x4a64e8;
  FUN_00492340();
LAB_004a64ef:
  local_4 = 0xffffffff;
  pppiStack_94 = (int ***)0x4a64f8;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}

