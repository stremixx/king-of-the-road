
void FUN_004b1450(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643b38;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 == (int *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_004a5470(0,1);
  }
  if ((param_4 & 0x10000) != 0) {
    FUN_004a5470(4,1);
  }
  (**(code **)(*param_2 + 0x1c))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  if ((((param_4 & 0x10000) == 0) && (param_2 != (int *)0x0)) &&
     (iVar1 = param_2[1], param_2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  ExceptionList = unaff_ESI;
  return;
}

