
void __fastcall FUN_004b36a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_004b2bf0(1);
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x10) + -4) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    return;
  }
  FUN_0044b440(*(undefined4 *)(param_1 + 0xc),0x200);
  piVar2 = (int *)(*(int *)(param_1 + 0x14) + 4);
  *(int **)(param_1 + 0x14) = piVar2;
  iVar1 = *piVar2;
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 0x10) = iVar1 + 0x200;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}

