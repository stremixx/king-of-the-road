
void __fastcall FUN_0055dcb0(int param_1)

{
  thunk_FUN_00547830();
  if (*(int **)(param_1 + 0x5578) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0055dcc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x5578) + 0x68))();
    return;
  }
  return;
}

