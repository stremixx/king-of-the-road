
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00613bb0(int param_1)

{
  int iVar1;
  
  iVar1 = __ftol();
  *(int *)(param_1 + 0x40) = iVar1;
  *(int *)(param_1 + 0x44) = iVar1;
  if (iVar1 < 5) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(float *)(param_1 + 0x48) = _DAT_006522b0 / (float)*(int *)(param_1 + 0x40);
  *(float *)(param_1 + 0x4c) = _DAT_006522b4 / (float)*(int *)(param_1 + 0x44);
  iVar1 = __ftol();
  *(int *)(param_1 + 0x30) = iVar1;
  *(int *)(param_1 + 0x34) = iVar1;
  if (iVar1 < 5) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(float *)(param_1 + 0x38) = _DAT_006522a8 / (float)*(int *)(param_1 + 0x30);
  *(float *)(param_1 + 0x3c) = _DAT_006522ac / (float)*(int *)(param_1 + 0x34);
  return;
}

