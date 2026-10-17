
int * FUN_004a2d60(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = (param_2 - (int)param_1) / 0xc;
  if (iVar3 < 1) {
    return param_3;
  }
  do {
    iVar1 = *param_3;
    if ((iVar1 != 0) && ((param_3[2] & 0x10000U) == 0)) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
      piVar2 = (int *)*param_3;
      if (((piVar2[1] == 0) &&
          (((piVar2 != (int *)*param_1 || (param_3[2] != param_1[2])) || (param_3[1] != param_1[1]))
          )) && (piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0xc))(1);
      }
    }
    if ((param_1[2] & 0x10000U) == 0) {
      param_3[1] = 0;
      iVar1 = *param_1;
      if (iVar1 == 0) {
        *param_3 = 0;
        param_3[2] = 0;
      }
      else {
        *param_3 = iVar1;
        param_3[2] = param_1[2];
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    else {
      param_3[2] = param_1[2];
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_3;
}

