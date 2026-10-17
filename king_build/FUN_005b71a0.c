
undefined4
FUN_005b71a0(undefined4 param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  switch(param_1) {
  case 0:
    iVar3 = *param_3;
    if ((param_2 <= iVar3) && (param_2 <= *param_5)) {
      return 0;
    }
    if ((param_2 <= iVar3) || (param_2 <= *param_5)) {
      iVar2 = *param_5;
      if (iVar3 < iVar2) {
        iVar1 = *param_4;
        *param_3 = iVar2;
        *param_4 = *param_6;
        iVar2 = iVar3;
      }
      else {
        iVar1 = *param_6;
      }
      *param_5 = param_2;
      iVar3 = *param_3;
      if (iVar2 != iVar3) {
        *param_6 = ((iVar1 - *param_4) * (param_2 - iVar3)) / (iVar2 - iVar3) + *param_4;
        return 0;
      }
      *param_6 = *param_4;
      return 0;
    }
    break;
  case 1:
    iVar3 = *param_4;
    if ((param_2 <= iVar3) && (param_2 <= *param_6)) {
      return 0;
    }
    if ((iVar3 < param_2) && (*param_6 < param_2)) {
      return 1;
    }
    iVar2 = *param_6;
    if (*param_6 <= iVar3) {
LAB_005b7334:
      iVar3 = iVar2;
      iVar2 = *param_5;
      goto LAB_005b733c;
    }
    goto LAB_005b731b;
  case 2:
    iVar3 = *param_3;
    if ((iVar3 <= param_2) && (*param_5 <= param_2)) {
      return 0;
    }
    if ((iVar3 <= param_2) || (*param_5 <= param_2)) {
      iVar2 = *param_5;
      if (iVar2 < iVar3) {
        iVar1 = *param_4;
        *param_3 = iVar2;
        *param_4 = *param_6;
        iVar2 = iVar3;
      }
      else {
        iVar1 = *param_6;
      }
      *param_5 = param_2;
      iVar3 = *param_3;
      if (iVar2 != iVar3) {
        *param_6 = ((iVar1 - *param_4) * (param_2 - iVar3)) / (iVar2 - iVar3) + *param_4;
        return 0;
      }
      *param_6 = *param_4;
      return 0;
    }
    break;
  case 3:
    iVar3 = *param_4;
    if ((iVar3 <= param_2) && (*param_6 <= param_2)) {
      return 0;
    }
    if ((param_2 < iVar3) && (param_2 < *param_6)) {
      return 1;
    }
    iVar2 = *param_6;
    if (iVar3 <= *param_6) goto LAB_005b7334;
LAB_005b731b:
    iVar2 = *param_3;
    *param_3 = *param_5;
    *param_4 = *param_6;
LAB_005b733c:
    *param_6 = param_2;
    iVar1 = *param_4;
    if (iVar3 != iVar1) {
      *param_5 = ((param_2 - iVar1) * (iVar2 - *param_3)) / (iVar3 - iVar1) + *param_3;
      return 0;
    }
    *param_5 = *param_3;
    return 0;
  }
  return 1;
}

