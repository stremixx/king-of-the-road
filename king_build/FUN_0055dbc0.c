
int __fastcall FUN_0055dbc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005555c0();
  if (*(int **)(param_1 + 0x5578) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x5578) + 0x40))();
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

