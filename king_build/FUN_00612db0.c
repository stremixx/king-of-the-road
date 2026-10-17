
void __thiscall FUN_00612db0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (((piVar1 != (int *)0x0) && ((int *)*piVar1 == param_2)) && ((int *)piVar1[1] == param_2)) {
    if (piVar1 == param_2) {
      *param_1 = 0;
      param_2[1] = (int)param_2;
      *param_2 = (int)param_2;
      return;
    }
    piVar1[1] = (int)piVar1;
    *(undefined4 *)*param_1 = ((undefined4 *)*param_1)[1];
    param_2[1] = (int)param_2;
    *param_2 = (int)param_2;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (((piVar2 != (int *)0x0) && ((int *)*piVar2 == param_2)) && ((int *)piVar2[1] == param_2)) {
    if (piVar2 == param_2) {
      param_1[1] = 0;
      param_2[1] = (int)param_2;
      *param_2 = (int)param_2;
      return;
    }
    piVar2[1] = (int)piVar2;
    *(undefined4 *)param_1[1] = ((undefined4 *)param_1[1])[1];
    param_2[1] = (int)param_2;
    *param_2 = (int)param_2;
    return;
  }
  if (piVar1 == param_2) {
    *param_1 = *param_2;
  }
  if (piVar2 == param_2) {
    param_1[1] = *param_2;
  }
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  param_2[1] = (int)param_2;
  *param_2 = (int)param_2;
  return;
}

