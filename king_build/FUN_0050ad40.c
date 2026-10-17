
void __thiscall FUN_0050ad40(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - (int)param_1;
  iVar1 = 4;
  do {
    *param_1 = *(undefined4 *)(param_2 + (int)param_1);
    param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

