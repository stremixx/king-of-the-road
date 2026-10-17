
void FUN_00568710(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646aa8;
  local_c = ExceptionList;
  if (*(int *)(DAT_006cdbcc + 0x514) == 1) {
    ExceptionList = &local_c;
    FUN_006022c0();
    local_30 = param_1;
    local_4 = 0;
    local_2c = param_2;
    FUN_006027f0(0x3c3,&local_30,8);
    FUN_005c2d10(local_28);
    local_4 = 0xffffffff;
    FUN_00602560();
  }
  ExceptionList = local_c;
  return;
}

