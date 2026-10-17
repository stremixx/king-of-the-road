
void __fastcall FUN_00404670(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063afba;
  pvStack_c = ExceptionList;
  piVar1 = (int *)param_1[0x1c];
  local_4 = 2;
  iVar2 = param_1[0x1e] - (int)piVar1 >> 2;
  ExceptionList = &pvStack_c;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 4;
    if (uVar3 < 0x81) {
      ExceptionList = &pvStack_c;
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      ExceptionList = &pvStack_c;
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = (int *)param_1[0x19];
  uVar3 = param_1[0x1b] - (int)piVar1;
  if (uVar3 != 0) {
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
  iVar2 = param_1[0x18] - param_1[0x16];
  if (iVar2 != 0) {
    FUN_0044b440(param_1[0x16],iVar2);
  }
  local_4._0_1_ = 1;
  if (((param_1[0xb] & 0x10000) == 0) && (iVar2 = param_1[9], iVar2 != 0)) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar1 = (int *)param_1[9];
    if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 3;
  }
  iVar2 = puVar4[3] - puVar4[1];
  if (iVar2 != 0) {
    FUN_0044b440(puVar4[1],iVar2);
  }
  piVar1 = (int *)*param_1;
  uVar3 = param_1[2] - (int)piVar1;
  if (uVar3 != 0) {
    if (0x80 < uVar3) {
      FUN_0061c888(piVar1);
      ExceptionList = pvStack_c;
      return;
    }
    FUN_00401aa0();
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

