
void __fastcall FUN_00403690(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ae8c;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x60);
  local_4 = 3;
  iVar2 = *(int *)(param_1 + 0x68) - (int)piVar1 >> 2;
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
  if (((*(uint *)(param_1 + 0x5c) & 0x10000) == 0) && (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)
     ) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar1 = *(int **)(param_1 + 0x54);
    if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x48);
  uVar3 = *(int *)(param_1 + 0x50) - (int)piVar1;
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
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24) >> 2;
  if (iVar2 != 0) {
    FUN_0044b440(*(int *)(param_1 + 0x24),iVar2 * 4);
  }
  piVar1 = *(int **)(param_1 + 0x14);
  uVar3 = *(int *)(param_1 + 0x1c) - (int)piVar1;
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
  local_4 = 0xffffffff;
  if (((*(uint *)(param_1 + 0x10) & 0x10000) == 0) && (iVar2 = *(int *)(param_1 + 8), iVar2 != 0)) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

