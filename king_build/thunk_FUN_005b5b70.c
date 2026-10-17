
undefined4 __fastcall thunk_FUN_005b5b70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x60);
  while (iVar1 = iVar2, iVar1 != 0) {
    param_1 = iVar1;
    iVar2 = *(int *)(iVar1 + 0x60);
  }
  return *(undefined4 *)(param_1 + 0x54);
}

