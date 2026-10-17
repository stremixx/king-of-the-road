
void __fastcall FUN_004b2770(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x10) + -4) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    return;
  }
  FUN_0044b440(*(undefined4 *)(param_1 + 0xc),0x200);
  piVar2 = (int *)(*(int *)(param_1 + 0x14) + 4);
  *(int **)(param_1 + 0x14) = piVar2;
  iVar1 = *piVar2;
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 0x10) = iVar1 + 0x200;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return;
}

