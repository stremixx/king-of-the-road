
void FUN_0062b130(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0062a000(param_1,param_2,param_3);
  if (iVar1 != param_3) {
    do {
      if (iVar1 == -1) {
        FUN_0062b240();
      }
      param_3 = param_3 - iVar1;
      param_2 = param_2 + iVar1;
      iVar1 = FUN_0062a000(param_1,param_2,param_3);
    } while (iVar1 != param_3);
  }
  return;
}

