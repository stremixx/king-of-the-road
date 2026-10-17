
void __fastcall FUN_00544520(undefined4 *param_1)

{
  int iVar1;
  char *_Source;
  char *_Source_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  int iStack_e8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 auStack_a8 [12];
  undefined4 uStack_78;
  char acStack_74 [32];
  char acStack_54 [72];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006468c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064e644;
  param_1[0x44] = &PTR_LAB_0064e50c;
  param_1[0x62] = &PTR_LAB_0064e508;
  param_1[4] = &PTR_LAB_0064e558;
  local_4 = 2;
  if ((code *)param_1[0x1477] != (code *)0x0) {
    (*(code *)param_1[0x1477])(0);
  }
  if (param_1[0x953] == 5) {
    iVar1 = param_1[0x1475];
    local_ec = 3;
    iVar2 = param_1[0x1519];
    local_f8 = 0;
    local_f0 = 0x44160000;
    if (iVar2 != 0) {
      local_ec = *(undefined4 *)(iVar2 + 0xca4);
      iVar2 = FUN_0053ee80(*(undefined4 *)(iVar2 + 0xcb0));
      local_f0 = *(undefined4 *)(param_1[0x1519] + 0xcc4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x4c4) == 0)) {
        local_f8 = *(undefined4 *)(iVar2 + 0x2548);
      }
    }
    _Source = *(char **)(param_1[0x54] + 0xc);
    iVar2 = FUN_0057d5d0();
    _Source_00 = *(char **)(iVar2 + 0xc);
    uStack_c4 = param_1[0x5f];
    uStack_c8 = param_1[0x61];
    uStack_d4 = param_1[0xa2d];
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    iStack_e8 = 4;
    do {
      FUN_004042a0();
      iStack_e8 = iStack_e8 + -1;
    } while (iStack_e8 != 0);
    uStack_d0 = local_ec;
    uStack_cc = local_f8;
    uStack_c0 = param_1[0x6c];
    uStack_bc = param_1[0x6d];
    uStack_b4 = param_1[0x6f];
    uStack_b8 = param_1[0x6e];
    uStack_b0 = param_1[0x70];
    uStack_ac = param_1[0x71];
    puVar3 = param_1 + 0x81;
    puVar4 = auStack_a8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uStack_78 = local_f0;
    _strncpy(acStack_74,_Source_00,0x1f);
    _strncpy(acStack_54,_Source,0x1f);
    FUN_005e48c0(iVar1 + 300000,*(undefined4 *)(param_1[0x4d] + 0x3c),0xa0,&uStack_d4);
    iVar1 = param_1[0x1519];
    if (iVar1 != 0) {
      FUN_004843e0();
      FUN_00631d5c(iVar1);
    }
    param_1[0x1519] = 0;
    DAT_006ee150 = DAT_006ee150 + -1;
    if (DAT_006ee150 == 0) {
      (**(code **)(*DAT_006ee164 + 0x24))();
    }
  }
  else {
    iVar1 = param_1[0x1518];
    if (iVar1 != 0) {
      local_4._0_1_ = 3;
      FUN_004ea51e();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004ea51e();
      FUN_00631d5c(iVar1);
    }
    param_1[0x1518] = 0;
    iVar1 = param_1[0x13eb] + param_1[0xa2d] * 0x174;
    *(int *)(&DAT_006d1440 + iVar1 * 4) = *(int *)(&DAT_006d1440 + iVar1 * 4) + -1;
    iVar1 = param_1[0x13eb] + param_1[0xa2d] * 0x174;
    if ((*(int *)(&DAT_006d1440 + iVar1 * 4) == 0) && ((int *)(&DAT_006d1428)[iVar1] != (int *)0x0))
    {
      (**(code **)(*(int *)(&DAT_006d1428)[iVar1] + 0x24))();
    }
    if (*(int *)(&DAT_006d1440 + (param_1[0x13eb] + param_1[0xa2d] * 0x174) * 4) < 0) {
      FUN_0061c369(&uStack_d4,s___VehClUnLoad__numT__l_numOLV__l_00678e90,param_1[0xa2d],
                   *(int *)(&DAT_006d1440 + (param_1[0x13eb] + param_1[0xa2d] * 0x174) * 4));
    }
  }
  iVar1 = param_1[0x155c];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_00631d5c(*(int *)(iVar1 + 0xc));
    }
    FUN_00631d5c(iVar1);
  }
  iVar1 = param_1[0x155d];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_00631d5c(*(int *)(iVar1 + 0xc));
    }
    FUN_00631d5c(iVar1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0058af70();
  local_4 = 0xffffffff;
  FUN_005923f0();
  ExceptionList = pvStack_c;
  return;
}

