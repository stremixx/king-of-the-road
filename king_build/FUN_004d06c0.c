
void __fastcall FUN_004d06c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00644e31;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0xa8);
  uVar2 = *(int *)(param_1 + 0xb0) - (int)piVar1;
  local_4 = 2;
  ExceptionList = &local_c;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      ExceptionList = &local_c;
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
      FUN_00434030();
    }
    else {
      ExceptionList = &local_c;
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  uVar2 = *(int *)(param_1 + 0xa4) - (int)piVar1;
  local_4._0_1_ = 1;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
      FUN_00434030();
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x90);
  uVar2 = *(int *)(param_1 + 0x98) - (int)piVar1;
  local_4 = (uint)local_4._1_3_ << 8;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
      FUN_00434030();
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x84);
  uVar2 = *(int *)(param_1 + 0x8c) - (int)piVar1;
  local_4 = 0xffffffff;
  if (uVar2 != 0) {
    if (0x80 < uVar2) {
      FUN_0061c888(piVar1);
      ExceptionList = local_c;
      return;
    }
    FUN_00401aa0();
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
    FUN_00434030();
  }
  ExceptionList = local_c;
  return;
}

