
void __fastcall FUN_004a73b0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064301e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064af58;
  local_4 = 1;
  if (((param_1[10] & 0x10000) == 0) && (iVar1 = param_1[8], iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)param_1[8];
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  iVar1 = param_1[5];
  iVar4 = param_1[4];
  local_4._0_1_ = 2;
  for (; iVar4 != iVar1; iVar4 = iVar4 + 0xc) {
    FUN_00492340();
  }
  piVar2 = (int *)param_1[4];
  iVar1 = (param_1[6] - (int)piVar2) / 0xc;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar1 != 0) {
    uVar3 = iVar1 * 0xc;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar2 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar2);
    }
  }
  local_4 = 0xffffffff;
  if (((param_1[3] & 0x10000) == 0) && (iVar1 = param_1[1], iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)param_1[1];
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

