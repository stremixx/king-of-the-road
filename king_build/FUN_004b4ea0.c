
undefined4 * __thiscall
FUN_004b4ea0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_004a2060(0);
  if ((param_5 & 0x10000) == 0) {
    param_1[0xb] = 0;
    if (param_3 == (int *)0x0) {
      param_1[10] = 0;
      param_1[0xc] = 0;
    }
    else {
      param_1[10] = param_3;
      param_1[0xc] = param_5;
      param_3[1] = param_3[1] + 1;
    }
  }
  else {
    param_1[0xc] = param_5;
    param_1[10] = param_3;
    param_1[0xb] = param_4;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  local_4 = 0xffffffff;
  if ((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
     (iVar1 = param_3[1], param_3[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*param_3 + 0xc))(1);
  }
  ExceptionList = local_c;
  return param_1;
}

