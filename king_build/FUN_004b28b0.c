
void __thiscall FUN_004b28b0(int param_1,int *param_2)

{
  int iVar1;
  
  *(int **)(param_1 + 0xc) = param_2;
  iVar1 = *param_2;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1 + 0x200;
  return;
}

