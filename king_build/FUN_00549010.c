
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00549010(int param_1,float param_2)

{
  float10 fVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) == 0) {
    *(float *)(param_1 + 0x1c) = param_2 + (float)_DAT_0064a830;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = 1;
    fVar1 = (float10)FUN_004e2035();
    *(float *)(param_1 + 4) = (float)fVar1;
    if ((&DAT_00697110)[*(int *)(*(int *)(param_1 + 0x18) + 0x28b4) * 0x25c] == 3) {
      FUN_004ba0b0(*(int *)(param_1 + 0x18),&LAB_00548c90);
    }
  }
  return;
}

