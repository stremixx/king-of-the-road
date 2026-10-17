
void __fastcall FUN_00577650(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 4);
    piVar2 = *(int **)(*(int *)(iVar3 + 8) + 4);
    (**(code **)(*piVar2 + 8))(piVar2);
    FUN_00631d5c(*(undefined4 *)(iVar3 + 8));
    iVar3 = iVar1;
  }
  FUN_005925e0();
  return;
}

