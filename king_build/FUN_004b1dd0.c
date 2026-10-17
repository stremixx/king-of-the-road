
undefined4 * FUN_004b1dd0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int **ppiVar6;
  bool bVar7;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_1c;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643c7d;
  local_c = ExceptionList;
  iVar5 = 0;
  local_30 = 0;
  ExceptionList = &local_c;
  local_38 = FUN_0048ae90(0,0);
  local_4 = 0;
  local_3c = FUN_0048ae90(0,1);
  iVar2 = param_3;
  piVar1 = (int *)(param_3 + 8);
  local_4._0_1_ = 1;
  local_34 = 0;
  puVar3 = (undefined4 *)FUN_004b27c0(&local_1c,0);
  if (*(int *)*puVar3 == 0x2d) {
    local_34 = 1;
    if (*piVar1 != *(int *)(iVar2 + 0x10) + -4) {
      *piVar1 = *piVar1 + 4;
      goto LAB_004b1e94;
    }
  }
  else {
    FUN_004abfc0(piVar1);
    uVar4 = FUN_004b2840(0);
    FUN_004abfc0(uVar4);
    if (*local_2c != 0x2b) goto LAB_004b1e94;
    local_34 = 0;
    if (*piVar1 != *(int *)(iVar2 + 0x10) + -4) {
      *piVar1 = *piVar1 + 4;
      goto LAB_004b1e94;
    }
  }
  FUN_004b28d0();
LAB_004b1e94:
  if (param_2 == 10) {
    iVar5 = FUN_004b17b0(&local_38,&local_3c,10);
  }
  else {
    puVar3 = (undefined4 *)FUN_004b1c20(&param_3,param_2,iVar2);
    local_4._0_1_ = 2;
    local_38 = FUN_0048ad80(local_38,*puVar3);
    local_4._0_1_ = 1;
    if ((param_3 != 0) && (*(short *)(param_3 + 2) != 0)) {
      FUN_00631d5c(param_3);
    }
  }
  FUN_004abfc0(piVar1);
  uVar4 = FUN_004b2840(0);
  FUN_004abfc0(uVar4);
  if ((*local_2c == 0x2f) && (iVar5 == 0)) {
    if (*piVar1 == *(int *)(iVar2 + 0x10) + -4) {
      FUN_004b28d0();
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    puVar3 = (undefined4 *)FUN_004b1c20(&param_3,param_2,iVar2);
    local_4._0_1_ = 3;
    local_3c = FUN_0048ad80(local_3c,*puVar3);
    local_4._0_1_ = 1;
    if ((param_3 != 0) && (*(short *)(param_3 + 2) != 0)) {
      FUN_00631d5c(param_3);
    }
  }
  bVar7 = local_34 == 0;
  if (bVar7) {
    local_2c = (int *)FUN_0048ad80(0,local_38);
    local_4 = 8;
    local_28 = FUN_0048ad80(0,local_3c);
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_00490e60();
    local_30 = 4;
    ppiVar6 = &local_2c;
    local_4 = 10;
  }
  else {
    puVar3 = (undefined4 *)FUN_004b20e0(&param_3,&local_38);
    local_30 = 1;
    local_4 = CONCAT31(local_4._1_3_,4);
    local_1c = (int *)FUN_0048ad80(0,*puVar3);
    local_4 = 5;
    local_18 = FUN_0048ad80(0,local_3c);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_00490e60();
    local_30 = 3;
    ppiVar6 = &local_1c;
    local_4 = 7;
  }
  uVar4 = FUN_0048ad80(0,*ppiVar6);
  *param_1 = uVar4;
  local_4 = 0xb;
  uVar4 = FUN_0048ad80(0,ppiVar6[1]);
  param_1[1] = uVar4;
  if (bVar7) {
    FUN_0048aa80();
    FUN_0048aa80();
  }
  else {
    FUN_0048aa80();
    FUN_0048aa80();
    FUN_0048aa80();
  }
  FUN_0048aa80();
  FUN_0048aa80();
  ExceptionList = local_c;
  return param_1;
}

