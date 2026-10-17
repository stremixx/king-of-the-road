
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00556710(int param_1)

{
  float10 fVar1;
  float local_4;
  
  fVar1 = (float10)_DAT_0064b240;
  local_4 = 1.0;
  if (*(float *)(param_1 + 0x224) < (float)_DAT_0064a6d0) {
    if (_DAT_0064b254 <= *(float *)(param_1 + 0x224)) {
      local_4 = *(float *)(param_1 + 0x224) + *(float *)(param_1 + 0x224);
    }
    else {
      local_4 = 0.0;
    }
  }
  if (*(int *)(param_1 + 0x5460) != 0) {
    fVar1 = (float10)FUN_00500dd0();
  }
  if (fVar1 < (float10)local_4) {
    local_4 = (float)fVar1;
  }
  if (_DAT_0064b254 <= local_4) {
    return (float10)local_4;
  }
  return (float10)_DAT_0064b254;
}

