
void __thiscall FUN_00592650(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(param_1 + 4) = param_2;
  }
  else {
    FUN_00592590(param_2);
  }
  iVar1 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) != 0) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 4);
    } while (iVar1 != 0);
    *(int *)(param_1 + 8) = iVar2;
    return;
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

