
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427000(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 *local_1c;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ce4b;
  local_c = ExceptionList;
  if (*(double *)(param_1 + 0x22) < _DAT_0064a668) {
    local_1c = (undefined4 *)0x38;
    uStack_20 = 0x427037;
    ExceptionList = &local_c;
    iVar2 = FUN_00631d33();
    local_4 = 0;
    if (iVar2 == 0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      local_10 = (undefined1 *)&local_1c;
      local_1c = puVar1;
      uStack_20 = 0x42705a;
      param_1 = (undefined4 *)FUN_004270a0();
    }
    local_1c = &param_1;
    local_4 = 0xffffffff;
    FUN_004896a0(&uStack_20);
    FUN_0044afd0(&local_10);
  }
  ExceptionList = local_c;
  return;
}

