
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005fae40(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = ABS(param_3 - param_2) + (float)_DAT_0064a648;
  if ((ABS(param_1 - param_3) <= fVar1) && (ABS(param_1 - param_2) <= fVar1)) {
    return 1;
  }
  return 0;
}

