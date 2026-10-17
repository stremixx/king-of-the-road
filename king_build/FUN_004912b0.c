
void __fastcall FUN_004912b0(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *local_24;
  undefined4 local_20;
  uint local_1c;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640cd8;
  pvStack_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
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
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  piVar2 = (int *)(param_1 + 0x20);
  local_4 = 1;
  if ((((iVar1 != 0) && ((*(byte *)(param_1 + 0x2a) & 1) == 0)) &&
      (*(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1, *(int *)(*piVar2 + 4) == 0)) &&
     ((cVar3 = FUN_00408fd0(piVar2,&local_24), cVar3 == '\0' && ((int *)*piVar2 != (int *)0x0)))) {
    (**(code **)(*(int *)*piVar2 + 0xc))(1);
  }
  if ((local_1c & 0x10000) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (local_24 == (int *)0x0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
      *piVar2 = (int)local_24;
      *(uint *)(param_1 + 0x28) = local_1c;
      local_24[1] = local_24[1] + 1;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = local_1c;
    *piVar2 = (int)local_24;
    *(undefined4 *)(param_1 + 0x24) = local_20;
  }
  local_4 = 0xffffffff;
  if ((((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) &&
     ((local_24[1] = local_24[1] + -1, local_24[1] == 0 && (local_24 != (int *)0x0)))) {
    (**(code **)(*local_24 + 0xc))(1);
  }
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  FUN_004918e0(&local_18);
  local_4 = 0xffffffff;
  if (((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
      (local_18[1] = local_18[1] + -1, local_18[1] == 0)) && (local_18 != (int *)0x0)) {
    (**(code **)(*local_18 + 0xc))(1);
  }
  ExceptionList = pvStack_c;
  return;
}

