
int * __thiscall FUN_00487df0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00631d33(param_2 * 8);
  *param_1 = iVar1;
  iVar1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (0 < param_2) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*param_1 + -8 + iVar1 * 8) = 0;
      *(undefined4 *)(*param_1 + -4 + iVar1 * 8) = 0;
    } while (iVar1 < param_1[1]);
  }
  return param_1;
}

