
undefined4 __thiscall FUN_00639fa5(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    return 0;
  }
  if (iVar3 == param_2) {
    *param_1 = *(int *)(param_1[1] + param_2);
  }
  else {
    if (iVar3 == 0) {
      return 0;
    }
    iVar1 = param_1[1];
    do {
      iVar2 = *(int *)(iVar1 + iVar3);
      if (iVar2 == param_2) break;
      iVar3 = iVar2;
    } while (iVar2 != 0);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + iVar3) = *(undefined4 *)(iVar1 + param_2);
  }
  return 1;
}

