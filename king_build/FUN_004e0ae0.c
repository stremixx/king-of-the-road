
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e0ae0(int param_1)

{
  float10 fVar1;
  
  FUN_005ddcb0();
  fVar1 = (float10)thunk_FUN_00603580();
  _DAT_00695c68 = (double)((float10)*(double *)(param_1 + 0xb98) - fVar1 * (float10)_DAT_0064a648);
  FUN_004eaac0();
  FUN_0057c170();
  FUN_0053f490();
  FUN_00556c20();
  _DAT_00695bd8 = 0;
  _DAT_00695bdc = 0;
  _DAT_00695be0 = 0;
  _DAT_00695be4 = 0;
  _DAT_00695be8 = 0;
  _DAT_00695bec = 0;
  return;
}

