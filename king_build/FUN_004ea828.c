
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004ea828(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_18 = 0.0;
  local_14 = 0.0;
  local_20 = 0;
  for (local_1c = 0; local_1c < *(int *)(param_1 + 0x1c); local_1c = local_1c + 1) {
    fVar1 = (*(float *)(*(int *)(param_1 + 8) + local_1c * 4) -
            (float)*(double *)(DAT_00696424 + 0xb98)) * *(float *)(param_1 + 4);
    if ((_DAT_0064b928 < fVar1) && (fVar1 <= (float)_DAT_0064a648)) {
      fVar2 = (float10)(**(code **)(param_1 + 0x14))(fVar1);
      if (*(int *)(param_1 + 0x18) == 0) {
        fVar1 = *(float *)(*(int *)(param_1 + 0xc) + local_1c * 4);
      }
      else {
        fVar3 = (float10)(**(code **)(param_1 + 0x18))(fVar1);
        fVar1 = (float)fVar3 * *(float *)(*(int *)(param_1 + 0xc) + local_1c * 4) +
                (_DAT_0064b240 - (float)fVar3) * *(float *)(param_1 + 0x10);
      }
      local_18 = fVar1 * (float)fVar2 + local_18;
      local_14 = local_14 + (float)fVar2;
      local_20 = local_20 + 1;
    }
  }
  if (local_20 == 0) {
    local_c = 0.0;
  }
  else {
    local_c = local_18 / local_14;
  }
  return (float10)local_c;
}

