
int * __thiscall FUN_005d20d0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar1 = FUN_00631d33(param_2 * param_3);
  param_1[2] = iVar1;
  iVar1 = FUN_00631d33(param_3);
  param_1[3] = iVar1;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *(undefined1 *)(param_1[3] + -1 + uVar2) = 0;
    } while (uVar2 < param_3);
  }
  param_1[4] = 0;
  return param_1;
}

