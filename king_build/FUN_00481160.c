
void FUN_00481160(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490d40(param_1,&DAT_0066ede4);
  local_4 = 0;
  piVar2 = (int *)*DAT_0068a8f0;
  if (piVar2 != DAT_0068a8f0) {
    do {
      uVar1 = FUN_0040a950();
      FUN_00480f80(param_1,uVar1);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_0068a8f0);
  }
  local_4 = 0xffffffff;
  FUN_00490d90(param_1);
  ExceptionList = local_c;
  return;
}

