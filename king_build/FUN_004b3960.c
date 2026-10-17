
undefined4 FUN_004b3960(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *local_44 [2];
  uint local_3c;
  int *local_38 [2];
  uint local_30;
  int *local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643e37;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004b2bf0(1);
  piVar1 = (int *)(param_3 + 8);
  if (*(int *)(param_3 + 8) == *(int *)(param_3 + 0x10) + -4) {
    FUN_004b28d0();
  }
  else {
    *piVar1 = *(int *)(param_3 + 8) + 4;
  }
  *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
  FUN_004b2bf0(1);
  if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
    FUN_004b28d0();
  }
  else {
    *piVar1 = *piVar1 + 4;
  }
  *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
  FUN_004a2850(local_44,0,*(undefined4 *)(param_3 + 0x48));
  local_4 = 1;
  FUN_004b2d30(param_2,param_3);
  FUN_004abfc0(piVar1);
  uVar4 = FUN_004b2840(0);
  FUN_004abfc0(uVar4);
  iVar2 = *local_1c;
  while (iVar2 != 0x29) {
    uVar4 = FUN_004b3ec0(local_38,param_2,param_3);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_44[0] == (int *)0x0) {
      FUN_004a5470(0,1);
    }
    if ((local_3c & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    piVar3 = local_44[0];
    if (local_44[0][6] == local_44[0][7]) {
      FUN_0044c6b0(local_44[0][6],uVar4);
    }
    else {
      FUN_00460920();
      piVar3[6] = piVar3[6] + 0xc;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (((((local_30 & 0x10000) == 0) && (local_38[0] != (int *)0x0)) &&
        (local_38[0][1] = local_38[0][1] + -1, local_38[0][1] == 0)) && (local_38[0] != (int *)0x0))
    {
      (**(code **)(*local_38[0] + 0xc))(1);
    }
    FUN_004b2d30(param_2,param_3);
    FUN_004abfc0(piVar1);
    uVar4 = FUN_004b2840(0);
    FUN_004abfc0(uVar4);
    iVar2 = *local_1c;
  }
  FUN_004b2bf0(1);
  if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
    FUN_004b28d0();
  }
  else {
    *piVar1 = *piVar1 + 4;
  }
  *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
  FUN_00455dc0(local_44);
  local_4 = local_4 & 0xffffff00;
  if ((((local_3c & 0x10000) == 0) && (local_44[0] != (int *)0x0)) &&
     ((local_44[0][1] = local_44[0][1] + -1, local_44[0][1] == 0 && (local_44[0] != (int *)0x0)))) {
    (**(code **)(*local_44[0] + 0xc))(1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

