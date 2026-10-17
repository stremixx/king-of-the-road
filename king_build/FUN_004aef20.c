
void __fastcall FUN_004aef20(int param_1)

{
  undefined1 **ppuVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined1 **ppuStack_48;
  int **ppiStack_44;
  undefined1 uStack_2d;
  undefined1 **ppuStack_2c;
  int iStack_28;
  int local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006438a1;
  pvStack_c = ExceptionList;
  local_14 = 0;
  local_18 = (int *)0x0;
  local_10 = 0;
  iVar5 = *(int *)(param_1 + 0x48);
  ppuVar1 = (undefined1 **)(param_1 + 0x48);
  local_4 = 10;
  ExceptionList = &pvStack_c;
  local_24 = param_1;
  if (iVar5 == 0) {
LAB_004aefe1:
    *ppuVar1 = (undefined1 *)0x0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    ExceptionList = &pvStack_c;
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1;
    if (*(int *)(*ppuVar1 + 4) == 0) {
      ppiStack_44 = &local_18;
      ppuStack_48 = ppuVar1;
      cVar4 = FUN_00408fd0();
      if ((cVar4 == '\0') && ((int *)*ppuVar1 != (int *)0x0)) {
        ppiStack_44 = (int **)0x1;
        ppuStack_48 = (undefined1 **)0x4aef92;
        (**(code **)(*(int *)*ppuVar1 + 0xc))();
      }
    }
    if (local_18 == (int *)0x0) goto LAB_004aefe1;
    ppiStack_44 = (int **)0x4aef9e;
    iVar5 = (**(code **)*local_18)();
    if (iVar5 == 0xb) {
      *ppuVar1 = (undefined1 *)local_18;
      *(uint *)(param_1 + 0x50) = local_10;
      local_18[1] = local_18[1] + 1;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      ppiStack_44 = (int **)&DAT_0066bb28;
      ppuStack_48 = (undefined1 **)0x4aefb1;
      ppuStack_48 = (undefined1 **)(**(code **)(*local_18 + 4))();
      FUN_004a5670(2,1);
    }
  }
  local_4._0_1_ = 9;
  if (((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
      (local_18[1] = local_18[1] + -1, local_18[1] == 0)) && (local_18 != (int *)0x0)) {
    ppiStack_44 = (int **)0x1;
    ppuStack_48 = (undefined1 **)0x4af01a;
    (**(code **)(*local_18 + 0xc))();
  }
  local_14 = 0;
  local_18 = (int *)0x0;
  local_10 = 0;
  iVar5 = *(int *)(param_1 + 0x54);
  ppuVar1 = (undefined1 **)(param_1 + 0x54);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if (iVar5 == 0) {
LAB_004af0b3:
    *ppuVar1 = (undefined1 *)0x0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1;
    if (*(int *)(*ppuVar1 + 4) == 0) {
      ppiStack_44 = &local_18;
      ppuStack_48 = ppuVar1;
      cVar4 = FUN_00408fd0();
      if ((cVar4 == '\0') && ((int *)*ppuVar1 != (int *)0x0)) {
        ppiStack_44 = (int **)0x1;
        ppuStack_48 = (undefined1 **)0x4af064;
        (**(code **)(*(int *)*ppuVar1 + 0xc))();
      }
    }
    if (local_18 == (int *)0x0) goto LAB_004af0b3;
    ppiStack_44 = (int **)0x4af070;
    iVar5 = (**(code **)*local_18)();
    if (iVar5 == 0xb) {
      *ppuVar1 = (undefined1 *)local_18;
      *(uint *)(param_1 + 0x5c) = local_10;
      local_18[1] = local_18[1] + 1;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    else {
      ppiStack_44 = (int **)&DAT_0066bb28;
      ppuStack_48 = (undefined1 **)0x4af083;
      ppuStack_48 = (undefined1 **)(**(code **)(*local_18 + 4))();
      FUN_004a5670(2,1);
    }
  }
  local_4._0_1_ = 9;
  if ((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
     ((local_18[1] = local_18[1] + -1, local_18[1] == 0 && (local_18 != (int *)0x0)))) {
    ppiStack_44 = (int **)0x1;
    ppuStack_48 = (undefined1 **)0x4af0e7;
    (**(code **)(*local_18 + 0xc))();
  }
  local_14 = 0;
  local_18 = (int *)0x0;
  local_10 = 0;
  iVar5 = *(int *)(param_1 + 0x60);
  ppuVar1 = (undefined1 **)(param_1 + 0x60);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  if (iVar5 == 0) {
LAB_004af180:
    *ppuVar1 = (undefined1 *)0x0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1;
    if (*(int *)(*ppuVar1 + 4) == 0) {
      ppiStack_44 = &local_18;
      ppuStack_48 = ppuVar1;
      cVar4 = FUN_00408fd0();
      if ((cVar4 == '\0') && ((int *)*ppuVar1 != (int *)0x0)) {
        ppiStack_44 = (int **)0x1;
        ppuStack_48 = (undefined1 **)0x4af131;
        (**(code **)(*(int *)*ppuVar1 + 0xc))();
      }
    }
    if (local_18 == (int *)0x0) goto LAB_004af180;
    ppiStack_44 = (int **)0x4af13d;
    iVar5 = (**(code **)*local_18)();
    if (iVar5 == 0xb) {
      *ppuVar1 = (undefined1 *)local_18;
      *(uint *)(param_1 + 0x68) = local_10;
      local_18[1] = local_18[1] + 1;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else {
      ppiStack_44 = (int **)&DAT_0066bb28;
      ppuStack_48 = (undefined1 **)0x4af150;
      ppuStack_48 = (undefined1 **)(**(code **)(*local_18 + 4))();
      FUN_004a5670(2,1);
    }
  }
  local_4._0_1_ = 9;
  if (((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
      (local_18[1] = local_18[1] + -1, local_18[1] == 0)) && (local_18 != (int *)0x0)) {
    ppiStack_44 = (int **)0x1;
    ppuStack_48 = (undefined1 **)0x4af1b4;
    (**(code **)(*local_18 + 0xc))();
  }
  local_14 = 0;
  local_18 = (int *)0x0;
  local_10 = 0;
  iVar5 = *(int *)(param_1 + 0x3c);
  ppuVar1 = (undefined1 **)(param_1 + 0x3c);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  if (iVar5 == 0) {
LAB_004af24d:
    *ppuVar1 = (undefined1 *)0x0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1;
    if (*(int *)(*ppuVar1 + 4) == 0) {
      ppiStack_44 = &local_18;
      ppuStack_48 = ppuVar1;
      cVar4 = FUN_00408fd0();
      if ((cVar4 == '\0') && ((int *)*ppuVar1 != (int *)0x0)) {
        ppiStack_44 = (int **)0x1;
        ppuStack_48 = (undefined1 **)0x4af1fe;
        (**(code **)(*(int *)*ppuVar1 + 0xc))();
      }
    }
    if (local_18 == (int *)0x0) goto LAB_004af24d;
    ppiStack_44 = (int **)0x4af20a;
    iVar5 = (**(code **)*local_18)();
    if (iVar5 == 0xc) {
      *ppuVar1 = (undefined1 *)local_18;
      *(uint *)(param_1 + 0x44) = local_10;
      local_18[1] = local_18[1] + 1;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      ppiStack_44 = (int **)s_Environment_0066f60c;
      ppuStack_48 = (undefined1 **)0x4af21d;
      ppuStack_48 = (undefined1 **)(**(code **)(*local_18 + 4))();
      FUN_004a5670(2,1);
    }
  }
  local_4._0_1_ = 9;
  if ((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
     ((local_18[1] = local_18[1] + -1, local_18[1] == 0 && (local_18 != (int *)0x0)))) {
    ppiStack_44 = (int **)0x1;
    ppuStack_48 = (undefined1 **)0x4af281;
    (**(code **)(*local_18 + 0xc))();
  }
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  iVar5 = *(int *)(param_1 + 0x30);
  ppuVar1 = (undefined1 **)(param_1 + 0x30);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  if (iVar5 == 0) {
LAB_004af309:
    *ppuVar1 = (undefined1 *)0x0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1;
    if (*(int *)(*ppuVar1 + 4) == 0) {
      ppiStack_44 = &local_18;
      ppuStack_48 = ppuVar1;
      cVar4 = FUN_00408fd0();
      if ((cVar4 == '\0') && ((int *)*ppuVar1 != (int *)0x0)) {
        ppiStack_44 = (int **)0x1;
        ppuStack_48 = (undefined1 **)0x4af2c9;
        (**(code **)(*(int *)*ppuVar1 + 0xc))();
      }
    }
    if (local_18 == (int *)0x0) goto LAB_004af309;
    ppiStack_44 = (int **)0x4af2d5;
    iVar5 = (**(code **)*local_18)();
    if (iVar5 != 0xc) {
      ppiStack_44 = (int **)s_Environment_0066f60c;
      ppuStack_48 = (undefined1 **)0x4af2e8;
      ppuStack_48 = (undefined1 **)(**(code **)(*local_18 + 4))();
      FUN_004a5670(2,1);
      goto LAB_004af311;
    }
    *ppuVar1 = (undefined1 *)local_18;
    *(uint *)(param_1 + 0x38) = local_10;
    local_18[1] = local_18[1] + 1;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
LAB_004af311:
  local_4._0_1_ = 9;
  ppiStack_44 = (int **)0x4af31f;
  FUN_00492340();
  ppiStack_44 = *(int ***)(param_1 + 0x70);
  ppuStack_48 = *(undefined1 ***)(param_1 + 0x6c);
  FUN_004aa330();
  ppiStack_44 = *(int ***)(param_1 + 0x1084);
  ppuStack_48 = *(undefined1 ***)(param_1 + 0x1080);
  FUN_004af910();
  ppiStack_44 = (int **)&uStack_2d;
  ppuStack_48 = (undefined1 **)0x4af35a;
  FUN_004afc20();
  piVar3 = *(int **)(param_1 + 0x10);
  piVar2 = (int *)(param_1 + 0x18);
  local_4._0_1_ = 0xf;
  for (; piVar3 != piVar2; piVar3 = (int *)piVar3[3]) {
    ppuStack_48 = (undefined1 **)0x4af373;
    ppiStack_44 = (int **)piVar3;
    ppiStack_44 = (int **)FUN_004a81e0();
    local_4._0_1_ = 0x10;
    ppuStack_48 = (undefined1 **)0x4af382;
    FUN_004afce0();
    local_4._0_1_ = 0xf;
    ppiStack_44 = (int **)0x4af390;
    FUN_00492340();
  }
  piVar3 = (int *)(param_1 + 0x2c);
  ppiStack_44 = (int **)&puStack_20;
  ppuStack_48 = (undefined1 **)0x4af3a6;
  piVar6 = (int *)FUN_004af790();
  iStack_28 = *piVar6;
  if (iStack_28 != *piVar3) {
    do {
      ppiStack_44 = *(int ***)(iStack_28 + 8);
      if (ppiStack_44 != (int **)0x0) {
        ppuStack_48 = (undefined1 **)0x4af3c3;
        ppiStack_44 = (int **)FUN_004a81e0();
        local_4._0_1_ = 0x11;
        ppuStack_48 = (undefined1 **)0x4af3d2;
        FUN_004afce0();
        local_4._0_1_ = 0xf;
        ppiStack_44 = (int **)0x4af3e0;
        FUN_00492340();
      }
      ppuStack_48 = &puStack_20;
      ppiStack_44 = (int **)0x0;
      FUN_004af900();
    } while (iStack_28 != *piVar3);
  }
  for (piVar6 = *(int **)(param_1 + 0x10); piVar6 != piVar2; piVar6 = (int *)piVar6[3]) {
    ppiStack_44 = (int **)0x4af408;
    (**(code **)(*piVar6 + 0x10))();
  }
  ppiStack_44 = (int **)&puStack_20;
  ppuStack_48 = (undefined1 **)0x4af41b;
  piVar6 = (int *)FUN_004af790();
  iStack_28 = *piVar6;
  if (iStack_28 != *piVar3) {
    do {
      if (*(int **)(iStack_28 + 8) != (int *)0x0) {
        ppiStack_44 = (int **)0x4af435;
        (**(code **)(**(int **)(iStack_28 + 8) + 0x10))();
      }
      ppuStack_48 = &puStack_20;
      ppiStack_44 = (int **)0x0;
      FUN_004af900();
    } while (iStack_28 != *piVar3);
  }
  puStack_20 = (undefined1 *)&ppuStack_48;
  ppuStack_48 = ppuStack_2c;
  ppiStack_44 = (int **)ppuStack_2c;
  FUN_004af790(&ppuStack_48);
  FUN_004b0b10(&puStack_1c);
  ppuStack_48 = (undefined1 **)*piVar3;
  puStack_1c = (undefined1 *)&ppuStack_48;
  ppiStack_44 = (int **)ppuStack_48;
  FUN_004af790(&ppuStack_48);
  FUN_00602140(&puStack_20);
  if (*(int **)(param_1 + 0x10) != piVar2) {
    ppiStack_44 = (int **)0x300;
    ppuStack_48 = (undefined1 **)0x5;
    FUN_004a5470();
  }
  local_4._0_1_ = 9;
  ppiStack_44 = (int **)0x4af4c3;
  FUN_004afee0();
  local_4._0_1_ = 8;
  ppiStack_44 = (int **)0x4af4d3;
  FUN_00447540();
  local_4._0_1_ = 7;
  ppiStack_44 = (int **)0x4af4e0;
  FUN_004afa60();
  local_4._0_1_ = 6;
  ppiStack_44 = (int **)0x4af4ed;
  FUN_00492340();
  local_4._0_1_ = 5;
  ppiStack_44 = (int **)0x4af4fa;
  FUN_00492340();
  local_4._0_1_ = 4;
  ppiStack_44 = (int **)0x4af507;
  FUN_00492340();
  local_4._0_1_ = 3;
  ppiStack_44 = (int **)0x4af514;
  FUN_00492340();
  local_4._0_1_ = 2;
  ppiStack_44 = (int **)0x4af521;
  FUN_00492340();
  local_4 = CONCAT31(local_4._1_3_,1);
  ppiStack_44 = (int **)0x4af52d;
  FUN_004afe70();
  ppiStack_44 = (int **)0x4af534;
  FUN_00491060();
  ppiStack_44 = (int **)0x4af53c;
  FUN_00491060();
  ExceptionList = pvStack_c;
  return;
}

