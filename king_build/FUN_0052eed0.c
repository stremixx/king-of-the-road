
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052eed0(int param_1,float param_2)

{
  float fVar1;
  
  if (param_1 != 0) {
    if (DAT_006cdbd8 == 0) {
      fVar1 = (float)_DAT_0064a660;
    }
    else {
      fVar1 = (float)(int)*(short *)(DAT_006cdbd8 + 0x184) * (float)_DAT_0064a590;
    }
    FUN_005fcaa0(param_2 * fVar1,param_2 * fVar1,0);
  }
  return;
}

