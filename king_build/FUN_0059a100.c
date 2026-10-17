
void __fastcall FUN_0059a100(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    iVar1 = __ftol();
    *(int *)(param_1 + 0x6c) = iVar1 % *(int *)(param_1 + 0x70);
  }
  else {
    iVar1 = __ftol();
    *(int *)(param_1 + 0x6c) = iVar1;
    if (*(int *)(param_1 + 0x70) <= iVar1) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x70) + -1;
    }
  }
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x24) =
       *(undefined4 *)(*(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x6c) * 4);
  if (*(float *)(param_1 + 100) < *(float *)(param_1 + 0x68)) {
    FUN_00578a40();
    return;
  }
  *(float *)(param_1 + 0x68) =
       (float)*(double *)(*(int *)(param_1 + 0x58) + 0xb90) + *(float *)(param_1 + 0x68);
  return;
}

