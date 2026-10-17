
void FUN_004224c0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x204) != 0) {
    piVar1 = (int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x204) + 4) * 4) + 0x6c);
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = (int *)(DAT_0068bc08 + *(int *)(param_1 + 0x5c) * 4);
  *piVar1 = *piVar1 + -1;
  return;
}

