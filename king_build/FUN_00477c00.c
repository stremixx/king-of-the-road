
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00477c00(int *param_1)

{
  int *piVar1;
  undefined1 *local_14;
  undefined4 uStack_10;
  int *local_c;
  int local_8 [2];
  
  local_c = param_1;
  local_14 = (undefined1 *)&uStack_10;
  FUN_004896a0();
  FUN_004af790(&local_14);
  FUN_0047a0c0(local_8);
  if (local_8[0] == DAT_0068a8f0) {
    _DAT_0068c454 = DAT_0068a8f0;
    *param_1 = DAT_0068a8f0;
    return param_1;
  }
  local_c = (int *)local_8[0];
  uStack_10 = 0x477c5a;
  piVar1 = (int *)FUN_004042b0();
  _DAT_0068c454 = *piVar1;
  *param_1 = _DAT_0068c454;
  return param_1;
}

