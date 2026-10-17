
void __fastcall FUN_005925e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00631d5c(iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

