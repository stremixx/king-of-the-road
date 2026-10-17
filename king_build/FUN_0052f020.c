
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052f020(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  
  if (param_1 != 0) {
    if (DAT_006cdbd8 == 0) {
      fVar1 = (float)_DAT_0064a660;
    }
    else {
      fVar1 = (float)(int)*(short *)(DAT_006cdbd8 + 0x186) * (float)_DAT_0064a590;
    }
    param_2 = param_2 * fVar1;
    FUN_004e4612(param_1,param_2,param_3,0);
    FUN_005fcaa0(param_2,param_2,0);
  }
  return;
}

