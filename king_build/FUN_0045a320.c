
int * FUN_0045a320(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063ef90;
  local_10 = ExceptionList;
  if (param_3 == 0) {
    if (param_1 != (int *)0x0) {
      ExceptionList = &local_10;
      InterlockedIncrement(param_1 + 1);
    }
    ExceptionList = local_10;
    return param_1;
  }
  if (param_1 == (int *)0x0) {
    ExceptionList = &local_10;
    piVar1 = (int *)FUN_004591c0(param_2,param_3);
  }
  else {
    if (((param_1[2] & 0xffU) == 0) && ((uint)(*param_1 + param_3) < 0x18)) {
      ExceptionList = &local_10;
      piVar1 = (int *)FUN_00462700(param_1,param_2,param_3);
      ExceptionList = local_10;
      return piVar1;
    }
    if (((param_1[2] & 0xffU) == 1) &&
       ((piVar1 = (int *)param_1[6], (char)piVar1[2] == '\0' && ((uint)(*piVar1 + param_3) < 0x18)))
       ) {
      param_1 = (int *)param_1[5];
      ExceptionList = &local_10;
      uVar2 = FUN_00462700(piVar1,param_2,param_3);
      InterlockedIncrement(param_1 + 1);
      local_8 = 0;
    }
    else {
      ExceptionList = &local_10;
      uVar2 = FUN_004591c0(param_2,param_3);
      local_8 = 2;
      InterlockedIncrement(param_1 + 1);
    }
    piVar1 = (int *)FUN_0045a650(param_1,uVar2);
  }
  ExceptionList = local_10;
  return piVar1;
}

