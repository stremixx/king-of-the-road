
void __fastcall FUN_005ba0e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  while (0 < iVar1) {
    *(int *)(param_1 + 0xb8) = iVar1 + -1;
    piVar2 = *(int **)(param_1 + 0x7c + (iVar1 + -1) * 4);
    (**(code **)(*piVar2 + 8))(piVar2);
    DAT_00701e00 = DAT_00701e00 + -1;
    iVar1 = *(int *)(param_1 + 0xb8);
  }
  return;
}

