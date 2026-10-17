
void __fastcall thunk_FUN_00603550(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00651dd8;
  param_1[2] = param_1[2] | 1;
  FUN_00603540();
  CloseHandle((HANDLE)param_1[3]);
  return;
}

