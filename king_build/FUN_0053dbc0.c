
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0053dbc0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x38) = (float)(fVar1 + (float10)_DAT_0064b3fc);
  fVar1 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x3c) = (float)(fVar1 + (float10)_DAT_0064b3f8);
  fVar2 = (float10)FUN_004e2035();
  fVar1 = (float10)_DAT_0064b2ec;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x40) = (float)(fVar2 + fVar1);
  FUN_005d2a80(1);
  return;
}

