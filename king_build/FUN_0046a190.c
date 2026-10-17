
void FUN_0046a190(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_10;
  
  local_10 = (int)param_2 - (int)param_1;
  piVar6 = param_1;
  if (param_4 * 2 <= local_10 >> 2) {
    piVar5 = param_1 + param_4;
    piVar2 = param_3;
    do {
      piVar1 = param_1;
      param_3 = piVar5 + param_4;
      piVar6 = param_3;
      piVar8 = piVar5;
      piVar3 = param_1;
      while ((piVar7 = param_3, piVar3 != piVar5 && (piVar7 = piVar6, piVar8 != piVar6))) {
        if (*(int *)(*piVar8 + 0x20) < *(int *)(*piVar3 + 0x20)) {
          *piVar2 = *piVar8;
          piVar8 = piVar8 + 1;
        }
        else {
          *piVar2 = *piVar3;
          piVar3 = piVar3 + 1;
        }
        piVar2 = piVar2 + 1;
        piVar6 = param_3;
      }
      param_1 = (int *)((int)piVar5 - (int)piVar3 >> 2);
      if (0 < (int)param_1) {
        iVar4 = (int)piVar3 - (int)piVar2;
        do {
          *piVar2 = *(int *)(iVar4 + (int)piVar2);
          piVar2 = piVar2 + 1;
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
      }
      iVar4 = (int)piVar7 - (int)piVar8 >> 2;
      if (0 < iVar4) {
        iVar9 = (int)piVar8 - (int)piVar2;
        do {
          *piVar2 = *(int *)(iVar9 + (int)piVar2);
          piVar2 = piVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_1 = piVar1 + param_4 * 2;
      piVar5 = piVar5 + param_4 * 2;
      local_10 = local_10 + param_4 * -8;
      param_3 = piVar2;
      piVar6 = param_1;
    } while (param_4 * 2 <= local_10 >> 2);
  }
  param_1 = (int *)((int)param_2 - (int)piVar6 >> 2);
  piVar5 = &param_4;
  if ((int)param_1 <= param_4) {
    piVar5 = (int *)&param_1;
  }
  piVar5 = piVar6 + *piVar5;
  piVar2 = piVar5;
  while ((piVar6 != piVar5 && (piVar2 != param_2))) {
    if (*(int *)(*piVar2 + 0x20) < *(int *)(*piVar6 + 0x20)) {
      *param_3 = *piVar2;
      piVar2 = piVar2 + 1;
    }
    else {
      *param_3 = *piVar6;
      piVar6 = piVar6 + 1;
    }
    param_3 = param_3 + 1;
  }
  iVar4 = (int)piVar5 - (int)piVar6 >> 2;
  if (0 < iVar4) {
    iVar9 = (int)piVar6 - (int)param_3;
    do {
      *param_3 = *(int *)((int)param_3 + iVar9);
      param_3 = param_3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (int)param_2 - (int)piVar2 >> 2;
  if (0 < iVar4) {
    iVar9 = (int)piVar2 - (int)param_3;
    do {
      *param_3 = *(int *)(iVar9 + (int)param_3);
      param_3 = param_3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

