
void __fastcall FUN_00578d20(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f330;
  uVar3 = 0;
  local_4 = 0;
  if (param_1[0x6c] != 0) {
    piVar2 = param_1 + 8;
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_00578af0();
        FUN_00631d5c(iVar1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < (uint)param_1[0x6c]);
  }
  param_1[0x6c] = 0;
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = local_c;
  return;
}

