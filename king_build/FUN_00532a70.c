
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00532a70(int param_1,undefined4 *param_2,int *param_3,int *param_4,int param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_88 [4];
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 local_54;
  undefined1 local_50 [32];
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_54 = 0;
  *param_3 = 0;
  local_30[0] = 0;
  local_28 = 0;
  local_24 = 0;
  local_18 = 0;
  local_14 = 0;
  local_6c = &param_1;
  local_68 = (undefined4 *)param_1;
  local_20 = s_UNDEFINED_MODULE_0066c638;
  local_1c = s_UNDEFINED_ROOM_0066c628;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  local_70 = 0x532ac1;
  FUN_004365d0();
  piVar6 = param_4;
  puVar1 = param_2;
  if (param_1 != -1) {
    local_70 = *param_2;
    puStack_74 = (undefined1 *)param_1;
    local_6c = (undefined4 *)param_2[1];
    local_68 = (undefined4 *)param_2[2];
    puStack_78 = local_50;
    aiStack_88[3] = 0x532afa;
    piVar2 = (int *)FUN_00437470();
    piVar4 = piVar2;
    piVar5 = piVar6;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if ((((*piVar6 != -1) || (piVar6[1] != -1)) || (*(double *)(piVar6 + 2) != _DAT_0064a668)) ||
       (((piVar6[4] != 0 || (piVar6[5] != 0)) || (piVar6[6] != 0)))) {
      local_68 = local_30;
      piVar4 = aiStack_88;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      }
      FUN_00438e50();
      iVar3 = FUN_005ee8e0(0,local_1c);
      *param_3 = iVar3;
      if (iVar3 != 0) {
        local_54 = 1;
      }
    }
  }
  if ((*param_3 == 0) && (param_5 != 0)) {
    local_70 = *puVar1;
    local_6c = (undefined4 *)puVar1[1];
    local_68 = (undefined4 *)puVar1[2];
    puStack_74 = local_50;
    puStack_78 = (undefined1 *)0x532bb1;
    piVar2 = (int *)FUN_00437300();
    piVar4 = piVar2;
    piVar5 = piVar6;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (((((*piVar6 != -1) || (piVar6[1] != -1)) || (*(double *)(piVar6 + 2) != _DAT_0064a668)) ||
        ((piVar6[4] != 0 || (piVar6[5] != 0)))) || (piVar6[6] != 0)) {
      local_68 = local_30;
      piVar6 = aiStack_88;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar6 = piVar6 + 1;
      }
      FUN_00438e50();
      iVar3 = FUN_005ee8e0(0,local_1c);
      *param_3 = iVar3;
      if (iVar3 != 0) {
        return 2;
      }
    }
  }
  return local_54;
}

