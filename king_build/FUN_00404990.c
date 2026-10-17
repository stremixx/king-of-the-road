
void __fastcall FUN_00404990(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b036;
  pvStack_c = ExceptionList;
  local_4 = 5;
  iVar2 = (int)(param_1[0x39] - param_1[0x37]) >> 2;
  ExceptionList = &pvStack_c;
  if (iVar2 != 0) {
    ExceptionList = &pvStack_c;
    FUN_0044b440(param_1[0x37],iVar2 << 2);
  }
  iVar2 = param_1[0x35];
  iVar5 = param_1[0x34];
  local_4._0_1_ = 6;
  for (; iVar5 != iVar2; iVar5 = iVar5 + 0xc) {
    FUN_004497b0();
  }
  iVar2 = param_1[0x34];
  iVar5 = (param_1[0x36] - iVar2) / 0xc;
  local_4._0_1_ = 4;
  if (iVar5 != 0) {
    FUN_0044b440(iVar2,iVar5 * 0xc);
  }
  iVar2 = param_1[0x22] - param_1[0x20];
  local_4._0_1_ = 3;
  if (iVar2 != 0) {
    FUN_0044b440(param_1[0x20],iVar2);
  }
  local_4._0_1_ = 2;
  iVar2 = (int)(param_1[0x1e] - param_1[0x1c]) >> 2;
  if (iVar2 != 0) {
    FUN_0044b440(param_1[0x1c],iVar2 << 2);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (((param_1[0xc] & 0x10000) == 0) && (iVar2 = param_1[10], iVar2 != 0)) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar1 = (int *)param_1[10];
    if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = param_1 + 3;
  }
  piVar1 = (int *)puVar3[1];
  uVar4 = puVar3[3] - (int)piVar1;
  if (uVar4 != 0) {
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = (int *)*param_1;
  uVar4 = param_1[2] - (int)piVar1;
  if (uVar4 != 0) {
    if (0x80 < uVar4) {
      FUN_0061c888(piVar1);
      ExceptionList = pvStack_c;
      return;
    }
    FUN_00401aa0();
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

