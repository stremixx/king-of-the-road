
int __fastcall FUN_00578fa0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    return 0;
  }
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  return iVar1 * 0x1b10 + *param_1;
}

