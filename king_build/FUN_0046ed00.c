
int * __thiscall FUN_0046ed00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0063f940;
  local_10 = ExceptionList;
  iVar1 = (param_3 - param_2) / 0xc;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[1] = iVar1;
  local_8 = 0;
  *param_1 = iVar1;
  param_1[2] = 0;
  if (0xaaaaaaa < iVar1) {
    param_1[1] = 0xaaaaaaa;
  }
  while (0 < param_1[1]) {
    pvVar2 = _malloc(param_1[1] * 0xc);
    param_1[2] = (int)pvVar2;
    if (pvVar2 != (void *)0x0) break;
    param_1[1] = param_1[1] / 2;
  }
  if (0 < param_1[1]) {
    FUN_004707c0(param_1[2],param_1[1],param_2,param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

