
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ddc80(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)thunk_FUN_00603580();
  *(double *)(param_1 + 600) =
       (double)((fVar1 * (float10)_DAT_0064a648 - (float10)*(double *)(param_1 + 0x260)) +
               (float10)*(double *)(param_1 + 600));
  return;
}

