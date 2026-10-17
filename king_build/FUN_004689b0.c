
undefined4 __thiscall FUN_004689b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00418960(param_2,*param_1);
  fVar2 = (float10)FUN_00418960(param_3,*param_1);
  if ((float10)(double)fVar1 < fVar2) {
    return 1;
  }
  return 0;
}

