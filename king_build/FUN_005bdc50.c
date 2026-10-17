
int * __thiscall FUN_005bdc50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    piVar2 = *(int **)(param_1 + 0x120);
    while ((piVar2 != (int *)0x0 &&
           ((piVar2[10] != 0 || (iVar1 = (**(code **)(*piVar2 + 0x18))(param_2,param_3), iVar1 == 0)
            )))) {
      piVar2 = (int *)FUN_005d2730();
    }
    return piVar2;
  }
  return (int *)0x0;
}

