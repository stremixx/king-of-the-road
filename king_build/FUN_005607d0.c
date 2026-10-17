
void __fastcall FUN_005607d0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 3000);
  uVar1 = *(undefined2 *)(param_1 + iVar2 * 2);
  *(undefined2 *)(param_1 + iVar2 * 2) = *(undefined2 *)(param_1 + -2 + iVar2 * 2);
  *(undefined2 *)(param_1 + -2 + *(int *)(param_1 + 3000) * 2) = uVar1;
  return;
}

