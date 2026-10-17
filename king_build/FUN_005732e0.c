
void __fastcall FUN_005732e0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  char local_4c [32];
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f0d4;
  param_1[0x40] = &PTR_LAB_0064f088;
  local_4 = 0;
  iVar2 = FUN_005eec70();
  local_58 = param_1[0x59];
  uVar1 = param_1[0x66];
  _strncpy(local_4c,*(char **)(iVar2 + 0xc),0x1f);
  local_54 = uVar1;
  _strncpy(local_2c,(char *)(param_1 + 0x5e),0x1f);
  local_50 = (uint)(*(int *)(DAT_006cdbcc + 0x514) < 2);
  FUN_005e48c0(param_1[0x59],*(undefined4 *)(param_1[0x49] + 0x3c),0x4c,&local_58);
  local_4 = 0xffffffff;
  FUN_005a3ee0();
  ExceptionList = local_c;
  return;
}

