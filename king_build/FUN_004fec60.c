
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004fec60(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x1c28) == 1) {
    return (float10)_DAT_0064b254;
  }
  fVar1 = (float10)FUN_004eae60(*(undefined4 *)(param_1 + 0x29dc));
  fVar1 = (float10)FUN_00506be0(param_2,*(undefined4 *)(param_1 + 0x1c8c),(float)fVar1);
  if (1 < *(int *)(param_1 + 0x1c28)) {
    fVar1 = ((float10)_DAT_0064b240 - (float10)((*(int *)(param_1 + 0x1c28) + -2) / 1000)) * fVar1;
  }
  return fVar1;
}

