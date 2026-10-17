
void __thiscall FUN_005bd2a0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x120);
  if (iVar2 == 0) {
    *(int **)(param_1 + 0x120) = param_2;
  }
  else if (param_3 == 0) {
    param_2[2] = iVar2;
    *(int **)(*(int *)(param_1 + 0x120) + 4) = param_2;
    *(int **)(param_1 + 0x120) = param_2;
  }
  else {
    iVar1 = *(int *)(iVar2 + 8);
    while ((iVar1 != 0 && (iVar2 != param_3))) {
      iVar2 = FUN_005d2730();
      iVar1 = *(int *)(iVar2 + 8);
    }
    param_2[2] = *(int *)(iVar2 + 8);
    *(int **)(*(int *)(iVar2 + 8) + 4) = param_2;
    *(int **)(iVar2 + 8) = param_2;
    param_2[1] = iVar2;
  }
  iVar2 = (**(code **)(*param_2 + 0x30))();
  if (iVar2 != 0) {
    FUN_005bd250(param_2);
  }
  return;
}

