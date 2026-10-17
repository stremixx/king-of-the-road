
void __fastcall FUN_004b1270(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00643b03;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0064b044;
  local_4 = 1;
  if (((param_1[10] & 0x10000) == 0) && (iVar1 = param_1[8], iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)param_1[8];
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  local_4 = local_4 & 0xffffff00;
  if (((param_1[7] & 0x10000) == 0) && (iVar1 = param_1[5], iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)param_1[5];
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
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

