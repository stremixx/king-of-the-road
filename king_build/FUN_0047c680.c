
int * __thiscall FUN_0047c680(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00640030;
  local_10 = ExceptionList;
  iVar1 = param_3 - param_2 >> 3;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[1] = iVar1;
  local_8 = 0;
  *param_1 = iVar1;
  param_1[2] = 0;
  if (0xfffffff < iVar1) {
    param_1[1] = 0xfffffff;
  }
  while (0 < param_1[1]) {
    pvVar2 = _malloc(param_1[1] * 8);
    param_1[2] = (int)pvVar2;
    if (pvVar2 != (void *)0x0) break;
    param_1[1] = param_1[1] / 2;
  }
  if (0 < param_1[1]) {
    FUN_0047f830(param_1[2],param_1[1],param_2,param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

