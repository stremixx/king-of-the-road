
void __fastcall thunk_FUN_005a5a70(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00647cd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650538;
  uStack_4 = 0;
  FUN_005ba440(0,0,0);
  iVar1 = param_1[0x26];
  if (iVar1 != 0) {
    FUN_005b6140();
    FUN_00631d5c(iVar1);
  }
  uStack_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}

