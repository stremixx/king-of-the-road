
undefined4 * __thiscall FUN_005ed4e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_006517a0;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[6] = param_2;
  if (param_2 == 0) {
    param_1[8] = 0;
  }
  else {
    uVar1 = FUN_00631d33(param_2 * 4);
    param_1[8] = uVar1;
    iVar2 = 0;
    if (0 < param_2) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1[8] + -4 + iVar2 * 4) = 0;
      } while (iVar2 < param_2);
    }
  }
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}

