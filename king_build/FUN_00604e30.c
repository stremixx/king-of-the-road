
void __thiscall FUN_00604e30(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    piVar3 = param_1 + 4;
    iVar2 = param_2;
    do {
      iVar1 = *param_3;
      param_3 = param_3 + 1;
      *piVar3 = iVar1;
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *param_1 = param_2;
    return;
  }
  *param_1 = 0;
  return;
}

