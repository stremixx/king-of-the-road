
void * FUN_00479060(undefined4 param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063fda1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = _malloc(1000);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_00458210(1000);
  }
  local_8 = 2;
  if (pvVar1 != (void *)0xfffffff8) {
    FUN_0047a300(param_1);
  }
  ExceptionList = local_10;
  return pvVar1;
}

