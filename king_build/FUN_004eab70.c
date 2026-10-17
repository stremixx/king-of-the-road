
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004eab70(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x10) = (float)fVar1;
  fVar1 = (float10)FUN_004ea957(*(float *)(param_1 + 0x18),
                                *(float *)(param_1 + 0x18) * (float)_DAT_0064c0e0);
  fVar2 = (float10)*(float *)(param_1 + 0x18) * (float10)_DAT_0064a6d0;
  if (fVar1 < fVar2) {
    fVar1 = (fVar2 - fVar1) + fVar2;
  }
  *(float *)(param_1 + 0x14) = (float)(fVar1 + (float10)*(float *)(param_1 + 0x10));
  return;
}

