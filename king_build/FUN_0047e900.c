
void FUN_0047e900(double *param_1,double *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  int local_1c;
  int local_c [2];
  
  local_1c = (int)param_2 - (int)param_1;
  if (param_4 * 2 <= local_1c >> 3) {
    pdVar5 = param_1 + param_4;
    do {
      pdVar7 = pdVar5;
      pdVar4 = param_1;
      while ((pdVar4 != pdVar5 && (pdVar7 != pdVar5 + param_4))) {
        if (*pdVar7 <= *pdVar4) {
          pdVar2 = pdVar4 + 1;
          *param_3 = *(undefined4 *)pdVar4;
          param_3[1] = *(undefined4 *)((int)pdVar4 + 4);
        }
        else {
          *param_3 = *(undefined4 *)pdVar7;
          param_3[1] = *(undefined4 *)((int)pdVar7 + 4);
          pdVar2 = pdVar4;
          pdVar7 = pdVar7 + 1;
        }
        param_3 = param_3 + 2;
        pdVar4 = pdVar2;
      }
      iVar6 = (int)pdVar5 - (int)pdVar4 >> 3;
      if (0 < iVar6) {
        iVar3 = (int)pdVar4 - (int)param_3;
        do {
          *param_3 = *(undefined4 *)(iVar3 + (int)param_3);
          param_3[1] = *(undefined4 *)(iVar3 + 4 + (int)param_3);
          param_3 = param_3 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = (int)(pdVar5 + param_4) - (int)pdVar7 >> 3;
      if (0 < iVar6) {
        iVar3 = (int)pdVar7 - (int)param_3;
        do {
          *param_3 = *(undefined4 *)(iVar3 + (int)param_3);
          param_3[1] = *(undefined4 *)(iVar3 + 4 + (int)param_3);
          param_3 = param_3 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      param_1 = param_1 + param_4 * 2;
      pdVar5 = pdVar5 + param_4 * 2;
      local_1c = local_1c + param_4 * -0x10;
    } while (param_4 * 2 <= local_1c >> 3);
  }
  local_c[0] = (int)param_2 - (int)param_1 >> 3;
  piVar1 = &param_4;
  if (local_c[0] <= param_4) {
    piVar1 = local_c;
  }
  pdVar5 = param_1 + *piVar1;
  pdVar7 = pdVar5;
  while ((param_1 != pdVar5 && (pdVar7 != param_2))) {
    if (*pdVar7 <= *param_1) {
      pdVar4 = param_1 + 1;
      *param_3 = *(undefined4 *)param_1;
      param_3[1] = *(undefined4 *)((int)param_1 + 4);
    }
    else {
      *param_3 = *(undefined4 *)pdVar7;
      param_3[1] = *(undefined4 *)((int)pdVar7 + 4);
      pdVar4 = param_1;
      pdVar7 = pdVar7 + 1;
    }
    param_3 = param_3 + 2;
    param_1 = pdVar4;
  }
  iVar6 = (int)pdVar5 - (int)param_1 >> 3;
  if (0 < iVar6) {
    iVar3 = (int)param_1 - (int)param_3;
    do {
      *param_3 = *(undefined4 *)(iVar3 + (int)param_3);
      param_3[1] = *(undefined4 *)(iVar3 + 4 + (int)param_3);
      param_3 = param_3 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (int)param_2 - (int)pdVar7 >> 3;
  if (0 < iVar6) {
    iVar3 = (int)pdVar7 - (int)param_3;
    do {
      *param_3 = *(undefined4 *)(iVar3 + (int)param_3);
      param_3[1] = *(undefined4 *)(iVar3 + 4 + (int)param_3);
      param_3 = param_3 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

