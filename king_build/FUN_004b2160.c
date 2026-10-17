
undefined4 FUN_004b2160(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643d08;
  local_c = ExceptionList;
  iVar3 = 0;
  uVar4 = 10;
  local_48 = 0;
  piVar1 = (int *)(param_3 + 8);
  ExceptionList = &local_c;
  do {
    puVar2 = (undefined4 *)FUN_004b27c0(&local_2c,0);
    if (*(int *)*puVar2 != 0x23) break;
    puVar2 = (undefined4 *)FUN_004b27c0(&local_3c,1);
    switch(*(undefined4 *)*puVar2) {
    case 0x62:
      uVar4 = 2;
      break;
    case 100:
      uVar4 = 10;
      break;
    case 0x65:
      local_48 = 0;
      break;
    case 0x69:
      local_48 = 1;
      break;
    case 0x6f:
      uVar4 = 8;
      break;
    case 0x78:
      uVar4 = 0x10;
    }
    if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
      FUN_004b28d0();
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
      FUN_004b28d0();
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  puVar2 = (undefined4 *)FUN_004b27c0(&local_2c,0);
  if ((*(int *)*puVar2 == 0x2b) &&
     (puVar2 = (undefined4 *)FUN_004b27c0(&local_2c,1), *(int *)*puVar2 == 0x69)) {
    if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
      FUN_004b28d0();
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
      FUN_004b28d0();
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    local_2c = FUN_0048ae90(0,1);
    local_28 = &DAT_0066f3f8;
    local_4 = 0;
    local_3c = FUN_0048ae90(0,0);
    local_38 = &DAT_0066f3f8;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004b2910(param_1,0,&local_48,&local_3c,&local_2c);
    FUN_0048aa80();
    FUN_0048aa80();
    FUN_0048aa80();
    FUN_0048aa80();
    ExceptionList = local_c;
    return param_1;
  }
  puVar2 = (undefined4 *)FUN_004b27c0(&local_2c,0);
  if ((*(int *)*puVar2 == 0x2d) &&
     (puVar2 = (undefined4 *)FUN_004b27c0(&local_2c,1), *(int *)*puVar2 == 0x69)) {
    if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
      FUN_004b28d0();
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
      FUN_004b28d0();
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    local_3c = FUN_0048ae90(0,0xffffffff);
    local_38 = &DAT_0066f3f8;
    local_4 = 2;
    local_2c = FUN_0048ae90(0,0);
    local_28 = &DAT_0066f3f8;
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004b2910(param_1,0,&local_48,&local_2c,&local_3c);
    FUN_0048aa80();
    FUN_0048aa80();
    FUN_0048aa80();
    FUN_0048aa80();
    ExceptionList = local_c;
    return param_1;
  }
  FUN_004b1dd0(local_44,uVar4,param_3);
  local_4 = 4;
  puVar2 = (undefined4 *)FUN_004b27c0(local_1c,0);
  if (*(int *)*puVar2 == 0x40) {
    if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
      FUN_004b28d0();
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    FUN_004b1dd0(&local_2c,uVar4,param_3);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004b2910(param_1,0,&local_48,local_44,&local_2c);
    FUN_0048aa80();
LAB_004b2530:
    FUN_0048aa80();
    FUN_0048aa80();
    FUN_0048aa80();
  }
  else {
    puVar2 = (undefined4 *)FUN_004b27c0(local_1c,0);
    if (*(int *)*puVar2 == 0x2b) {
      if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
        FUN_004b28d0();
      }
      else {
        *piVar1 = *piVar1 + 4;
      }
      puVar2 = (undefined4 *)FUN_004b27c0(local_1c,0);
      if (*(int *)*puVar2 == 0x69) {
        if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
          FUN_004b28d0();
        }
        else {
          *piVar1 = *piVar1 + 4;
        }
        local_2c = FUN_0048ae90(0,1);
        local_28 = &DAT_0066f3f8;
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_004b2910(param_1,0,&local_48,local_44,&local_2c);
        FUN_0048aa80();
        goto LAB_004b2530;
      }
      FUN_004b1dd0(&local_3c,uVar4,param_3);
      local_4 = CONCAT31(local_4._1_3_,7);
      puVar2 = (undefined4 *)FUN_004b27c0(local_1c,0);
      if (*(int *)*puVar2 == 0x69) {
        if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
          FUN_004b28d0();
        }
        else {
          *piVar1 = *piVar1 + 4;
        }
      }
      else {
        FUN_004a55b0(0x14,0x300,s__i__expected_00670420);
      }
      FUN_004b2910(param_1,0,&local_48,local_44,&local_3c);
      FUN_0048aa80();
      FUN_0048aa80();
    }
    else {
      puVar2 = (undefined4 *)FUN_004b27c0(local_1c,0);
      if (*(int *)*puVar2 == 0x2d) {
        puVar2 = (undefined4 *)FUN_004b27c0(local_1c,0);
        if (*(int *)*puVar2 == 0x69) {
          FUN_004b2770();
          FUN_004b2770();
          uVar4 = FUN_004b2740(0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,8);
          FUN_004b2910(param_1,0,&local_48,local_44,uVar4);
        }
        else {
          FUN_004b1dd0(&local_2c,uVar4,param_3);
          local_4 = CONCAT31(local_4._1_3_,9);
          puVar2 = (undefined4 *)FUN_004b27c0(local_1c,0);
          if (*(int *)*puVar2 == 0x69) {
            FUN_004b2770();
          }
          else {
            FUN_004a55b0(0x14,0x300,s__i__expected_00670420);
          }
          FUN_004b2910(param_1,0,&local_48,local_44,&local_2c);
        }
      }
      else {
        uVar4 = FUN_004b2740(0);
        local_4 = CONCAT31(local_4._1_3_,10);
        FUN_004b2910(param_1,0,&local_48,local_44,uVar4);
      }
      FUN_00490f50();
    }
    FUN_00490f50();
  }
  ExceptionList = local_c;
  return param_1;
}

