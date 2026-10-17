
void FUN_00467f30(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int *param_6,
                 int param_7,undefined4 param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  while( true ) {
    if ((param_4 <= param_5) && (param_4 <= param_7)) {
      iVar5 = (int)param_2 - (int)param_1 >> 2;
      piVar2 = param_1;
      piVar1 = param_6;
      if (0 < iVar5) {
        do {
          *piVar1 = *(int *)(((int)param_1 - (int)param_6) + (int)piVar1);
          piVar1 = piVar1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      while ((param_6 != piVar1 && (param_2 != param_3))) {
        if (*(int *)(*param_2 + 0x1c) < *(int *)(*param_6 + 0x1c)) {
          *piVar2 = *param_2;
          param_2 = param_2 + 1;
        }
        else {
          *piVar2 = *param_6;
          param_6 = param_6 + 1;
        }
        piVar2 = piVar2 + 1;
      }
      uVar4 = FUN_0046b1d0(param_6,piVar1,piVar2,param_1,0);
      FUN_00457bc0(param_2,param_3,uVar4);
      return;
    }
    if (param_5 <= param_7) break;
    if (param_5 < param_4) {
      iVar6 = param_4 / 2;
      piVar2 = param_1 + iVar6;
      piVar1 = (int *)FUN_0046bbe0(param_2,param_3,piVar2,param_8,0);
      iVar5 = (int)piVar1 - (int)param_2 >> 2;
    }
    else {
      iVar5 = param_5 / 2;
      piVar1 = param_2 + iVar5;
      piVar2 = (int *)FUN_0046bc20(param_1,param_2,piVar1,param_8,0);
      iVar6 = (int)piVar2 - (int)param_1 >> 2;
    }
    param_4 = param_4 - iVar6;
    piVar3 = (int *)FUN_00469ff0(piVar2,param_2,piVar1,param_4,iVar5,param_6,param_7);
    FUN_00467f30(param_1,piVar2,piVar3,iVar6,iVar5,param_6,param_7,param_8);
    param_5 = param_5 - iVar5;
    param_2 = piVar1;
    param_1 = piVar3;
  }
  iVar5 = (int)param_3 - (int)param_2 >> 2;
  piVar2 = param_6;
  if (0 < iVar5) {
    do {
      *piVar2 = *(int *)(((int)param_2 - (int)param_6) + (int)piVar2);
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_1 == param_2) {
    FUN_00468c60(param_6,piVar2,param_3);
    return;
  }
  if (param_6 == piVar2) {
    FUN_00468c60(param_1,param_2,param_3);
    return;
  }
  param_2 = param_2 + -1;
  piVar2 = piVar2 + -1;
  while( true ) {
    while( true ) {
      if (*(int *)(*piVar2 + 0x1c) < *(int *)(*param_2 + 0x1c)) break;
      param_3 = param_3 + -1;
      *param_3 = *piVar2;
      if (param_6 == piVar2) {
        FUN_00468c60(param_1,param_2 + 1,param_3);
        return;
      }
      piVar2 = piVar2 + -1;
    }
    param_3 = param_3 + -1;
    *param_3 = *param_2;
    if (param_1 == param_2) break;
    param_2 = param_2 + -1;
  }
  FUN_00468c60(param_6,piVar2 + 1,param_3);
  return;
}

