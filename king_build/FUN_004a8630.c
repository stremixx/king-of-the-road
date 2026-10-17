
undefined4 *
FUN_004a8630(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 param_5,uint param_6)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00643187;
  local_c = ExceptionList;
  if ((param_6 & 0x10000) == 0) {
    ExceptionList = &local_c;
    param_1[1] = 0;
    if (param_4 == (int *)0x0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = param_4;
      param_1[2] = param_6;
      param_4[1] = param_4[1] + 1;
    }
  }
  else {
    ExceptionList = &local_c;
    param_1[2] = param_6;
    *param_1 = param_4;
    param_1[1] = param_5;
  }
  if ((((param_6 & 0x10000) == 0) && (param_4 != (int *)0x0)) &&
     (iVar1 = param_4[1], param_4[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*param_4 + 0xc))(1);
  }
  ExceptionList = local_c;
  return param_1;
}

