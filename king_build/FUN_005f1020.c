
undefined4 * __thiscall
FUN_005f1020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00649108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005eed00(param_2,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_00651ca4;
  param_1[0xd] = param_4;
  if (param_4 == 0) {
    param_1[0xc] = 0;
  }
  else {
    uVar1 = FUN_00631d33(param_4 * 4);
    param_1[0xc] = uVar1;
  }
  iVar2 = 0;
  if (0 < (int)param_1[0xd]) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1[0xc] + -4 + iVar2 * 4) = 0;
    } while (iVar2 < (int)param_1[0xd]);
  }
  ExceptionList = local_c;
  return param_1;
}

