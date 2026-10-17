
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006240fc(undefined4 param_1,double param_2)

{
  uint uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00625547(param_2,param_1,param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_2);
    if ((double)fVar2 == param_2) {
      param_2 = param_2 / _DAT_0064a650;
      fVar2 = (float10)__frnd();
      if (fVar2 == (float10)param_2) {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
  }
  return 0;
}

