
void FUN_004b14e0(char *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643b58;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*param_1 != '\0') {
    ExceptionList = &pvStack_c;
    do {
      if (param_2 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((param_4 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      (**(code **)(*param_2 + 0x1c))(*param_1);
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
    } while (*pcVar1 != '\0');
  }
  local_4 = 0xffffffff;
  if ((((param_4 & 0x10000) == 0) && (param_2 != (int *)0x0)) &&
     (iVar2 = param_2[1], param_2[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  ExceptionList = pvStack_c;
  return;
}

