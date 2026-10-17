
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005cd1e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  float10 fVar2;
  undefined4 local_4;
  
  uVar1 = 0;
  local_4 = 0.0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    do {
      fVar2 = (float10)FUN_005cd140(param_2);
      uVar1 = uVar1 + 1;
      local_4 = (float)((float10)_DAT_00650c60 * fVar2 + (float10)local_4);
    } while (uVar1 < *(uint *)(param_1 + 0xa0));
    if (_DAT_0064b240 < local_4) {
      return (float10)_DAT_0064b240;
    }
  }
  return (float10)local_4;
}

