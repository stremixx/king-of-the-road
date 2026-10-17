
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e3a69(float param_1,undefined4 param_2)

{
  undefined1 local_3f8 [1000];
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  local_10 = 0x447a0000;
  local_c = 0xc47a0000;
  local_8 = -param_1;
  if (((((1000.0 < param_1) || (param_1 < -1000.0)) || (1000.0 < local_8)) ||
      ((local_8 < -1000.0 || (param_1 < -1000.0)))) ||
     ((1000.0 < param_1 || ((1000.0 < local_8 || (local_8 < -1000.0)))))) {
    FUN_0061c369(local_3f8,s_f2pi____param___f__too_large___s_00672938,(double)param_1,param_2);
    FUN_004e1e9c(local_3f8);
  }
  if (_DAT_0064b254 <= param_1) {
    for (; (float)_DAT_0064c8f0 < param_1; param_1 = param_1 - (float)_DAT_0064c8f8) {
    }
  }
  else {
    for (; param_1 < (float)_DAT_0064c900; param_1 = param_1 + (float)_DAT_0064c8f8) {
    }
  }
  return (float10)param_1;
}

