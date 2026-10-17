
void __fastcall FUN_004a4150(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00642d15;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0064af3c;
  local_4 = 0;
  piVar1 = (int *)param_1[0x24];
  if (piVar1 != (int *)0x0) {
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    if (piVar1[1] != 0) {
      FUN_004a4c40(*(undefined4 *)(*piVar1 + 4));
      *(int *)(*piVar1 + 8) = *piVar1;
      *(undefined4 *)(*piVar1 + 4) = 0;
      *(int *)(*piVar1 + 0xc) = *piVar1;
      piVar1[1] = 0;
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_0044b440(*piVar1,0x2c);
    FUN_00631d5c(piVar1);
  }
  param_1[0x24] = 0;
  local_4._0_1_ = 3;
  if (((param_1[0x27] & 0x10000) == 0) && (iVar2 = param_1[0x25], iVar2 != 0)) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar1 = (int *)param_1[0x25];
    if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  iVar2 = param_1[0x22];
  iVar4 = param_1[0x21];
  local_4 = CONCAT31(local_4._1_3_,6);
  for (; iVar4 != iVar2; iVar4 = iVar4 + 0xc) {
    FUN_00492340();
  }
  piVar1 = (int *)param_1[0x21];
  iVar2 = (param_1[0x23] - (int)piVar1) / 0xc;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 0xc;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  local_4._0_1_ = 1;
  FUN_0061ccb5(param_1 + 9,0xc,8,FUN_00492340);
  local_4 = (uint)local_4._1_3_ << 8;
  if (((param_1[8] & 0x10000) == 0) && (iVar2 = param_1[6], iVar2 != 0)) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar1 = (int *)param_1[6];
    if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  *param_1 = &PTR_LAB_0064aec0;
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1[3] + 0x10) = param_1[4];
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1[4] + 0xc) = param_1[3];
  }
  *param_1 = &PTR_LAB_0064aed4;
  ExceptionList = pvStack_c;
  return;
}

