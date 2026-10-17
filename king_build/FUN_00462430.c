
int * FUN_00462430(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = ((int)param_2 - param_1) / 0xc;
  piVar4 = param_2;
  param_2 = (int *)iVar1;
  if (iVar1 < 1) {
    return param_3;
  }
  do {
    iVar1 = param_3[-3];
    piVar3 = param_3 + -3;
    piVar5 = piVar4 + -3;
    if ((iVar1 != 0) && ((param_3[-1] & 0x10000U) == 0)) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
      piVar2 = (int *)*piVar3;
      if (((piVar2[1] == 0) &&
          (((piVar2 != (int *)*piVar5 || (param_3[-1] != piVar4[-1])) || (param_3[-2] != piVar4[-2])
           ))) && (piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0xc))(1);
      }
    }
    if ((piVar4[-1] & 0x10000U) == 0) {
      param_3[-2] = 0;
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        *piVar3 = 0;
        param_3[-1] = 0;
      }
      else {
        *piVar3 = iVar1;
        param_3[-1] = piVar4[-1];
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    else {
      param_3[-1] = piVar4[-1];
      *piVar3 = *piVar5;
      param_3[-2] = piVar4[-2];
    }
    param_2 = (int *)((int)param_2 + -1);
    param_3 = piVar3;
    piVar4 = piVar5;
  } while (param_2 != (int *)0x0);
  return piVar3;
}

