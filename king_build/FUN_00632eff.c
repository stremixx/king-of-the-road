
void __fastcall FUN_00632eff(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
    iVar2 = FUN_00631be2(pHVar1);
    if ((iVar2 != 0) && (*(int **)(iVar2 + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar2 + 0x34) + 0x8c))(param_1);
    }
  }
  return;
}

