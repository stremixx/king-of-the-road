
void FUN_0047eac0(double *param_1,double *param_2,double *param_3,double *param_4,
                 undefined4 *param_5)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if (*param_3 <= *param_1) {
      pdVar1 = param_1 + 1;
      *param_5 = *(undefined4 *)param_1;
      param_5[1] = *(undefined4 *)((int)param_1 + 4);
    }
    else {
      *param_5 = *(undefined4 *)param_3;
      param_5[1] = *(undefined4 *)((int)param_3 + 4);
      pdVar1 = param_1;
      param_3 = param_3 + 1;
    }
    param_5 = param_5 + 2;
    param_1 = pdVar1;
  }
  iVar3 = (int)param_2 - (int)param_1 >> 3;
  if (0 < iVar3) {
    iVar2 = (int)param_1 - (int)param_5;
    do {
      *param_5 = *(undefined4 *)(iVar2 + (int)param_5);
      param_5[1] = *(undefined4 *)(iVar2 + 4 + (int)param_5);
      param_5 = param_5 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (int)param_4 - (int)param_3 >> 3;
  if (0 < iVar3) {
    iVar2 = (int)param_3 - (int)param_5;
    do {
      *param_5 = *(undefined4 *)(iVar2 + (int)param_5);
      param_5[1] = *(undefined4 *)(iVar2 + 4 + (int)param_5);
      param_5 = param_5 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

