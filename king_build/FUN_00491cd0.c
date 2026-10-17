
undefined4 FUN_00491cd0(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_3;
  if ((param_3[1] - iVar1) / 0xc != 2) {
    FUN_004a5be0(param_1,0x21,param_4);
    return 1;
  }
  iVar2 = *param_2;
  if ((iVar2 != 0) && ((param_2[2] & 0x10000U) == 0)) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar3 = (int *)*param_2;
    if (((piVar3[1] == 0) &&
        (((piVar3 != *(int **)(iVar1 + 0xc) || (param_2[2] != *(int *)(iVar1 + 0x14))) ||
         (param_2[1] != *(int *)(iVar1 + 0x10))))) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0xc))(1);
    }
  }
  if ((*(uint *)(iVar1 + 0x14) & 0x10000) != 0) {
    param_2[2] = *(uint *)(iVar1 + 0x14);
    *param_2 = *(int *)(iVar1 + 0xc);
    param_2[1] = *(int *)(iVar1 + 0x10);
    return 0;
  }
  param_2[1] = 0;
  if (*(int *)(iVar1 + 0xc) != 0) {
    *param_2 = *(int *)(iVar1 + 0xc);
    param_2[2] = *(int *)(iVar1 + 0x14);
    *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + 1;
    return 0;
  }
  *param_2 = 0;
  param_2[2] = 0;
  return 0;
}

