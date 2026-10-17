
void __fastcall FUN_00572f60(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_54;
  uint local_50;
  char local_4c [32];
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064efdc;
  param_1[0x40] = &PTR_LAB_0064ef90;
  local_4 = 0;
  iVar1 = FUN_005eec70();
  local_54 = param_1[0x59];
  _strncpy(local_4c,*(char **)(iVar1 + 0xc),0x1f);
  _strncpy(local_2c,(char *)(param_1 + 0x5e),0x1f);
  local_50 = (uint)(*(int *)(DAT_006cdbcc + 0x514) < 2);
  FUN_005e48c0(param_1[0x59],*(undefined4 *)(param_1[0x49] + 0x3c),0x48,&local_54);
  local_4 = 0xffffffff;
  FUN_005a3ee0();
  ExceptionList = local_c;
  return;
}

