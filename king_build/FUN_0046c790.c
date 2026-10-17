
int * __thiscall FUN_0046c790(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((param_1[2] & 0x10000U) == 0) && (iVar1 = *param_1, iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)*param_1;
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  if ((param_2 & 1) != 0) {
    FUN_00631d5c(param_1);
  }
  return param_1;
}

