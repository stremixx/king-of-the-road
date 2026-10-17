
int * __thiscall FUN_004a4090(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  
  *param_5 = -1;
  if (param_3 != 0) {
    if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x94) == 0)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return param_2;
    }
    FUN_004a4090(param_2,param_3 + -1,param_4,param_5);
    return param_2;
  }
  *param_5 = param_4;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x84) + 8 + param_4 * 0xc);
  piVar1 = (int *)(*(int *)(param_1 + 0x84) + param_4 * 0xc);
  if ((uVar2 & 0x10000) != 0) {
    param_2[2] = uVar2;
    *param_2 = *piVar1;
    param_2[1] = piVar1[1];
    return param_2;
  }
  param_2[1] = 0;
  if (*piVar1 != 0) {
    *param_2 = *piVar1;
    param_2[2] = piVar1[2];
    *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + 1;
    return param_2;
  }
  *param_2 = 0;
  param_2[2] = 0;
  return param_2;
}

