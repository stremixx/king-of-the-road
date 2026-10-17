
void FUN_0043e6f0(undefined1 *param_1,char *param_2,char param_3)

{
  char cVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  char *extraout_ECX;
  int *piVar7;
  undefined1 ***pppuVar8;
  int *piVar9;
  undefined1 **ppuStack_140;
  int aiStack_13c [5];
  undefined4 *puStack_128;
  char *pcStack_124;
  char *pcStack_120;
  undefined1 *local_10c;
  char *local_108;
  undefined *local_104;
  undefined1 *local_100;
  undefined4 local_fc [2];
  undefined4 local_f4;
  undefined4 local_f0;
  char *local_ec;
  char *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_cc [2];
  undefined4 local_c4;
  undefined4 local_c0;
  char *local_bc;
  char *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  int local_84 [8];
  int local_64 [8];
  undefined1 *local_44 [6];
  undefined1 *local_2c [6];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dc0b;
  local_14 = ExceptionList;
  pcStack_120 = (char *)0x8;
  pcStack_124 = s_START__0066b830;
  local_108 = s_setPlayerPosition_PlayerId_playe_0066db70;
  local_104 = &DAT_0071d768;
  puStack_128 = (undefined4 *)0x43e735;
  ExceptionList = &local_14;
  FUN_00401870();
  pcStack_120 = s_setPlayerPosition_PlayerId_playe_0066db70;
  pcStack_124 = (char *)0x43e744;
  FUN_004018b0();
  local_a8 = 0xffffffff;
  local_a4 = 0xffffffff;
  local_d8 = 0xffffffff;
  local_d4 = 0xffffffff;
  local_b8 = s_UNDEFINED_ROOM_0066c628;
  local_e8 = s_UNDEFINED_ROOM_0066c628;
  local_cc[0] = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = s_UNDEFINED_MODULE_0066c638;
  local_b4 = 0;
  local_b0 = 0;
  local_fc[0] = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = s_UNDEFINED_MODULE_0066c638;
  local_e4 = 0;
  local_e0 = 0;
  local_c = 0;
  piVar7 = (int *)(param_1 + 0x28);
  piVar9 = local_84;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  pcStack_120 = (char *)local_cc;
  piVar7 = (int *)(param_1 + 0x28);
  pppuVar8 = &ppuStack_140;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pppuVar8 = (undefined1 **)*piVar7;
    piVar7 = piVar7 + 1;
    pppuVar8 = pppuVar8 + 1;
  }
  FUN_00438e50();
  if (param_3 == '\0') {
    puStack_128 = &param_1;
    pcStack_120 = param_2;
    local_10c = (undefined1 *)&pcStack_124;
    pcStack_124 = param_2;
    aiStack_13c[4] = 0x43e809;
    FUN_0041d3f0();
    puStack_128 = (undefined4 *)0x43e80e;
    FUN_0043dd40();
  }
  else {
    puStack_128 = &param_1;
    pcStack_120 = param_2;
    local_10c = (undefined1 *)&pcStack_124;
    aiStack_13c[4] = 0x43e7ee;
    pcStack_124 = extraout_ECX;
    FUN_0041d3f0();
    puStack_128 = (undefined4 *)0x43e7f3;
    FUN_0043cc30();
  }
  piVar7 = (int *)(param_1 + 0x28);
  piVar9 = local_64;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  pcStack_120 = (char *)local_fc;
  piVar7 = (int *)(param_1 + 0x28);
  pppuVar8 = &ppuStack_140;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pppuVar8 = (undefined1 **)*piVar7;
    piVar7 = piVar7 + 1;
    pppuVar8 = pppuVar8 + 1;
  }
  FUN_00438e50();
  if (local_84[0] != local_64[0]) {
    ppuStack_140 = local_44;
    piVar7 = local_84;
    piVar9 = aiStack_13c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    }
    pdVar2 = (double *)FUN_00435cd0();
    piVar7 = local_64;
    piVar9 = aiStack_13c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    }
    ppuStack_140 = local_2c;
    pdVar3 = (double *)FUN_00435cd0();
    aiStack_13c[1] = local_64[0];
    local_9c = *pdVar3 - *pdVar2;
    local_94 = pdVar3[1] - pdVar2[1];
    aiStack_13c[0] = local_84[0];
    local_8c = pdVar3[2] - pdVar2[2];
    pdVar2 = &local_9c;
    piVar7 = aiStack_13c + 2;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = *(undefined4 *)pdVar2;
      pdVar2 = (double *)((int)pdVar2 + 4);
      piVar7 = piVar7 + 1;
    }
    ppuStack_140 = &local_10c;
    puVar4 = (undefined4 *)FUN_0047fda0();
    aiStack_13c[1] = *puVar4;
    ppuStack_140 = &param_1;
    local_100 = (undefined1 *)aiStack_13c;
    FUN_0041d3f0();
    ppuStack_140 = (undefined1 **)0x43e907;
    FUN_0040b060();
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_setPlayerPosition_PlayerId_playe_0066db70;
  cVar1 = s_setPlayerPosition_PlayerId_playe_0066db70[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = local_14;
  return;
}

