
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_004e2d69(undefined4 param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0061ea40((double)param_2,param_1);
  if ((fVar1 * (float10)_DAT_0064c330 < (float10)param_3) &&
     (fVar1 = (float10)FUN_0061ea40((double)param_4,param_1), fVar1 + fVar1 < (float10)param_3)) {
    return 1;
  }
  return 0;
}

