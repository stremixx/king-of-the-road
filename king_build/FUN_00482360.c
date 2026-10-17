
void FUN_00482360(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490d40(param_1,&DAT_0066ee6c,local_10);
  local_4 = 0;
  puVar1 = DAT_0068be98;
  if (DAT_0068be98 != DAT_0068be9c) {
    do {
      FUN_004820b0(param_1,*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != DAT_0068be9c);
  }
  local_4 = 0xffffffff;
  FUN_00490d90(param_1,local_10);
  ExceptionList = local_c;
  return;
}

