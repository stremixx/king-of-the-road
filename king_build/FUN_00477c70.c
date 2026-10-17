
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477c70(int param_1,double param_2)

{
  float10 fVar1;
  
  if (param_2 == _DAT_0064ac20) {
    *(double *)(param_1 + 0x68) = param_2;
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 4;
    return;
  }
  fVar1 = (float10)FUN_00401000();
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 4;
  *(double *)(param_1 + 0x68) = (double)(fVar1 + (float10)param_2);
  return;
}

