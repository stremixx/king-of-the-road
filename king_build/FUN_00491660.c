
void __fastcall FUN_00491660(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00640d68;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0064af14;
  piVar1 = (int *)param_1[6];
  piVar4 = (int *)param_1[5];
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  for (; piVar4 != piVar1; piVar4 = piVar4 + 0xb) {
    (**(code **)(*piVar4 + 4))();
  }
  piVar1 = (int *)param_1[5];
  iVar2 = (param_1[7] - (int)piVar1) / 0x2c;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 0x2c;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888();
    }
  }
  *param_1 = &PTR_LAB_0064af28;
  local_4 = 2;
  FUN_004915f0(param_1[3]);
  *param_1 = &PTR_LAB_0064aed4;
  ExceptionList = pvStack_c;
  return;
}

