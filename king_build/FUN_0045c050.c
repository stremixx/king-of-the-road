
int FUN_0045c050(int param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  void **ppvVar1;
  char cVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f068;
  local_4 = 0;
  ppvVar1 = &local_c;
  local_c = ExceptionList;
  while ((ExceptionList = ppvVar1, param_1 != param_2 &&
         (cVar2 = FUN_004b66a0(param_1,&param_3), cVar2 == '\0'))) {
    param_1 = param_1 + 0x18;
    ppvVar1 = ExceptionList;
  }
  local_4 = 0xffffffff;
  if (((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
      (param_3[1] = param_3[1] + -1, param_3[1] == 0)) && (param_3 != (int *)0x0)) {
    (**(code **)(*param_3 + 0xc))(1);
  }
  ExceptionList = local_c;
  return param_1;
}

