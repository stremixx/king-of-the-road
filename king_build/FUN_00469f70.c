
void FUN_00469f70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if (*(int *)(*param_3 + 0x1c) < *(int *)(*param_1 + 0x1c)) {
      *param_5 = *param_3;
      param_3 = param_3 + 1;
    }
    else {
      *param_5 = *param_1;
      param_1 = param_1 + 1;
    }
    param_5 = param_5 + 1;
  }
  iVar2 = (int)param_2 - (int)param_1 >> 2;
  if (0 < iVar2) {
    iVar1 = (int)param_1 - (int)param_5;
    do {
      *param_5 = *(int *)(iVar1 + (int)param_5);
      param_5 = param_5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (int)param_4 - (int)param_3 >> 2;
  if (0 < iVar2) {
    iVar1 = (int)param_3 - (int)param_5;
    do {
      *param_5 = *(int *)(iVar1 + (int)param_5);
      param_5 = param_5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

