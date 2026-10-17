
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005686a0(void)

{
  float10 fVar1;
  
  *(undefined4 *)(DAT_006cdbcc + 0x508) = 1;
  *(undefined4 *)(DAT_006cdbcc + 0x504) = 0;
  *(undefined4 *)(DAT_006cdbcc + 0x510) = 0;
  fVar1 = (float10)thunk_FUN_00603580();
  _DAT_006f2370 = (double)fVar1;
  return;
}

