
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401c50(void)

{
  undefined1 *extraout_ECX;
  float10 fVar1;
  undefined1 *local_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  local_c = (undefined1 *)&local_8;
  puStack_10 = (undefined1 *)&local_8;
  local_14 = (undefined1 *)&puStack_10;
  local_8 = DAT_0068c080;
  FUN_004896a0();
  local_14 = extraout_ECX;
  FUN_004af790(&local_14);
  local_c = (undefined1 *)FUN_00453b50(local_4);
  local_c = *(undefined1 **)local_c;
  if (local_c != (undefined1 *)DAT_0068a8fc) {
    puStack_10 = local_4;
    local_14 = (undefined1 *)0x401ca6;
    FUN_00602180();
    local_c = (undefined1 *)&local_8;
    puStack_10 = (undefined1 *)&local_8;
    local_14 = (undefined1 *)&puStack_10;
    FUN_004af790();
    local_14 = local_4;
    FUN_0044afd0();
    local_c = (undefined1 *)0x401ccb;
    fVar1 = (float10)FUN_00401000();
    if (fVar1 <= (float10)*(double *)(local_8 + 0x10)) {
      local_c = (undefined1 *)0x401cde;
      fVar1 = (float10)FUN_00401000();
      *(double *)(local_8 + 0x10) =
           (double)(fVar1 - (float10)*(double *)(local_8 + 0x18) * (float10)_DAT_0064a590);
    }
  }
  DAT_0068c09c = 200;
  _DAT_0068c088 = 0;
  _DAT_0068c08c = 0;
  DAT_0068c090 = 0;
  DAT_0066b60a = 1;
  DAT_0068c098 = 0;
  local_c = (undefined1 *)0x401d26;
  FUN_00438310();
  return;
}

