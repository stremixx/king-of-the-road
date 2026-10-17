
void FUN_004ac400(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006435f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    pvVar1 = _malloc(0x200);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)FUN_00458210(0x200);
    }
    *param_1 = pvVar1;
  }
  ExceptionList = local_10;
  return;
}

