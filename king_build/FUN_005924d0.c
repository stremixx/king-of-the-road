
int * __thiscall FUN_005924d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (((param_1 == (int *)0x0) || (param_1[1] != 0)) || (*param_1 != 0)) {
      FUN_005923c0(s_ListItem__put_on_tail___this__NU_0067d004);
    }
    iVar2 = *(int *)(param_2 + 4);
    while (iVar1 = iVar2, iVar1 != 0) {
      param_2 = iVar1;
      iVar2 = *(int *)(iVar1 + 4);
    }
    *(int **)(param_2 + 4) = param_1;
    *param_1 = param_2;
  }
  return param_1;
}

