
void FUN_0047da20(double *param_1,double *param_2,double *param_3,int param_4,int param_5,
                 double *param_6,int param_7,undefined4 param_8)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  while( true ) {
    if ((param_4 <= param_5) && (param_4 <= param_7)) {
      iVar5 = (int)param_2 - (int)param_1 >> 3;
      pdVar2 = param_1;
      pdVar1 = param_6;
      if (0 < iVar5) {
        do {
          *(undefined4 *)pdVar1 = *(undefined4 *)(((int)param_1 - (int)param_6) + (int)pdVar1);
          *(undefined4 *)((int)pdVar1 + 4) =
               *(undefined4 *)(((int)param_1 - (int)param_6) + 4 + (int)pdVar1);
          pdVar1 = pdVar1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      while ((param_6 != pdVar1 && (param_2 != param_3))) {
        if (*param_2 <= *param_6) {
          pdVar3 = param_6 + 1;
          *(undefined4 *)pdVar2 = *(undefined4 *)param_6;
          *(undefined4 *)((int)pdVar2 + 4) = *(undefined4 *)((int)param_6 + 4);
        }
        else {
          *(undefined4 *)pdVar2 = *(undefined4 *)param_2;
          *(undefined4 *)((int)pdVar2 + 4) = *(undefined4 *)((int)param_2 + 4);
          param_2 = param_2 + 1;
          pdVar3 = param_6;
        }
        pdVar2 = pdVar2 + 1;
        param_6 = pdVar3;
      }
      uVar4 = FUN_0046b190(param_6,pdVar1,pdVar2,param_1,0);
      FUN_0047dca0(param_2,param_3,uVar4);
      return;
    }
    if (param_5 <= param_7) break;
    if (param_5 < param_4) {
      iVar6 = param_4 / 2;
      pdVar2 = param_1 + iVar6;
      pdVar1 = (double *)FUN_0047f890(param_2,param_3,pdVar2,param_8,0);
      iVar5 = (int)pdVar1 - (int)param_2 >> 3;
    }
    else {
      iVar5 = param_5 / 2;
      pdVar1 = param_2 + iVar5;
      pdVar2 = (double *)FUN_0047f8e0(param_1,param_2,pdVar1,param_8,0);
      iVar6 = (int)pdVar2 - (int)param_1 >> 3;
    }
    param_4 = param_4 - iVar6;
    pdVar3 = (double *)FUN_0047eb60(pdVar2,param_2,pdVar1,param_4,iVar5,param_6,param_7);
    FUN_0047da20(param_1,pdVar2,pdVar3,iVar6,iVar5,param_6,param_7,param_8);
    param_5 = param_5 - iVar5;
    param_2 = pdVar1;
    param_1 = pdVar3;
  }
  iVar5 = (int)param_3 - (int)param_2 >> 3;
  pdVar2 = param_6;
  if (0 < iVar5) {
    do {
      *(undefined4 *)pdVar2 = *(undefined4 *)(((int)param_2 - (int)param_6) + (int)pdVar2);
      *(undefined4 *)((int)pdVar2 + 4) =
           *(undefined4 *)(((int)param_2 - (int)param_6) + 4 + (int)pdVar2);
      pdVar2 = pdVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_1 == param_2) {
    FUN_0047dc70(param_6,pdVar2,param_3);
    return;
  }
  if (param_6 == pdVar2) {
    FUN_0047dc70(param_1,param_2,param_3);
    return;
  }
  param_2 = param_2 + -1;
  pdVar2 = pdVar2 + -1;
  while( true ) {
    for (; *pdVar2 <= *param_2; pdVar2 = pdVar2 + -1) {
      pdVar1 = param_3 + -1;
      *(undefined4 *)pdVar1 = *(undefined4 *)pdVar2;
      *(undefined4 *)((int)param_3 + -4) = *(undefined4 *)((int)pdVar2 + 4);
      if (param_6 == pdVar2) {
        FUN_0047dc70(param_1,param_2 + 1,pdVar1);
        return;
      }
      param_3 = pdVar1;
    }
    pdVar1 = param_3 + -1;
    *(undefined4 *)pdVar1 = *(undefined4 *)param_2;
    *(undefined4 *)((int)param_3 + -4) = *(undefined4 *)((int)param_2 + 4);
    if (param_1 == param_2) break;
    param_2 = param_2 + -1;
    param_3 = pdVar1;
  }
  FUN_0047dc70(param_6,pdVar2 + 1,pdVar1);
  return;
}

