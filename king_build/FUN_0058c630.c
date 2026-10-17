
void __fastcall FUN_0058c630(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xdf8)) {
    puVar2 = (undefined4 *)(param_1 + 0xf28);
    do {
      *puVar2 = 1;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xdf8));
  }
  return;
}

