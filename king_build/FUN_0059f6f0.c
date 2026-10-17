
undefined4 * __fastcall FUN_0059f6f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(0x186,s_VehGlowManager_0067d358);
  local_4 = 0;
  iVar1 = 0x32;
  do {
    FUN_0059ee80();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_1 = &PTR_FUN_00650178;
  param_1[0x648] = 0;
  puVar2 = param_1 + 0x616;
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  ExceptionList = local_c;
  return param_1;
}

