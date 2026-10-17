
void FUN_00422480(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_2 + 0x1fc) != 0) {
    piVar1 = (int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_2 + 0x1fc) + 4) * 4) + 0x6c);
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = (int *)(DAT_0068bc08 + *(int *)(param_2 + 0x54) * 4);
  *piVar1 = *piVar1 + 1;
  *param_1 = *(undefined4 *)(param_2 + 0x60);
  return;
}

