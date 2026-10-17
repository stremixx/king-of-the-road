
undefined4 FUN_004b6c20(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int local_24;
  uint local_1c;
  int *piStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064421f;
  pvStack_c = ExceptionList;
  local_24 = 0;
  local_1c = 0;
  local_4 = 1;
  if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
    local_24 = 0;
    local_1c = 0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    iVar2 = (*(code *)**(undefined4 **)*param_2)();
    if (iVar2 == 2) {
      local_24 = *param_2;
      local_1c = param_2[2];
      *(int *)(local_24 + 4) = *(int *)(local_24 + 4) + 1;
    }
    else {
      (**(code **)(*(int *)*param_2 + 4))();
      FUN_004a5670(2);
    }
  }
  local_4 = 2;
  if (local_24 == 0) {
    FUN_004a5470();
  }
  if ((local_1c & 0x10000) != 0) {
    FUN_004a5470();
  }
  FUN_004b7000(&piStack_18);
  if (((uStack_10 & 0x10000) == 0) && (piStack_18 != (int *)0x0)) {
    piStack_18[1] = piStack_18[1] + -1;
    if ((piStack_18[1] == 0) && (piStack_18 != (int *)0x0)) {
      (**(code **)(*piStack_18 + 0xc))();
    }
  }
  piStack_18 = (int *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_24 == 0) {
    FUN_004a5470();
  }
  if ((local_1c & 0x10000) != 0) {
    FUN_004a5470();
  }
  if (((*(int *)(local_24 + 0x20) == 0) && (*(int *)(local_24 + 0x28) == 0)) &&
     (*(int *)(local_24 + 0x24) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (bVar1) {
    FUN_00455dc0(param_3);
  }
  else {
    if (local_24 == 0) {
      FUN_004a5470();
    }
    if ((local_1c & 0x10000) != 0) {
      FUN_004a5470();
    }
    if (*(char *)(local_24 + 0x28) == '\x02') {
      if (local_24 == 0) {
        FUN_004a5470();
      }
      if ((local_1c & 0x10000) != 0) {
        FUN_004a5470();
      }
      FUN_004b6c20(&piStack_18);
      FUN_00492340();
      goto LAB_004b6e6e;
    }
    FUN_00455dc0(param_3);
    FUN_004b14e0(&DAT_006705bc);
    FUN_004b8250();
    FUN_004b7000(&piStack_18);
    FUN_00492340();
    FUN_00455dc0(param_3);
  }
  FUN_004b1450(0x29);
  *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + -1;
LAB_004b6e6e:
  FUN_004042a0();
  local_4 = local_4 & 0xffffff00;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return param_1;
}

