
void __thiscall FUN_0040c060(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && ((param_1[2] & 0x10000U) == 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)*param_1;
    if (((piVar2[1] == 0) &&
        (((piVar2 != (int *)*param_2 || (param_1[2] != param_2[2])) || (param_1[1] != param_2[1]))))
       && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  if ((param_2[2] & 0x10000U) != 0) {
    param_1[2] = param_2[2];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
  }
  param_1[1] = 0;
  if (*param_2 != 0) {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

