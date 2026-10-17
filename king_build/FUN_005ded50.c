
void __fastcall FUN_005ded50(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x1e8) + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(4,&DAT_00701550,&DAT_00701550,*(undefined4 *)(param_1 + 0x1d0));
  }
  FUN_005ea8b0(*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1d8),1,
               *(undefined4 *)(param_1 + 0x1d0));
  return;
}

