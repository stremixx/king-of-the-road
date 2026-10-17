
undefined4
FUN_00455c80(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063eb48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00455dc0(&param_3);
  uVar1 = FUN_0045be70(param_1,param_2);
  local_4 = 0xffffffff;
  if (((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) {
    param_3[1] = param_3[1] + -1;
    if ((param_3[1] == 0) && (param_3 != (int *)0x0)) {
      (**(code **)(*param_3 + 0xc))();
    }
  }
  ExceptionList = local_c;
  return uVar1;
}

