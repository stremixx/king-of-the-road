
void FUN_00482020(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490d40(param_1,&DAT_0066ee48,local_10);
  local_4 = 0;
  piVar1 = (int *)*DAT_0068becc;
  if (piVar1 != DAT_0068becc) {
    do {
      FUN_00481860(param_1,piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != DAT_0068becc);
  }
  local_4 = 0xffffffff;
  FUN_00490d90(param_1,local_10);
  ExceptionList = local_c;
  return;
}

