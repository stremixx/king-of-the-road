
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00554c10(int param_1)

{
  float10 fVar1;
  undefined1 local_c4 [196];
  
  if (*(int *)(param_1 + 0x5460) == 0) {
    return (float10)_DAT_0064b254;
  }
  FUN_00546140(local_c4);
  fVar1 = (float10)FUN_00541c60(local_c4);
  return fVar1;
}

