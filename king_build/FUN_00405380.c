
undefined4 * __thiscall
FUN_00405380(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  if ((param_4 & 0x10000) == 0) {
    param_1[1] = 0;
    if (param_2 == (int *)0x0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[2] = param_4;
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_1[2] = param_4;
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  if ((((param_4 & 0x10000) == 0) && (param_2 != (int *)0x0)) &&
     (iVar1 = param_2[1], param_2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  return param_1;
}

