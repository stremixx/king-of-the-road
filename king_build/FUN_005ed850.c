
void __fastcall FUN_005ed850(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_006517d4;
  if (param_1[0xc] != 0) {
    GlobalUnlock((HGLOBAL)param_1[0xd]);
    GlobalFree((HGLOBAL)param_1[0xd]);
    param_1[0xc] = 0;
  }
  FUN_005ed420();
  return;
}

