
void __fastcall FUN_0055dc90(int param_1)

{
  thunk_FUN_00547810();
  if (*(int **)(param_1 + 0x5578) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0055dca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x5578) + 100))();
    return;
  }
  return;
}

