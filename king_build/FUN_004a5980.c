
void FUN_004a5980(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((*(uint *)(param_1 + 0x68) & 0x10000) == 0) &&
     (ExceptionList = &local_c, *(int *)(param_1 + 0x60) != 0)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x60) + 4);
    ExceptionList = &local_c;
    *piVar1 = *piVar1 + 1;
  }
  FUN_004b14e0(s_STACK_TRACE__006700dc);
  iVar2 = (*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c)) / 0x2c;
  while (iVar2 = iVar2 + -1, iVar2 != -1) {
    if (((*(uint *)(param_1 + 0x68) & 0x10000) == 0) && (*(int *)(param_1 + 0x60) != 0)) {
      piVar1 = (int *)(*(int *)(param_1 + 0x60) + 4);
      *piVar1 = *piVar1 + 1;
    }
    local_4 = 0xffffffff;
    uVar3 = FUN_004aa2c0(iVar2);
    FUN_004a5740(param_1,uVar3);
  }
  ExceptionList = local_c;
  return;
}

