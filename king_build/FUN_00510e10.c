
void __thiscall FUN_00510e10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = param_2;
  param_1[2] = param_1[2] + (param_2 - iVar1);
  iVar1 = param_1[1];
  param_1[1] = param_3;
  param_1[3] = param_1[3] + (param_3 - iVar1);
  return;
}

