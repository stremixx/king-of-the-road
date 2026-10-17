
void __thiscall FUN_004471c0(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *(int *)(param_1 + 4) - param_3;
  if (0 < iVar1) {
    puVar2 = param_2;
    do {
      *puVar2 = puVar2[param_3 - (int)param_2];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined1 **)(param_1 + 4) = param_2 + (*(int *)(param_1 + 4) - param_3);
  return;
}

