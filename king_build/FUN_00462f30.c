
int * FUN_00462f30(int *param_1,int *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063f57f;
  local_10 = ExceptionList;
  if (param_1 == (int *)0x0) {
    if (param_2 != (int *)0x0) {
      ExceptionList = &local_10;
      InterlockedIncrement(param_2 + 1);
    }
    ExceptionList = local_10;
    return param_2;
  }
  if (param_2 == (int *)0x0) {
    ExceptionList = &local_10;
    InterlockedIncrement(param_1 + 1);
    ExceptionList = local_10;
    return param_1;
  }
  if ((char)param_2[2] == '\0') {
    if ((param_1[2] & 0xffU) == 0) {
      if ((uint)(*param_2 + *param_1) < 0x18) {
        ExceptionList = &local_10;
        piVar1 = (int *)FUN_00462700(param_1,param_2[5],*param_2);
        ExceptionList = local_10;
        return piVar1;
      }
    }
    else if ((((param_1[2] & 0xffU) == 1) && (piVar1 = (int *)param_1[6], (char)piVar1[2] == '\0'))
            && ((uint)(*piVar1 + *param_2) < 0x18)) {
      param_1 = (int *)param_1[5];
      ExceptionList = &local_10;
      param_2 = (int *)FUN_00462700(piVar1,param_2[5],*param_2);
      InterlockedIncrement(param_1 + 1);
      local_8 = 0;
      goto LAB_00463035;
    }
  }
  ExceptionList = &local_10;
  InterlockedIncrement(param_1 + 1);
  InterlockedIncrement(param_2 + 1);
  local_8 = 2;
LAB_00463035:
  piVar1 = (int *)FUN_0045a650(param_1,param_2);
  ExceptionList = local_10;
  return piVar1;
}

