
void __fastcall FUN_00490f50(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640c78;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  local_4 = 0;
  ExceptionList = &local_c;
  piVar2 = param_1;
  if ((iVar1 != 0) && (ExceptionList = &local_c, *(short *)(iVar1 + 2) != 0)) {
    ExceptionList = &local_c;
    FUN_00631d5c(iVar1);
  }
  iVar1 = *param_1;
  local_4 = 0xffffffff;
  if ((iVar1 != 0) && (*(short *)(iVar1 + 2) != 0)) {
    FUN_00631d5c(iVar1,piVar2);
  }
  ExceptionList = local_c;
  return;
}

