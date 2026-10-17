
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004551f0(int param_1,double param_2,int param_3,double param_4,int param_5)

{
  float10 fVar1;
  undefined4 local_14;
  undefined8 local_10;
  
  if (param_3 == (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38)) / 0x638) {
    param_2 = param_2 + _DAT_0064a660;
    param_3 = param_3 + -1;
  }
  if (param_5 == (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38)) / 0x638) {
    param_4 = param_4 + _DAT_0064a660;
    param_5 = param_5 + -1;
  }
  if (param_3 != param_5) {
    fVar1 = (float10)FUN_0048e4e0(param_2._0_4_,param_2._4_4_,0,0x3ff00000);
    local_10 = (double)fVar1;
    if (param_3 + 1 < param_5) {
      local_14 = param_5 - (param_3 + 1);
      do {
        fVar1 = (float10)FUN_0048e500();
        local_14 = local_14 + -1;
        local_10 = (double)(fVar1 + (float10)local_10);
      } while (local_14 != 0);
    }
    fVar1 = (float10)FUN_0048e4e0(0,0,param_4._0_4_,param_4._4_4_);
    return fVar1 + (float10)local_10;
  }
  fVar1 = (float10)FUN_0048e4e0(param_2._0_4_,param_2._4_4_,param_4._0_4_,param_4._4_4_);
  return fVar1;
}

