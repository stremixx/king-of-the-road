
int __thiscall FUN_00635b61(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((1 < *(int *)(iVar1 + -0xc)) || (*(int *)(iVar1 + -4) < param_2)) {
    iVar2 = *(int *)(iVar1 + -8);
    if (param_2 < iVar2) {
      param_2 = iVar2;
    }
    FUN_006358fe(param_2);
    FUN_0061f900(*param_1,iVar1,iVar2 + 1);
    *(int *)(*param_1 + -8) = iVar2;
    FUN_006359f9(iVar1 + -0xc);
  }
  return *param_1;
}

