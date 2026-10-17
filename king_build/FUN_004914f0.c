
void FUN_004914f0(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640d18;
  local_c = ExceptionList;
  if (*(int *)(param_2 + 0x107c) == 0) {
    puStack_14 = &param_3;
    piVar1 = (int *)(param_2 + 0x2c);
    uStack_18 = param_3;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_004896a0(&uStack_18);
    FUN_004917c0(&param_2);
    iVar2 = *(int *)(*piVar1 + 4);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x107c) + -1;
    *(int *)(param_2 + 0x107c) = iVar2;
    iVar2 = *(int *)(param_2 + 0x7c + iVar2 * 4);
    *(undefined4 *)(iVar2 + 8) = param_3;
  }
  *param_1 = iVar2;
  ExceptionList = local_c;
  return;
}

