
void FUN_005b0f20(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (0 < param_4) {
    do {
      iVar1 = __ftol();
      *param_1 = iVar1 << 0x18;
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

