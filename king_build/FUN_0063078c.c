
int * __fastcall FUN_0063078c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x13] != -1) {
    if (param_1[0xc] < 0) {
      FUN_0062fb80(param_1 + 0xd);
    }
    iVar1 = (**(code **)(*param_1 + 4))();
    iVar2 = FUN_00620954(param_1[0x13]);
    if ((iVar2 != -1) && (iVar1 != -1)) {
      param_1[0x13] = -1;
      if (-1 < param_1[0xc]) {
        return param_1;
      }
      FUN_0062fb8b(param_1 + 0xd);
      return param_1;
    }
    if (param_1[0xc] < 0) {
      FUN_0062fb8b(param_1 + 0xd);
    }
  }
  return (int *)0x0;
}

