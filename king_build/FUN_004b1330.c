
void __fastcall FUN_004b1330(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643b20;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x14);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if ((iVar1 != 0) && (ExceptionList = &pvStack_c, (*(uint *)(param_1 + 0x1c) & 0x10000) == 0)) {
    ExceptionList = &pvStack_c;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = *(int **)(param_1 + 0x14);
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  local_4 = 1;
  if ((iVar1 != 0) && ((*(uint *)(param_1 + 0x28) & 0x10000) == 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = *(int **)(param_1 + 0x20);
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  ExceptionList = pvStack_c;
  return;
}

