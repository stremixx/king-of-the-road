
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004736d0(int param_1)

{
  float10 fVar1;
  undefined8 local_8;
  
  if (*(int *)(param_1 + 0x4c) == -1) {
    local_8 = 0.0;
  }
  else {
    fVar1 = (float10)FUN_004cd760(*(int *)(param_1 + 0x4c));
    local_8 = (double)fVar1;
  }
  fVar1 = (float10)FUN_00473650(param_1);
  return fVar1 - (float10)local_8 * (float10)_DAT_0064a838;
}

